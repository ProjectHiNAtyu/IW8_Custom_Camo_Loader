# This repository was created for academic research and educational purposes.
# I do not distribute any software such as Injector that can be used directly in the game.
# If you wish to use these works, you must create your own software and use it at your own risk.

The malicious code thief and cracked client iw8-mod, which facilitates illegal downloads, reverse-engineered our team's work (DLL) without permission, stealing code and offsets.

Furthermore, they are brazenly using this stolen code and technology to illegally profit from Patron and operate an illegal community.

These facts have already been made public on my Twitter, and you can check my past posts to see how iw8-mod has stolen and copied/pasted from our team's work.

Given this appalling situation where an incompetent and low-skilled user is arrogantly wielding our technology as if it were their own, we have decided to release a portion of the stolen source code to everyone.

Please feel free to use it.

-----

- The code has been tested and confirmed to work with MW2019 versions 1.20, 1.38, 1.44, and 1.63.
- Basic client code is required to run this.
- The title is "Custom Camouflage," but it can be used to replace any image as long as the GfxImage asset name is known.
- Vanguard camouflage often has mismatched UI asset names and GfxImage names, so to cover all cases, it is recommended to dump a CSV file or similar to find out the names.
- To animate the camos, you need to call `update_animated_camos()` from a function that runs every frame, such as `R_EndFrame`.
- This source code registers camoreload_f(), but it's for client-side sources that have a game_console, so if you don't have a game_console, you can write it more simply.

-----

[ Contact ]
 
- HiNAtyu
- YouTube : https://www.youtube.com/@HiNAtyuRoom
- Twitter : @hinatyu ( https://x.com/hinatyu )
- Discord : hinatapoko ( https://discordapp.com/users/239453096026046464 )
