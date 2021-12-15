class CfgPatches
{
	class DBA_IG88Units
	{
		author = "Vulgar";
		requiredAddons[] =
		{
			"A3_Characters_F"
		};
		requiredVersion = 0.1;
		units[] = {"O_DBA_CIS_BXCommando_F"};
		weapons[] =
		{
		};
	};
};
class DefaultEventhandlers;
class CfgVehicles
{
	class O_soldier_base_F;
	class O_Soldier_F : O_soldier_base_F
	{
		class HitPoints;
	};
	class DBA_CIS_BXCommando_Base : O_Soldier_F
	{
		scope = 0;
		scopeCurator = 0;
		displayName = "BX Commando";
		editorSubcategory = "O_DBA_CIS_Spec_Ops";
		vehicleClass = "O_DBA_CIS_Spec_Ops";
		side = 0;
		faction = "O_DBA_CIS_F";
		editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_BX_Base_F.jpg";
		genericNames = "JLTS_DroidsB1";
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
		armorStructural = 2;
		explosionShielding = 0.1;
		minTotalDamageThreshold = 0.001;
		impactDamageMultiplier = 0.5;
		impactEffectsBlood = "ImpactMetal";
		class HitPoints
		{
			class HitFace
			{
				armor = 6;
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
				armor = 2;
				name = "head";
				radius = 0.2;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis
			{
				armor = 7;
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
	class O_DBA_CIS_BXCommando_F : DBA_CIS_BXCommando_Base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "DBA BX Commando";
		editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_IG101_MagnaGuard_F.jpg";
		uniformClass = "DBA_BXCommando";
		model = "3AS\3as_b1_Low_pol\3AS_LPB1_V3\Model\3AS_BX_DROID.p3d";
		hiddenSelections[] = { "Camo" };
		hiddenSelectionsTextures[] = {"212th\Units\3AS_LPB1_V3\Model\textures\212th_BX_Droid_CO.paa"};
		hiddenSelectionsMaterials[] = {"212th\Units\3AS_LPB1_V3\Model\textures\BX.rvmat"};
		editorSubcategory = "O_DBA_CIS_Spec_Ops";
		vehicleClass = "O_DBA_CIS_Spec_Ops";
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
			"DBA_imploder_x1_mag",
			"DBA_imploder_x1_mag",
			"DBA_imploder_x1_mag",
			"DBA_imploder_x1_mag",
		};
		respawnMagazines[] =
		{
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"DBA_imploder_x1_mag",
			"DBA_imploder_x1_mag",
			"DBA_imploder_x1_mag",
			"DBA_imploder_x1_mag",
		};
		enableStamina = 0;
		accuracy = 3;
		sensitivity = 3;
		sensitivityEar = 0.3;
		camouflage = 1.0;
		precision = 10;
		setAnimSpeedCoef = 1.5;
		minSpeed = -0.5;
		maxSpeed = 200;
		minFireTime = 5;
		irTarget = false;
		items[] = {};
		respawnItems[] = {};
	};
};
