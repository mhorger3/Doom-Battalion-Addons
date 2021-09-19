class CfgPatches
{
	class DBA_Gundark
	{
		requiredAddons[] =
		{
			"A3_Weapons_F"
		};
		requiredVersion = 0.1;
		weapons[] =
		{
			"DBA_Gundark_F"
		};
		units[] = {};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class Slotinfo;
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
	class DBA_Gundark_Base_F : Rifle_Long_Base_F
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
		_generalMacro = "LRR_base_F";
		scope = 0;
		magazines[] =
		{
			"DBA_Gundark_Mag", "DBA_GundarkOvercharge_Mag"
		};
		reloadAction = "GestureReloadLRR";
		recoil = "recoil_m320";
		maxZeroing = 2400;
		cursor = "srifle";
		initSpeed = 910;
		handAnim[] =
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F\LongRangeRifles\M320\data\Anim\m320.rtm"
		};
		opticsPPEffects[] = {};
		opticsFlare = 1;
		opticsDisablePeripherialVision = 1;
		class GunParticles
		{
			class FirstEffect
			{
				effectName = "SniperCloud";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		modes[] =
		{
			"Single",
			"far_optic1",
			"medium_optic2",
			"far_optic2"
		};
		drySound[] =
		{
			"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_dry",
			0.50118721,
			1,
			20
		};
		reloadMagazineSound[] =
		{
			"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_reload",
			1,
			1,
			10
		};
		soundBipodDeploy[] =
		{
			"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_deploy",
			0.70794576,
			1,
			20
		};
		soundBipodFold[] =
		{
			"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_fold",
			0.70794576,
			1,
			20
		};
		soundBipodDown[] =
		{
			"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_down",
			0.70794576,
			1,
			20
		};
		soundBipodUp[] =
		{
			"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_up",
			0.70794576,
			1,
			20
		};
		modelOptics = "\A3\Weapons_F\acc\reticle_LRPS_F";
		class OpticsModes
		{
			class Snip
			{
				cameraDir = "";
				discreteDistance[] = { 300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600 };
				discreteDistanceInitIndex = 1;
				discreteInitIndex = 1;
				discretefov[] = { ".25/4",".25/8",".25/12",".25/24" };
				distanceZoomMax = 4000;
				distanceZoomMin = 100;
				memoryPointCamera = "eye";
				modelOptics = "\A3\Weapons_F\acc\reticle_LRPS_F";
				opticsPPEffects[] = { "OpticsCHAbera1","OpticsBlur1" };
				opticsFlare = 1;
				opticsID = 1;
				weaponInfoType = "RscOptics_nightstalkergreencompass";
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
		fireLightDuration = 0.050000001;
		fireLightIntensity = 0.2;
		fireLightDiffuse[] = { 0,0,0.1 };
		fireLightAmbient[] = { 0,0,0.5 };
		class Single : Mode_SemiAuto
		{
			sounds[] =
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = { "A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_Closure_1",0.398107,1,30 };
				closure2[] = { "A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_Closure_2",0.398107,1,30 };
				soundClosure[] = { "closure1",0.5,"closure2",0.5 };
			};
			class StandardSound
			{
				weaponSoundEffect = "DefaultRifle";
				begin1[] = { "MRC\JLTS\weapons\DC15X\sounds\dc15x_fire",2.5,1,1800 };
				closure2[] = { "A3\sounds_f\weapons\closure\zafir_closure_2",0.5,1,10 };
				soundBegin[] = { "begin1",1 };
				soundClosure[] = { "closure2",1 };
			};
			recoil = "recoil_single_ebr";
			recoilProne = "recoil_single_prone_ebr";
			reloadTime = 0.5;
			dispersion = 0.0001;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 750;
			midRangeProbab = 0.7;
			maxRange = 1500;
			maxRangeProbab = 0.3;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 500;
		};
		class close : Single
		{
			showToPlayer = 0;
			aiRateOfFire = 0.25;
			aiRateOfFireDistance = 400;
			dispersion = 0.0001;
			minRange = 1000;
			minRangeProbab = 0.5;
			midRange = 1500;
			midRangeProbab = 0.7;
			maxRange = 3000;
			maxRangeProbab = 0.2;
		};
		class short : close
		{
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 500;
			minRange = 2000;
			minRangeProbab = 0.2;
			midRange = 3000;
			midRangeProbab = 7;
			maxRange = 4000;
			maxRangeProbab = 0.2;
		};
		class medium : close
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 900;
			minRange = 4000;
			minRangeProbab = 0.2;
			midRange = 4500;
			midRangeProbab = 7;
			maxRange = 5000;
			maxRangeProbab = 0.5;
		};
	};
	class DBA_Gundark_F : DBA_Gundark_Base_F
	{
		author = "Vulgar";
		_generalMacro = "srifle_LRR_F";
		baseWeapon = "DBA_Gundark_F";
		scope = 2;
		model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Weapons\DBA_Gundark\gundark.p3d";
		displayName = "DBA Gundark";
		picture = "\A3\Weapons_F\LongRangeRifles\M320\Data\UI\gear_M320_LRR_X_CA.paa";
		UiPicture = "\A3\weapons_f\data\UI\icon_sniper_CA.paa";
		class Library
		{
			libTextDesc = ":wave:";
		};
		descriptionShort = "DBA Gundark";
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 420;
			class MuzzleSlot
			{
			};
			class CowsSlot : CowsSlot_Rail
			{
				iconPosition[] = { 0.60000002,0.34999999 };
				iconScale = 0.2;
			};
			class PointerSlot
			{
			};
		};
		inertia = 1.1;
		aimTransitionSpeed = 0.5;
		dexterity = 1.1;
		class ItemInfo
		{
			priority = 1;
		};
	};
};