enum XAssetType
{
	ASSET_TYPE_PHYSICSLIBRARY = 0x0,
	ASSET_TYPE_PHYSICSSFXEVENTASSET = 0x1,
	ASSET_TYPE_PHYSICSVFXEVENTASSET = 0x2,
	ASSET_TYPE_PHYSICSASSET = 0x3,
	ASSET_TYPE_PHYSICSFXPIPELINE = 0x4,
	ASSET_TYPE_PHYSICSFXSHAPE = 0x5,
	ASSET_TYPE_PHYSICSDEBUGDATA = 0x6,
	ASSET_TYPE_XANIM = 0x7,
	ASSET_TYPE_XMODELSURFS = 0x8,
	ASSET_TYPE_XMODEL = 0x9,
	ASSET_TYPE_MAYHEM = 0xA,
	ASSET_TYPE_MATERIAL = 0xB,
	ASSET_TYPE_COMPUTESHADER = 0xC,
	ASSET_TYPE_LIBSHADER = 0xD,
	ASSET_TYPE_VERTEXSHADER = 0xE,
	ASSET_TYPE_HULLSHADER = 0xF,
	ASSET_TYPE_DOMAINSHADER = 0x10,
	ASSET_TYPE_PIXELSHADER = 0x11,
	ASSET_TYPE_TECHSET = 0x12,
	ASSET_TYPE_IMAGE = 0x13,
	ASSET_TYPE_SOUNDGLOBALS = 0x14,
	ASSET_TYPE_SOUNDBANK = 0x15,
	ASSET_TYPE_SOUNDBANKTRANSIENT = 0x16,
	ASSET_TYPE_COL_MAP = 0x17,
	ASSET_TYPE_COM_MAP = 0x18,
	ASSET_TYPE_GLASS_MAP = 0x19,
	ASSET_TYPE_AIPATHS = 0x1A,
	ASSET_TYPE_NAVMESH = 0x1B,
	ASSET_TYPE_TACGRAPH = 0x1C,
	ASSET_TYPE_MAP_ENTS = 0x1D,
	ASSET_TYPE_FX_MAP = 0x1E,
	ASSET_TYPE_GFX_MAP = 0x1F,
	ASSET_TYPE_GFX_MAP_TRZONE = 0x20,
	ASSET_TYPE_IESPROFILE = 0x21,
	ASSET_TYPE_LIGHTDEF = 0x22,
	ASSET_TYPE_GRADINGCLUT = 0x23,
	ASSET_TYPE_UI_MAP = 0x24,
	ASSET_TYPE_FOGSPLINE = 0x25,
	ASSET_TYPE_ANIMCLASS = 0x26,
	ASSET_TYPE_PLAYERANIM = 0x27,
	ASSET_TYPE_GESTURE = 0x28,
	ASSET_TYPE_LOCALIZE = 0x29,
	ASSET_TYPE_ATTACHMENT = 0x2A,
	ASSET_TYPE_WEAPON = 0x2B,
	ASSET_TYPE_VFX = 0x2C,
	ASSET_TYPE_IMPACTFX = 0x2D,
	ASSET_TYPE_SURFACEFX = 0x2E,
	ASSET_TYPE_AITYPE = 0x2F,
	ASSET_TYPE_MPTYPE = 0x30,
	ASSET_TYPE_CHARACTER = 0x31,
	ASSET_TYPE_XMODELALIAS = 0x32,
	ASSET_TYPE_RAWFILE = 0x33,
	ASSET_TYPE_SCRIPTFILE = 0x34,
	ASSET_TYPE_SCRIPTDEBUGDATA = 0x35,
	ASSET_TYPE_STRINGTABLE = 0x36,
	ASSET_TYPE_LEADERBOARDDEF = 0x37,
	ASSET_TYPE_VIRTUALLEADERBOARDDEF = 0x38,
	ASSET_TYPE_DDL = 0x39,
	ASSET_TYPE_TRACER = 0x3A,
	ASSET_TYPE_VEHICLE = 0x3B,
	ASSET_TYPE_ADDON_MAP_ENTS = 0x3C,
	ASSET_TYPE_NETCONSTSTRINGS = 0x3D,
	ASSET_TYPE_LUAFILE = 0x3E,
	ASSET_TYPE_SCRIPTABLE = 0x3F,
	ASSET_TYPE_EQUIPSNDTABLE = 0x40,
	ASSET_TYPE_VECTORFIELD = 0x41,
	ASSET_TYPE_PARTICLESIMANIMATION = 0x42,
	ASSET_TYPE_STREAMINGINFO = 0x43,
	ASSET_TYPE_LASER = 0x44,
	ASSET_TYPE_TTF = 0x45,
	ASSET_TYPE_SUIT = 0x46,
	ASSET_TYPE_SUITANIMPACKAGE = 0x47,
	ASSET_TYPE_CAMERA = 0x48,
	ASSET_TYPE_HUDOUTLINE = 0x49,
	ASSET_TYPE_SPACESHIPTARGET = 0x4A,
	ASSET_TYPE_RUMBLE = 0x4B,
	ASSET_TYPE_RUMBLEGRAPH = 0x4C,
	ASSET_TYPE_ANIMPKG = 0x4D,
	ASSET_TYPE_SFXPKG = 0x4E,
	ASSET_TYPE_VFXPKG = 0x4F,
	ASSET_TYPE_FOOTSTEPVFX = 0x50,
	ASSET_TYPE_BEHAVIORTREE = 0x51,
	ASSET_TYPE_AIANIMSET = 0x52,
	ASSET_TYPE_AIASM = 0x53,
	ASSET_TYPE_PROCEDURALBONES = 0x54,
	ASSET_TYPE_DYNAMICBONES = 0x55,
	ASSET_TYPE_RETICLE = 0x56,
	ASSET_TYPE_XANIMCURVE = 0x57,
	ASSET_TYPE_COVERSELECTOR = 0x58,
	ASSET_TYPE_ENEMYSELECTOR = 0x59,
	ASSET_TYPE_CLIENTCHARACTER = 0x5A,
	ASSET_TYPE_CLOTHASSET = 0x5B,
	ASSET_TYPE_CINEMATICMOTION = 0x5C,
	ASSET_TYPE_ACCESSORY = 0x5D,
	ASSET_TYPE_LOCDMGTABLE = 0x5E,
	ASSET_TYPE_BULLETPENETRATION = 0x5F,
	ASSET_TYPE_SCRIPTBUNDLE = 0x60,
	ASSET_TYPE_BLENDSPACE2D = 0x61,
	ASSET_TYPE_XCAM = 0x62,
	ASSET_TYPE_CAMO = 0x63,
	ASSET_TYPE_XCOMPOSITEMODEL = 0x64,
	ASSET_TYPE_XMODELDETAILCOLLISION = 0x65,
	ASSET_TYPE_STREAMKEY = 0x66,
	ASSET_TYPE_STREAMTREEOVERRIDE = 0x67,
	ASSET_TYPE_KEYVALUEPAIRS = 0x68,
	ASSET_TYPE_STTERRAIN = 0x69,
	ASSET_TYPE_NATIVESCRIPTPATCH = 0x6A,
	ASSET_TYPE_COLLISIONTILE = 0x6B,
	ASSET_TYPE_EXECUTION = 0x6C,
	ASSET_TYPE_CARRYOBJECT = 0x6D,
	ASSET_TYPE_SOUNDBANKLIST = 0x6E,
	ASSET_TYPE_DECALVOLUMEMATERIAL = 0x6F,
	ASSET_TYPE_DECALVOLUMEMASK = 0x70,
	ASSET_TYPE_DYNENTITYLIST = 0x71,
	ASSET_TYPE_FX_MAP_TRZONE = 0x72,
	ASSET_TYPE_DLOGSCHEMA = 0x73,
	ASSET_TYPE_EDGELIST = 0x74,
	ASSET_TYPE_MAXCOUNT = 0x75,
};


struct vec4_t
{
	float v[4];
};
typedef int scr_string_t;



struct Packed128
{
	unsigned __int64 p0;
	unsigned __int64 p1;
};

struct GfxDrawSurfFields
{
	unsigned __int64 indirectArgsOffset : 10;
	unsigned __int64 gpBatchIndex : 16;
	unsigned __int64 objectId : 24;
	unsigned __int64 hasGfxEntIndex : 1;
	unsigned __int64 lightmapIndex : 9;
	unsigned __int64 shadowcaster : 1;
	unsigned __int64 materialSortedIndex : 16;
	unsigned __int64 tessellation : 3;
	unsigned __int64 prepass : 2;
	unsigned __int64 viewModelRender : 1;
	unsigned __int64 lowResShading : 1;
	unsigned __int64 surfType : 4;
	unsigned __int64 primarySortKey : 6;
};

union GfxDrawSurf
{
	GfxDrawSurfFields fields;
	Packed128 packed;
};

enum GfxTextureId : __int32
{
	NULLID = 0x0,
};

enum GfxPixelFormat : __int32
{
	GFX_PF_INVALID = 0x0,
	GFX_PF_R8 = 0x1,
	GFX_PF_A8 = 0x2,
	GFX_PF_L8 = 0x3,
	GFX_PF_R8G8 = 0x4,
	GFX_PF_L8A8 = 0x5,
	GFX_PF_R8G8B8A8 = 0x6,
	GFX_PF_R8G8B8A8_SRGB = 0x7,
	GFX_PF_R8_SNORM = 0x8,
	GFX_PF_R8G8_SNORM = 0x9,
	GFX_PF_R16 = 0xA,
	GFX_PF_R16G16 = 0xB,
	GFX_PF_R16G16B16A16 = 0xC,
	GFX_PF_R16_SNORM = 0xD,
	GFX_PF_R16F = 0xE,
	GFX_PF_R16G16F = 0xF,
	GFX_PF_R16G16B16A16F = 0x10,
	GFX_PF_R32F = 0x11,
	GFX_PF_R32G32F = 0x12,
	GFX_PF_R32G32B32A32F = 0x13,
	GFX_PF_D16 = 0x14,
	GFX_PF_D32F = 0x15,
	GFX_PF_D32F_S8 = 0x16,
	GFX_PF_R8_UINT = 0x17,
	GFX_PF_R16_UINT = 0x18,
	GFX_PF_R32_UINT = 0x19,
	GFX_PF_R32G32_UINT = 0x1A,
	GFX_PF_R32G32B32A32_UINT = 0x1B,
	GFX_PF_R10G10B10A2_UINT = 0x1C,
	GFX_PF_R5G6B5 = 0x1D,
	GFX_PF_R10G10B10A2 = 0x1E,
	GFX_PF_R9G9B9E5_SHAREDEXP = 0x1F,
	GFX_PF_R11G11B10F = 0x20,
	GFX_PF_BC1 = 0x21,
	GFX_PF_BC1_SRGB = 0x22,
	GFX_PF_BC2 = 0x23,
	GFX_PF_BC2_SRGB = 0x24,
	GFX_PF_BC3 = 0x25,
	GFX_PF_BC3_SRGB = 0x26,
	GFX_PF_BC4 = 0x27,
	GFX_PF_BC5 = 0x28,
	GFX_PF_BC5S = 0x29,
	GFX_PF_BC6H = 0x2A,
	GFX_PF_BC6HS = 0x2B,
	GFX_PF_BC7 = 0x2C,
	GFX_PF_BC7_SRGB = 0x2D,
	GFX_PF_R8G8B8A8_SNORM = 0x2E,
	GFX_PF_R1 = 0x2F,
	GFX_PF_R4G4 = 0x30,
	GFX_PF_R10G10B10A2_SNORM = 0x31,
	GFX_PF_COUNT = 0x32,
};

enum GfxImageFlags
{
	IMG_FLAG_NONE = 0x0,
	IMG_DISK_FLAG_NOPICMIP = 0x1,
	IMG_DISK_FLAG_NOMIPMAPS = 0x2,
	IMG_DISK_FLAG_UNUSED = 0x4,
	IMG_DISK_FLAG_NORMAL_OCCLUSON_GLOSS = 0x8,
	IMG_DISK_FLAG_CLAMP_U = 0x10,
	IMG_DISK_FLAG_CLAMP_V = 0x20,
	IMG_DISK_FLAG_STREAMED = 0x40,
	IMG_DISK_FLAG_USE_OODLE_COMPRESSION = 0x80,
	IMG_DISK_FLAG_GAMMA_SRGB = 0x100,
	IMG_DISK_FLAG_PACKED_ATLAS = 0x200,
	IMG_CREATE_FLAG_UNTILED = 0x400,
	IMG_CREATE_FLAG_CPU_READ = 0x800,
	IMG_CREATE_FLAG_CPU_WRITE = 0x1000,
	IMG_DISK_FLAG_AUTOMETALNESS = 0x2000,
	IMG_DISK_FLAG_AUTODISPLACEMENT = 0x4000,
	IMG_DISK_FLAG_MAPTYPE_2D = 0x0,
	IMG_DISK_FLAG_MAPTYPE_CUBE = 0x8000,
	IMG_DISK_FLAG_MAPTYPE_3D = 0x10000,
	IMG_DISK_FLAG_MAPTYPE_1D = 0x18000,
	IMG_DISK_FLAG_MAPTYPE_ARRAY = 0x20000,
	IMG_DISK_FLAG_MAPTYPE_CUBE_ARRAY = 0x28000,
	IMG_DISK_FLAG_INVERT_ALPHA = 0x40000,
	IMG_DISK_FLAG_PREMUL_ALPHA = 0x80000,
	IMG_DISK_FLAG_MIPGEN_ORIGINAL = 0x0,
	IMG_DISK_FLAG_MIPGEN_LANCZOS3 = 0x100000,
	IMG_DISK_FLAG_MIPGEN_CATMULL_ROM = 0x200000,
	IMG_DISK_FLAG_MIPGEN_CUBIC_BSPLINE = 0x300000,
	IMG_DISK_FLAG_MIPGEN_BOX = 0x400000,
	IMG_DISK_FLAG_MIPGEN_COVERAGE_PRESERVING = 0x500000,
	IMG_CREATE_FLAG_RW_VIEW = 0x800000,
	IMG_CREATE_FLAG_DYNAMIC = 0x1000000,
	IMG_DISK_FLAG_PREMUL_KEEP_ALPHA = 0x2000000,
	IMG_DISK_FLAG_RTT = 0x4000000,
	IMG_DISK_FLAG_EXTRACT_ALPHA = 0x8000000,
	IMG_DISK_FLAG_OCTAHEDRON = 0x10000000,
	IMG_CREATE_FLAG_STAGING = 0x20000000,
	IMG_CREATE_FLAG_VOLUMETRIC_LAYOUT_OVERRIDE = 0x40000000,
	IMG_CREATE_FLAG_TYPELESS = 0x80000000,
};

union GfxImageSemanticSpecific
{
	float atlasFps;
	unsigned int albedoMapScaleBias;
	unsigned int normalMapScaleBias;
	unsigned int maxMipMap;
};

struct GfxImageAtlasSize
{
	unsigned __int8 rowCount;
	unsigned __int8 colCount;
};

union GfxImageAtlasInfo
{
	GfxImageAtlasSize atlasSize;
	unsigned __int16 packedAtlasDataSize;
};

enum TextureSemantic : __int8
{
	TS_2D = 0x0,
	TS_FUNCTION = 0x1,
	TS_COLOR_MAP = 0x2,
	TS_GRAY_MAP = 0x3,
	TS_SIGNED_VELOCITY_MAP = 0x4,
	TS_NORMAL_MAP = 0x5,
	TS_METALNESS_MAP = 0x6,
	TS_NORMAL_OCCLUSION_GLOSS_MAP = 0x7,
	TS_SIGNED_DISTANCE_FIELD = 0x8,
	TS_CARD_IMPOSTER_NORMAL = 0x9,
	TS_COUNT = 0xA,
};

enum GfxImageCategory : __int8
{
	IMG_CATEGORY_UNKNOWN = 0x0,
	IMG_CATEGORY_AUTO_GENERATED = 0x1,
	IMG_CATEGORY_LIGHTMAP = 0x2,
	IMG_CATEGORY_LOAD_FROM_FILE = 0x3,
	IMG_CATEGORY_RAW = 0x4,
	IMG_CATEGORY_FIRST_UNMANAGED = 0x5,
	IMG_CATEGORY_RENDERTARGET = 0x5,
	IMG_CATEGORY_TEMP = 0x6,
};

struct XPakEntryInfo
{
	unsigned __int64 key;
	__int64 offset;
	unsigned __int64 size;
	unsigned __int64 xpakIndex : 8;
	unsigned __int64 compressed : 1;
	unsigned __int64 valid : 1;
	unsigned __int64 adjacentLeftType : 3;
	unsigned __int64 adjacentRightType : 3;
	unsigned __int64 adjacentLeft : 19;
	unsigned __int64 adjacentRight : 19;
	unsigned __int64 padding : 10;
};

enum GfxImageStreamLevelCountAndSize : __int32
{
};

struct GfxImageStreamData
{
	XPakEntryInfo xpakEntry;
	GfxImageStreamLevelCountAndSize levelCountAndSize;
	unsigned __int16 width;
	unsigned __int16 height;
};

struct streamer_handle_t
{
	unsigned __int64 data;
};

struct GfxImageFallback
{
	unsigned __int8* pixels;
	unsigned int size;
	unsigned __int16 width;
	unsigned __int16 height;
};

union GfxImagePixels
{
	streamer_handle_t streamedDataHandle;
	unsigned __int8* residentData;
};


struct GfxImage
{
	const char* name;                           // 0x00 (size: 8)
	unsigned __int8* packedAtlasData;           // 0x08 (size: 8)
	GfxTextureId textureId;                     // 0x10 (size: 4)
	GfxPixelFormat format;                      // 0x14 (size: 4)
	GfxImageFlags flags;                        // 0x18 (size: 4)
	unsigned int totalSize;                     // 0x1C (size: 4)
	GfxImageSemanticSpecific semanticSpecific;  // 0x20 (size: 4)
	unsigned __int16 width;                     // 0x24 (size: 2)
	unsigned __int16 height;                    // 0x26 (size: 2)
	unsigned __int16 depth;                     // 0x28 (size: 2)
	unsigned __int16 numElements;               // 0x2A (size: 2)
	GfxImageAtlasInfo atlasInfo;                // 0x2C (size: 2)
	TextureSemantic semantic;                   // 0x2E (size: 1)
	GfxImageCategory category;                  // 0x2F (size: 1)
	unsigned __int8 levelCount;                 // 0x30 (size: 1)
	unsigned __int8 streamedPartCount;          // 0x31 (size: 1)
	unsigned __int8 decalAtlasIndex;            // 0x32 (size: 1)
	char freqDomainMetricBias;                  // 0x33 (size: 1)
	GfxImageStreamData streams[4];              // 0x34 (size: 40)
	GfxImageFallback* fallback;                 // 0x5C (size: 8)
	GfxImagePixels pixels;                      // 0x64 (size: 8)
};


enum XG_RESOURCE_DIMENSION
{
	XG_RESOURCE_DIMENSION_UNKNOWN = 0x0,
	XG_RESOURCE_DIMENSION_BUFFER = 0x1,
	XG_RESOURCE_DIMENSION_TEXTURE1D = 0x2,
	XG_RESOURCE_DIMENSION_TEXTURE2D = 0x3,
	XG_RESOURCE_DIMENSION_TEXTURE3D = 0x4,
};

enum XG_PLANE_USAGE
{
	XG_PLANE_USAGE_UNUSED = 0x0,
	XG_PLANE_USAGE_DEFAULT = 0x1,
	XG_PLANE_USAGE_COLOR_MASK = 0x2,
	XG_PLANE_USAGE_FRAGMENT_MASK = 0x3,
	XG_PLANE_USAGE_HTILE = 0x4,
	XG_PLANE_USAGE_LUMA = 0x5,
	XG_PLANE_USAGE_CHROMA = 0x6,
	XG_PLANE_USAGE_DEPTH = 0x7,
	XG_PLANE_USAGE_STENCIL = 0x8,
	XG_PLANE_USAGE_DELTA_COLOR_COMPRESSION = 0x9,
};

enum XG_TILE_MODE
{
	XG_TILE_MODE_INVALID = 0xFFFFFFFF,
	XG_TILE_MODE_COMP_DEPTH_0 = 0x0,
	XG_TILE_MODE_COMP_DEPTH_1 = 0x1,
	XG_TILE_MODE_COMP_DEPTH_2 = 0x2,
	XG_TILE_MODE_COMP_DEPTH_3 = 0x3,
	XG_TILE_MODE_COMP_DEPTH_4 = 0x4,
	XG_TILE_MODE_UNC_DEPTH_5 = 0x5,
	XG_TILE_MODE_UNC_DEPTH_6 = 0x6,
	XG_TILE_MODE_UNC_DEPTH_7 = 0x7,
	XG_TILE_MODE_LINEAR = 0x8,
	XG_TILE_MODE_DISPLAY = 0x9,
	XG_TILE_MODE_2D_DISPLAY = 0xA,
	XG_TILE_MODE_TILED_DISPLAY = 0xB,
	XG_TILE_MODE_TILED_2D_DISPLAY = 0xC,
	XG_TILE_MODE_1D_THIN = 0xD,
	XG_TILE_MODE_2D_THIN = 0xE,
	XG_TILE_MODE_3D_THIN = 0xF,
	XG_TILE_MODE_TILED_1D_THIN = 0x10,
	XG_TILE_MODE_TILED_2D_THIN = 0x11,
	XG_TILE_MODE_TILED_3D_THIN = 0x12,
	XG_TILE_MODE_1D_THICK = 0x13,
	XG_TILE_MODE_2D_THICK = 0x14,
	XG_TILE_MODE_3D_THICK = 0x15,
	XG_TILE_MODE_TILED_1D_THICK = 0x16,
	XG_TILE_MODE_TILED_2D_THICK = 0x17,
	XG_TILE_MODE_TILED_3D_THICK = 0x18,
	XG_TILE_MODE_2D_XTHICK = 0x19,
	XG_TILE_MODE_3D_XTHICK = 0x1A,
	XG_TILE_MODE_RESERVED_27 = 0x1B,
	XG_TILE_MODE_RESERVED_28 = 0x1C,
	XG_TILE_MODE_RESERVED_29 = 0x1D,
	XG_TILE_MODE_RESERVED_30 = 0x1E,
	XG_TILE_MODE_LINEAR_GENERAL = 0x1F,
	XG_TILE_MODE_TILED_2D_DEPTH = 0x7,
};

struct XG_MIPLEVEL_LAYOUT
{
	unsigned __int64 SizeBytes;
	unsigned __int64 OffsetBytes;
	unsigned __int64 Slice2DSizeBytes;
	unsigned int PitchPixels;
	unsigned int PitchBytes;
	unsigned int AlignmentBytes;
	unsigned int PaddedWidthElements;
	unsigned int PaddedHeightElements;
	unsigned int PaddedDepthOrArraySize;
	unsigned int WidthElements;
	unsigned int HeightElements;
	unsigned int DepthOrArraySize;
	unsigned int SampleCount;
	XG_TILE_MODE TileMode;
	unsigned __int64 BankRotationAddressBitMask;
	unsigned __int64 BankRotationBytesPerSlice;
	unsigned int SliceDepthElements;
};

struct XG_PLANE_LAYOUT
{
	XG_PLANE_USAGE Usage;
	unsigned __int64 SizeBytes;
	unsigned __int64 BaseOffsetBytes;
	unsigned __int64 BaseAlignmentBytes;
	unsigned int BytesPerElement;
	XG_MIPLEVEL_LAYOUT MipLayout[15];
};

struct XG_RESOURCE_LAYOUT
{
	unsigned __int64 SizeBytes;
	unsigned __int64 BaseAlignmentBytes;
	unsigned int MipLevels;
	unsigned int Planes;
	XG_PLANE_LAYOUT Plane[4];
	XG_RESOURCE_DIMENSION Dimension;
};

enum D3D12_TEXTURE_LAYOUT
{
	D3D12_TEXTURE_LAYOUT_UNKNOWN = 0x0,
	D3D12_TEXTURE_LAYOUT_ROW_MAJOR = 0x1,
	D3D12_TEXTURE_LAYOUT_64KB_UNDEFINED_SWIZZLE = 0x2,
	D3D12_TEXTURE_LAYOUT_64KB_STANDARD_SWIZZLE = 0x3,
	D3D12XBOX_TEXTURE_LAYOUT_TILE_MODE_COMP_DEPTH_0 = 0x100,
	D3D12XBOX_TEXTURE_LAYOUT_TILE_MODE_COMP_DEPTH_1 = 0x101,
	D3D12XBOX_TEXTURE_LAYOUT_TILE_MODE_COMP_DEPTH_2 = 0x102,
	D3D12XBOX_TEXTURE_LAYOUT_TILE_MODE_COMP_DEPTH_3 = 0x103,
	D3D12XBOX_TEXTURE_LAYOUT_TILE_MODE_COMP_DEPTH_4 = 0x104,
	D3D12XBOX_TEXTURE_LAYOUT_TILE_MODE_UNC_DEPTH_5 = 0x105,
	D3D12XBOX_TEXTURE_LAYOUT_TILE_MODE_UNC_DEPTH_6 = 0x106,
	D3D12XBOX_TEXTURE_LAYOUT_TILE_MODE_UNC_DEPTH_7 = 0x107,
	D3D12XBOX_TEXTURE_LAYOUT_TILE_MODE_LINEAR = 0x108,
	D3D12XBOX_TEXTURE_LAYOUT_TILE_MODE_1D_DISPLAY = 0x109,
	D3D12XBOX_TEXTURE_LAYOUT_TILE_MODE_2D_DISPLAY = 0x10A,
	D3D12XBOX_TEXTURE_LAYOUT_TILE_MODE_TILED_DISPLAY = 0x10B,
	D3D12XBOX_TEXTURE_LAYOUT_TILE_MODE_TILED_2D_DISPLAY = 0x10C,
	D3D12XBOX_TEXTURE_LAYOUT_TILE_MODE_1D_THIN = 0x10D,
	D3D12XBOX_TEXTURE_LAYOUT_TILE_MODE_2D_THIN = 0x10E,
	D3D12XBOX_TEXTURE_LAYOUT_TILE_MODE_3D_THIN = 0x10F,
	D3D12XBOX_TEXTURE_LAYOUT_TILE_MODE_TILED_1D_THIN = 0x110,
	D3D12XBOX_TEXTURE_LAYOUT_TILE_MODE_TILED_2D_THIN = 0x111,
	D3D12XBOX_TEXTURE_LAYOUT_TILE_MODE_TILED_3D_THIN = 0x112,
	D3D12XBOX_TEXTURE_LAYOUT_TILE_MODE_1D_THICK = 0x113,
	D3D12XBOX_TEXTURE_LAYOUT_TILE_MODE_2D_THICK = 0x114,
	D3D12XBOX_TEXTURE_LAYOUT_TILE_MODE_3D_THICK = 0x115,
	D3D12XBOX_TEXTURE_LAYOUT_TILE_MODE_TILED_1D_THICK = 0x116,
	D3D12XBOX_TEXTURE_LAYOUT_TILE_MODE_TILED_2D_THICK = 0x117,
	D3D12XBOX_TEXTURE_LAYOUT_TILE_MODE_TILED_3D_THICK = 0x118,
	D3D12XBOX_TEXTURE_LAYOUT_TILE_MODE_2D_XTHICK = 0x119,
	D3D12XBOX_TEXTURE_LAYOUT_TILE_MODE_3D_XTHICK = 0x11A,
	D3D12XBOX_TEXTURE_LAYOUT_TILE_MODE_LINEAR_GENERAL = 0x11F,
	D3D12XBOX_TEXTURE_LAYOUT_TILE_MODE_MASK = 0x11F,
};

struct Image_SetupParams
{
	int width;
	int height;
	int depth;
	unsigned int numElements;
	unsigned int maxLevelCount;
	GfxImageFlags flags;
	GfxPixelFormat format;
	void* (__fastcall* customAllocFunc)(unsigned __int64, unsigned __int64, void*);
	void* customAllocUserData;
	const XG_RESOURCE_LAYOUT* customLayout;
	D3D12_TEXTURE_LAYOUT textureLayoutOverride;
};

struct Image_SetupData
{
	const char* data[16][1536];
};

struct MaterialTextureDef
{
	unsigned __int8 index;
	GfxImage* image;
};

struct FxCombinedDef
{
	const void* /*ParticleSystemDef*/ particleSystemDef;
};

struct GfxCamo
{
	const char* name;                   // 0x00
	scr_string_t internalName;          // 0x08
	MaterialTextureDef* textureDefs;    // 0x10
	unsigned int textureDefCount;       // 0x18
	unsigned int colorTint[3];          // 0x1C
	unsigned int albedoMapScaleBias[3]; // 0x28
	unsigned int normalMapScaleBias[3]; // 0x34
	vec4_t uvScaleOffset[3];            // 0x40
	vec4_t uvRotate[3];                 // 0x70
	unsigned char blendMapChannels;     // 0xA0
	char __pad_A1[7];                   // 0xA1 (alignment padding)
	FxCombinedDef vehVfxTailLight;      // 0xA8
	FxCombinedDef vehVfxDoorSmoke;      // 0xB0
};

struct AnimatedCamo
{
	GfxCamo* camo;
	float scrollX[3];
	float scrollY[3];
};




