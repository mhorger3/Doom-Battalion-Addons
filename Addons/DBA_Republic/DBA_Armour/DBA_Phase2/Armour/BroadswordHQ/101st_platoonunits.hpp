class Man;
class CAManBase : Man
{
	class HitPoints
	{
		class HitHead;
		class HitBody;
		class HitHands;
		class HitLegs;
	};

	class ACE_SelfActions
	{
		class ACE_Equipment
		{
			class DB101_DeployHolomap
			{
				displayName = "Deploy Holomap";
				condition = "[_player, ""101st_Portable_Holomap""] call ACE_common_fnc_hasItem";
				statement = "_player call DB101_Holomap_fnc_deploy";
			};
		};
	};
};
class SoldierEB : CAManBase
{
	threat[] = { 1,0.1,0.1 };
};
class ACE_Flag_Black;
class B_Soldier_f;
class 101st_JLTS_Clone_P2;
class BroadswordHQ_DBA : 101st_JLTS_Clone_P2
{
	dlc = "101st_Aux_Mod";
	faction = "Republic_101st";
	displayName = "101st Broadsword HQ (JLTS)";
	uniformClass = "DBA_BroadswordHQ";
	model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
	faction = "Republic_101st";
	editorSubcategory = "DBA_Broadsword_HQ";
	hiddenSelections[] =
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[] =
	{
		"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\BroadswordHQ\HQ_Armor_upper_CO.paa",
		"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Base\Sergeant_Legs_CO.paa"
	};
	linkedItems[] =
	{
	};
	respawnLinkedItems[] =
	{
	};
	editorSubcategory = "101st_Clones";
	identityTypes[] =
	{
		"LanguageENG_F",
		"Head_NATO"
	};
	weapons[] =
	{
	};
	respawnWeapons[] =
	{
	};
	magazines[] =
	{
	};
	respawnMagazines[] =
	{
	};
	scope = 2;
	scopeCurator = 2;
};
class BroadswordHQM_DBA : 101st_JLTS_Clone_P2
{
	dlc = "101st_Aux_Mod";
	faction = "Republic_101st";
	displayName = "101st Broadsword HQ Medic (JLTS)";
	uniformClass = "DBA_BroadswordHQM";
	model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
	faction = "Republic_101st";
	editorSubcategory = "DBA_Broadsword_HQ";
	hiddenSelections[] =
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[] =
	{
		"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\BroadswordHQ\HQM_Armor_upper_CO.paa",
		"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Base\Medic_Legs_CO.paa"
	};
	linkedItems[] =
	{
	};
	respawnLinkedItems[] =
	{
	};
	editorSubcategory = "101st_Clones";
	identityTypes[] =
	{
		"LanguageENG_F",
		"Head_NATO"
	};
	weapons[] =
	{
	};
	respawnWeapons[] =
	{
	};
	magazines[] =
	{
	};
	respawnMagazines[] =
	{
	};
	scope = 2;
	scopeCurator = 2;
};
class BroadswordHQRTO_DBA : 101st_JLTS_Clone_P2
{
	dlc = "101st_Aux_Mod";
	faction = "Republic_101st";
	displayName = "101st Broadsword HQ RTO (JLTS)";
	uniformClass = "DBA_BroadswordHQRTO";
	model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
	faction = "Republic_101st";
	editorSubcategory = "DBA_Broadsword_HQ";
	hiddenSelections[] =
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[] =
	{
		"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\BroadswordHQ\HQR_Armor_upper_CO.paa",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Base\RTO_Legs_CO.paa"
	};
	linkedItems[] =
	{
	};
	respawnLinkedItems[] =
	{
	};
	editorSubcategory = "101st_Clones";
	identityTypes[] =
	{
		"LanguageENG_F",
		"Head_NATO"
	};
	weapons[] =
	{
	};
	respawnWeapons[] =
	{
	};
	magazines[] =
	{
	};
	respawnMagazines[] =
	{
	};
	scope = 2;
	scopeCurator = 2;
};
