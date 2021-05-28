#include "101st_Aux_Mod\addons\DBA_Common\script_macros_common.hpp"

class CfgWeapons
{
	class JLTS_drugs_stimulant_adrenal;
	class JLTS_drugs_stimulant_battle;

	class DBA_Stim_Adrenal: JLTS_drugs_stimulant_adrenal
	{
		scope = SCOPE_DEVELOPER;
		displayName = "101st Adrenal Stim";
		displayNameShort = "101st Adrenal Stim";
	};

	class DBA_Stim_Battle: JLTS_drugs_stimulant_battle
	{
		scope = SCOPE_DEVELOPER;
		displayName = "101st Battle Stim";
		displayNameShort = "101st Battle Stim";
	};
};
