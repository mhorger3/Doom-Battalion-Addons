class cfgPatches 
{
	class DBA_Imperial_Weapons_E11D
	{
		author = "Vulgar";
		name = "E11D";
		requiredaddons[] = { "A3_Weapons_F_Mark" };
		requiredversion = 0.1;
		units[] = {};
		weapons[] = {"DBA_E11D_F"};
	};
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class MuzzleSlot;
class SlotInfo;
class CowsSlot;
class PointerSlot;
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

class cfgWeapons
{


	class Rifle_Base_F;
	class Rifle_Long_Base_F : Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	class DBA_E11D_Base_F : Rifle_Long_Base_F
	{
		author = "Vulgar";
		_generalMacro = "DMR_02_base_F";
		scope = 0;
		displayName = "DBA E11D";
		magazines[] =
		{
			"DBA_E11D_Mag"
		};
		reloadAction = "GestureReloadDMR02";
		recoil = "recoil_dmr_02";
		maxZeroing = 2000;
		handAnim[] =
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_Mark\LongRangeRifles\DMR_02\data\Anim\DMR_02.rtm"
		};
		overviewPicture = "\A3\Data_F_Mark\Images\watermarkInfo_page06_ca.paa";
		hiddenSelections[] =
		{
			"Bipod", "Mag", "Body", "Grip"
		};
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_Imperial\DBA_Weapons\DBA_E11D\Data\E11D_Bipod_CO.paa",
			"101st_Aux_Mod\Addons\DBA_Imperial\DBA_Weapons\DBA_E11D\Data\E11D_Mag_CO.paa",
			"101st_Aux_Mod\Addons\DBA_Imperial\DBA_Weapons\DBA_E11D\Data\E11D_Body_CO.paa",
			"101st_Aux_Mod\Addons\DBA_Imperial\DBA_Weapons\DBA_E11D\Data\E11D_Grip_CO.paa",
		};
		hiddenSelectionsMaterials[] =
		{
			"101st_Aux_Mod\Addons\DBA_Imperial\DBA_Weapons\DBA_E11D\Data\DBA_E11D_Bipod.rvmat",
			"101st_Aux_Mod\Addons\DBA_Imperial\DBA_Weapons\DBA_E11D\Data\DBA_E11D_Mag.rvmat",
			"101st_Aux_Mod\Addons\DBA_Imperial\DBA_Weapons\DBA_E11D\Data\DBA_E11D_Body.rvmat",
			"101st_Aux_Mod\Addons\DBA_Imperial\DBA_Weapons\DBA_E11D\Data\DBA_E11D_Grip.rvmat",
		};
		cursor = "srifle";
		class Library
		{
			libTextDesc = "E11D go burr";
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class MuzzleSlot : MuzzleSlot_338
			{
				iconPosition[] = { 0,0.40000001 };
				iconScale = 0.2;
				compatibleItems[] = {};
			};
			class CowsSlot : CowsSlot_Rail
			{
				iconPosition[] = { 0.5,0.36000001 };
				iconScale = 0.2;
				compatibleItems[] = {};
			};
			class PointerSlot : PointerSlot_Rail
			{
				iconPosition[] = { 0.22,0.41999999 };
				iconScale = 0.25;
				compatibleItems[] = {};
			};
			class UnderBarrelSlot : UnderBarrelSlot_rail
			{
				iconPosition[] = { 0.2,0.80000001 };
				iconScale = 0.30000001;
				compatibleItems[] = {};
			};
		};
		ACE_overheating_allowSwapBarrel = 1;
		ACE_Overheating_Dispersion = 0;
		ACE_Overheating_JamChance = 0;
		ACE_overheating_mrbs = 3e+009;
		ACE_overheating_slowdownFactor = 0;
		ace_overpressure_angle = 0;
		ace_overpressure_damage = 0;
		ace_overpressure_priority = 1;
		ace_overpressure_range = 0;
		distanceZoomMin = 500;
		distanceZoomMax = 500;
		drySound[] =
		{
			"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR_02_Dry_01",
			0.25118864,
			1,
			20
		};
		reloadMagazineSound[] =
		{
			"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR_02_reload",
			1,
			1,
			10
		};
		modes[] =
		{
			"Single",
			"single_close_optics1",
			"single_medium_optics1",
			"single_far_optics1"
		};
		class Single : Mode_SemiAuto
		{
			sounds[] =
			{
				"StandardSound"
			};
			class StandardSound
			{
				weaponSoundEffect = "DefaultRifle";
				begin1[] = { "101st_Aux_Mod\Addons\DBA_Imperial\DBA_Weapons\DBA_E11D\Data\E11DShot.ogg",1,1,1800 };
				closure1[] = { "A3\sounds_f\weapons\closure\zafir_closure_2",0.5,1,10 };
				soundBegin[] = { "begin1",1 };
				soundClosure[] = { "closure1",1 };
			};
			reloadTime = 0.2;
			dispersion = 0.00044;
			recoil = "recoil_single_dmr";
			recoilProne = "recoil_single_prone_dmr";
			minRange = 2;
			minRangeProbab = 0.30000001;
			midRange = 350;
			midRangeProbab = 0.69999999;
			maxRange = 500;
			maxRangeProbab = 0.050000001;
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
	class DBA_E11D_F : DBA_E11D_Base_F
	{
		author = "Vulgar";
		_generalMacro = "srifle_DMR_02_F";
		scope = 2;
		model = "101st_Aux_Mod\Addons\DBA_Imperial\DBA_Weapons\DBA_E11D\Data\E11D.p3d";
		dexterity = 1.6799999;
		displayName = "DBA E11D";
		picture = "\A3\Weapons_F_Mark\LongRangeRifles\DMR_02\Data\UI\gear_DMR_02_X_CA.paa";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		descriptionShort = "That DT one gun";
		inertia = 0.89999998;
		aimTransitionSpeed = 0.69999999;
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 260;
		};
		class ItemInfo
		{
			priority = 1;
		};
	};
};

class cfgVehicles
{
	class Weapon_Base_F;
	class DBA_E11D_Transport_F : Weapon_Base_F
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
				weapon = "DBA_E11D_F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 30Rnd_65x39_caseless_green
			{
				magazine = "DBA_E11D_Mag";
				count = 1;
			};
		};
	};
};