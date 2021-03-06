class CfgPatches
{
	class DBA_B1BattledroidUnits
	{
		author = "Vulgar";
		requiredAddons[] =
		{
			"A3_Characters_F"
		};
		requiredVersion = 0.1;
		units[] = { 
			"O_DBA_CIS_B1_Base_F",
			"O_DBA_CIS_B1_Droid_F",
			"O_DBA_CIS_B1_Flamer_Droid_F",
			"O_DBA_CIS_B1_Command_Droid_F",
			"O_DBA_CIS_B1_Crew_Droid_F",
			"O_DBA_CIS_B1_Heavy_Droid_F",
			"O_DBA_CIS_B1_Marine_Droid_F",
			"O_DBA_CIS_B1_Security_Droid_F",
			"O_DBA_CIS_B1_Pilot_Droid_F",
			"O_DBA_CIS_B1_Sniper_Droid_F",
			"O_DBA_CIS_B1_AA_Droid_F",
			"O_DBA_CIS_B1_AT_Droid_F",
			"O_DBA_CIS_B1_Rocket_Droid_F",
			"O_DBA_CIS_B1_Droid_Geonosis_F",
			"O_DBA_CIS_B1_Flamer_Droid_Geonosis_F",
			"O_DBA_CIS_B1_AA_Droid_Geonosis_F",
			"O_DBA_CIS_B1_AT_Droid_Geonosis_F",
			"O_DBA_CIS_B1_Command_Droid_Geonosis_F",
			"O_DBA_CIS_B1_Heavy_Droid_Geonosis_F",
			"O_DBA_CIS_B1_Sniper_Droid_Geonosis_F",
			"O_DBA_CIS_B1_Droid_Jungle_F",
			"O_DBA_CIS_B1_Flamer_Droid_Jungle_F",
			"O_DBA_CIS_B1_AA_Droid_Jungle_F",
			"O_DBA_CIS_B1_AT_Droid_Jungle_F",
			"O_DBA_CIS_B1_Command_Droid_Jungle_F",
			"O_DBA_CIS_B1_Heavy_Droid_Jungle_F",
			"O_DBA_CIS_B1_Sniper_Droid_Jungle_F",
			"O_DBA_CIS_B1_Droid_Training_F",
			"O_DBA_CIS_B1_Flamer_Droid_Training_F",
			"O_DBA_CIS_B1_AA_Droid_Training_F",
			"O_DBA_CIS_B1_AT_Droid_Training_F",
			"O_DBA_CIS_B1_Command_Droid_Training_F", //
			"O_DBA_CIS_B1_Heavy_Droid_Training_F",
			"O_DBA_CIS_B1_Sniper_Droid_Training_F",
			"O_DBA_CIS_B1_Droid_Winter_F",
			"O_DBA_CIS_B1_Flamer_Droid_Winter_F",
			"O_DBA_CIS_B1_AA_Droid_Winter_F",
			"O_DBA_CIS_B1_AT_Droid_Winter_F",
			"O_DBA_CIS_B1_Command_Droid_Winter_F",
			"O_DBA_CIS_B1_Heavy_Droid_Winter_F",
			"O_DBA_CIS_B1_Sniper_Droid_Winter_F",
		};
		weapons[] =
		{
		};
	};
};
class CfgVehicles {

	class O_soldier_base_F;
	class O_Soldier_F : O_soldier_base_F
	{
		class HitPoints;
	};
	class O_DBA_CIS_B1_Base_F : O_Soldier_F
	{
		DBA_IsDroid = 1;
		scope = 0;
		scopeCurator = 0;
		displayName = "";
		editorSubcategory = "O_DBA_CIS_B1_Droids";
		vehicleClass = "O_DBA_CIS_B1_Droids";
		side = 0;
		faction = "O_DBA_CIS_F";
		genericNames = "JLTS_DroidsB1";
		model = "\MRC\JLTS\characters\DroidArmor\DroidUniformB1.p3d";
		hiddenSelections[] = {"camo1"};
		identityTypes[] =
		{
			"NoGlasses",
			"Head_NATO"
		};
		facewear = "";
		uniformClass = "";
		linkedItems[] =
		{
			"ItemMap",
			"ItemGPS",
			"ItemCompass"
		};
		respawnLinkedItems[] =
		{
			"ItemMap",
			"ItemGPS",
			"ItemCompass"
		};
		weapons[] = {};
		respawnWeapons[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
		items[] = {};
		respawnItems[] = {};
		armor = 5;
		armorStructural = 1;
		explosionShielding = 0.1;
		minTotalDamageThreshold = 0.001;
		impactDamageMultiplier = 0.5;
		impactEffectsBlood = "ImpactMetal";
		class HitPoints
		{
			class HitFace
			{
				armor = 1;
				material = -1;
				name = "face_hub";
				passThrough = 0.1;
				radius = 0.079999998;
				explosionShielding = 1.5;
				minimalHit = 0.0099999998;
			};
			class HitNeck : HitFace
			{
				armor = 5;
				name = "neck";
				radius = 0.1;
			};
			class HitHead : HitNeck
			{
				armor = 1;
				name = "head";
				radius = 0.2;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis
			{
				armor = 5;
				material = -1;
				name = "pelvis";
				passThrough = 0.1;
				radius = 0.2;
				explosionShielding = 2;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitAbdomen : HitPelvis
			{
				name = "spine1";
				radius = 0.15000001;
			};
			class HitDiaphragm : HitAbdomen
			{
				name = "spine2";
			};
			class HitChest : HitDiaphragm
			{
				name = "spine3";
			};
			class HitBody : HitChest
			{
				armor = 1000;
				name = "body";
				radius = 0.16;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms
			{
				armor = 15;
				material = -1;
				name = "arms";
				passThrough = 0.1;
				radius = 0.1;
				explosionShielding = 2;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
			};
			class HitHands : HitArms
			{
				name = "hands";
				depends = "HitArms";
			};
			class HitLegs
			{
				armor = 15;
				material = -1;
				name = "legs";
				passThrough = 0.1;
				radius = 0.12;
				explosionShielding = 2;
				visual = "injury_legs";
				minimalHit = 0.0099999998;
			};
		};
	};
	class O_DBA_CIS_B1_Droid_F : O_DBA_CIS_B1_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "B1 Droid";
		side = 0;
		faction = "O_DBA_CIS_F";
		editorPreview = "DBA_CIS\Addons\EditorPreviews_F\Data\O_DBA_CIS_B1_Droid_F.jpg";
		hiddenSelectionsTextures[] =
		{
			"\MRC\JLTS\characters\DroidArmor\data\b1_co.paa"
		};
		identityTypes[] =
		{
			"NoGlasses",
			"Head_NATO"
		};
		facewear = "";
		uniformClass = "DBA_B1";
		weapons[] =
		{
			"JLTS_E5",
			"Throw",
			"Put"
		};
		respawnWeapons[] =
		{
			"JLTS_E5",
			"Throw",
			"Put"
		};
		magazines[] =
		{
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"Chemlight_yellow",
			"Chemlight_yellow",
			"Chemlight_yellow",
			"Chemlight_yellow",
			"Chemlight_yellow",
			"Chemlight_yellow",
			"DBA_thermaldet_x1_mag",
			"DBA_thermaldet_x1_mag",
			"DBA_thermaldet_x1_mag"
		};
		respawnMagazines[] =
		{
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"Chemlight_yellow",
			"Chemlight_yellow",
			"Chemlight_yellow",
			"Chemlight_yellow",
			"Chemlight_yellow",
			"Chemlight_yellow",
			"DBA_thermaldet_x1_mag",
			"DBA_thermaldet_x1_mag",
			"DBA_thermaldet_x1_mag"
		};
		items[] =
		{
			"ACE_CableTie",
			"ACE_CableTie",
			"ACE_CableTie"
		};
		respawnItems[] =
		{
			"ACE_CableTie",
			"ACE_CableTie",
			"ACE_CableTie"
		};
		backpack = "DBA_B1_Backpack";
	};
	class O_DBA_CIS_B1_Flamer_Droid_F : O_DBA_CIS_B1_Droid_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "B1 Flamer Droid";
		side = 0;
		faction = "O_DBA_CIS_F";
		editorPreview = "DBA_CIS\Addons\EditorPreviews_F\Data\O_DBA_CIS_B1_Droid_F.jpg";
		hiddenSelectionsTextures[] =
		{
			"\MRC\JLTS\characters\DroidArmor\data\b1_co.paa"
		};
		identityTypes[] =
		{
			"NoGlasses",
			"Head_NATO"
		};
		facewear = "";
		uniformClass = "DBA_B1_Flamer";
		weapons[] =
		{
			"3AS_Flamer_Base",
			"Throw",
			"Put"
		};
		respawnWeapons[] =
		{
			"3AS_Flamer_Base",
			"Throw",
			"Put"
		};
		magazines[] =
		{
			"3AS_FlamerFuel",
			"3AS_FlamerFuel",
			"3AS_FlamerFuel",
			"3AS_FlamerFuel",
			"3AS_FlamerFuel",
			"3AS_FlamerFuel",
			"3AS_FlamerFuel",
			"3AS_FlamerFuel",
			"3AS_FlamerFuel",
			"3AS_FlamerFuel",
			"3AS_FlamerFuel",
			"Chemlight_yellow",
			"Chemlight_yellow",
			"Chemlight_yellow",
			"Chemlight_yellow",
			"Chemlight_yellow",
			"Chemlight_yellow",
			"DBA_thermaldet_x1_mag",
			"DBA_thermaldet_x1_mag",
			"DBA_thermaldet_x1_mag"
		};
		respawnMagazines[] =
		{
			"3AS_FlamerFuel",
			"3AS_FlamerFuel",
			"3AS_FlamerFuel",
			"3AS_FlamerFuel",
			"3AS_FlamerFuel",
			"3AS_FlamerFuel",
			"3AS_FlamerFuel",
			"3AS_FlamerFuel",
			"3AS_FlamerFuel",
			"3AS_FlamerFuel",
			"3AS_FlamerFuel",
			"Chemlight_yellow",
			"Chemlight_yellow",
			"Chemlight_yellow",
			"Chemlight_yellow",
			"Chemlight_yellow",
			"Chemlight_yellow",
			"DBA_thermaldet_x1_mag",
			"DBA_thermaldet_x1_mag",
			"DBA_thermaldet_x1_mag"
		};
		items[] =
		{
			"ACE_CableTie",
			"ACE_CableTie",
			"ACE_CableTie"
		};
		respawnItems[] =
		{
			"ACE_CableTie",
			"ACE_CableTie",
			"ACE_CableTie"
		};
		backpack = "DBA_B1_Backpack";
	};
	class O_DBA_CIS_B1_Command_Droid_F : O_DBA_CIS_B1_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "B1 Command Droid";
		side = 0;
		faction = "O_DBA_CIS_F";
		editorPreview = "DBA_CIS\Addons\EditorPreviews_F\Data\O_DBA_CIS_OOM_Command_Droid_F.jpg";
		genericNames = "JLTS_DroidsOOM";
		hiddenSelectionsTextures[] =
		{
			"\MRC\JLTS\characters\DroidArmor\data\b1_commander_co.paa"
		};
		identityTypes[] =
		{
			"NoGlasses",
			"Head_NATO"
		};
		facewear = "";
		uniformClass = "DBA_B1_Command";
		weapons[] =
		{
			"JLTS_E5",
			"Throw",
			"Put"
		};
		respawnWeapons[] =
		{
			"JLTS_E5",
			"Throw",
			"Put"
		};
		magazines[] =
		{
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"DBA_SN3_x1_Grenade",
			"DBA_SN3_x1_Grenade",
			"DBA_SN3_x1_Grenade"
		};
		respawnMagazines[] =
		{
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"DBA_SN3_x1_Grenade",
			"DBA_SN3_x1_Grenade",
			"DBA_SN3_x1_Grenade"
		};
		items[] =
		{
			"ACE_CableTie",
			"ACE_CableTie",
			"ACE_CableTie"
		};
		respawnItems[] =
		{
			"ACE_CableTie",
			"ACE_CableTie",
			"ACE_CableTie"
		};
		backpack = "DBA_B1_Antenna";
	};
	class O_DBA_CIS_B1_Crew_Droid_F : O_DBA_CIS_B1_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "B1 Crew Droid";
		side = 0;
		faction = "O_DBA_CIS_F";
		editorPreview = "DBA_CIS\Addons\EditorPreviews_F\Data\O_DBA_CIS_B1_Crew_Droid_F.jpg";
		hiddenSelectionsTextures[] =
		{
			"\MRC\JLTS\characters\DroidArmor\data\b1_crew_co.paa"
		};
		identityTypes[] =
		{
			"NoGlasses",
			"Head_NATO"
		};
		facewear = "";
		uniformClass = "DBA_B1_Crew";
		weapons[] =
		{
			"JLTS_E5",
			"Throw",
			"Put"
		};
		respawnWeapons[] =
		{
			"JLTS_E5",
			"Throw",
			"Put"
		};
		magazines[] =
		{
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"Chemlight_yellow",
			"Chemlight_yellow",
			"Chemlight_yellow",
			"Chemlight_yellow",
			"Chemlight_yellow",
			"Chemlight_yellow",
			"DBA_thermaldet_x1_mag",
			"DBA_thermaldet_x1_mag",
			"DBA_thermaldet_x1_mag"
		};
		respawnMagazines[] =
		{
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"Chemlight_yellow",
			"Chemlight_yellow",
			"Chemlight_yellow",
			"Chemlight_yellow",
			"Chemlight_yellow",
			"Chemlight_yellow",
			"DBA_thermaldet_x1_mag",
			"DBA_thermaldet_x1_mag",
			"DBA_thermaldet_x1_mag"
		};
		items[] =
		{
			"ACE_CableTie",
			"ACE_CableTie",
			"ACE_CableTie"
		};
		respawnItems[] =
		{
			"ACE_CableTie",
			"ACE_CableTie",
			"ACE_CableTie"
		};
		backpack = "DBA_B1_Backpack";
	};
	class O_DBA_CIS_B1_Heavy_Droid_F : O_DBA_CIS_B1_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "B1 Heavy Droid";
		side = 0;
		faction = "O_DBA_CIS_F";
		editorPreview = "DBA_CIS\Addons\EditorPreviews_F\Data\O_DBA_CIS_B1_Heavy_Droid_F.jpg";
		identityTypes[] =
		{
			"NoGlasses",
			"Head_NATO"
		};
		facewear = "";
		uniformClass = "DBA_B1_Heavy";
		weapons[] =
		{
			"JLTS_E5C_stock",
			"Throw",
			"Put"
		};
		respawnWeapons[] =
		{
			"JLTS_E5C_stock",
			"Throw",
			"Put"
		};
		magazines[] =
		{
			"JLTS_E5C_mag",
			"JLTS_E5C_mag",
			"JLTS_E5C_mag",
			"JLTS_E5C_mag",
			"JLTS_E5C_mag",
			"JLTS_E5C_mag",
			"JLTS_E5C_mag",
			"JLTS_E5C_mag",
			"JLTS_E5C_mag",
			"JLTS_E5C_mag",
			"JLTS_E5C_mag",
			"SmokeShellYellow",
			"SmokeShellYellow",
			"SmokeShellYellow",
			"SmokeShellYellow",
			"SmokeShellYellow",
			"SmokeShellYellow",
			"DBA_SN3_x1_Grenade",
			"DBA_SN3_x1_Grenade",
			"DBA_SN3_x1_Grenade",
			"DBA_imploder_x1_mag"
		};
		respawnMagazines[] =
		{
			"JLTS_E5C_mag",
			"JLTS_E5C_mag",
			"JLTS_E5C_mag",
			"JLTS_E5C_mag",
			"JLTS_E5C_mag",
			"JLTS_E5C_mag",
			"JLTS_E5C_mag",
			"JLTS_E5C_mag",
			"JLTS_E5C_mag",
			"JLTS_E5C_mag",
			"JLTS_E5C_mag",
			"SmokeShellYellow",
			"SmokeShellYellow",
			"SmokeShellYellow",
			"SmokeShellYellow",
			"SmokeShellYellow",
			"SmokeShellYellow",
			"DBA_SN3_x1_Grenade",
			"DBA_SN3_x1_Grenade",
			"DBA_SN3_x1_Grenade",
			"DBA_imploder_x1_mag"
		};
		items[] =
		{
			"ACE_CableTie",
			"ACE_CableTie",
			"ACE_CableTie"
		};
		respawnItems[] =
		{
			"ACE_CableTie",
			"ACE_CableTie",
			"ACE_CableTie"
		};
		backpack = "DBA_B1_Backpack";
		armor = 6;
		armorStructural = 2;
		explosionShielding = 0.1;
		minTotalDamageThreshold = 0.001;
		impactDamageMultiplier = 0.5;
		impactEffectsBlood = "ImpactMetal";
		class HitPoints
		{
			class HitFace
			{
				armor = 3;
				material = -1;
				name = "face_hub";
				passThrough = 0.1;
				radius = 0.079999998;
				explosionShielding = 1.5;
				minimalHit = 0.0099999998;
			};
			class HitNeck : HitFace
			{
				armor = 6;
				name = "neck";
				radius = 0.1;
			};
			class HitHead : HitNeck
			{
				armor = 3;
				name = "head";
				radius = 0.2;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis
			{
				armor = 6;
				material = -1;
				name = "pelvis";
				passThrough = 0.1;
				radius = 0.2;
				explosionShielding = 2;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitAbdomen : HitPelvis
			{
				name = "spine1";
				radius = 0.15000001;
			};
			class HitDiaphragm : HitAbdomen
			{
				name = "spine2";
			};
			class HitChest : HitDiaphragm
			{
				name = "spine3";
			};
			class HitBody : HitChest
			{
				armor = 1000;
				name = "body";
				radius = 0.16;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms
			{
				armor = 18;
				material = -1;
				name = "arms";
				passThrough = 0.1;
				radius = 0.1;
				explosionShielding = 2;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
			};
			class HitHands : HitArms
			{
				name = "hands";
				depends = "HitArms";
			};
			class HitLegs
			{
				armor = 18;
				material = -1;
				name = "legs";
				passThrough = 0.1;
				radius = 0.12;
				explosionShielding = 2;
				visual = "injury_legs";
				minimalHit = 0.0099999998;
			};
		};
	};
	class O_DBA_CIS_B1_Marine_Droid_F : O_DBA_CIS_B1_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "B1 Marine Droid";
		side = 0;
		faction = "O_DBA_CIS_F";
		editorPreview = "DBA_CIS\Addons\EditorPreviews_F\Data\O_DBA_CIS_OOM_Marine_Droid_F.jpg";
		hiddenSelectionsTextures[] =
		{
			"\MRC\JLTS\characters\DroidArmor\data\b1_marine_co.paa"
		};
		identityTypes[] =
		{
			"NoGlasses",
			"Head_NATO"
		};
		facewear = "";
		uniformClass = "DBA_B1_Marine";
		weapons[] =
		{
			"JLTS_E5",
			"JLTS_E60R_AT",
			"Throw",
			"Put"
		};
		respawnWeapons[] =
		{
			"JLTS_E5",
			"JLTS_E60R_AT",
			"Throw",
			"Put"
		};
		magazines[] =
		{
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"DBA_thermaldet_x1_mag",
			"DBA_thermaldet_x1_mag",
			"DBA_thermaldet_x1_mag",
			"DBA_imploder_x1_mag"
		};
		respawnMagazines[] =
		{
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"DBA_thermaldet_x1_mag",
			"DBA_thermaldet_x1_mag",
			"DBA_thermaldet_x1_mag",
			"DBA_imploder_x1_mag"
		};
		items[] =
		{
			"ACE_CableTie",
			"ACE_CableTie",
			"ACE_CableTie"
		};
		respawnItems[] =
		{
			"ACE_CableTie",
			"ACE_CableTie",
			"ACE_CableTie"
		};
		backpack = "DBA_B1_Backpack";
	};
	class O_DBA_CIS_B1_Security_Droid_F : O_DBA_CIS_B1_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "B1 Security Droid";
		side = 0;
		faction = "O_DBA_CIS_F";
		editorPreview = "DBA_CIS\Addons\EditorPreviews_F\Data\O_DBA_CIS_OOM_Security_Droid_F.jpg";
		hiddenSelectionsTextures[] =
		{
			"\MRC\JLTS\characters\DroidArmor\data\b1_security_co.paa"
		};
		identityTypes[] =
		{
			"NoGlasses",
			"Head_NATO"
		};
		facewear = "";
		uniformClass = "DBA_B1_Security";
		weapons[] =
		{
			"JLTS_E5",
			"Throw",
			"Put"
		};
		respawnWeapons[] =
		{
			"JLTS_E5",
			"Throw",
			"Put"
		};
		magazines[] =
		{
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"DBA_thermaldet_x1_mag",
			"DBA_thermaldet_x1_mag",
			"DBA_thermaldet_x1_mag",
			"DBA_imploder_x1_mag"
		};
		respawnMagazines[] =
		{
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"DBA_thermaldet_x1_mag",
			"DBA_thermaldet_x1_mag",
			"DBA_thermaldet_x1_mag",
			"DBA_imploder_x1_mag"
		};
		items[] =
		{
			"ACE_CableTie",
			"ACE_CableTie",
			"ACE_CableTie"
		};
		respawnItems[] =
		{
			"ACE_CableTie",
			"ACE_CableTie",
			"ACE_CableTie"
		};
		backpack = "DBA_B1_Backpack";
	};
	class O_DBA_CIS_B1_Pilot_Droid_F : O_DBA_CIS_B1_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "B1 Pilot Droid";
		side = 0;
		faction = "O_DBA_CIS_F";
		editorPreview = "DBA_CIS\Addons\EditorPreviews_F\Data\O_DBA_CIS_OOM_Pilot_Droid_F.jpg";
		hiddenSelectionsTextures[] =
		{
			"\MRC\JLTS\characters\DroidArmor\data\b1_pilot_co.paa"
		};
		identityTypes[] =
		{
			"NoGlasses",
			"Head_NATO"
		};
		facewear = "";
		uniformClass = "DBA_B1_Pilot";
		weapons[] =
		{
			"JLTS_E5",
			"Throw",
			"Put"
		};
		respawnWeapons[] =
		{
			"JLTS_E5",
			"Throw",
			"Put"
		};
		magazines[] =
		{
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"SmokeShellYellow",
			"SmokeShellYellow",
			"SmokeShellYellow",
			"SmokeShellYellow",
			"SmokeShellYellow",
			"SmokeShellYellow",
			"DBA_thermaldet_x1_mag",
			"DBA_thermaldet_x1_mag",
			"DBA_thermaldet_x1_mag",
			"DBA_imploder_x1_mag"
		};
		respawnMagazines[] =
		{
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"SmokeShellYellow",
			"SmokeShellYellow",
			"SmokeShellYellow",
			"SmokeShellYellow",
			"SmokeShellYellow",
			"SmokeShellYellow",
			"DBA_thermaldet_x1_mag",
			"DBA_thermaldet_x1_mag",
			"DBA_thermaldet_x1_mag",
			"DBA_imploder_x1_mag"
		};
		items[] =
		{
			"ACE_CableTie",
			"ACE_CableTie",
			"ACE_CableTie",
			"ACE_CableTie",
			"ACE_CableTie",
			"ACE_CableTie",
			"ACE_CableTie"
		};
		respawnItems[] =
		{
			"ACE_CableTie",
			"ACE_CableTie",
			"ACE_CableTie",
			"ACE_CableTie",
			"ACE_CableTie",
			"ACE_CableTie",
			"ACE_CableTie"
		};
		backpack = "DBA_B1_Antenna";
	};
	class O_DBA_CIS_B1_Sniper_Droid_F : O_DBA_CIS_B1_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "B1 Sniper Droid";
		side = 0;
		faction = "O_DBA_CIS_F";
		editorPreview = "DBA_CIS\Addons\EditorPreviews_F\Data\O_DBA_CIS_B1_Sniper_Droid_F.jpg";
		hiddenSelectionsTextures[] =
		{
			"DBA_CIS\Addons\DBA_Armour\DBA_B1Battledroid\data\Normal_B1_Sniper_Body_CO.paa"
		};
		identityTypes[] =
		{
			"NoGlasses",
			"Head_NATO"
		};
		facewear = "";
		uniformClass = "DBA_B1_Sniper";
		weapons[] =
		{
			"JLTS_E5S",
			"Throw",
			"Put"
		};
		respawnWeapons[] =
		{
			"JLTS_E5S",
			"Throw",
			"Put"
		};
		magazines[] =
		{
			"JLTS_E5S_mag",
			"JLTS_E5S_mag",
			"JLTS_E5S_mag",
			"JLTS_E5S_mag",
			"JLTS_E5S_mag",
			"JLTS_E5S_mag",
			"JLTS_E5S_mag",
			"JLTS_E5S_mag",
			"JLTS_E5S_mag",
			"JLTS_E5S_mag",
			"JLTS_E5S_mag",
			"SmokeShellYellow",
			"SmokeShellYellow",
			"SmokeShellYellow",
			"SmokeShellYellow",
			"SmokeShellYellow",
			"SmokeShellYellow",
			"DBA_SN3_x1_Grenade",
			"DBA_thermaldet_x1_mag",
			"DBA_thermaldet_x1_mag",
			"DBA_imploder_x1_mag"
		};
		respawnMagazines[] =
		{
			"JLTS_E5S_mag",
			"JLTS_E5S_mag",
			"JLTS_E5S_mag",
			"JLTS_E5S_mag",
			"JLTS_E5S_mag",
			"JLTS_E5S_mag",
			"JLTS_E5S_mag",
			"JLTS_E5S_mag",
			"JLTS_E5S_mag",
			"JLTS_E5S_mag",
			"JLTS_E5S_mag",
			"SmokeShellYellow",
			"SmokeShellYellow",
			"SmokeShellYellow",
			"SmokeShellYellow",
			"SmokeShellYellow",
			"SmokeShellYellow",
			"DBA_SN3_x1_Grenade",
			"DBA_thermaldet_x1_mag",
			"DBA_thermaldet_x1_mag",
			"DBA_imploder_x1_mag"
		};
		items[] =
		{
			"ACE_CableTie",
			"ACE_CableTie",
			"ACE_CableTie",
			"ACE_CableTie",
			"ACE_CableTie",
			"ACE_CableTie",
			"ACE_CableTie"
		};
		respawnItems[] =
		{
			"ACE_CableTie",
			"ACE_CableTie",
			"ACE_CableTie",
			"ACE_CableTie",
			"ACE_CableTie",
			"ACE_CableTie",
			"ACE_CableTie"
		};
		backpack = "DBA_B1_Antenna";
	};
	class O_DBA_CIS_B1_AA_Droid_F : O_DBA_CIS_B1_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "B1 AA Droid";
		side = 0;
		faction = "O_DBA_CIS_F";
		editorPreview = "DBA_CIS\Addons\EditorPreviews_F\Data\O_DBA_CIS_B1_AA_Droid_F.jpg";
		identityTypes[] =
		{
			"NoGlasses",
			"Head_NATO"
		};
		facewear = "";
		uniformClass = "DBA_B1_AA";
		weapons[] =
		{
			"JLTS_E5",
			"launch_B_Titan_F",
			"Throw",
			"Put"
		};
		respawnWeapons[] =
		{
			"JLTS_E5",
			"launch_B_Titan_F",
			"Throw",
			"Put"
		};
		magazines[] =
		{
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"SmokeShellYellow",
			"SmokeShellYellow",
			"SmokeShellYellow",
			"SmokeShellYellow",
			"SmokeShellYellow",
			"SmokeShellYellow",
			"Titan_AA",
			"Titan_AA",
			"DBA_thermaldet_x1_mag",
			"DBA_thermaldet_x1_mag",
			"DBA_thermaldet_x1_mag",
			"DBA_imploder_x1_mag"
		};
		respawnMagazines[] =
		{
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"SmokeShellYellow",
			"SmokeShellYellow",
			"SmokeShellYellow",
			"SmokeShellYellow",
			"SmokeShellYellow",
			"SmokeShellYellow",
			"Titan_AA",
			"Titan_AA",
			"DBA_thermaldet_x1_mag",
			"DBA_thermaldet_x1_mag",
			"DBA_thermaldet_x1_mag",
			"DBA_imploder_x1_mag"
		};
		items[] =
		{
			"ACE_CableTie",
			"ACE_CableTie",
			"ACE_CableTie"
		};
		respawnItems[] =
		{
			"ACE_CableTie",
			"ACE_CableTie",
			"ACE_CableTie"
		};
		backpack = "DBA_B1_Backpack";
	};
	class O_DBA_CIS_B1_AT_Droid_F : O_DBA_CIS_B1_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "B1 AT Droid";
		side = 0;
		faction = "O_DBA_CIS_F";
		editorPreview = "DBA_CIS\Addons\EditorPreviews_F\Data\O_DBA_CIS_B1_AT_Droid_F.jpg";
		identityTypes[] =
		{
			"NoGlasses",
			"Head_NATO"
		};
		facewear = "";
		uniformClass = "DBA_B1_AT";
		weapons[] =
		{
			"JLTS_E5",
			"JLTS_E60R_AT",
			"Throw",
			"Put"
		};
		respawnWeapons[] =
		{
			"JLTS_E5",
			"JLTS_E60R_AT",
			"Throw",
			"Put"
		};
		magazines[] =
		{
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"SmokeShellYellow",
			"SmokeShellYellow",
			"SmokeShellYellow",
			"SmokeShellYellow",
			"SmokeShellYellow",
			"SmokeShellYellow",
			"JLTS_E60R_AT_mag",
			"JLTS_E60R_AT_mag",
			"DBA_thermaldet_x1_mag",
			"DBA_thermaldet_x1_mag",
			"DBA_thermaldet_x1_mag",
			"DBA_imploder_x1_mag"
		};
		respawnMagazines[] =
		{
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"SmokeShellYellow",
			"SmokeShellYellow",
			"SmokeShellYellow",
			"SmokeShellYellow",
			"SmokeShellYellow",
			"SmokeShellYellow",
			"JLTS_E60R_AT_mag",
			"JLTS_E60R_AT_mag",
			"DBA_thermaldet_x1_mag",
			"DBA_thermaldet_x1_mag",
			"DBA_thermaldet_x1_mag",
			"DBA_imploder_x1_mag"
		};
		items[] =
		{
			"ACE_CableTie",
			"ACE_CableTie",
			"ACE_CableTie"
		};
		respawnItems[] =
		{
			"ACE_CableTie",
			"ACE_CableTie",
			"ACE_CableTie"
		};
		backpack = "DBA_B1_Backpack";
	};
	class O_DBA_CIS_B1_Rocket_Droid_F : O_DBA_CIS_B1_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "B1 Rocket Droid";
		side = 0;
		faction = "O_DBA_CIS_F";
		editorPreview = "DBA_CIS\Addons\EditorPreviews_F\Data\O_DBA_CIS_B1_Rocket_Droid_F.jpg";
		hiddenSelectionsTextures[] =
		{
			"\MRC\JLTS\characters\DroidArmor\data\b1_rocket_co.paa"
		};
		identityTypes[] =
		{
			"NoGlasses",
			"Head_NATO"
		};
		facewear = "";
		uniformClass = "DBA_B1_Rocket";
		weapons[] =
		{
			"JLTS_E5",
			"JLTS_E60R_AT",
			"Throw",
			"Put"
		};
		respawnWeapons[] =
		{
			"JLTS_E5",
			"JLTS_E60R_AT",
			"Throw",
			"Put"
		};
		magazines[] =
		{
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"SmokeShellYellow",
			"SmokeShellYellow",
			"SmokeShellYellow",
			"SmokeShellYellow",
			"SmokeShellYellow",
			"SmokeShellYellow",
			"JLTS_E60R_AT_mag",
			"JLTS_E60R_AT_mag",
			"DBA_thermaldet_x1_mag",
			"DBA_thermaldet_x1_mag",
			"DBA_thermaldet_x1_mag",
			"DBA_imploder_x1_mag",
			"101st_throwable_c_type_x1_mag"
		};
		respawnMagazines[] =
		{
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"SmokeShellYellow",
			"SmokeShellYellow",
			"SmokeShellYellow",
			"SmokeShellYellow",
			"SmokeShellYellow",
			"SmokeShellYellow",
			"JLTS_E60R_AT_mag",
			"JLTS_E60R_AT_mag",
			"DBA_thermaldet_x1_mag",
			"DBA_thermaldet_x1_mag",
			"DBA_thermaldet_x1_mag",
			"DBA_imploder_x1_mag",
			"101st_throwable_c_type_x1_mag"
		};
		items[] =
		{
			"ACE_CableTie",
			"ACE_CableTie",
			"ACE_CableTie"
		};
		respawnItems[] =
		{
			"ACE_CableTie",
			"ACE_CableTie",
			"ACE_CableTie"
		};
		backpack = "DBA_B1_Jetpack";
	};

	class O_DBA_CIS_B1_Droid_Geonosis_F : O_DBA_CIS_B1_Droid_F
	{
		editorSubcategory = "O_DBA_CIS_B1_Droids_Geonosis";
		vehicleClass = "O_DBA_CIS_B1_Droids_Geonosis";
		editorPreview = "DBA_CIS\Addons\EditorPreviews_F\Data\O_DBA_CIS_B1_Droid_Geonosis_F.jpg";
		uniformClass = "DBA_B1_Geonosis";
		backpack = "DBA_B1_Backpack_GeonosisCamo";
		hiddenSelectionsTextures[] =
		{
			"\MRC\JLTS\characters\DroidUnits\data\Droid_B1Geonosis_co.paa"
		};
	};
	class O_DBA_CIS_B1_Flamer_Droid_Geonosis_F : O_DBA_CIS_B1_Flamer_Droid_F
	{
		editorSubcategory = "O_DBA_CIS_B1_Droids_Geonosis";
		vehicleClass = "O_DBA_CIS_B1_Droids_Geonosis";
		editorPreview = "DBA_CIS\Addons\EditorPreviews_F\Data\O_DBA_CIS_B1_Droid_Geonosis_F.jpg";
		uniformClass = "DBA_B1_Geonosis";
		backpack = "DBA_B1_Backpack_GeonosisCamo";
		hiddenSelectionsTextures[] =
		{
			"\MRC\JLTS\characters\DroidUnits\data\Droid_B1Geonosis_co.paa"
		};
	};
	class O_DBA_CIS_B1_AA_Droid_Geonosis_F : O_DBA_CIS_B1_AA_Droid_F
	{
		editorSubcategory = "O_DBA_CIS_B1_Droids_Geonosis";
		vehicleClass = "O_DBA_CIS_B1_Droids_Geonosis";
		editorPreview = "DBA_CIS\Addons\EditorPreviews_F\Data\O_DBA_CIS_B1_AA_Droid_Geonosis_F.jpg";
		uniformClass = "DBA_B1_Geonosis";
		backpack = "DBA_B1_Backpack_GeonosisCamo";
		hiddenSelectionsTextures[] =
		{
			"\MRC\JLTS\characters\DroidUnits\data\Droid_B1Geonosis_co.paa"
		};
	};
	class O_DBA_CIS_B1_AT_Droid_Geonosis_F : O_DBA_CIS_B1_AT_Droid_F
	{
		editorSubcategory = "O_DBA_CIS_B1_Droids_Geonosis";
		vehicleClass = "O_DBA_CIS_B1_Droids_Geonosis";
		editorPreview = "DBA_CIS\Addons\EditorPreviews_F\Data\O_DBA_CIS_B1_AT_Droid_Geonosis_F.jpg";
		uniformClass = "DBA_B1_Geonosis";
		backpack = "DBA_B1_Backpack_GeonosisCamo";
		hiddenSelectionsTextures[] =
		{
			"\MRC\JLTS\characters\DroidUnits\data\Droid_B1Geonosis_co.paa"
		};
	};
	class O_DBA_CIS_B1_Command_Droid_Geonosis_F : O_DBA_CIS_B1_Command_Droid_F
	{
		editorSubcategory = "O_DBA_CIS_B1_Droids_Geonosis";
		vehicleClass = "O_DBA_CIS_B1_Droids_Geonosis";
		editorPreview = "DBA_CIS\Addons\EditorPreviews_F\Data\O_DBA_CIS_OOM_Command_Droid_Geonosis_F.jpg";
		uniformClass = "DBA_B1_Geonosis_Commander";
		backpack = "DBA_B1_Antenna_GeonosisCamo";
		hiddenSelectionsTextures[] =
		{
			"\MRC\JLTS\characters\DroidUnits\data\Droid_B1GeonosisCommander_co.paa"
		};
	};
	class O_DBA_CIS_B1_Heavy_Droid_Geonosis_F : O_DBA_CIS_B1_Heavy_Droid_F
	{
		editorSubcategory = "O_DBA_CIS_B1_Droids_Geonosis";
		vehicleClass = "O_DBA_CIS_B1_Droids_Geonosis";
		editorPreview = "DBA_CIS\Addons\EditorPreviews_F\Data\O_DBA_CIS_B1_Heavy_Droid_Geonosis_F.jpg";
		uniformClass = "DBA_B1_Geonosis";
		backpack = "DBA_B1_Backpack_GeonosisCamo";
		hiddenSelectionsTextures[] =
		{
			"\MRC\JLTS\characters\DroidUnits\data\Droid_B1Geonosis_co.paa"
		};
	};
	class O_DBA_CIS_B1_Sniper_Droid_Geonosis_F : O_DBA_CIS_B1_Sniper_Droid_F
	{
		editorSubcategory = "O_DBA_CIS_B1_Droids_Geonosis";
		vehicleClass = "O_DBA_CIS_B1_Droids_Geonosis";
		editorPreview = "DBA_CIS\Addons\EditorPreviews_F\Data\O_DBA_CIS_B1_Sniper_Droid_Geonosis_F.jpg";
		uniformClass = "DBA_B1_Sniper_Geonosis";
		backpack = "DBA_B1_Backpack_GeonosisCamo";
		hiddenSelectionsTextures[] =
		{
			"DBA_CIS\Addons\DBA_Armour\DBA_B1Battledroid\data\Geo_B1_Sniper_Body_CO.paa"
		};
	};
	class O_DBA_CIS_B1_Droid_Jungle_F : O_DBA_CIS_B1_Droid_F
	{
		editorSubcategory = "O_DBA_CIS_B1_Droids_Jungle";
		vehicleClass = "O_DBA_CIS_B1_Droids_Jungle";
		editorPreview = "DBA_CIS\Addons\EditorPreviews_F\Data\O_DBA_CIS_B1_Droid_Jungle_F.jpg";
		uniformClass = "DBA_B1_Jungle";
		backpack = "DBA_B1_Backpack_JungleCamo";
		hiddenSelectionsTextures[] =
		{
			"DBA_CIS\Addons\DBA_Armour\DBA_B1Battledroid\data\Jungle_B1_Body_CO.paa"
		};
	};
	class O_DBA_CIS_B1_Flamer_Droid_Jungle_F : O_DBA_CIS_B1_Flamer_Droid_F
	{
		editorSubcategory = "O_DBA_CIS_B1_Droids_Jungle";
		vehicleClass = "O_DBA_CIS_B1_Droids_Jungle";
		editorPreview = "DBA_CIS\Addons\EditorPreviews_F\Data\O_DBA_CIS_B1_Droid_Jungle_F.jpg";
		uniformClass = "DBA_B1_Jungle";
		backpack = "DBA_B1_Backpack_JungleCamo";
		hiddenSelectionsTextures[] =
		{
			"DBA_CIS\Addons\DBA_Armour\DBA_B1Battledroid\data\Jungle_B1_Body_CO.paa"
		};
	};
	class O_DBA_CIS_B1_AA_Droid_Jungle_F : O_DBA_CIS_B1_AA_Droid_F
	{
		editorSubcategory = "O_DBA_CIS_B1_Droids_Jungle";
		vehicleClass = "O_DBA_CIS_B1_Droids_Jungle";
		editorPreview = "DBA_CIS\Addons\EditorPreviews_F\Data\O_DBA_CIS_B1_AA_Droid_Jungle_F.jpg";
		uniformClass = "DBA_B1_Jungle";
		backpack = "DBA_B1_Backpack_JungleCamo";
		hiddenSelectionsTextures[] =
		{
			"DBA_CIS\Addons\DBA_Armour\DBA_B1Battledroid\data\Jungle_B1_Body_CO.paa"
		};
	};
	class O_DBA_CIS_B1_AT_Droid_Jungle_F : O_DBA_CIS_B1_AT_Droid_F
	{
		editorSubcategory = "O_DBA_CIS_B1_Droids_Jungle";
		vehicleClass = "O_DBA_CIS_B1_Droids_Jungle";
		editorPreview = "DBA_CIS\Addons\EditorPreviews_F\Data\O_DBA_CIS_B1_AT_Droid_Jungle_F.jpg";
		uniformClass = "DBA_B1_Jungle";
		backpack = "DBA_B1_Backpack_JungleCamo";
		hiddenSelectionsTextures[] =
		{
			"DBA_CIS\Addons\DBA_Armour\DBA_B1Battledroid\data\Jungle_B1_Body_CO.paa"
		};
	};
	class O_DBA_CIS_B1_Command_Droid_Jungle_F : O_DBA_CIS_B1_Command_Droid_F
	{
		editorSubcategory = "O_DBA_CIS_B1_Droids_Jungle";
		vehicleClass = "O_DBA_CIS_B1_Droids_Jungle";
		editorPreview = "DBA_CIS\Addons\EditorPreviews_F\Data\O_DBA_CIS_OOM_Command_Droid_Jungle_F.jpg";
		uniformClass = "DBA_B1_Jungle";
		backpack = "DBA_B1_Antenna_JungleCamo";
		hiddenSelectionsTextures[] =
		{
			"DBA_CIS\Addons\DBA_Armour\DBA_B1Battledroid\data\Jungle_B1_Body_CO.paa"
		};
	};
	class O_DBA_CIS_B1_Heavy_Droid_Jungle_F : O_DBA_CIS_B1_Heavy_Droid_F
	{
		editorSubcategory = "O_DBA_CIS_B1_Droids_Jungle";
		vehicleClass = "O_DBA_CIS_B1_Droids_Jungle";
		editorPreview = "DBA_CIS\Addons\EditorPreviews_F\Data\O_DBA_CIS_B1_Heavy_Droid_Jungle_F.jpg";
		uniformClass = "DBA_B1_Jungle";
		backpack = "DBA_B1_Backpack_JungleCamo";
		hiddenSelectionsTextures[] =
		{
			"DBA_CIS\Addons\DBA_Armour\DBA_B1Battledroid\data\Jungle_B1_Body_CO.paa"
		};
	};
	class O_DBA_CIS_B1_Sniper_Droid_Jungle_F : O_DBA_CIS_B1_Sniper_Droid_F
	{
		editorSubcategory = "O_DBA_CIS_B1_Droids_Jungle";
		vehicleClass = "O_DBA_CIS_B1_Droids_Jungle";
		editorPreview = "DBA_CIS\Addons\EditorPreviews_F\Data\O_DBA_CIS_B1_Sniper_Droid_Jungle_F.jpg";
		uniformClass = "DBA_B1_Jungle";
		backpack = "DBA_B1_Backpack_JungleCamo";
		hiddenSelectionsTextures[] =
		{
			"DBA_CIS\Addons\DBA_Armour\DBA_B1Battledroid\data\Jungle_B1_Body_CO.paa"
		};
	};
	class O_DBA_CIS_B1_Droid_Training_F : O_DBA_CIS_B1_Droid_F
	{
		editorSubcategory = "O_DBA_CIS_B1_Droids_Training";
		vehicleClass = "O_DBA_CIS_B1_Droids_Training";
		editorPreview = "DBA_CIS\Addons\EditorPreviews_F\Data\O_DBA_CIS_B1_Droid_Training_F.jpg";
		uniformClass = "DBA_B1_Training";
		backpack = "O_DBA_CIS_B1_Backpack_Rifleman_Training";
		hiddenSelectionsTextures[] =
		{
			"\MRC\JLTS\characters\DroidUnits\data\Droid_B1Training_co.paa"
		};
	};
	class O_DBA_CIS_B1_Flamer_Droid_Training_F : O_DBA_CIS_B1_Flamer_Droid_F
	{
		editorSubcategory = "O_DBA_CIS_B1_Droids_Training";
		vehicleClass = "O_DBA_CIS_B1_Droids_Training";
		editorPreview = "DBA_CIS\Addons\EditorPreviews_F\Data\O_DBA_CIS_B1_Droid_Training_F.jpg";
		uniformClass = "DBA_B1_Training";
		backpack = "O_DBA_CIS_B1_Backpack_Rifleman_Training";
		hiddenSelectionsTextures[] =
		{
			"\MRC\JLTS\characters\DroidUnits\data\Droid_B1Training_co.paa"
		};
	};
	class O_DBA_CIS_B1_AA_Droid_Training_F : O_DBA_CIS_B1_AA_Droid_F
	{
		editorSubcategory = "O_DBA_CIS_B1_Droids_Training";
		vehicleClass = "O_DBA_CIS_B1_Droids_Training";
		editorPreview = "DBA_CIS\Addons\EditorPreviews_F\Data\O_DBA_CIS_B1_AA_Droid_Training_F.jpg";
		uniformClass = "DBA_B1_Training";
		backpack = "O_DBA_CIS_B1_Backpack_AA_Training";
		hiddenSelectionsTextures[] =
		{
			"\MRC\JLTS\characters\DroidUnits\data\Droid_B1Training_co.paa"
		};
	};
	class O_DBA_CIS_B1_AT_Droid_Training_F : O_DBA_CIS_B1_AT_Droid_F
	{
		editorSubcategory = "O_DBA_CIS_B1_Droids_Training";
		vehicleClass = "O_DBA_CIS_B1_Droids_Training";
		editorPreview = "DBA_CIS\Addons\EditorPreviews_F\Data\O_DBA_CIS_B1_AT_Droid_Training_F.jpg";
		uniformClass = "DBA_B1_Training";
		backpack = "O_DBA_CIS_B1_Backpack_AT_Training";
		hiddenSelectionsTextures[] =
		{
			"\MRC\JLTS\characters\DroidUnits\data\Droid_B1Training_co.paa"
		};
	};
	class O_DBA_CIS_B1_Command_Droid_Training_F : O_DBA_CIS_B1_Command_Droid_F
	{
		editorSubcategory = "O_DBA_CIS_B1_Droids_Training";
		vehicleClass = "O_DBA_CIS_B1_Droids_Training";
		editorPreview = "DBA_CIS\Addons\EditorPreviews_F\Data\O_DBA_CIS_OOM_Command_Droid_Training_F.jpg";
		uniformClass = "DBA_B1_Training";
		backpack = "O_DBA_CIS_B1_Antenna_Training";
		hiddenSelectionsTextures[] =
		{
			"\MRC\JLTS\characters\DroidUnits\data\Droid_B1Training_co.paa"
		};
	};
	class O_DBA_CIS_B1_Heavy_Droid_Training_F : O_DBA_CIS_B1_Heavy_Droid_F
	{
		editorSubcategory = "O_DBA_CIS_B1_Droids_Training";
		vehicleClass = "O_DBA_CIS_B1_Droids_Training";
		editorPreview = "DBA_CIS\Addons\EditorPreviews_F\Data\O_DBA_CIS_B1_Heavy_Droid_Training_F.jpg";
		uniformClass = "DBA_B1_Training";
		backpack = "O_DBA_CIS_B1_Backpack_Rifleman_Training";
		hiddenSelectionsTextures[] =
		{
			"\MRC\JLTS\characters\DroidUnits\data\Droid_B1Training_co.paa"
		};
	};
	class O_DBA_CIS_B1_Sniper_Droid_Training_F : O_DBA_CIS_B1_Sniper_Droid_F
	{
		editorSubcategory = "O_DBA_CIS_B1_Droids_Training";
		vehicleClass = "O_DBA_CIS_B1_Droids_Training";
		editorPreview = "DBA_CIS\Addons\EditorPreviews_F\Data\O_DBA_CIS_B1_Sniper_Droid_Training_F.jpg";
		uniformClass = "DBA_B1_Training";
		backpack = "O_DBA_CIS_B1_Backpack_Rifleman_Training";
		hiddenSelectionsTextures[] =
		{
			"\MRC\JLTS\characters\DroidUnits\data\Droid_B1Training_co.paa"
		};
	};
	class O_DBA_CIS_B1_Droid_Winter_F : O_DBA_CIS_B1_Droid_F
	{
		editorSubcategory = "O_DBA_CIS_B1_Droids_Winter";
		vehicleClass = "O_DBA_CIS_B1_Droids_Winter";
		editorPreview = "DBA_CIS\Addons\EditorPreviews_F\Data\O_DBA_CIS_B1_Droid_Winter_F.jpg";
		uniformClass = "DBA_B1_Winter";
		backpack = "DBA_B1_Backpack_WinterCamo";
		hiddenSelectionsTextures[] =
		{
			"DBA_CIS\Addons\DBA_Armour\DBA_B1Battledroid\data\Winter_B1_Body_CO.paa"
		};
	};
	class O_DBA_CIS_B1_Flamer_Droid_Winter_F : O_DBA_CIS_B1_Flamer_Droid_F
	{
		editorSubcategory = "O_DBA_CIS_B1_Droids_Winter";
		vehicleClass = "O_DBA_CIS_B1_Droids_Winter";
		editorPreview = "DBA_CIS\Addons\EditorPreviews_F\Data\O_DBA_CIS_B1_Droid_Winter_F.jpg";
		uniformClass = "DBA_B1_Winter";
		backpack = "DBA_B1_Backpack_WinterCamo";
		hiddenSelectionsTextures[] =
		{
			"DBA_CIS\Addons\DBA_Armour\DBA_B1Battledroid\data\Winter_B1_Body_CO.paa"
		};
	};
	class O_DBA_CIS_B1_AA_Droid_Winter_F : O_DBA_CIS_B1_AA_Droid_F
	{
		editorSubcategory = "O_DBA_CIS_B1_Droids_Winter";
		vehicleClass = "O_DBA_CIS_B1_Droids_Winter";
		editorPreview = "DBA_CIS\Addons\EditorPreviews_F\Data\O_DBA_CIS_B1_AA_Droid_Winter_F.jpg";
		uniformClass = "DBA_B1_Winter";
		backpack = "DBA_B1_Backpack_WinterCamo";
		hiddenSelectionsTextures[] =
		{
			"DBA_CIS\Addons\DBA_Armour\DBA_B1Battledroid\data\Winter_B1_Body_CO.paa"
		};
	};
	class O_DBA_CIS_B1_AT_Droid_Winter_F : O_DBA_CIS_B1_AT_Droid_F
	{
		editorSubcategory = "O_DBA_CIS_B1_Droids_Winter";
		vehicleClass = "O_DBA_CIS_B1_Droids_Winter";
		editorPreview = "DBA_CIS\Addons\EditorPreviews_F\Data\O_DBA_CIS_B1_AT_Droid_Winter_F.jpg";
		uniformClass = "DBA_B1_Winter";
		backpack = "DBA_B1_Backpack_WinterCamo";
		hiddenSelectionsTextures[] =
		{
			"DBA_CIS\Addons\DBA_Armour\DBA_B1Battledroid\data\Winter_B1_Body_CO.paa"
		};
	};
	class O_DBA_CIS_B1_Command_Droid_Winter_F : O_DBA_CIS_B1_Command_Droid_F
	{
		editorSubcategory = "O_DBA_CIS_B1_Droids_Winter";
		vehicleClass = "O_DBA_CIS_B1_Droids_Winter";
		editorPreview = "DBA_CIS\Addons\EditorPreviews_F\Data\O_DBA_CIS_OOM_Command_Droid_Winter_F.jpg";
		uniformClass = "DBA_B1_Winter";
		backpack = "DBA_B1_Antenna_WinterCamo";
		hiddenSelectionsTextures[] =
		{
			"DBA_CIS\Addons\DBA_Armour\DBA_B1Battledroid\data\Winter_B1_Body_CO.paa"
		};
	};
	class O_DBA_CIS_B1_Heavy_Droid_Winter_F : O_DBA_CIS_B1_Heavy_Droid_F
	{
		editorSubcategory = "O_DBA_CIS_B1_Droids_Winter";
		vehicleClass = "O_DBA_CIS_B1_Droids_Winter";
		editorPreview = "DBA_CIS\Addons\EditorPreviews_F\Data\O_DBA_CIS_B1_Heavy_Droid_Winter_F.jpg";
		uniformClass = "DBA_B1_Winter";
		backpack = "DBA_B1_Backpack_WinterCamo";
		hiddenSelectionsTextures[] =
		{
			"DBA_CIS\Addons\DBA_Armour\DBA_B1Battledroid\data\Winter_B1_Body_CO.paa"
		};
	};
	class O_DBA_CIS_B1_Sniper_Droid_Winter_F : O_DBA_CIS_B1_Sniper_Droid_F
	{
		editorSubcategory = "O_DBA_CIS_B1_Droids_Winter";
		vehicleClass = "O_DBA_CIS_B1_Droids_Winter";
		editorPreview = "DBA_CIS\Addons\EditorPreviews_F\Data\O_DBA_CIS_B1_Sniper_Droid_Winter_F.jpg";
		uniformClass = "DBA_B1_Winter";
		backpack = "DBA_B1_Backpack_WinterCamo";
		hiddenSelectionsTextures[] =
		{
			"DBA_CIS\Addons\DBA_Armour\DBA_B1Battledroid\data\Winter_B1_Body_CO.paa"
		};
	};
};
class CfgMovesBasic
{
	class Default;
	class StandBase;
	class BlendAnims;
	class Actions
	{
		class Acts_CarFixingWheel_actions;
		class DBA_B1Folding : Acts_CarFixingWheel_actions
		{
			Default = "B1FoldingTransport";
		};
	};
};
class CfgMovesMaleSdr : CfgMovesBasic
{
	class Default : Default
	{
		actions = "DBA_Droideka_MoveSet";
		file = "DBA_CIS\addons\DBA_Units\DBA_Deka\Deka_Curl.rtm";
	};
	class StandBase : StandBase
	{
		actions = "DBA_Droideka_MoveSet";
		file = "DBA_CIS\addons\DBA_Units\DBA_Deka\Deka_Curl.rtm";
	};
	class DefaultDie : Default
	{
		aiming = "aimingNo";
		legs = "legsNo";
		head = "headNo";
		disableWeapons = 1;
		interpolationRestart = 1;
		soundOverride = "fallbody";
		soundEdge[] = { 0.44999999 };
		soundEnabled = 0;
	};
	class States
	{
		class B1FoldingTransport : StandBase
		{
			boundingSphere = 2;
			interpolationSpeed = 3;
			file = "DBA_CIS\addons\DBA_Units\DBA_B1Battledroid\B1FoldingTransport.rtm";
			duty = -1;
			actions = "DBA_B1Folding";
			variantsAI[] = { };
			speed = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
			canPullTrigger = 0;
			canReload = 0;
			limitGunMovement = 1;
			headBobStrength = -1;
			headBobMode = 1;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			enableMissile = 0;
			enableOptics = 1;
			ConnectTo[] =
			{
				"B1FoldedTransport",
				0.01,
			};
			ConnectFrom[] =
			{
			};
			InterpolateTo[] =
			{
				"B1FoldedTransport",
				0.01,
			};
			InterpolateFrom[] =
			{
			};
			preload = 1;
		};
		class B1FoldingUnload : B1FoldingTransport
		{
			file = "DBA_CIS\addons\DBA_Units\DBA_B1Battledroid\B1FoldingTransport.rtm";
			variantsAI[] = {};
			speed = -1;
			disableWeapons = 1;
			soundEdge[] = { 0.4,0.9 };
			soundOverride = "Run";
			soundEnabled = 1;
			ConnectTo[] =
			{
				"Droideka_Roll",1.0
			};
		};
		class B1FoldedTransport : B1FoldingTransport
		{
			file = "DBA_CIS\addons\DBA_Units\DBA_B1Battledroid\B1FoldedTransport.rtm";
			looped = 1;
			speed = 0.45;
			ConnectFrom[] =
			{
				"B1FoldingUnload", 1.0
			};
			ConnectTo[] =
			{
				"B1FoldingTransport", 1.0
			};

		};
	};
};