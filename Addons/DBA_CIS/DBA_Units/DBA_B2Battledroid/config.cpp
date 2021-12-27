class CfgPatches
{
	class DBA_B2BattledroidUnits
	{
		author = "Vulgar";
		name = "DBA B2 Battledroid";
		requiredaddons[] =
		{
			"A3_Characters_F"
		};
		requiredversion = 0.1;
		units[] =
		{
			"DBA_B2Battledroid_F",
			"DBA_B2BattledroidBlue_F",
			"DBA_B2BattledroidRed_F"
		};
		weapons[] =
		{
		};
	};
};

class CfgVehicles
{
	class O_soldier_base_F;
	class O_Soldier_F : O_soldier_base_F
	{
		class HitPoints;
	};
	class DBA_B2Battledroid_F : O_Soldier_F
	{
		DBA_IsDroid = 1;
		DBA_EMPProtection = 1;
		author = "MrClock + Dutch";
		scope = 2;
		displayName = "DBA B2 Battledroid";
		editorPreview = "\MRC\JLTS\characters\DroidArmor\data\ui\editorPreviews\JLTS_Droid_B1_E5.jpg";
		genericNames = "JLTS_DroidsB1";
		faction = "O_DBA_CIS_F";
		editorSubcategory = "O_DBA_CIS_B1_Droids";
		vehicleClass = "O_DBA_CIS_B1_Droids";
		identityTypes[] =
		{
			"NoGlasses",
			"Head_NATO"
		};
		uniformClass = "DBA_B2";
		backpack = "";
		model = "101st_Aux_Mod\Addons\DBA_CIS\DBA_Armour\DBA_B2Battledroid\data\B2.p3d";
		hiddenSelections[] = 
		{
			"camo1", 
			"camo2", 
			"camo3"
		};
		hiddenSelectionsTextures[] = 
		{
			"101st_Aux_Mod\Addons\DBA_CIS\DBA_Armour\DBA_B2Battledroid\data\B2_Bust_CO.paa", 
			"101st_Aux_Mod\Addons\DBA_CIS\DBA_Armour\DBA_B2Battledroid\data\B2_Torso_CO.paa", 
			"101st_Aux_Mod\Addons\DBA_CIS\DBA_Armour\DBA_B2Battledroid\data\B2_Legs_CO.paa"
		};
		linkedItems[] =
		{
			"ItemMap",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[] =
		{
			"ItemMap",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[] =
		{
			"DBA_B2_Weapon",
			"Throw",
			"Put"
		};
		respawnWeapons[] =
		{
			"DBA_B2_Weapon",
			"Throw",
			"Put"
		};
		magazines[] =
		{
			"DBA_B2_Rocket",
			"DBA_B2_Rocket",
			"DBA_B2_Rocket",
			"DBA_B2_Mag",
			"DBA_B2_Mag",
			"DBA_B2_Mag",
			"DBA_B2_Mag",
			"DBA_B2_Mag",
			"DBA_B2_Mag",
			"DBA_B2_Mag",
			"DBA_B2_Mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"DBA_thermaldet_x1_mag",
			"DBA_thermaldet_x1_mag",
			"DBA_thermaldet_x1_mag",
		};
		respawnMagazines[] =
		{
			"DBA_B2_Rocket",
			"DBA_B2_Rocket",
			"DBA_B2_Rocket",
			"DBA_B2_Mag",
			"DBA_B2_Mag",
			"DBA_B2_Mag",
			"DBA_B2_Mag",
			"DBA_B2_Mag",
			"DBA_B2_Mag",
			"DBA_B2_Mag",
			"DBA_B2_Mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"DBA_thermaldet_x1_mag",
			"DBA_thermaldet_x1_mag",
			"DBA_thermaldet_x1_mag",
		};
		items[] = {};
		respawnItems[] = {};
		class HitPoints : HitPoints
		{
			class HitFace
			{
				armor = 8;
				material = -1;
				name = "face_hub";
				passThrough = 0.1;
				radius = 0.079999998;
				explosionShielding = 0.1;
				minimalHit = 0.0099999998;
			};
			class HitNeck : HitFace
			{
				armor = 7;
				material = -1;
				name = "neck";
				passThrough = 0.1;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.0099999998;
			};
			class HitHead : HitNeck
			{
				armor = 8;
				material = -1;
				name = "head";
				passThrough = 0.1;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.0099999998;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis : HitHead
			{
				armor = 7;
				material = -1;
				name = "pelvis";
				passThrough = 0.1;
				radius = 0.23999999;
				explosionShielding = 3;
				visual = "injury_body";
				minimalHit = 0.0099999998;
				depends = "";
			};
			class HitAbdomen : HitPelvis
			{
				armor = 8;
				material = -1;
				name = "spine1";
				passThrough = 0.1;
				radius = 0.16;
				explosionShielding = 3;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitDiaphragm : HitAbdomen
			{
				armor = 8;
				material = -1;
				name = "spine2";
				passThrough = 01;
				radius = 0.18000001;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitChest : HitDiaphragm
			{
				armor = 8;
				material = -1;
				name = "spine3";
				passThrough = 0.1;
				radius = 0.18000001;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitBody : HitChest
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 0.1;
				radius = 0;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms : HitBody
			{
				armor = 20;
				material = -1;
				name = "arms";
				passThrough = 0.5;
				radius = 0.1;
				explosionShielding = 3;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class HitHands : HitArms
			{
				armor = 20;
				material = -1;
				name = "hands";
				passThrough = 0.5;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
				depends = "HitArms";
			};
			class HitLegs : HitHands
			{
				armor = 70;
				material = -1;
				name = "legs";
				passThrough = 0.5;
				radius = 0.14;
				explosionShielding = 3;
				visual = "injury_legs";
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class Incapacitated : HitLegs
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 3;
				visual = "";
				minimalHit = 0;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor = 20;
				material = -1;
				name = "hand_l";
				passThrough = 0.1;
				radius = 0.079999998;
				explosionShielding = 3;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
			};
			class HitRightArm : HitLeftArm
			{
				name = "hand_r";
			};
			class HitLeftLeg
			{
				armor = 20;
				material = -1;
				name = "leg_l";
				passThrough = 0.1;
				radius = 0.1;
				explosionShielding = 3;
				visual = "injury_legs";
				minimalHit = 0.0099999998;
			};
			class HitRightLeg : HitLeftLeg
			{
				name = "leg_r";
			};
		};
		armor = 10;
		armorStructural = 3;
		explosionShielding = 0.40000001;
		minTotalDamageThreshold = 0.001;
		impactDamageMultiplier = 0.5;
	}
	class DBA_B2BattledroidBlue_F : DBA_B2Battledroid_F
	{
		uniformClass = "DBA_B2_Blue";
		DisplayName = "DBA B2 Battledroid [Blue]";
		hiddenSelectionsTextures[] = 
		{ 
			"101st_Aux_Mod\Addons\DBA_CIS\DBA_Armour\DBA_B2Battledroid\data\B2_Blue_Bust_CO.paa", 
			"101st_Aux_Mod\Addons\DBA_CIS\DBA_Armour\DBA_B2Battledroid\data\B2_Blue_Torso_CO.paa", 
			"101st_Aux_Mod\Addons\DBA_CIS\DBA_Armour\DBA_B2Battledroid\data\B2_Blue_Legs_CO.paa" 
		};
	};
	class DBA_B2BattledroidRed_F : DBA_B2Battledroid_F
	{
		uniformClass = "DBA_B2_Red";
		DisplayName = "DBA B2 Battledroid [Red]";
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_CIS\DBA_Armour\DBA_B2Battledroid\data\B2_Red_Bust_CO.paa",
			"101st_Aux_Mod\Addons\DBA_CIS\DBA_Armour\DBA_B2Battledroid\data\B2_Red_Torso_CO.paa",
			"101st_Aux_Mod\Addons\DBA_CIS\DBA_Armour\DBA_B2Battledroid\data\B2_Red_Legs_CO.paa"
		};
	};
};