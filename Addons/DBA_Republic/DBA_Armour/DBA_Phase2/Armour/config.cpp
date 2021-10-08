class CfgPatches
{
	class DBA_P2CloneUniforms
	{
		author = "Vulgar";
		requiredAddons[] =
		{
			"A3_Characters_F"
		};
		requiredVersion = 0.1;
		units[] = {		};
		weapons[] =
		{ 
			"DBA_P2cloneRecruitUniform"
		};
	};
};
class CfgWeapons
{

	class U_I_CombatUniform;
	class UniformItem;
	class DBA_P2CloneUniformBase : U_I_CombatUniform
	{
		JLTS_isDroid = 0;
		author = "MrClock";
		scope = 0;
		displayName = "DBA P2 Clone Base Armour";
		editorPreview = "\MRC\JLTS\characters\CloneLegions\data\ui\editorPreviews\JLTS_Clone_P2_DC15A_DC.jpg";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
		model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Base\DBA_Trooper_Chest_CO.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Base\DBA_Trooper_Legs_CO.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Base\DBA_Trooper_Chest.RVMAT",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Base\DBA_Trooper_Legs.RVMAT"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_DBA_P2Clone_Base";
			containerClass = "Supply150";
			mass = 40;
		};
	};
	class DBA_P2CloneRecruitUniform : DBA_P2CloneUniformBase
	{
		author = "Vulgar";
		scope = 2;
		displayName = "DBA P2 Clone Recruit Armour";
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Base\DBA_Recruit_Chest_CO.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Base\DBA_Recruit_Legs_CO.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_DBA_P2CloneRecruit_F";
			containerClass = "Supply150";
			mass = 40;
		};
	};
	class DBA_P2CloneCadetUniform : DBA_P2CloneUniformBase
	{
		author = "Vulgar";
		scope = 2;
		displayName = "DBA P2 Clone Cadet Armour";
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Base\DBA_Cadet_Chest_CO.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Base\DBA_Cadet_Legs_CO.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_DBA_P2CloneCadet_F";
			containerClass = "Supply150";
			mass = 40;
		};
	};
	class DBA_P2CloneTrooperUniform : DBA_P2CloneUniformBase
	{
		author = "Vulgar";
		scope = 2;
		displayName = "DBA P2 Clone Trooper Armour";

		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_DBA_P2CloneTrooper_F";
			containerClass = "Supply150";
			mass = 40;
		};
	};
	#include "legacy.hpp"
	#include "CustomArmour.hpp"
};