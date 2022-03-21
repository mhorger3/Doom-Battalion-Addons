class CfgPatches
{
	class DBA_P2MandolorianUnits
	{
		author = "Vulgar";
		requiredAddons[] =
		{
			"A3_Characters_F"
		};
		requiredVersion = 0.1;
		units[] = {
		};
		weapons[] =
		{
		};
	};
};
class CfgVehicles {
	class SoldierGB;
	class I_Soldier_base_F : SoldierGB
	{
		class HitPoints;
	};
	class I_DBA_Mandolorian_Base : I_Soldier_base_F
	{
		scope = 0;
		scopeCurator = 0;
		displayName = "Phase Mandolorian Base";
		editorSubcategory = "I_DBA_Independent_Line_Infantry";
		vehicleClass = "I_DBA_Independent_Line_Infantry";
		side = 2;
		faction = "I_DBA_Mando_F";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"DBA_Independent\Addons\DBA_Independent\DBA_Armour\DBA_Mandolorian\Armour\data\Base\DBA_Trooper_Chest_CO.paa",
			"DBA_Independent\Addons\DBA_Independent\DBA_Armour\DBA_Mandolorian\Armour\data\Base\DBA_Trooper_Legs_CO.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"DBA_Independent\Addons\DBA_Independent\DBA_Armour\DBA_Mandolorian\Armour\data\Base\DBA_Trooper_Chest.RVMAT",
			"DBA_Independent\Addons\DBA_Independent\DBA_Armour\DBA_Mandolorian\Armour\data\Base\DBA_Trooper_Legs.RVMAT"
		};
		genericNames = "JLTS_Clones";
		model = "DBA_Independent\Addons\DBA_Independent\DBA_Armour\DBA_Mandolorian\Armour\data\Base\DBA_Mandolorian";
		identityTypes[] =
		{
			"NoGlasses",
			"Head_NATO"
		};
		facewear = "";
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
		armor = 2;
		armorStructural = 4;
		explosionShielding = 0.40000001;
		minTotalDamageThreshold = 0.001;
		impactDamageMultiplier = 0.5;
		weapons[] =
		{
			"Throw",
			"Put"
		};
		respawnWeapons[] =
		{
			"Throw",
			"Put"
		};
		magazines[] =
		{
		};
		respawnMagazines[] =
		{
		};
		items[] =
		{
		};
		respawnItems[] =
		{
		};
		class HitPoints : HitPoints
		{
			class HitFace
			{
				armor = 1;
				material = -1;
				name = "face_hub";
				passThrough = 0.80000001;
				radius = 0.079999998;
				explosionShielding = 0.1;
				minimalHit = 0.0099999998;
			};
			class HitNeck : HitFace
			{
				armor = 1;
				material = -1;
				name = "neck";
				passThrough = 0.80000001;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.0099999998;
			};
			class HitHead : HitNeck
			{
				armor = 1;
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
				armor = 8;
				material = -1;
				name = "pelvis";
				passThrough = 0.80000001;
				radius = 0.23999999;
				explosionShielding = 3;
				visual = "injury_body";
				minimalHit = 0.0099999998;
				depends = "";
			};
			class HitAbdomen : HitPelvis
			{
				armor = 6;
				material = -1;
				name = "spine1";
				passThrough = 0.80000001;
				radius = 0.16;
				explosionShielding = 3;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitDiaphragm : HitAbdomen
			{
				armor = 6;
				material = -1;
				name = "spine2";
				passThrough = 0.33000001;
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
				passThrough = "0.33000001radius = 0.18";
				explosionShielding = 6;
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
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms : HitBody
			{
				armor = 6;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 3;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class HitHands : HitArms
			{
				armor = 6;
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
				armor = 6;
				material = -1;
				name = "legs";
				passThrough = 1;
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
				passThrough = 1;
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
				passThrough = 1;
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
	};

	class I_DBA_Mandolorian_Trooper : I_DBA_Mandolorian_Base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "[DBA] Mandolorian: Trooper";
		editorPreview = "\MRC\JLTS\characters\CloneLegions\data\ui\editorPreviews\JLTS_Clone_P2_DC15A_DC.jpg";
		hiddenSelectionsTextures[] =
		{
			"DBA_Independent\Addons\DBA_Independent\DBA_Armour\DBA_Mandolorian\Armour\data\Base\DBA_Trooper_Chest_CO.paa",
			"DBA_Independent\Addons\DBA_Independent\DBA_Armour\DBA_Mandolorian\Armour\data\Base\DBA_Trooper_Legs_CO.paa"
		};
		uniformClass = "DBA_MandolorianTrooperUniform";
	};
};
