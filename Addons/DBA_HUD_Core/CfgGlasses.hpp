#include "script_macros_common.hpp"

class CfgGlasses
{
	class G_Combat;

	class DBA_HUD_Interior: G_Combat
	{
		author = "Ragwolf";
		displayName = "DBA HUD Interior";
		model = "\A3\Weapons_f\DummyNVG";

		ACE_Overlay = "101st_Aux_Mod\addons\DBA_HUD_Core\data\Visor_1_1-1.paa";

		scope = SCOPE_DEVELOPER;
	};
};
