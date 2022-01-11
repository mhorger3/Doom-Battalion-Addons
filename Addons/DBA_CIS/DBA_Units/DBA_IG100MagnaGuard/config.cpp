class CfgPatches
{
	class DBA_IG100MagnaGuardUnits
	{
		author = "Vulgar";
		requiredAddons[] =
		{
			"A3_Characters_F"
		};
		requiredVersion = 0.1;
		units[] = { "DBA_IG100MagnaGuard_F" };
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
	class DBA_IG100MagnaGuard_Base_F : O_Soldier_F
	{
		DBA_IsDroid = 1;
		DBA_EMPProtection = 1;
		author = "MrClock + Dutch";
		scope = 0;
		scopeCurator = 0;
		displayName = "DBA MagnaGuard";
		editorPreview = "\MRC\JLTS\characters\DroidArmor\data\ui\editorPreviews\JLTS_Droid_B1_E5.jpg";
		genericNames = "JLTS_DroidsB1";
		faction = "O_DBA_CIS_F";
		editorSubcategory = "O_DBA_CIS_Spec_Ops";
		vehicleClass = "O_DBA_CIS_Spec_Ops";
		items[] = {};
		respawnItems[] = {};
		class HitPoints : HitPoints
		{
			class HitFace
			{
				armor = 1;
				material = -1;
				name = "face_hub";
				passThrough = 0.1;
				radius = 0.079999998;
				explosionShielding = 0.1;
				minimalHit = 0.0099999998;
			};
			class HitNeck : HitFace
			{
				armor = 5;
				material = -1;
				name = "neck";
				passThrough = 0.1;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.0099999998;
			};
			class HitHead : HitNeck
			{
				armor = 5;
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
				armor = 15;
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
				armor = 15;
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
				armor = 15;
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
				armor = 15;
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
				armor = 15;
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
				armor = 15;
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
				armor = 15;
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
				armor = 6;
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
				armor = 6;
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
		armor = 6;
		armorStructural = 5;
		explosionShielding = 0.40000001;
		minTotalDamageThreshold = 0.001;
		impactDamageMultiplier = 0.5;
	};
	class DBA_IG100MagnaGuard_F : DBA_IG100MagnaGuard_Base_F
	{
		scope = 2;
		displayName = "DBA IG-100 MagnaGuard";
		scopeCurator = 2;
		uniformClass = "DBA_IG100MagnaGuard";
		backpack = "";
		identityTypes[] =
		{
			"LanguageENG_F",
			"Head_NATO"
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
			"JLTS_E5",
			"JLTS_RG4D",
			"Throw",
			"Put"
		};
		respawnWeapons[] =
		{
			"JLTS_E5",
			"JLTS_RG4D",
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
			"JLTS_RG4D_mag",
			"JLTS_RG4D_mag",
			"JLTS_RG4D_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"DBA_SNF15_x1_Flash",
			"DBA_SNF15_x1_Flash",
			"DBA_SN3_x1_Grenade",
			"DBA_SN3_x1_Grenade",
			"DBA_SN3_x1_Grenade",
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
			"JLTS_RG4D_mag",
			"JLTS_RG4D_mag",
			"JLTS_RG4D_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"DBA_SNF15_x1_Flash",
			"DBA_SNF15_x1_Flash",
			"DBA_SN3_x1_Grenade",
			"DBA_SN3_x1_Grenade",
			"DBA_SN3_x1_Grenade",
		};
		model = "101st_Aux_Mod\Addons\DBA_CIS\DBA_Armour\DBA_IG100MagnaGuard\Magna.p3d";
		hiddenSelections[] = { "camo1" };
		hiddenSelectionsTextures[] = { "101st_Aux_Mod\Addons\DBA_CIS\DBA_Armour\DBA_IG100MagnaGuard\data\Magna_CO.paa" };
	};
};