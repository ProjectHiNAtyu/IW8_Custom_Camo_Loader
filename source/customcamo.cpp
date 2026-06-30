#include <std_include.hpp>
#include <cmath>
#include "game/game.hpp"
#include "game/xassets.hpp"

#include "loader/component_loader.hpp"

#include "utilities/io.hpp"
#include <utilities/imgutils.cpp>
#include "console.hpp"
#include "cmds.hpp"
#include "logger.hpp"
#include "scheduler.hpp"

namespace customcamo
{
	std::vector<utiltities::imgutils::image> _loadedImages;

	struct AnimatedCamo
	{
		Camo* camo;
		float scrollX[3];
		float scrollY[3];
	};

	std::vector<AnimatedCamo> _animatedCamos;
	std::chrono::high_resolution_clock::time_point _animStartTime;

	bool LoadCustomTexture(GfxImage* image, const std::string& camoDir, const std::string& filename, GfxPixelFormat format)
	{
		std::string filePath = utilities::io::find_file(camoDir + "\\" + filename, { ".dds", ".png" });
		if (filePath.empty())
			return false;

		bool isDds = utilities::io::file_extension(filePath) == ".dds";
		if (isDds)
			format = GfxPixelFormat::GFX_PF_BC1;
		else
			format = GfxPixelFormat::GFX_PF_R8G8B8A8;

		if (isDds)
			_loadedImages.push_back(utiltities::imgutils::image::from_ddsfile(filePath));
		else
			_loadedImages.push_back(utiltities::imgutils::image::from_file(filePath));
		auto& raw_image = _loadedImages.back();

		if (!raw_image.get_buffer() || raw_image.get_width() == 0 || raw_image.get_height() == 0)
		{
			_loadedImages.pop_back();
			return false;
		}

		Image_SetupParams params{};
		params.width = raw_image.get_width();
		params.height = raw_image.get_height();
		params.depth = image->depth;
		params.numElements = image->numElements;
		params.maxLevelCount = 1;
		params.flags = GfxImageFlags::IMG_FLAG_NONE;
		params.format = format;
		params.customAllocFunc = nullptr;
		params.customAllocUserData = nullptr;
		params.customLayout = nullptr;
		params.textureLayoutOverride = D3D12_TEXTURE_LAYOUT::D3D12_TEXTURE_LAYOUT_UNKNOWN;

		const char* savedName = image->name;
		TextureSemantic savedSemantic = image->semantic;
		unsigned __int16 savedDepth = image->depth;
		unsigned __int8 savedNumElements = image->numElements;

		memset(image, 0, sizeof(GfxImage));

		image->name = savedName;
		image->semantic = savedSemantic;
		image->width = params.width;
		image->height = params.height;
		image->depth = savedDepth;
		image->numElements = savedNumElements;
		image->levelCount = 1;
		image->format = format;
		image->category = GfxImageCategory::IMG_CATEGORY_LOAD_FROM_FILE;
		image->flags = GfxImageFlags::IMG_FLAG_NONE;

		Image_SetupData setupData{};
		setupData.data[0][0] = reinterpret_cast<const char*>(raw_image.get_buffer());

		auto Image_SetupInternal = reinterpret_cast<void (*)(GfxImage*, Image_SetupParams*, const Image_SetupData*)>(0x4FDC5D0_b);
		Image_SetupInternal(image, &params, &setupData);

		return true;
	}

	void TryInjectCustomCamo(const std::string& camoDir, const std::string& camoname, const std::string& uicamoname)
	{
		logger::write(logger::LOG_TYPE_TEST, "[CamoLoad] %s", camoname.c_str());

		Camo* camo = game::DB_FindXAssetHeader_f(ASSET_TYPE_CAMO, camoname.c_str(), 0).camo;
		if (!camo) return;

		try
		{
			GfxImage* uiImg = game::DB_FindXAssetHeader_f(ASSET_TYPE_IMAGE, uicamoname.c_str(), 0).image;
			bool uiLoaded = false;
			if (uiImg)
			{
				//logger::write(logger::LOG_TYPE_TEST, "[CamoLoad]   ui '%s' original: %dx%d fmt:%d", uicamoname.c_str(), uiImg->width, uiImg->height, uiImg->format);
				uiLoaded = LoadCustomTexture(uiImg, camoDir, camoname, GfxPixelFormat::GFX_PF_R8G8B8A8_SRGB);
			}

			//logger::write(logger::LOG_TYPE_TEST, "[CamoLoad]   textureDefs: %d", camo->textureDefCount);

			int maxSlots = camo->textureDefCount < 8 ? camo->textureDefCount : 8;
			for (int i = 0; i < maxSlots; ++i)
			{
				if (!camo->textureDefs || !camo->textureDefs[i].image)
				{
					//logger::write(logger::LOG_TYPE_TEST, "[CamoLoad]   slot %d: null pointer, skipped", i);
					continue;
				}

				unsigned int texDefSemantic = static_cast<unsigned int>(camo->textureDefs[i].image->semantic);

				if (!LoadCustomTexture(camo->textureDefs[i].image, camoDir, std::to_string(i), static_cast<GfxPixelFormat>(camo->textureDefs[i].image->format)))
				{
					if (texDefSemantic == 6 && uiLoaded)
						camo->textureDefs[i].image = uiImg;
					//logger::write(logger::LOG_TYPE_TEST, "[CamoLoad]   slot %d (sem %d): fallback", i, texDefSemantic);
				}
				//else
				//{
				//	logger::write(logger::LOG_TYPE_TEST, "[CamoLoad]   slot %d (sem %d): loaded", i, texDefSemantic);
				//}
			}

			// register for per-frame animation if anim.cfg exists
			// format: one line per layer, "scrollX scrollY" (up to 3 lines)
			std::string animCfg = camoDir + "\\anim.cfg";
			if (utilities::io::file_exists(animCfg))
			{
				AnimatedCamo ac{};
				ac.camo = camo;

				std::string cfgData = utilities::io::read_file(animCfg);
				std::istringstream stream(cfgData);
				std::string line;
				int layer = 0;
				while (std::getline(stream, line) && layer < 3)
				{
					std::istringstream ls(line);
					float sx = 0.0f, sy = 0.0f;
					if (ls >> sx >> sy)
					{
						ac.scrollX[layer] = sx;
						ac.scrollY[layer] = sy;
					}
					++layer;
				}

				_animatedCamos.push_back(ac);
				logger::write(logger::LOG_TYPE_TEST, "[CamoAnim] %s - scroll: L0(%.2f,%.2f) L1(%.2f,%.2f) L2(%.2f,%.2f)",
					camoname.c_str(),
					ac.scrollX[0], ac.scrollY[0],
					ac.scrollX[1], ac.scrollY[1],
					ac.scrollX[2], ac.scrollY[2]);
			}
		}
		catch (std::exception& e) { logger::write(logger::LOG_TYPE_ERROR, "[CamoLoad] EXCEPTION: %s", e.what()); }
	}


	void update_animated_camos()
	{
		if (_animatedCamos.empty()) return;

		float elapsed = std::chrono::duration<float>(
			std::chrono::high_resolution_clock::now() - _animStartTime).count();

		for (auto& ac : _animatedCamos)
		{
			for (int layer = 0; layer < 3; ++layer)
			{
				ac.camo->uvScaleOffset[layer].v[2] = fmodf(ac.scrollX[layer] * elapsed, 1.0f);
				ac.camo->uvScaleOffset[layer].v[3] = fmodf(ac.scrollY[layer] * elapsed, 1.0f);
			}
		}
	}

	void camoreload_f()
	{
		logger::write(logger::LOG_TYPE_TEST, "[CamoReload] Reloading custom camos...");

		std::vector<utiltities::imgutils::image> oldImages;
		oldImages.swap(_loadedImages);
		_loadedImages.reserve(128);

		_animatedCamos.clear();
		_animStartTime = std::chrono::high_resolution_clock::now();

		std::string camoBaseDir = "iw8-bod\\camo";
		if (!utilities::io::directory_exists(camoBaseDir)) return;

		int loaded = 0;

		for (auto& groupDir : utilities::io::list_directories(camoBaseDir))
		{
			for (auto& camoDir : utilities::io::list_directories(groupDir))
			{
				std::string camoName = utilities::io::file_name(camoDir);
				std::string uiCamoName;
				if (camoName == "camo_mp_t9mastery_darkmatter")
					uiCamoName = "ui_camo_t9darkmatter_mp";
				else
					uiCamoName = "ui_" + camoName;

				TryInjectCustomCamo(camoDir, camoName, uiCamoName);
				loaded++;
			}
		}

		logger::write(logger::LOG_TYPE_TEST, "[CamoReload] Done - %d camos processed", loaded);
	}


	class component final : public component_interface
	{
	public:

		void post_unpack() override
		{
			static game::ClCommandInfo camoreload;
			camoreload.name = "camoreload";
			camoreload.function = camoreload_f;
			cmds::Cmd_AddClientCommand(&camoreload, cmds::INIT_DEFAULT);

			scheduler::loop(update_animated_camos, scheduler::pipeline::renderer);
		}
	};
}

REGISTER_COMPONENT(customcamo::component)