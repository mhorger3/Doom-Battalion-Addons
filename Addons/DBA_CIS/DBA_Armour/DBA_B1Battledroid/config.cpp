class CfgPatches
{
	class DBA_B1Uniforms
	{
		author = "Vulgar";
		requiredAddons[] =
		{
			"A3_data_F",
			"A3_anims_F",
			"A3_weapons_F",
			"A3_characters_F"
		};
		weapons[] =
		{
			"DBA_B1",
			"DBA_B1_Security",
			"DBA_B1_Marine",
			"DBA_B1_Pilot",
			"DBA_B1_Crew",
			"DBA_B1_Command",
			"DBA_B1_Rocket",
			"DBA_B1_AT",
			"DBA_B1_AA",
			"DBA_B1_Sniper",
			"DBA_B1_Heavy",
			"DBA_B1_Flamer",
			"DBA_B1_Geonosis",
			"DBA_B1_Command_Geonosis",
			"DBA_B1_Sniper_Geonosis",
			"DBA_B1_Jungle",
			"DBA_B1_Training",
			"DBA_B1_Winter",
		};
		units[] =
		{
			"DBA_B1_Backpack",
			"DBA_B1_Antenna",
			"DBA_B1_Jetpack",
			"DBA_B1_Backpack_GeonosisCamo",
			"DBA_B1_Antenna_GeonosisCamo",
			"DBA_B1_Backpack_Simulation",
			"DBA_B1_Antenna_Simulation",
			"DBA_B1_Backpack_JungleCamo",
			"DBA_B1_Antenna_JungleCamo",
			"DBA_B1_Backpack_WinterCamo",
			"DBA_B1_Antenna_WinterCamo",
		};
	};
};
class CfgVehicles
{
	class B_Kitbag_rgr;
	class DBA_B1_Backpack : B_Kitbag_rgr
	{
		author = "MrClock";
		scope = 2;
		picture = "\MRC\JLTS\characters\DroidArmor\data\ui\b1_backpack_ui_ca.paa";
		displayName = "DBA B1 Backpack";
		model = "\MRC\JLTS\characters\DroidArmor\DroidBackpackB1.p3d";
		hiddenSelections[] =
		{
			"camo1"
		};
		hiddenSelectionsTextures[] =
		{
			"\MRC\JLTS\characters\DroidArmor\data\b1_backpack_co.paa"
		};
		tf_dialog = "JLTS_droid_lr_radio_dialog";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_east_radio_code";
		tf_hasLRradio = 1;
		tf_range = 15000;
		tf_subtype = "digital_lr";
	};
	class DBA_B1_Backpack_GeonosisCamo: DBA_B1_Backpack
	{
		author = "Vulgar";
		displayName = "DBA B1 Backpack (Geonosis Camo)";
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_CIS\DBA_Armour\DBA_B1Battledroid\data\Geo_B1_Backpack_CO.paa"
		};
	};
	class DBA_B1_Backpack_Simulation : DBA_B1_Backpack
	{
		author = "Vulgar";
		displayName = "DBA B1 Backpack (Simulation)";
		hiddenSelectionsTextures[] =
		{
			"MRC\JLTS\characters\DroidUnits\data\Droid_B1Training_backpack_co.paa"
		};
	};
	class DBA_B1_Backpack_JungleCamo : DBA_B1_Backpack
	{
		author = "Vulgar";
		displayName = "DBA B1 Backpack (Jungle Camo)";
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_CIS\DBA_Armour\DBA_B1Battledroid\data\Jungle_B1_Backpack_CO.paa"
		};
	};
	class DBA_B1_Backpack_WinterCamo : DBA_B1_Backpack
	{
		author = "Vulgar";
		displayName = "DBA B1 Backpack (Winter Camo)";
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_CIS\DBA_Armour\DBA_B1Battledroid\data\Winter_B1_Backpack_CO.paa"
		};
	};
	class DBA_B1_Antenna : B_Kitbag_rgr
	{
		author = "MrClock";
		scope = 2;
		picture = "\MRC\JLTS\characters\DroidArmor\data\ui\b1_antenna_ui_ca.paa";
		displayName = "DBA B1 Antenna";
		model = "\MRC\JLTS\characters\DroidArmor\DroidAntennaB1.p3d";
		hiddenSelections[] =
		{
			"camo1"
		};
		hiddenSelectionsTextures[] =
		{
			"\MRC\JLTS\characters\DroidArmor\data\b1_antenna_co.paa"
		};
		maximumload = 0;
		tf_dialog = "JLTS_droid_lr_radio_dialog";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_east_radio_code";
		tf_hasLRradio = 1;
		tf_range = 10000;
		tf_subtype = "digital_lr";
	};
	class DBA_B1_Antenna_GeonosisCamo : DBA_B1_Antenna
	{
		author = "Vulgar";
		displayName = "DBA B1 Antenna (Geonosis Camo)";
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_CIS\DBA_Armour\DBA_B1Battledroid\data\Geo_B1_Antenna_CO.paa"
		};
	};
	class DBA_B1_Antenna_Simulation : DBA_B1_Antenna
	{
		author = "Vulgar";
		displayName = "DBA B1 Antenna (Simulation Camo)";
		hiddenSelectionsTextures[] =
		{
			"MRC\JLTS\characters\DroidUnits\data\Droid_B1Training_antenna_co.paa"
		};
	};
	class DBA_B1_Antenna_JungleCamo : DBA_B1_Antenna
	{
		author = "Vulgar";
		displayName = "DBA B1 Antenna (Jungle Camo)";
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_CIS\DBA_Armour\DBA_B1Battledroid\data\Jungle_B1_Antenna_CO.paa"
		};
	};
	class DBA_B1_Antenna_WinterCamo : DBA_B1_Antenna
	{
		author = "Vulgar";
		displayName = "DBA B1 Antenna (Winter Camo)";
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_CIS\DBA_Armour\DBA_B1Battledroid\data\Winter_B1_Antenna_CO.paa"
		};
	};
	class DBA_B1_Jetpack : B_Kitbag_rgr
	{
		author = "MrClock";
		scope = 2;
		picture = "\MRC\JLTS\characters\DroidArmor\data\ui\b1_jetpack_ui_ca.paa";
		displayName = "Battle droid jetpack";
		model = "\MRC\JLTS\characters\DroidArmor\DroidJetpackB1.p3d";
		hiddenSelections[] =
		{
			"camo1"
		};
		hiddenSelectionsTextures[] =
		{
			"\MRC\JLTS\characters\DroidArmor\data\b1_jetpack_co.paa"
		};
	};
};

class CfgWeapons
{
	class U_I_CombatUniform;
	class UniformItem;
	class DBA_B1 : U_I_CombatUniform
	{
		DBA_isDroid = 1;
		JLTS_isDroid = 1;
		JLTS_hasEMPProtection = 0;
		JLTS_deathSounds = "DeathDroid";
		author = "MrClock";
		scope = 2;
		displayName = "DBA B1 BattleDroid";
		picture = "\MRC\JLTS\characters\DroidArmor\data\ui\b1_uniform_ui_ca.paa";
		model = "\MRC\JLTS\characters\DroidArmor\DroidUniformB1.p3d";
		hiddenSelections[] = { "camo1" };
		hiddenSelectionsTextures[] =
		{
			"\MRC\JLTS\characters\DroidArmor\data\b1_co.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "O_DBA_CIS_B1_Droid_F";
			containerClass = "Supply150";
			mass = 40;
		};
	};
	class DBA_B1_Security : DBA_B1
	{
		displayName = "DBA B1 Security Droid";
		hiddenSelections[] = { "camo1" };
		hiddenSelectionsTextures[] =
		{
			"\MRC\JLTS\characters\DroidArmor\data\b1_security_co.paa"
		};
		class ItemInfo : ItemInfo
		{
			uniformClass = "O_DBA_CIS_B1_Security_Droid_F";
		};
	};
	class DBA_B1_Marine : DBA_B1
	{
		displayName = "DBA B1 Droid Marine";
		hiddenSelections[] = { "camo1" };
		class ItemInfo : ItemInfo
		{
			uniformClass = "O_DBA_CIS_B1_Marine_Droid_F";
		};
		hiddenSelectionsTextures[] =
		{
			"\MRC\JLTS\characters\DroidArmor\data\b1_marine_co.paa"
		};
	};
	class DBA_B1_Pilot : DBA_B1
	{
		displayName = "DBA B1 Pilot Droid";
		hiddenSelections[] = { "camo1" };
		hiddenSelectionsTextures[] =
		{
			"\MRC\JLTS\characters\DroidArmor\data\b1_pilot_co.paa"
		};
		class ItemInfo : ItemInfo
		{
			uniformClass = "O_DBA_CIS_B1_Pilot_Droid_F";
		};
	};
	class DBA_B1_Crew : DBA_B1
	{
		displayName = "DBA B1 Crew Droid";
		hiddenSelectionsTextures[] =
		{
			"\MRC\JLTS\characters\DroidArmor\data\b1_crew_co.paa"
		};
		class ItemInfo : ItemInfo
		{
			uniformClass = "O_DBA_CIS_B1_Crew_Droid_F";
		};
	};
	class DBA_B1_Command : DBA_B1
	{
		displayName = "DBA B1 Droid Commander";
		hiddenSelectionsTextures[] =
		{
			"\MRC\JLTS\characters\DroidArmor\data\b1_commander_co.paa"
		};
		class ItemInfo : ItemInfo
		{
			uniformClass = "O_DBA_CIS_B1_Command_Droid_F";
		};
	};
	class DBA_B1_Rocket : DBA_B1
	{
		displayName = "DBA B1 Rocket Droid";
		hiddenSelectionsTextures[] =
		{
			"\MRC\JLTS\characters\DroidArmor\data\b1_rocket_co.paa"
		};
		class ItemInfo : ItemInfo
		{
			uniformClass = "O_DBA_CIS_B1_Rocket_Droid_F";
		};
	};
	class DBA_B1_AT : DBA_B1
	{
		displayName = "DBA B1 Anti-Tank Droid";
		class ItemInfo : ItemInfo
		{
			uniformClass = "O_DBA_CIS_B1_AT_Droid_F";
		};
	};
	class DBA_B1_AA : DBA_B1
	{
		displayName = "DBA B1 Anti-Air Droid";
		class ItemInfo : ItemInfo
		{
			uniformClass = "O_DBA_CIS_B1_AA_Droid_F";
		};
	};
	class DBA_B1_Sniper : DBA_B1
	{
		displayName = "DBA B1 Anti-Air Droid";
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_CIS\DBA_Armour\DBA_B1Battledroid\data\Normal_B1_Sniper_Body_CO.paa"
		};
		class ItemInfo : ItemInfo
		{
			uniformClass = "O_DBA_CIS_B1_AA_Droid_F";
		};
	};
	class DBA_B1_Heavy : DBA_B1
	{
		displayName = "DBA B1 Heavy Droid";
		class ItemInfo : ItemInfo
		{
			uniformClass = "O_DBA_CIS_B1_Heavy_Droid_F";
		};
	};
	class DBA_B1_Flamer : DBA_B1
	{
		displayName = "DBA B1 Flamer Droid";
		class ItemInfo : ItemInfo
		{
			uniformClass = "O_DBA_CIS_B1_Flamer_Droid_F";
		};
	};
	class DBA_B1_Geonosis : DBA_B1
	{
		displayName = "DBA B1 BattleDroid (Geonosis Camo)";
		hiddenSelectionsTextures[] =
		{
			"MRC\JLTS\characters\DroidUnits\data\Droid_B1Geonosis_co.paa"
		};
		class ItemInfo : ItemInfo
		{
			uniformClass = "O_DBA_CIS_B1_Droid_Geonosis_F";
		};
	};
	class DBA_B1_Geonosis_Commander : DBA_B1
	{
		displayName = "DBA B1 Droid Commander (Geonosis Camo)";
		hiddenSelectionsTextures[] =
		{
			"MRC\JLTS\characters\DroidUnits\data\Droid_B1GeonosisCommander_co.paa"
		};
		class ItemInfo : ItemInfo
		{
			uniformClass = "O_DBA_CIS_B1_Command_Droid_Geonosis_F";
		};
	};
	class DBA_B1_Sniper_Geonosis : DBA_B1
	{
		displayName = "DBA B1 Droid Sniper (Geonosis Camo)";
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_CIS\DBA_Armour\DBA_B1Battledroid\data\Geo_B1_Sniper_Body_CO.paa"
		};
		class ItemInfo : ItemInfo
		{
			uniformClass = "O_DBA_CIS_B1_Sniper_Droid_Geonosis_F";
		};
	};
	class DBA_B1_Jungle : DBA_B1
	{
		displayName = "DBA B1 (Jungle Camo)";
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_CIS\DBA_Armour\DBA_B1Battledroid\data\Jungle_B1_Body_CO.paa"
		};
		class ItemInfo : ItemInfo
		{
			uniformClass = "O_DBA_CIS_B1_Droid_Jungle_F";
		};
	};
	class DBA_B1_Training : DBA_B1
	{
		displayName = "DBA B1 (Training Camo)";
		hiddenSelectionsTextures[] =
		{
			"MRC\JLTS\characters\DroidUnits\data\Droid_B1Training_co.paa"
		};
		class ItemInfo : ItemInfo
		{
			uniformClass = "O_DBA_CIS_B1_Droid_Training_F";
		};
	};
	class DBA_B1_Winter : DBA_B1
	{
		displayName = "DBA B1 (Winter Camo)";
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_CIS\DBA_Armour\DBA_B1Battledroid\data\Winter_B1_Body_CO.paa"
		};
		class ItemInfo : ItemInfo
		{
			uniformClass = "O_DBA_CIS_B1_Droid_Winter_F";
		};
	};
};