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
class JLTS_Clone_P2_DC15A : B_Soldier_f
{
	class HitPoints;
};
class 101st_JLTS_Clone_P2 : JLTS_Clone_P2_DC15A {
		class HitPoints : HitPoints
		{
			class HitFace
			{
			};
			class HitNeck : HitFace
			{
			};
			class HitHead : HitNeck
			{
			};
			class HitPelvis : HitHead
			{
			};
			class HitAbdomen : HitPelvis
			{
			};
			class HitDiaphragm : HitAbdomen
			{
			};
			class HitChest : HitDiaphragm
			{
			};
			class HitBody : HitChest
			{
			};
			class HitArms : HitBody
			{
			};
			class HitHands : HitArms
			{
			};
			class HitLegs : HitHands
			{
			};
			class Incapacitated : HitLegs
			{
			};
			class HitLeftArm
			{
			};
			class HitRightArm : HitLeftArm
			{
			};
			class HitLeftLeg
			{
			};
			class HitRightLeg : HitLeftLeg
			{
			};
		};
};
class Reservist_DBA : 101st_JLTS_Clone_P2
{
	dlc = "101st_Aux_Mod";
	faction = "Republic_101st";
	displayName = "101st Reservist (JLTS)";
	uniformClass = "DBA_ReserveArmour";
	model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
	faction = "Republic_101st";
	editorSubcategory = "DBA_Reservist";
	hiddenSelections[] =
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[] =
	{
		"\101st_Aux_Mod\Addons\PlatoonArmours\Reserve\textures\Res_Armor_uppper_CO.paa",
		"\101st_Aux_Mod\Addons\PlatoonArmours\Trooper_Armor_lower_CO.paa"
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
class ReservistCI_DBA : 101st_JLTS_Clone_P2
{
	dlc = "101st_Aux_Mod";
	faction = "Republic_101st";
	displayName = "101st Reservist CI (JLTS)";
	uniformClass = "DBA_ReserveCI";
	model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
	faction = "Republic_101st";
	editorSubcategory = "DBA_Reservist";
	hiddenSelections[] =
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[] =
	{
		"\101st_Aux_Mod\Addons\PlatoonArmours\Reserve\textures\ResCI_Armor_uppper_CO.paa",
		"\101st_Aux_Mod\Addons\PlatoonArmours\Trooper_Armor_lower_CO.paa"
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
class ReserveCIC_DBA : 101st_JLTS_Clone_P2
{
	dlc = "101st_Aux_Mod";
	faction = "Republic_101st";
	displayName = "101st Reservist CI-C (JLTS)";
	uniformClass = "DBA_ReserveCIC";
	model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
	faction = "Republic_101st";
	editorSubcategory = "DBA_Reservist";
	hiddenSelections[] =
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[] =
	{
		"\101st_Aux_Mod\Addons\PlatoonArmours\Reserve\textures\ResCIC_Armor_uppper_CO.paa",
		"\101st_Aux_Mod\Addons\PlatoonArmours\Trooper_Armor_lower_CO.paa"
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

class ReservistCM_DBA : 101st_JLTS_Clone_P2
{
	dlc = "101st_Aux_Mod";
	faction = "Republic_101st";
	displayName = "101st Reservist CM (JLTS)";
	uniformClass = "DBA_ReserveCM";
	model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
	faction = "Republic_101st";
	editorSubcategory = "DBA_Reservist";
	hiddenSelections[] =
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[] =
	{
		"\101st_Aux_Mod\Addons\PlatoonArmours\Reserve\textures\ResCM_Armor_uppper_CO.paa",
		"\101st_Aux_Mod\Addons\PlatoonArmours\Trooper_Armor_lower_CO.paa"
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
class ReserveCMC_DBA : 101st_JLTS_Clone_P2
{
	dlc = "101st_Aux_Mod";
	faction = "Republic_101st";
	displayName = "101st Reservist CM-C (JLTS)";
	uniformClass = "DBA_ReserveCMC";
	model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
	faction = "Republic_101st";
	editorSubcategory = "DBA_Reservist";
	hiddenSelections[] =
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[] =
	{
		"\101st_Aux_Mod\Addons\PlatoonArmours\Reserve\textures\ResCMC_Armor_uppper_CO.paa",
		"\101st_Aux_Mod\Addons\PlatoonArmours\Trooper_Armor_lower_CO.paa"
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
