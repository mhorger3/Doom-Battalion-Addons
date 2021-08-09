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
class 101st_JLTS_Clone_P2 : JLTS_Clone_P2_DC15A{
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
class Claymore2HQ_DBA : 101st_JLTS_Clone_P2
{
	dlc = "101st_Aux_Mod";
	faction = "Republic_101st";
	displayName = "101st Claymore 2 HQ (JLTS)";
	uniformClass = "DBA_Claymore2HQ";
	model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
	hiddenSelections[] =
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[] =
	{
		"\101st_Aux_Mod\Addons\PlatoonArmours\Claymore2\textures\2HQ_Armor_upper_CO.paa",
		"\101st_Aux_Mod\Addons\PlatoonArmours\NCO_Armor_lower_CO.paa"
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
class Claymore2HQM_DBA : 101st_JLTS_Clone_P2
{
	dlc = "101st_Aux_Mod";
	faction = "Republic_101st";
	displayName = "101st Claymore 2 HQ Medic (JLTS)";
	uniformClass = "DBA_Claymore2HQM";
	model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
	hiddenSelections[] =
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[] =
	{
		"\101st_Aux_Mod\Addons\PlatoonArmours\Claymore2\textures\2HQM_Armor_upper_CO.paa",
		"\101st_Aux_Mod\Addons\PlatoonArmours\NCO_Armor_lower_CO.paa"
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
class Claymore2HQRTO_DBA : 101st_JLTS_Clone_P2
{
	dlc = "101st_Aux_Mod";
	faction = "Republic_101st";
	displayName = "101st Claymore 2 HQ RTO (JLTS)";
	uniformClass = "DBA_Claymore2HQRTO";
	model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
	hiddenSelections[] =
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[] =
	{
		"\101st_Aux_Mod\Addons\PlatoonArmours\Claymore2\textures\2HQR_Armor_upper_CO.paa",
		"\101st_Aux_Mod\Addons\PlatoonArmours\NCO_Armor_lower_CO.paa"
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
class Claymore21Trooper_DBA : 101st_JLTS_Clone_P2
{
	dlc = "101st_Aux_Mod";
	faction = "Republic_101st";
	displayName = "101st Claymore 2-1 Trooper (JLTS)";
	uniformClass = "DBA_Claymore21Trooper";
	model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
	hiddenSelections[] =
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[] =
	{
		"\101st_Aux_Mod\Addons\PlatoonArmours\Claymore2\textures\2-1_Armor_upper_CO.paa",
		"\101st_Aux_Mod\Addons\textures\101st\armor\Trooper_Legs_CO.paa"
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
class Claymore21SL_DBA : 101st_JLTS_Clone_P2
{
	dlc = "101st_Aux_Mod";
	faction = "Republic_101st";
	displayName = "101st Claymore 2-1 Squad Lead (JLTS)";
	uniformClass = "DBA_Claymore21SL";
	model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
	hiddenSelections[] =
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[] =
	{
		"\101st_Aux_Mod\Addons\PlatoonArmours\Claymore2\textures\2-1SL_Armor_upper_CO.paa",
		"\101st_Aux_Mod\Addons\PlatoonArmours\NCO_Armor_lower_CO.paa"
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
class Claymore21TL_DBA : 101st_JLTS_Clone_P2
{
	dlc = "101st_Aux_Mod";
	faction = "Republic_101st";
	displayName = "101st Claymore 2-1 Team Lead (JLTS)";
	uniformClass = "DBA_Claymore21TL";
	model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
	hiddenSelections[] =
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[] =
	{
		"\101st_Aux_Mod\Addons\PlatoonArmours\Claymore2\textures\2-1TL_Armor_upper_CO.paa",
		"\101st_Aux_Mod\Addons\PlatoonArmours\NCO_Armor_lower_CO.paa"
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
class Claymore21CMC_DBA : 101st_JLTS_Clone_P2
{
	dlc = "101st_Aux_Mod";
	faction = "Republic_101st";
	displayName = "101st Claymore 2-1 CM-C (JLTS)";
	uniformClass = "DBA_Claymore21CMC";
	model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
	hiddenSelections[] =
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[] =
	{
		"\101st_Aux_Mod\Addons\PlatoonArmours\Claymore2\textures\2-1CMC_Armor_upper_CO.paa",
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
class Claymore21CM_DBA : 101st_JLTS_Clone_P2
{
	dlc = "101st_Aux_Mod";
	faction = "Republic_101st";
	displayName = "101st Claymore 2-1 CM (JLTS)";
	uniformClass = "DBA_Claymore21CM";
	model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
	hiddenSelections[] =
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[] =
	{
		"\101st_Aux_Mod\Addons\PlatoonArmours\Claymore2\textures\2-1CM_Armor_upper_CO.paa",
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
class Claymore21RTO_DBA : 101st_JLTS_Clone_P2
{
	dlc = "101st_Aux_Mod";
	faction = "Republic_101st";
	displayName = "101st Claymore 2-1 RTO (JLTS)";
	uniformClass = "DBA_Claymore21RTO";
	model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
	hiddenSelections[] =
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[] =
	{
		"\101st_Aux_Mod\Addons\PlatoonArmours\Claymore2\textures\2-1CI_Armor_upper_CO.paa",
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
class Claymore21RTOCadet_DBA : 101st_JLTS_Clone_P2
{
	dlc = "101st_Aux_Mod";
	faction = "Republic_101st";
	displayName = "101st Claymore 2-1 RTO Cadet (JLTS)";
	uniformClass = "DBA_Claymore21RTOCadet";
	model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
	hiddenSelections[] =
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[] =
	{
		"\101st_Aux_Mod\Addons\PlatoonArmours\Claymore2\textures\2-1CIC_Armor_upper_CO.paa",
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
class Claymore22Trooper_DBA : 101st_JLTS_Clone_P2
{
	dlc = "101st_Aux_Mod";
	faction = "Republic_101st";
	displayName = "101st Claymore 2-2 Trooper (JLTS)";
	uniformClass = "DBA_Claymore22Trooper";
	model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
	hiddenSelections[] =
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[] =
	{
		"\101st_Aux_Mod\Addons\PlatoonArmours\Claymore2\textures\2-2_Armor_upper_CO.paa",
		"\101st_Aux_Mod\Addons\textures\101st\armor\Trooper_Legs_CO.paa"
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

class Claymore22SL_DBA : 101st_JLTS_Clone_P2
{
	dlc = "101st_Aux_Mod";
	faction = "Republic_101st";
	displayName = "101st Claymore 2-2 Squad Lead (JLTS)";
	uniformClass = "DBA_Claymore22SL";
	model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
	hiddenSelections[] =
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[] =
	{
		"\101st_Aux_Mod\Addons\PlatoonArmours\Claymore2\textures\2-2SL_Armor_upper_CO.paa",
		"\101st_Aux_Mod\Addons\PlatoonArmours\NCO_Armor_lower_CO.paa"
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
class Claymore22TL_DBA : 101st_JLTS_Clone_P2
{
	dlc = "101st_Aux_Mod";
	faction = "Republic_101st";
	displayName = "101st Claymore 2-2 Team Lead (JLTS)";
	uniformClass = "DBA_Claymore22TL";
	model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
	hiddenSelections[] =
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[] =
	{
		"\101st_Aux_Mod\Addons\PlatoonArmours\Claymore2\textures\2-2TL_Armor_upper_CO.paa",
		"\101st_Aux_Mod\Addons\PlatoonArmours\NCO_Armor_lower_CO.paa"
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
class Claymore22CMC_DBA : 101st_JLTS_Clone_P2
{
	dlc = "101st_Aux_Mod";
	faction = "Republic_101st";
	displayName = "101st Claymore 2-2 CM-C (JLTS)";
	uniformClass = "DBA_Claymore22CMC";
	model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
	hiddenSelections[] =
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[] =
	{
		"\101st_Aux_Mod\Addons\PlatoonArmours\Claymore2\textures\2-2CMC_Armor_upper_CO.paa",
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
class Claymore22CM_DBA : 101st_JLTS_Clone_P2
{
	dlc = "101st_Aux_Mod";
	faction = "Republic_101st";
	displayName = "101st Claymore 2-2 CM (JLTS)";
	uniformClass = "DBA_Claymore22CM";
	model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
	hiddenSelections[] =
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[] =
	{
		"\101st_Aux_Mod\Addons\PlatoonArmours\Claymore2\textures\2-2CM_Armor_upper_CO.paa",
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
class Claymore22RTO_DBA : 101st_JLTS_Clone_P2
{
	dlc = "101st_Aux_Mod";
	faction = "Republic_101st";
	displayName = "101st Claymore 2-2 RTO (JLTS)";
	uniformClass = "DBA_Claymore22RTO";
	model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
	hiddenSelections[] =
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[] =
	{
		"\101st_Aux_Mod\Addons\PlatoonArmours\Claymore2\textures\2-2CI_Armor_upper_CO.paa",
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
class Claymore22RTOCadet_DBA : 101st_JLTS_Clone_P2
{
	dlc = "101st_Aux_Mod";
	faction = "Republic_101st";
	displayName = "101st Claymore 2-2 RTO Cadet (JLTS)";
	uniformClass = "DBA_Claymore22RTOCadet";
	model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
	hiddenSelections[] =
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[] =
	{
		"\101st_Aux_Mod\Addons\PlatoonArmours\Claymore2\textures\2-2CIC_Armor_upper_CO.paa",
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
class Claymore23Trooper_DBA : 101st_JLTS_Clone_P2
{
	dlc = "101st_Aux_Mod";
	faction = "Republic_101st";
	displayName = "101st Claymore 2-3 Trooper (JLTS)";
	uniformClass = "DBA_Claymore23Trooper";
	model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
	hiddenSelections[] =
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[] =
	{
		"\101st_Aux_Mod\Addons\PlatoonArmours\Claymore2\textures\2-3_Armor_upper_CO.paa",
		"\101st_Aux_Mod\Addons\textures\101st\armor\Trooper_Legs_CO.paa"
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

class Claymore23SL_DBA : 101st_JLTS_Clone_P2
{
	dlc = "101st_Aux_Mod";
	faction = "Republic_101st";
	displayName = "101st Claymore 2-3 Squad Lead (JLTS)";
	uniformClass = "DBA_Claymore23SL";
	model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
	hiddenSelections[] =
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[] =
	{
		"\101st_Aux_Mod\Addons\PlatoonArmours\Claymore2\textures\2-3SL_Armor_upper_CO.paa",
		"\101st_Aux_Mod\Addons\PlatoonArmours\NCO_Armor_lower_CO.paa"
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
class Claymore23TL_DBA : 101st_JLTS_Clone_P2
{
	dlc = "101st_Aux_Mod";
	faction = "Republic_101st";
	displayName = "101st Claymore 2-3 Team Lead (JLTS)";
	uniformClass = "DBA_Claymore23TL";
	model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
	hiddenSelections[] =
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[] =
	{
		"\101st_Aux_Mod\Addons\PlatoonArmours\Claymore2\textures\2-3TL_Armor_upper_CO.paa",
		"\101st_Aux_Mod\Addons\PlatoonArmours\NCO_Armor_lower_CO.paa"
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
class Claymore23CMC_DBA : 101st_JLTS_Clone_P2
{
	dlc = "101st_Aux_Mod";
	faction = "Republic_101st";
	displayName = "101st Claymore 2-3 CM-C (JLTS)";
	uniformClass = "DBA_Claymore23CMC";
	model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
	hiddenSelections[] =
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[] =
	{
		"\101st_Aux_Mod\Addons\PlatoonArmours\Claymore2\textures\2-3CMC_Armor_upper_CO.paa",
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
class Claymore23CM_DBA : 101st_JLTS_Clone_P2
{
	dlc = "101st_Aux_Mod";
	faction = "Republic_101st";
	displayName = "101st Claymore 2-3 CM (JLTS)";
	uniformClass = "DBA_Claymore23CM";
	model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
	hiddenSelections[] =
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[] =
	{
		"\101st_Aux_Mod\Addons\PlatoonArmours\Claymore2\textures\2-3CM_Armor_upper_CO.paa",
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
class Claymore23RTO_DBA : 101st_JLTS_Clone_P2
{
	dlc = "101st_Aux_Mod";
	faction = "Republic_101st";
	displayName = "101st Claymore 2-3 RTO (JLTS)";
	uniformClass = "DBA_Claymore23RTO";
	model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
	hiddenSelections[] =
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[] =
	{
		"\101st_Aux_Mod\Addons\PlatoonArmours\Claymore2\textures\2-3CI_Armor_upper_CO.paa",
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
class Claymore23RTOCadet_DBA : 101st_JLTS_Clone_P2
{
	dlc = "101st_Aux_Mod";
	faction = "Republic_101st";
	displayName = "101st Claymore 2-3 RTO Cadet (JLTS)";
	uniformClass = "DBA_Claymore23RTOCadet";
	model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
	hiddenSelections[] =
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[] =
	{
		"\101st_Aux_Mod\Addons\PlatoonArmours\Claymore2\textures\2-3CIC_Armor_upper_CO.paa",
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