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
class Blind_DBA : 101st_JLTS_Clone_P2
{
	dlc = "101st_Aux_Mod";
	faction = "Republic_101st";
	displayName = "101st Blind (JLTS)";
	uniformClass = "DBA_P2CloneBlindUniform";
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
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Blind_Chest_CO.paa",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Blind_Legs_CO.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\data\Blind_Upper.RVMAT"
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
class Kel_DBA : 101st_JLTS_Clone_P2
{
	dlc = "101st_Aux_Mod";
	faction = "Republic_101st";
	displayName = "101st Kel (JLTS)";
	uniformClass = "DBA_P2CloneKelUniform";
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
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Kel_Chest_CO.paa",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Kel_Legs_CO.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\data\Kel_Chest.RVMAT",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\data\Kel_Legs.RVMAT"
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
class Dutch_DBA : 101st_JLTS_Clone_P2
{
	dlc = "101st_Aux_Mod";
	faction = "Republic_101st";
	displayName = "101st Dutch (JLTS)";
	uniformClass = "DBA_P2CloneDutchUniform";
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
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Dutch_Chest_CO.paa",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Dutch_Legs_CO.paa"
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
class Jerec_DBA : 101st_JLTS_Clone_P2
{
	dlc = "101st_Aux_Mod";
	faction = "Republic_101st";
	displayName = "101st Jerec (JLTS)";
	uniformClass = "DBA_P2CloneJerecUniform";
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
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Jerec_Chest_CO.paa",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Jerec_Legs_CO.paa"
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
class Vin_DBA : 101st_JLTS_Clone_P2
{
	dlc = "101st_Aux_Mod";
	faction = "Republic_101st";
	displayName = "101st Vin (JLTS)";
	uniformClass = "DBA_P2CloneVinUniform";
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
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Vin_Chest_CO.paa",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Vin_Legs_CO.paa"
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
class Kai_DBA : 101st_JLTS_Clone_P2
{
	dlc = "101st_Aux_Mod";
	faction = "Republic_101st";
	displayName = "101st Kai (JLTS)";
	uniformClass = "DBA_P2CloneKaiUniform";
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
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Kai_Chest_CO.paa",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Kai_Legs_CO.paa"
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
class Blackwater_DBA : 101st_JLTS_Clone_P2
{
	dlc = "101st_Aux_Mod";
	faction = "Republic_101st";
	displayName = "101st Blackwater (JLTS)";
	uniformClass = "DBA_P2CloneBlackwaterUniform";
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
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Blackwater_Chest_CO.paa",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Blackwater_Legs_CO.paa"
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
class Seatie_DBA : 101st_JLTS_Clone_P2
{
	dlc = "101st_Aux_Mod";
	faction = "Republic_101st";
	displayName = "101st Seatie (JLTS)";
	uniformClass = "DBA_P2CloneSeatieUniform";
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
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Seatie_Chest_CO.paa",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Seatie_Legs_CO.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\data\Seatie_Chest.RVMAT",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\data\Seatie_Legs.RVMAT"
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

class AJ_DBA : 101st_JLTS_Clone_P2
{
	dlc = "101st_Aux_Mod";
	faction = "Republic_101st";
	displayName = "101st AJ (JLTS)";
	uniformClass = "DBA_P2CloneAJUniform";
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
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\AJ_Chest_CO.paa",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\AJ_Lower_CO.paa"
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
class Spork_DBA : 101st_JLTS_Clone_P2
{
	dlc = "101st_Aux_Mod";
	faction = "Republic_101st";
	displayName = "101st Spark (JLTS)";
	uniformClass = "DBA_P2CloneSparkUniform";
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
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Spark_Chest_CO.paa",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Spark_Legs_CO.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\data\Spark_Chest.RVMAT",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\data\Spark_Legs.RVMAT"
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
class Vulgar_DBA : 101st_JLTS_Clone_P2
{
	dlc = "101st_Aux_Mod";
	faction = "Republic_101st";
	displayName = "101st Vulgar (JLTS)";
	uniformClass = "DBA_P2CloneVulgarUniform";
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
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Vulgar_Chest_CO.paa",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Vulgar_Legs_CO.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\data\Vulgar_Chest.RVMAT",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\data\Vulgar_Legs.RVMAT"
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
class Blood_DBA : 101st_JLTS_Clone_P2
{
	dlc = "101st_Aux_Mod";
	faction = "Republic_101st";
	displayName = "101st Blood (JLTS)";
	uniformClass = "DBA_P2CloneBloodUniform";
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
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Blood_Chest_CO.paa",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Blood_Legs_CO.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\data\Blood_Chest.RVMAT",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\data\Blood_Legs.RVMAT"
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
class Republican_DBA : 101st_JLTS_Clone_P2
{
	dlc = "101st_Aux_Mod";
	faction = "Republic_101st";
	displayName = "101st Republican (JLTS)";
	uniformClass = "DBA_P2CloneRepublicanUniform";
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
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Republican_Chest_CO.paa",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Republican_Legs_CO.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\data\Republican_Upper.RVMAT",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\data\Republican_Lower.RVMAT"
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

class Furn_DBA : 101st_JLTS_Clone_P2
{
	dlc = "101st_Aux_Mod";
	faction = "Republic_101st";
	displayName = "101st Furn (JLTS)";
	uniformClass = "DBA_P2CloneFurnUniform";
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
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Furn_Chest_CO.paa",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Furn_Legs_CO.paa"
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
class Punisher_DBA : 101st_JLTS_Clone_P2
{
	dlc = "101st_Aux_Mod";
	faction = "Republic_101st";
	displayName = "101st Punisher (JLTS)";
	uniformClass = "DBA_P2ClonePunisherUniform";
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
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Punisher_Chest_CO.paa",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Punisher_Legs_CO.paa"
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
class Fodder_DBA : 101st_JLTS_Clone_P2
{
	dlc = "101st_Aux_Mod";
	faction = "Republic_101st";
	displayName = "101st Fodder (JLTS)";
	uniformClass = "DBA_P2CloneFodderUniform";
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
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Fodder_Chest_CO.paa",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Fodder_Legs_CO.paa"
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
class Oaksy_DBA : 101st_JLTS_Clone_P2
{
	dlc = "101st_Aux_Mod";
	faction = "Republic_101st";
	displayName = "101st Oaksy (JLTS)";
	uniformClass = "DBA_P2CloneOaksyUniform";
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
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Oaksy_Chest_CO.paa",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Oaksy_Legs_CO.paa"
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
class Misfit_DBA : 101st_JLTS_Clone_P2
{
	dlc = "101st_Aux_Mod";
	faction = "Republic_101st";
	displayName = "101st Misfit (JLTS)";
	uniformClass = "DBA_P2CloneMisfitUniform";
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
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Misfit_Chest_CO.paa",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Misfit_Legs_CO.paa"
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
class Falcon_DBA : 101st_JLTS_Clone_P2
{
	dlc = "101st_Aux_Mod";
	faction = "Republic_101st";
	displayName = "101st Falcon (JLTS)";
	uniformClass = "DBA_P2CloneFalconUniform";
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
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Falcon_Chest_CO.paa",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Falcon_Legs_CO.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\data\Falcon_Chest.RVMAT",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\data\Falcon_Legs.RVMAT"
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
class Servo_DBA : 101st_JLTS_Clone_P2
{
	dlc = "101st_Aux_Mod";
	faction = "Republic_101st";
	displayName = "101st Servo (JLTS)";
	uniformClass = "DBA_P2CloneServoUniform";
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
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Servo_Chest_CO.paa",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Servo_Legs_CO.paa"
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
class Bacon_DBA : 101st_JLTS_Clone_P2
{
	dlc = "101st_Aux_Mod";
	faction = "Republic_101st";
	displayName = "101st Bacon (JLTS)";
	uniformClass = "DBA_P2CloneBaconLegacyUniform";
	model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
	faction = "Republic_101st";
	editorSubcategory = "DBA_Broadsword_HQ";
	hiddenSelectionsTextures[] =
	{
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Legacy\Bacon_Chest_CO.paa",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Legacy\Bacon_Legs_CO.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Legacy\Bacon_Chest.RVMAT",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Legacy\Bacon_Legs.RVMAT"
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
class Courage_DBA : 101st_JLTS_Clone_P2
{
	dlc = "101st_Aux_Mod";
	faction = "Republic_101st";
	displayName = "101st Courage (JLTS)";
	uniformClass = "DBA_P2CloneCourageLegacyUniform";
	model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
	faction = "Republic_101st";
	editorSubcategory = "DBA_Broadsword_HQ";
	hiddenSelectionsTextures[] =
	{
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Legacy\Courage_Chest_CO.paa",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Legacy\Courage_Legs_CO.paa"
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
class Lambert_DBA : 101st_JLTS_Clone_P2
{
	dlc = "101st_Aux_Mod";
	faction = "Republic_101st";
	displayName = "101st Lambert (JLTS)";
	uniformClass = "DBA_P2CloneLambertLegacyUniform";
	model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
	faction = "Republic_101st";
	editorSubcategory = "DBA_Broadsword_HQ";
	hiddenSelectionsTextures[] =
	{
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Legacy\Lambert_Chest_CO.paa",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Legacy\Lmabert_Legs_CO.paa"
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
class Prodigy_DBA : 101st_JLTS_Clone_P2
{
	dlc = "101st_Aux_Mod";
	faction = "Republic_101st";
	displayName = "101st Prodigy (JLTS)";
	uniformClass = "DBA_P2CloneProdigyLegacyUniform";
	model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
	faction = "Republic_101st";
	editorSubcategory = "DBA_Broadsword_HQ";
	hiddenSelectionsTextures[] =
	{
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Legacy\Prodigy_Chest_CO.paa",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Legacy\Prodigy_Legs_CO.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Legacy\Prodigy_Chest.RVMAT",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Legacy\Prodigy_Legs.RVMAT"
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

class Quill_DBA : 101st_JLTS_Clone_P2
{
	dlc = "101st_Aux_Mod";
	faction = "Republic_101st";
	displayName = "101st Quill (JLTS)";
	uniformClass = "DBA_P2CloneQuillLegacyUniform";
	model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
	faction = "Republic_101st";
	editorSubcategory = "DBA_Broadsword_HQ";
	hiddenSelectionsTextures[] =
	{
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Legacy\Quill_Chest_CO.paa",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Legacy\Quill_Legs_CO.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Legacy\Quill_Chest.RVMAT",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Legacy\Quill_Legs.RVMAT"
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
class Seefor_DBA : 101st_JLTS_Clone_P2
{
	dlc = "101st_Aux_Mod";
	faction = "Republic_101st";
	displayName = "101st Seefor (JLTS)";
	uniformClass = "DBA_P2CloneSeeforLegacyUniform";
	model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
	faction = "Republic_101st";
	editorSubcategory = "DBA_Broadsword_HQ";
	hiddenSelectionsTextures[] =
	{
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Legacy\Seefor_Chest_CO.paa",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Legacy\Seefor_Legs_CO.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Legacy\Seefor_Chest.RVMAT",
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

class Dolittle_DBA : 101st_JLTS_Clone_P2
{
	dlc = "101st_Aux_Mod";
	faction = "Republic_101st";
	displayName = "101st Dolittle (JLTS)";
	uniformClass = "DBA_P2CloneDolittleLegacyUniform";
	model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
	faction = "Republic_101st";
	editorSubcategory = "DBA_Broadsword_HQ";
	hiddenSelectionsTextures[] =
	{
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Legacy\Dolittle_Chest_CO.paa",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Legacy\Dolittle_Legs_CO.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Legacy\data\Dolittle_Chest.RVMAT",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Legacy\data\Dolittle_Legs.RVMAT"
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
class Mutt_DBA : 101st_JLTS_Clone_P2
{
	dlc = "101st_Aux_Mod";
	faction = "Republic_101st";
	displayName = "101st Mutt (JLTS)";
	uniformClass = "DBA_P2CloneMuttUniform";
	model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
	faction = "Republic_101st";
	editorSubcategory = "DBA_Broadsword_HQ";
	hiddenSelectionsTextures[] =
	{
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Mutt_Chest_CO.paa",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Mutt_Legs_CO.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\data\Mutt_Chest.RVMAT",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\data\Mutt_Legs.RVMAT"
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








