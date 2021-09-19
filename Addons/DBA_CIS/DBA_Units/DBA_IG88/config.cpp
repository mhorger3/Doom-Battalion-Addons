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
		units[] = {"O_DBA_CIS_IG88_F"};
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
	class DBA_CIS_IG_Base : O_Soldier_F
	{
		scope = 0;
		scopeCurator = 0;
		displayName = "IG";
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
		armor = 120
		armorStructural = 10;
		explosionShielding = 0.40000001;
		minTotalDamageThreshold = 0.001;
		impactDamageMultiplier = 0.5;
		impactEffectsBlood = "ImpactMetal";
		class HitPoints
		{
			class HitFace
			{
				armor = 10;
				material = -1;
				name = "face_hub";
				passThrough = 0.80000001;
				radius = 0.079999998;
				explosionShielding = 0.1;
				minimalHit = 0.0099999998;
			};
			class HitNeck : HitFace
			{
				armor = 10;
				material = -1;
				name = "neck";
				passThrough = 0.80000001;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.0099999998;
			};
			class HitHead : HitNeck
			{
				armor = 10;
				material = -1;
				name = "head";
				passThrough = 0.80000001;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.0099999998;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis : HitHead
			{
				armor = 15;
				material = -1;
				name = "pelvis";
				passThrough = 0.80000001;
				radius = 0.23999999;
				explosionShielding = .5;
				visual = "injury_body";
				minimalHit = 0.0099999998;
				depends = "";
			};
			class HitAbdomen : HitPelvis
			{
				armor = 15;
				material = -1;
				name = "spine1";
				passThrough = 0.80000001;
				radius = 0.16;
				explosionShielding = .5;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitDiaphragm : HitAbdomen
			{
				armor = 15;
				material = -1;
				name = "spine2";
				passThrough = 0.33000001;
				radius = 0.18000001;
				explosionShielding = .5;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitChest : HitDiaphragm
			{
				armor = 20;
				material = -1;
				name = "spine3";
				passThrough = 0.33000001;
				radius = 0.18000001;
				explosionShielding = 2;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitBody : HitChest
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 2;
				visual = "injury_body";
				minimalHit = 0.0099999998;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms : HitBody
			{
				armor = 15;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = .5;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class HitHands : HitArms
			{
				armor = 15;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
				depends = "HitArms";
			};
			class HitLegs : HitHands
			{
				armor = 15;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				explosionShielding = .5;
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
				explosionShielding = .5;
				visual = "";
				minimalHit = 0;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor = 15;
				material = -1;
				name = "hand_l";
				passThrough = 1;
				radius = 0.079999998;
				explosionShielding = .5;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
			};
			class HitRightArm : HitLeftArm
			{
				name = "hand_r";
			};
			class HitLeftLeg
			{
				armor = 15;
				material = -1;
				name = "leg_l";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = .5;
				visual = "injury_legs";
				minimalHit = 0.0099999998;
			};
			class HitRightLeg : HitLeftLeg
			{
				name = "leg_r";
			};
		};
	};
	class O_DBA_CIS_IG88_F : DBA_CIS_IG_Base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "IG-88 MagnaGuard";
		editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_IG101_MagnaGuard_F.jpg";
		uniformClass = "DBA_IG88";
		model = "101st_Aux_Mod\Addons\DBA_CIS\DBA_Armour\DBA_IG88\IG88.p3d";
		hiddenSelections[] = { "camo1" };
		hiddenSelectionsTextures[] = { "101st_Aux_Mod\Addons\DBA_CIS\DBA_Armour\DBA_IG88\data\IG88_CO.paa" };
		hiddenSelectionsMaterial[] = { "101st_Aux_Mod\Addons\DBA_CIS\DBA_Armour\DBA_IG88\data\IG88.rvmat" };
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
		items[] = {};
		respawnItems[] = {};
		class EventHandlers : DefaultEventhandlers
		{
			Killed = "[_this select 0] execVM '101st_Aux_Mod\Addons\DBA_General\DBA_Func\fn_SelfDestruct.sqf';";
		};
	};
};