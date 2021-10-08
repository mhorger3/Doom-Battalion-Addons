class cfgPatches
{
	class DBA_Aux_Mod_BattleRifle
	{
		author = "Vulgar";
		name = "101st Aux Mod Weapons";
		requiredaddons[] = {"A3_Weapons_F_Mark"};
		requiredversion = 0.1;
		units[] = {"DBA_VH_BattleRifle"};
		weapons[] = {"DBA_BattleRifle_F"};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class CowsSlot_Rail;
class CowsSlot_Rail_Pistol;
class CowsSlot_Pistol;
class CowsSlot_MSBS65;
class CowsSlot_Dovetail;
class CowsSlot_Dovetail_RPG;
class MuzzleSlot_45ACP;
class MuzzleSlot_9mm;
class MuzzleSlot_65;
class MuzzleSlot_65MG;
class MuzzleSlot_556;
class MuzzleSlot_762;
class MuzzleSlot_338;
class MuzzleSlot_93;
class MuzzleSlot_57;
class MuzzleSlot_58;
class MuzzleSlot_545R;
class MuzzleSlot_762R;
class UnderBarrelSlot_rail;
class PointerSlot_Rail;
class PointerSlot_Pistol;
class PointerSlot_Launcher;
class CfgWeapons
{
	class Rifle_Base_F;
	class Rifle_Long_Base_F : Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	class DBA_Battlerifle_Base_F : Rifle_Long_Base_F
	{
		author = "Vulgar";
		_generalMacro = "DMR_03_base_F";
		scope = 0;
		displayName = "DBA Battlerifle";
		magazines[] =
		{
			"DBA_DC15BR_Mag"
		};
		reloadAction = "GestureReloadDMR03";
		recoil = "recoil_dmr_03";
		maxZeroing = 1600;
		handAnim[] =
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_Mark\LongRangeRifles\DMR_03\data\Anim\DMR_03.rtm"
		};
		overviewPicture = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Effects\icons\Verpine_CA.paa";
		discreteDistanceInitIndex = 2;
		cursor = "srifle";
		class Library
		{
			libTextDesc = "Hi";
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class MuzzleSlot : MuzzleSlot_762
			{
				iconPosition[] = { 0.12,0.43099999 };
				iconScale = 0.15000001;
				compatibleItems[] = {};
			};
			class CowsSlot : CowsSlot_Rail
			{
				iconPosition[] = { 0.5,0.36000001 };
				iconScale = 0.15000001;
				compatibleItems[] = {};
			};
			class PointerSlot : PointerSlot_Rail
			{
				iconPosition[] = { 0.33000001,0.40000001 };
				iconScale = 0.2;
				compatibleItems[] = {};
			};
			class UnderBarrelSlot : UnderBarrelSlot_rail
			{
				iconPosition[] = { 0.30000001,0.80000001 };
				iconScale = 0.30000001;
				compatibleItems[] = {};
			};
		};
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		class Single : Mode_SemiAuto
		{
			soundContinuous = 0;
			soundBurst = 0;
			sounds[] =
			{
				"StandardSound"
			};
			class StandardSound
			{
				weaponSoundEffect = "DefaultRifle";
				begin1[] = { "101st_Aux_Mod\Addons\DBA_Republic\DBA_Weapons\DBA_Battlerifle\Data\DC15Shot.ogg",1,1,1800 };
				closure2[] = { "A3\sounds_f\weapons\closure\zafir_closure_2",0.5,1,10 };
				soundBegin[] = { "begin1",1 };
				soundClosure[] = { "closure1",1 };
			};
			initSpeed = 940;
			recoil = "recoil_single_ebr";
			recoilProne = "recoil_single_prone_ebr";
			reloadTime = 0.28;
			dispersion = "5*0.00087";
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 400;
			midRangeProbab = 0.7;
			maxRange = 800;
			maxRangeProbab = 0.3;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class single_close_optics1 : Single
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			minRange = 2;
			minRangeProbab = 0.050000001;
			midRange = 300;
			midRangeProbab = 0.80000001;
			maxRange = 500;
			maxRangeProbab = 0.0099999998;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
		};
		class single_medium_optics1 : single_close_optics1
		{
			minRange = 300;
			minRangeProbab = 0.050000001;
			midRange = 500;
			midRangeProbab = 0.69999999;
			maxRange = 700;
			maxRangeProbab = 0.050000001;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class single_far_optics1 : single_medium_optics1
		{
			requiredOpticType = 2;
			minRange = 300;
			minRangeProbab = 0.050000001;
			midRange = 700;
			midRangeProbab = 0.5;
			maxRange = 1000;
			maxRangeProbab = 0.050000001;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
		};
		aiDispersionCoefY = 3;
		aiDispersionCoefX = 2;
	};
	class DBA_BattleRifle_F : DBA_Battlerifle_Base_F
	{
		author = "Vulgar";
		_generalMacro = "srifle_DMR_03_F";
		scope = 2;
		model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Weapons\DBA_BattleRifle\BattleRifle.p3d";
		dexterity = 1.6799999;
		displayName = "DBA Battlerifle";
		picture = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Effects\icons\Verpine_CA.paa";
		UiPicture = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Effects\icons\Verpine_CA.paa";
		descriptionShort = "Gun";
		inertia = 0.80000001;
		aimTransitionSpeed = 0.69999999;
		initSpeed = 940;
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 220;
		};
		class ItemInfo
		{
			priority = 1;
		};
		hiddenSelections[] =
		{
			"camo1",
		};
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Weapons\DBA_BattleRifle\Data\MBR_CO.paa",
		};
		hiddenSelectionsMaterials[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Weapons\DBA_BattleRifle\Data\MBR.rvmat",
		};
	};
};
class cfgVehicles
{
	class Weapon_Base_F;
	class DBA_Battlerifle_Transport_F : Weapon_Base_F
	{
		author = "Vulgar";
		scope = 2;
		scopeCurator = 2;
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class DBA_E11_F
			{
				weapon = "DBA_BattleRifle_F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class DBA_E11_Mag
			{
				magazine = "DBA_65_Mag_x20";
				count = 1;
			};
		};
	};
};