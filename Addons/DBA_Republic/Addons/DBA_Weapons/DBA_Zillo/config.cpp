class CfgPatches
{
	class DBA_Zillo
	{
		requiredAddons[] =
		{
			"A3_Weapons_F"
		};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] =
		{
			"DBA_Zillo_F"
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
class UnderBarrelSlot;
class CfgWeapons
{
	class Rifle_Base_F;
	class Rifle_Long_Base_F : Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	class ItemCore;
	class optic_lrps : ItemCore
	{
		class ItemInfo;
	};
	class DBA_ZILLO_SCOPE : optic_lrps
	{
		Author = "Vulgar";
		Scope = 2;
		displayName = "Zillo Scope";
		class ItemInfo : ItemInfo
		{
			allowedSlots[] = { 801,701,901 };
			mass = 16;
			modelOptics = "\A3\Weapons_F\acc\reticle_sniper_F";
			mountAction = "MountOptic";
			muzzleEnd = "konec hlavne";
			muzzlePos = "usti hlavne";
			optics = 1;
			opticType = 2;
			scope = 0;
			type = 201;
			unmountAction = "DismountOptic";
			weaponInfoType = "RscWeaponRangeZeroingFOV";
			zeroingSound[] = { "A3\Sounds_F\arsenal\sfx\shared\zeroing_knob_tick_plastic",0.316228,1,5 };
			class OpticsModes
			{
				class snip
				{
					cameraDir = "";
					discreteDistance[] = { 100 };
					discreteDistanceInitIndex = 0;
					discretefov[] = { 0.045,0.011 };
					discreteInitIndex = 0;
					distanceZoomMax = 2400;
					distanceZoomMin = 300;
					memoryPointCamera = "opticView";
					modelOptics[] = { "\A3\Weapons_F\acc\reticle_lrps_F","\A3\Weapons_F\acc\reticle_lrps_z_F" };
					opticsDisablePeripherialVision = 1;
					opticsDisplayName = "WFOV";
					opticsFlare = 1;
					opticsID = 1;
					opticsPPEffects[] = { "OpticsCHAbera1","OpticsBlur1" };
					opticsZoomInit = 0.045;
					opticsZoomMax = 0.045;
					opticsZoomMin = 0.011;
					useModelOptics = 1;
					visionMode[] =
					{
						"Normal",
						"NVG"
					};
				};
			};
		};
		descriptionShort = "Standard Zillo Sight";
	};

	class DBA_Zillo_F : Rifle_Long_Base_F
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
		selectionFireAnim = "zasleh";
		flash = "gunfire";
		flashSize = 0.5;
		fireLightIntensity = 0.5;
		fireLightDuration = 0.050000001;
		fireLightDiffuse[] = { 1,.65,0 };
		fireLightAmbient[] = { 1,.65,0 };

		cost = 5000;

		author = "Dutch, Frisk";
		scope = 2;
		model = "DBA_Republic\Addons\DBA_Weapons\DBA_Zillo\zillo.p3d";
		aimTransitionSpeed = 0.5;
		bullet1[] = { "A3\sounds_f\weapons\shells\7_62\metal_762_01",0.891251,1,25 };
		bullet10[] = { "A3\sounds_f\weapons\shells\7_62\grass_762_02",0.707946,1,25 };
		bullet11[] = { "A3\sounds_f\weapons\shells\7_62\grass_762_03",0.707946,1,25 };
		bullet12[] = { "A3\sounds_f\weapons\shells\7_62\grass_762_04",0.707946,1,25 };
		bullet2[] = { "A3\sounds_f\weapons\shells\7_62\metal_762_02",0.891251,1,25 };
		bullet3[] = { "A3\sounds_f\weapons\shells\7_62\metal_762_03",0.891251,1,25 };
		bullet4[] = { "A3\sounds_f\weapons\shells\7_62\metal_762_04",0.891251,1,25 };
		bullet5[] = { "A3\sounds_f\weapons\shells\7_62\dirt_762_01",0.794328,1,25 };
		bullet6[] = { "A3\sounds_f\weapons\shells\7_62\dirt_762_02",0.794328,1,25 };
		bullet7[] = { "A3\sounds_f\weapons\shells\7_62\dirt_762_03",0.794328,1,25 };
		bullet8[] = { "A3\sounds_f\weapons\shells\7_62\dirt_762_04",0.794328,1,25 };
		bullet9[] = { "A3\sounds_f\weapons\shells\7_62\grass_762_01",0.707946,1,25 };
		descriptionShort = "DBA AT Rifle";
		muzzles[] = { "this" };
		//magazines[] = {"101st_Zillo_Mag"};
		magazines[] = { "DBA_Zillo_Mag","DBA_EMP_x1_Base" };
		displayName = "DBA Zillo AT-6";
		drySound[] = { "A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_dry",0.501187,1,20 };
		hiddenSelectionsTextures[] = { "DBA_Republic\Addons\DBA_Weapons\DBA_Zillo\data\atRifle_CO.paa" };
		hiddenSelections[] =
		{
			"camo1"
		};
		modes[] = { "Single","far_optic1","medium_optic2","far_optic2" };
		picture = "\A3\Weapons_F\LongRangeRifles\M320\Data\UI\gear_M320_LRR_X_CA.paa";
		recoil = "recoil_m320";
		recoilProne = "assaultRifleBase";
		reloadAction = "GestureReloadLRR";
		reloadMagazineSound[] = { "A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_reload",1,1,10 };
		UiPicture = "\A3\weapons_f\data\UI\icon_sniper_CA.paa";
		handAnim[] = { "OFP2_ManSkeleton","DBA_Republic\Addons\DBA_Weapons\DBA_Zillo\anims\ZilloHandAnim.rtm" };
		class Single : Mode_SemiAuto
		{
			sounds[] =
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
			};
			class StandardSound : BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				begin1[] = { "DBA_Republic\Addons\DBA_Weapons\DBA_Zillo\pulserifle.ogg",2.5,1,2700 };
				closure2[] = { "A3\sounds_f\weapons\closure\zafir_closure_2",0.5,1,10 };
				soundBegin[] = { "begin1",1 };
				soundClosure[] = { "closure2",1 };
			};
			recoil = "recoil_single_mx";
			recoilProne = "recoil_single_prone_mx";
			reloadTime = 2.5;
			dispersion = "((0.50) * 0.00029088)";
			minRange = 2;
			minRangeProbab = 0.1;
			midRange = 750;
			midRangeProbab = 0.7;
			maxRange = 1500;
			maxRangeProbab = 0.3;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 500;
		};
		class far_optic1 : Single
		{
			sounds[] =
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
			};
			class StandardSound : BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				begin1[] = { "DBA_Republic\Addons\DBA_Weapons\DBA_Zillo\pulserifle.ogg",2.5,1,2700 };
				closure2[] = { "A3\sounds_f\weapons\closure\zafir_closure_2",0.5,1,10 };
				soundBegin[] = { "begin1",1 };
				soundClosure[] = { "closure2",1 };
			};
			recoil = "recoil_single_mx";
			recoilProne = "recoil_single_prone_mx";
			reloadTime = 2.5;
			dispersion = "((0.50) * 0.00029088)";
			minRange = 1500;
			minRangeProbab = 0.1;
			midRange = 2000;
			midRangeProbab = 0.7;
			maxRange = 3500;
			maxRangeProbab = 0.3;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 700;
		};
		class medium_optic2 : Single
		{
			sounds[] =
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
			};
			class StandardSound : BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				begin1[] = { "DBA_Republic\Addons\DBA_Weapons\DBA_Zillo\pulserifle.ogg",2.5,1,2700 };
				closure2[] = { "A3\sounds_f\weapons\closure\zafir_closure_2",0.5,1,10 };
				soundBegin[] = { "begin1",1 };
				soundClosure[] = { "closure2",1 };
			};
			recoil = "recoil_single_mx";
			recoilProne = "recoil_single_prone_mx";
			reloadTime = 3.8;
			dispersion = "((0.50) * 0.00029088)";
			minRange = 3500;
			minRangeProbab = 0.1;
			midRange = 5000;
			midRangeProbab = 0.7;
			maxRange = 7500;
			maxRangeProbab = 0.3;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 1000;
		};
		class far_optic2 : far_optic1
		{
			sounds[] =
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
			};
			class StandardSound : BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				begin1[] = { "DBA_Republic\Addons\DBA_Weapons\DBA_Zillo\pulserifle.ogg",2.5,1,2700 };
				closure2[] = { "A3\sounds_f\weapons\closure\zafir_closure_2",0.5,1,10 };
				soundBegin[] = { "begin1",1 };
				soundClosure[] = { "closure2",1 };
			};
			recoil = "recoil_single_mx";
			recoilProne = "recoil_single_prone_mx";
			reloadTime = 3.8;
			dispersion = "((0.50) * 0.00029088)";
			minRange = 5000;
			minRangeProbab = 0.1;
			midRange = 7500;
			midRangeProbab = 0.7;
			maxRange = 10000;
			maxRangeProbab = 0.3;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 2000;
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 150;
			class MuzzleSlot : MuzzleSlot
			{
				compatibleItems[] = {};
			};
			class CowsSlot : CowsSlot
			{
				compatibleItems[] = { "optic_LRPS", "optic_KHS_blk", "optic_DMS", "optic_AMS", "DBA_ZILLO_SCOPE" };
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";

			};
			class PointerSlot : PointerSlot
			{
				compatibleItems[] = {};
			};

			class UnderBarrelSlot : UnderBarrelSlot
			{
				compatibleItems[] = { "bipod_01_F_blk","bipod_02_F_blk","bipod_03_F_blk" };
			}
		};
	};
};
