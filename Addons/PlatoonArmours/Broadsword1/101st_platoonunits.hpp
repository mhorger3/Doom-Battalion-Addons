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
class Broadsword1HQ_DBA : 101st_JLTS_Clone_P2
{
	dlc = "101st_Aux_Mod";
	faction = "Republic_101st";
	displayName = "101st Broadsword 1 HQ (JLTS)";
	uniformClass = "DBA_Broadsword1HQ";
	model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
	hiddenSelections[] =
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[] =
	{
		"\101st_Aux_Mod\Addons\PlatoonArmours\Broadsword1\textures\HQ_Armor_upper_CO.paa",
		"\101st_Aux_Mod\Addons\textures\101st\armor\Sergeant_Legs_CO.paa"
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
class Broadsword1HQM_DBA : 101st_JLTS_Clone_P2
{
	dlc = "101st_Aux_Mod";
	faction = "Republic_101st";
	displayName = "101st Broadsword 1 HQ Medic (JLTS)";
	uniformClass = "DBA_Broadsword1HQM";
	model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
	hiddenSelections[] =
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[] =
	{
		"\101st_Aux_Mod\Addons\PlatoonArmours\Broadsword1\textures\HQM_Armor_upper_CO.paa",
		"\101st_Aux_Mod\Addons\textures\101st\armor\Medic_Legs_CO.paa"
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
class Broadsword1HQRTO_DBA : 101st_JLTS_Clone_P2
{
	dlc = "101st_Aux_Mod";
	faction = "Republic_101st";
	displayName = "101st Broadsword 1 HQ RTO (JLTS)";
	uniformClass = "DBA_Broadsword1HQRTO";
	model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
	hiddenSelections[] =
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[] =
	{
		"\101st_Aux_Mod\Addons\PlatoonArmours\Broadsword1\textures\HQR_Armor_upper_CO.paa",
		"101st_Aux_Mod\Addons\textures\101st\armor\RTO_Legs_CO.paa"
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
class Broadsword11Trooper_DBA : 101st_JLTS_Clone_P2
{
	dlc = "101st_Aux_Mod";
	faction = "Republic_101st";
	displayName = "101st Broadsword 1-1 Trooper (JLTS)";
	uniformClass = "DBA_Broadsword11Trooper";
	model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
	hiddenSelections[] =
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[] =
	{
		"\101st_Aux_Mod\Addons\PlatoonArmours\Broadsword1\textures\1-1_Armor_upper_CO.paa",
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
class Broadsword11SL_DBA : 101st_JLTS_Clone_P2
{
	dlc = "101st_Aux_Mod";
	faction = "Republic_101st";
	displayName = "101st Broadsword 1-1 Squad Lead (JLTS)";
	uniformClass = "DBA_Broadsword11SL";
	model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
	hiddenSelections[] =
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[] =
	{
		"\101st_Aux_Mod\Addons\PlatoonArmours\Broadsword1\textures\1-1SL_Armor_upper_CO.paa",
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
class Broadsword11TL_DBA : 101st_JLTS_Clone_P2
{
	dlc = "101st_Aux_Mod";
	faction = "Republic_101st";
	displayName = "101st Broadsword 1-1 Team Lead (JLTS)";
	uniformClass = "DBA_Broadsword11TL";
	model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
	hiddenSelections[] =
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[] =
	{
		"\101st_Aux_Mod\Addons\PlatoonArmours\Broadsword1\textures\1-1TL_Armor_upper_CO.paa",
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
class Broadsword11CMC_DBA : 101st_JLTS_Clone_P2
{
	dlc = "101st_Aux_Mod";
	faction = "Republic_101st";
	displayName = "101st Broadsword 1-1 CM-C (JLTS)";
	uniformClass = "DBA_Broadsword11CMC";
	model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
	hiddenSelections[] =
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[] =
	{
		"\101st_Aux_Mod\Addons\PlatoonArmours\Broadsword1\textures\1-1CMC_Armor_upper_CO.paa",
		"\101st_Aux_Mod\Addons\textures\101st\armor\Medical_Cadet_Legs_CO.paa"
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
class Broadsword11CM_DBA : 101st_JLTS_Clone_P2
{
	dlc = "101st_Aux_Mod";
	faction = "Republic_101st";
	displayName = "101st Broadsword 1-1 CM (JLTS)";
	uniformClass = "DBA_Broadsword11CM";
	model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
	hiddenSelections[] =
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[] =
	{
		"\101st_Aux_Mod\Addons\PlatoonArmours\Broadsword1\textures\1-1CM_Armor_upper_CO.paa",
		"\101st_Aux_Mod\Addons\textures\101st\armor\Medic_Legs_CO.paa"
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
class Broadsword11RTO_DBA : 101st_JLTS_Clone_P2
{
	dlc = "101st_Aux_Mod";
	faction = "Republic_101st";
	displayName = "101st Broadsword 1-1 RTO (JLTS)";
	uniformClass = "DBA_Broadsword11RTO";
	model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
	hiddenSelections[] =
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[] =
	{
		"\101st_Aux_Mod\Addons\PlatoonArmours\Broadsword1\textures\1-1CI_Armor_upper_CO.paa",
		"101st_Aux_Mod\Addons\textures\101st\armor\RTO_Legs_CO.paa"
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
class Broadsword11RTOCadet_DBA : 101st_JLTS_Clone_P2
{
	dlc = "101st_Aux_Mod";
	faction = "Republic_101st";
	displayName = "101st Broadsword 1-1 RTO Cadet (JLTS)";
	uniformClass = "DBA_Broadsword11RTOCadet";
	model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
	hiddenSelections[] =
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[] =
	{
		"\101st_Aux_Mod\Addons\PlatoonArmours\Broadsword1\textures\1-1CIC_Armor_upper_CO.paa",
		"\101st_Aux_Mod\Addons\textures\101st\armor\RTO_Cadet_Legs_CO.paa"
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
class Broadsword12Trooper_DBA : 101st_JLTS_Clone_P2
{
	dlc = "101st_Aux_Mod";
	faction = "Republic_101st";
	displayName = "101st Broadsword 1-2 Trooper (JLTS)";
	uniformClass = "DBA_Broadsword12Trooper";
	model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
	hiddenSelections[] =
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[] =
	{
		"\101st_Aux_Mod\Addons\PlatoonArmours\Broadsword1\textures\1-2_Armor_upper_CO.paa",
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
class Broadsword12SL_DBA : 101st_JLTS_Clone_P2
{
	dlc = "101st_Aux_Mod";
	faction = "Republic_101st";
	displayName = "101st Broadsword 1-2 Squad Lead (JLTS)";
	uniformClass = "DBA_Broadsword12SL";
	model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
	hiddenSelections[] =
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[] =
	{
		"\101st_Aux_Mod\Addons\PlatoonArmours\Broadsword1\textures\1-2SL_Armor_upper_CO.paa",
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
class Broadsword12TL_DBA : 101st_JLTS_Clone_P2
{
	dlc = "101st_Aux_Mod";
	faction = "Republic_101st";
	displayName = "101st Broadsword 1-2 Team Lead (JLTS)";
	uniformClass = "DBA_Broadsword12TL";
	model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
	hiddenSelections[] =
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[] =
	{
		"\101st_Aux_Mod\Addons\PlatoonArmours\Broadsword1\textures\1-2TL_Armor_upper_CO.paa",
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
class Broadsword12CMC_DBA : 101st_JLTS_Clone_P2
{
	dlc = "101st_Aux_Mod";
	faction = "Republic_101st";
	displayName = "101st Broadsword 1-2 CM-C (JLTS)";
	uniformClass = "DBA_Broadsword12CMC";
	model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
	hiddenSelections[] =
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[] =
	{
		"\101st_Aux_Mod\Addons\PlatoonArmours\Broadsword1\textures\1-2CMC_Armor_upper_CO.paa",
		"\101st_Aux_Mod\Addons\textures\101st\armor\Medical_Cadet_Legs_CO.paa"
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
class Broadsword12CM_DBA : 101st_JLTS_Clone_P2
{
	dlc = "101st_Aux_Mod";
	faction = "Republic_101st";
	displayName = "101st Broadsword 1-2 CM (JLTS)";
	uniformClass = "DBA_Broadsword12CM";
	model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
	hiddenSelections[] =
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[] =
	{
		"\101st_Aux_Mod\Addons\PlatoonArmours\Broadsword1\textures\1-2CM_Armor_upper_CO.paa",
		"\101st_Aux_Mod\Addons\textures\101st\armor\Medic_Legs_CO.paa"
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
class Broadsword12RTO_DBA : 101st_JLTS_Clone_P2
{
	dlc = "101st_Aux_Mod";
	faction = "Republic_101st";
	displayName = "101st Broadsword 1-2 RTO (JLTS)";
	uniformClass = "DBA_Broadsword12RTO";
	model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
	hiddenSelections[] =
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[] =
	{
		"\101st_Aux_Mod\Addons\PlatoonArmours\Broadsword1\textures\1-2CI_Armor_upper_CO.paa",
		"101st_Aux_Mod\Addons\textures\101st\armor\RTO_Legs_CO.paa"
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
class Broadsword12RTOCadet_DBA : 101st_JLTS_Clone_P2
{
	dlc = "101st_Aux_Mod";
	faction = "Republic_101st";
	displayName = "101st Broadsword 1-2 RTO Cadet (JLTS)";
	uniformClass = "DBA_Broadsword12RTOCadet";
	model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
	hiddenSelections[] =
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[] =
	{
		"\101st_Aux_Mod\Addons\PlatoonArmours\Broadsword1\textures\1-2CIC_Armor_upper_CO.paa",
		"\101st_Aux_Mod\Addons\textures\101st\armor\RTO_Cadet_Legs_CO.paa"
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
class Broadsword13Trooper_DBA : 101st_JLTS_Clone_P2
{
	dlc = "101st_Aux_Mod";
	faction = "Republic_101st";
	displayName = "101st Broadsword 1-3 Trooper (JLTS)";
	uniformClass = "DBA_Broadsword13Trooper";
	model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
	hiddenSelections[] =
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[] =
	{
		"\101st_Aux_Mod\Addons\PlatoonArmours\Broadsword1\textures\1-3_Armor_upper_CO.paa",
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
class Broadsword13SL_DBA : 101st_JLTS_Clone_P2
{
	dlc = "101st_Aux_Mod";
	faction = "Republic_101st";
	displayName = "101st Broadsword 1-3 Squad Lead (JLTS)";
	uniformClass = "DBA_Broadsword13SL";
	model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
	hiddenSelections[] =
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[] =
	{
		"\101st_Aux_Mod\Addons\PlatoonArmours\Broadsword1\textures\1-3SL_Armor_upper_CO.paa",
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
class Broadsword13TL_DBA : 101st_JLTS_Clone_P2
{
	dlc = "101st_Aux_Mod";
	faction = "Republic_101st";
	displayName = "101st Broadsword 1-3 Team Lead (JLTS)";
	uniformClass = "DBA_Broadsword13TL";
	model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
	hiddenSelections[] =
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[] =
	{
		"\101st_Aux_Mod\Addons\PlatoonArmours\Broadsword1\textures\1-3TL_Armor_upper_CO.paa",
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
class Broadsword13CMC_DBA : 101st_JLTS_Clone_P2
{
	dlc = "101st_Aux_Mod";
	faction = "Republic_101st";
	displayName = "101st Broadsword 1-3 CM-C (JLTS)";
	uniformClass = "DBA_Broadsword13CMC";
	model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
	hiddenSelections[] =
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[] =
	{
		"\101st_Aux_Mod\Addons\PlatoonArmours\Broadsword1\textures\1-3CMC_Armor_upper_CO.paa",
		"\101st_Aux_Mod\Addons\textures\101st\armor\Medical_Cadet_Legs_CO.paa"
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
class Broadsword13CM_DBA : 101st_JLTS_Clone_P2
{
	dlc = "101st_Aux_Mod";
	faction = "Republic_101st";
	displayName = "101st Broadsword 1-3 CM (JLTS)";
	uniformClass = "DBA_Broadsword13CM";
	model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
	hiddenSelections[] =
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[] =
	{
		"\101st_Aux_Mod\Addons\PlatoonArmours\Broadsword1\textures\1-3CM_Armor_upper_CO.paa",
		"\101st_Aux_Mod\Addons\textures\101st\armor\Medic_Legs_CO.paa"
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
class Broadsword13RTO_DBA : 101st_JLTS_Clone_P2
{
	dlc = "101st_Aux_Mod";
	faction = "Republic_101st";
	displayName = "101st Broadsword 1-3 RTO (JLTS)";
	uniformClass = "DBA_Broadsword13RTO";
	model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
	hiddenSelections[] =
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[] =
	{
		"\101st_Aux_Mod\Addons\PlatoonArmours\Broadsword1\textures\1-3CI_Armor_upper_CO.paa",
		"101st_Aux_Mod\Addons\textures\101st\armor\RTO_Legs_CO.paa"
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
class Broadsword13RTOCadet_DBA : 101st_JLTS_Clone_P2
{
	dlc = "101st_Aux_Mod";
	faction = "Republic_101st";
	displayName = "101st Broadsword 1-3 RTO Cadet (JLTS)";
	uniformClass = "DBA_Broadsword13RTOCadet";
	model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
	hiddenSelections[] =
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[] =
	{
		"\101st_Aux_Mod\Addons\PlatoonArmours\Broadsword1\textures\1-3CIC_Armor_upper_CO.paa",
		"\101st_Aux_Mod\Addons\textures\101st\armor\RTO_Cadet_Legs_CO.paa"
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