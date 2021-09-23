class CfgPatches
{
	class DBA_Verpine
	{
		addonRootClass = "A3_Weapons_F";
		requiredAddons[] =
		{
			"A3_Weapons_F"
		};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] =
		{
			"DBA_Verpine_F"
		};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class MuzzleSlot;
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
class CfgWeapons
{
	class Rifle_Base_F;
	class Rifle_Long_Base_F : Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	class UGL_F;
	class DBA_Verpine_base_F : Rifle_Long_Base_F
	{
		author = "Vulgar";
		ACE_overheating_allowSwapBarrel = 1;
		ACE_Overheating_Dispersion = 0;
		ACE_Overheating_JamChance = 0;
		ACE_overheating_mrbs = 3e+009;
		ACE_overheating_slowdownFactor = 0;
		ace_overpressure_angle = 0;
		ace_overpressure_damage = 0;
		ace_overpressure_priority = 1;
		ace_overpressure_range = 0;
		_generalMacro = "DMR_01_base_F";
		scope = 0;
		magazines[] =
		{
			"DBA_Verpine_Mag"
		};
		reloadAction = "GestureReloadDMR";
		recoil = "recoil_dmr_01";
		maxZeroing = 1600;
		handAnim[] =
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_EPA\LongRangeRifles\DMR_01\data\Anim\dmr_01.rtm"
		};
		cursor = "srifle"; 
		simulation = "Weapon";
		selectionFireAnim = "zasleh";
		flash = "gunfire";
		flashSize = 0.5;
		fireLightIntensity = 0.2;
		fireLightDuration = 0.050000001;
		modelOptics = "\A3\Weapons_F\acc\reticle_LRPS_F";
		opticsDisablePeripherialVision = 1;
		opticsFlare = 1;
		weaponInfoType = "RscOptics_nightstalkerred";
		class OpticsModes
		{
			class Snip
			{
				cameraDir = "";
				discreteDistance[] = { 300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600 };
				discreteDistanceInitIndex = 1;
				discreteInitIndex = 1;
				discretefov[] = { 0.0625, 0.03125, 0.020833, 0.01041 };
				distanceZoomMax = 4000;
				distanceZoomMin = 100;
				memoryPointCamera = "eye";
				modelOptics = "\A3\Weapons_F\acc\reticle_LRPS_F";
				opticsPPEffects[] = { "OpticsCHAbera1","OpticsBlur1" };
				opticsFlare = 1;
				opticsID = 1;
				weaponInfoType = "RscOptics_nightstalkerblue";
				opticsZoomMin = ".25/24";
				opticsZoomMax = 0.25;
				opticsZoomInit = 0.25;
				thermalMode[] = { 1 };
				useModelOptics = 1;
				visionMode[] = { "Normal","NVG","TI" };
				opticsDisplayName = "WFOV";
				opticsDisablePeripherialVision = 0;
			};
			class Iron
			{
				opticsID = 2;
				opticsDisplayName = "";
				useModelOptics = 0;
				opticsPPEffects[] = { "", "" };
				opticsFlare = 0;
				opticsDisablePeripherialVision = 0;
				opticsZoomMin = 0.25;
				opticsZoomMax = 1.25;
				opticsZoomInit = 0.75;
				memoryPointCamera = "eye";
				visionMode[] = {};
				discretefov[] = {};
				discreteDistance[] = { 200 };
				discreteDistanceInitIndex = 0;
				distanceZoomMin = 200;
				distanceZoomMax = 200;
				discreteInitIndex = 0;
				modelOptics = "\A3\Weapons_F\empty";
			};
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class MuzzleSlot : MuzzleSlot_762
			{
				compatibleItems[] = { "" };
				iconPosition[] = { 0,0.44999999 };
				iconScale = 0.2;
			};
			class CowsSlot : CowsSlot_Rail
			{
				compatibleItems[] = { "" };
				iconPosition[] = { 0.44999999,0.38 };
				iconScale = 0.2;
			};
			class PointerSlot : PointerSlot_Rail
			{
				compatibleItems[] = {""};
				iconPosition[] = { 0.34999999,0.5 };
				iconScale = 0.25;
			};
		};
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		modes[] =
		{
			"Single",
		};
		drySound[] =
		{
			"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_dry",
			0.25118864,
			1,
			20
		};
		reloadMagazineSound[] =
		{
			"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_reload",
			1,
			1,
			10
		};
		changeFiremodeSound[] =
		{
			"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_firemode",
			0.31622776,
			1,
			5
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
				begin1[] = { "MRC\JLTS\weapons\DC15X\sounds\dc15x_fire",2.5,1,1800 };
				closure2[] = { "A3\sounds_f\weapons\closure\zafir_closure_2",0.5,1,10 };
				soundBegin[] = { "begin1",1 };
				soundClosure[] = { "closure2",1 };
			};
			recoil = "recoil_single_mx";
			recoilProne = "recoil_single_prone_mx";
			reloadTime = 0.08;
			dispersion = 0.0001;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 350;
			midRangeProbab = 0.7;
			maxRange = 750;
			maxRangeProbab = 0.3;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 300;
		};
		aiDispersionCoefY = 3;
		aiDispersionCoefX = 2;
	};
	class DBA_Verpine_F : DBA_Verpine_base_F
	{
		author = "Vulgar";
		_generalMacro = "srifle_DMR_01_F";
		baseWeapon = "DBA_Verpine_F";
		scope = 2;
		model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Weapons\DBA_Verpine\verpine.p3d";
		displayName = "DBA Verpine DMR";
		picture = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Effects\icons\Verpine_CA.paa";
		UiPicture = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Effects\icons\Verpine_CA.paa";
		descriptionShort = "$STR_A3_CfgWeapons_srifle_DMR_01_F1";
		hiddenSelections[] =
		{
			"camo1"
		};
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Weapons\DBA_Verpine\data\Verpine_CO.paa"
		};
		hiddenSelectionsMaterials[] =
		{

		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 100;
		};
		inertia = 1;
		aimTransitionSpeed = 1;
		dexterity = 1;
		initSpeed = -1;
		maxRecoilSway = 0.03;
		swayDecaySpeed = 0.35;
		class Library
		{
			libTextDesc = "$STR_A3_CfgWeapons_srifle_DMR_01_F_library";
		};
		class ItemInfo
		{
			priority = 1;
		};
	};
};
