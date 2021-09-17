class CfgPatches
{
	class DBA_Vulkan
	{
		requiredAddons[] =
		{
			"A3_Weapons_F"
		};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] =
		{
			"DBA_Vulkan_F"
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
	class DBA_Vulkan_Base_F : Rifle_Long_Base_F
	{
		ACE_overheating_allowSwapBarrel = 1;
		ACE_Overheating_Dispersion = 0;
		ACE_Overheating_JamChance = 0;
		ACE_overheating_mrbs = 3e+009;
		ACE_overheating_slowdownFactor = 0;
		ace_overpressure_angle = 0;
		ace_overpressure_damage = 0;
		ace_overpressure_priority = 1;
		ace_overpressure_range = 0;
		author = "Vulgar";
		_generalMacro = "DMR_01_base_F";
		scope = 0;
		magazines[] =
		{
			"DBA_Valken_Mag"
		}; 
		class OpticsModes
		{
			class Snip
			{
				cameraDir = "";
				discreteDistance[] = { 300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600 };
				discreteDistanceInitIndex = 1;
				discreteInitIndex = 1;
				discretefov[] = { 0.0625, 0.03125, 0.05208, 0.01041 };
				distanceZoomMax = 4000;
				distanceZoomMin = 100;
				memoryPointCamera = "eye";
				modelOptics = "\A3\Weapons_F\acc\reticle_LRPS_F";
				opticsPPEffects[] = { "OpticsCHAbera1","OpticsBlur1" };
				opticsFlare = 1;
				opticsID = 1;
				weaponInfoType = "RscOptics_nightstalkergreencompass";
				opticsZoomMin = 0.01041;
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
		reloadAction = "GestureReloadDMR";
		recoil = "recoil_dmr_01";
		maxZeroing = 1600;
		hiddenSelections[] =
		{
			"camo1"
		};
		fireLightDuration = 0.050000001;
		fireLightIntensity = 0.2;
		fireLightDiffuse[] = { 0,0,1 };
		fireLightAmbient[] = { 0,0,1 };
		hiddenSelectionsTextures[] = { "101st_Aux_Mod\Addons\DBA_Republic\DBA_Weapons\DBA_Vulkan\data\Valken_CO.paa" };
		hiddenSelectionsMaterials[] = { "101st_Aux_Mod\Addons\DBA_Republic\DBA_Weapons\DBA_Vulkan\data\Valken.rvmat" };
		handAnim[] =
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_EPA\LongRangeRifles\DMR_01\data\Anim\dmr_01.rtm"
		};
		cursor = "srifle";
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class MuzzleSlot : MuzzleSlot_762
			{
				iconPosition[] = { 0,0.44999999 };
				iconScale = 0.2;
			};
			class CowsSlot : CowsSlot_Rail
			{
				iconPosition[] = { 0.44999999,0.38 };
				iconScale = 0.2;
			};
			class PointerSlot : PointerSlot_Rail
			{
				compatibleItems[] = {};
				iconPosition[] = { 0.34999999,0.5 };
				iconScale = 0.25;
			};
		};
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		modes[] = 
		{ 
			"Single",
			"close",
			"short",
			"medium", 
			"Burst" 
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
				begin1[] = { "101st_Aux_Mod\Addons\DBA_Republic\DBA_Weapons\DBA_Valken\valken.ogg",1,1,900 };
				closure2[] = { "A3\sounds_f\weapons\closure\zafir_closure_2",0.5,1,10 };
				soundBegin[] = { "begin1",1 };
				soundClosure[] = { "closure2",1 };
			};
			recoil = "recoil_zafir";
			recoilProne = "assaultRifleBase";
			reloadTime = 0.15;
			ddispersion = 0.00087;
			minRange = 5;
			minRangeProbab = 0.5;
			midRange = 500;
			midRangeProbab = 0.7;
			maxRange = 750;
			maxRangeProbab = 0.3;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 300;
		};
		class close : Single
		{
			showToPlayer = 0;
			aiRateOfFire = 0.25;
			aiRateOfFireDistance = 400;
			dispersion = "5*0.00087";
			minRange = 500;
			minRangeProbab = 0.050000001;
			midRange = 750;
			midRangeProbab = 0.69999999;
			maxRange = 1000;
			maxRangeProbab = 0.2;
		};
		class short : close
		{
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 500;
			minRange = 750;
			minRangeProbab = 0.2;
			midRange = 1000;
			midRangeProbab = 0.69999999;
			maxRange = 1500;
			maxRangeProbab = 0.2;
		};
		class medium : close
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 900;
			minRange = 1000;
			minRangeProbab = 0.2;
			midRange = 1750;
			midRangeProbab = 0.69999999;
			maxRange = 2000;
			maxRangeProbab = 0.2;
		};
		class Burst : Mode_Burst
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 250;
			burst = 3;
			dispersion = 0.0005;
			displayName = "Burst";
			recoil = "recoil_burst_smg_01";
			recoilProne = "recoil_burst_prone_smg_01";
			reloadTime = 0.05;
			maxRange = 2000;
			maxRangeProbab = 0.05;
			midRange = 1500;
			midRangeProbab = 0.7;
			minRange = 5;
			minRangeProbab = 0.3;
			sounds[] = { "StandardSound" };
			class StandardSound
			{
				weaponSoundEffect = "DefaultRifle";
				begin1[] = { "101st_Aux_Mod\Addons\DBA_Republic\DBA_Weapons\DBA_Valken\valken.ogg",1,1,900 };
				closure2[] = { "A3\sounds_f\weapons\closure\zafir_closure_2",0.5,1,10 };
				soundBegin[] = { "begin1",1 };
				soundClosure[] = { "closure2",1 };
			};
		};
		aiDispersionCoefY = 3;
		aiDispersionCoefX = 2;
	};
	class DBA_Vulkan_F : DBA_Vulkan_Base_F
	{
		author = "Vulgar";
		_generalMacro = "srifle_DMR_01_F";
		baseWeapon = "DBA_Vulkan_F";
		scope = 2;
		model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Weapons\DBA_Valken\valken.p3d";
		displayName = "DBA Vulkan";
		picture = "\A3\Weapons_F_EPA\LongRangeRifles\DMR_01\Data\UI\gear_DMR_01_X_CA.paa";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		descriptionShort = "Full auto sniper";
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 100;
		};
		inertia = 0.5;
		aimTransitionSpeed = 1;
		dexterity = 1.5;
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
