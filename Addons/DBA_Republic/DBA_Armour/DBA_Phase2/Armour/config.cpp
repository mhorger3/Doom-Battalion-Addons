class CfgPatches
{
	class DBA_Custom_Armour
	{
		author = "Mutt / Dutch";
		name = "101st Aux Mod Custom Armor";
		requiredaddons[] =
		{
			"A3_Characters_F"
		};
		requiredversion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};
class CfgWeapons
{
	class UniformItem;
	class Uniform_Base;
	class DBA_P2cloneRecruitUniform : Uniform_Base
	{
		dlc = "101st_Aux_Mod";
		scope = 2;
		displayName = "[DBA] Phase 2 Clone: Recruit";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Base\DBA_Recruit_Chest_CO.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Base\DBA_Recruit_Legs_CO.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_DBA_P2CloneRecruit_F";
			containerClass = "supply150";
			uniformType = "Neopren";
			hiddenSelections[] =
			{
				"camo",
				"camo1"
			};
			mass = 40;
		};
	};
	class DBA_P2cloneCadetUniform : DBA_P2cloneRecruitUniform
	{
		displayName = "[DBA] Phase 2 Clone: Cadet";
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Base\DBA_Cadet_Chest_CO.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Base\DBA_Cadet_Legs_CO.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_DBA_P2CloneCadet_F";
			containerClass = "supply150";
			uniformType = "Neopren";
			hiddenSelections[] =
			{
				"camo",
				"camo1"
			};
			mass = 40;
		};
	};
	class DBA_P2cloneTrooperUniform : DBA_P2cloneRecruitUniform
	{
		displayName = "[DBA] Phase 2 Clone";
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
			uniformClass = "B_DBA_P2CloneTrooper_F";
			containerClass = "supply150";
			uniformType = "Neopren";
			hiddenSelections[] =
			{
				"camo",
				"camo1"
			};
			mass = 40;
		};
	};
	class DBA_P2cloneDemoTrooperUniform : DBA_P2cloneRecruitUniform
	{
		displayName = "[DBA] Phase 2 Clone: Demolitions Expert";
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Base\DBA_Demo_Chest_CO.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Base\DBA_Demo_Legs_CO.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_DBA_P2CloneDemo_F";
			containerClass = "supply150";
			uniformType = "Neopren";
			hiddenSelections[] =
			{
				"camo",
				"camo1"
			};
			mass = 40;
		};
	};
	class DBA_P2CIUniform : DBA_P2cloneRecruitUniform
	{
		displayName = "[DBA] Phase 2 Clone: Reservist CI";
		hiddenSelectionsTextures[] =
		{
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Reserve\ResCI_Armor_upper_CO.paa",
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Base\Trooper_Armor_lower_CO.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_DBA_P2CI_F";
			containerClass = "supply150";
			uniformType = "Neopren";
			hiddenSelections[] =
			{
				"camo",
				"camo1"
			};
			mass = 40;
		};
	};
	class DBA_P2CICUniform : DBA_P2cloneRecruitUniform
	{
		displayName = "[DBA] Phase 2 Clone: Reservist CI-C";
		hiddenSelectionsTextures[] =
		{
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Reserve\ResCIC_Armor_upper_CO.paa",
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Base\Trooper_Armor_lower_CO.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_DBA_P2CIC_F";
			containerClass = "supply150";
			uniformType = "Neopren";
			hiddenSelections[] =
			{
				"camo",
				"camo1"
			};
			mass = 40;
		};
	};
	class DBA_P2CMUniform : DBA_P2cloneRecruitUniform
	{
		displayName = "[DBA] Phase 2 Clone: Reservist CM";
		hiddenSelectionsTextures[] =
		{
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Reserve\ResCM_Armor_upper_CO.paa",
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Base\Trooper_Armor_lower_CO.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_DBA_P2CM_F";
			containerClass = "supply150";
			uniformType = "Neopren";
			hiddenSelections[] =
			{
				"camo",
				"camo1"
			};
			mass = 40;
		};
	};
	class DBA_P2CMCUniform : DBA_P2cloneRecruitUniform
	{
		displayName = "[DBA] Phase 2 Clone: Reservist CM-C";
		hiddenSelectionsTextures[] =
		{
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Reserve\ResCMC_Armor_upper_CO.paa",
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Base\Trooper_Armor_lower_CO.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_DBA_P2CMC_F";
			containerClass = "supply150";
			uniformType = "Neopren";
			hiddenSelections[] =
			{
				"camo",
				"camo1"
			};
			mass = 40;
		};
	};
#include "b1_platoonarmour.hpp"
#include "b2_platoonarmour.hpp"
#include "bhq_companyarmour.hpp"
#include "c1_platoonarmour.hpp"
#include "c2_platoonarmour.hpp"
#include "chq_companyarmour.hpp"
#include "hammer_flightarmour.hpp"
#include "d1_platoonarmour.hpp"
#include "custom_armour.hpp"
#include "l1_platoonarmour.hpp"
};
