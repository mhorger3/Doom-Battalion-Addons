class cfgPatches 
{
	class DBA_Imperial_Weapons_E11
	{
		author = "Vulgar";
		name = "E11";
		requiredaddons[] = { 
			"A3_Weapons_F",
			"A3_Weapons_F_Items"
		};
		requiredversion = 0.1;
		units[] = {};
		weapons[] = {"DBA_E11_F"};
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

	class Rifle;
	class Rifle_Base_F : Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};

	class ItemCore;
	class InventoryFlashLightItem_Base_F;
	class optic_MRCO : ItemCore
	{
		class ItemInfo;
	};
	class DBA_E11_Base_F : Rifle_Base_F
	{
		author = "Vulgar";
		_generalMacro = "arifle_Katiba_Base_F";
		magazines[] =
		{
			"DBA_E11_Mag"
		};
		reloadAction = "GestureReloadKatiba";
		recoil = "recoil_ktb";
		maxZeroing = 1000;
		ACE_Overheating_Dispersion = 0;
		ACE_Overheating_SlowdownFactor = 0;
		ACE_Overheating_JamChance = 0;
		ACE_overheating_mrbs = 3e+09;
		ACE_overheating_allowSwapBarrel = 1;
		fireLightDuration = 0.05;
		fireLightIntensity = 0.2;
		fireLightDiffuse[] = { 1,0,0 };
		fireLightAmbient[] = { 0.5,0,0 };

		ACE_clearJamAction = "ReloadMagazine";
		canShootInWater = 1;
		handAnim[] =
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F\Rifles\Khaybar\data\anim\katiba.rtm"
		};
		hiddenSelections[] =
		{
			"camo",
		};
		hiddenSelectionsTextures[] =
		{
			"DBA_Imperial\Addons\DBA_Imperial\DBA_Weapons\DBA_E11\Data\E11_CO.paa",
		};
		hiddenSelectionsMaterials[] = 
		{
			"DBA_Imperial\Addons\DBA_Imperial\DBA_Weapons\DBA_E11\Data\DBA_E11.rvmat"
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class MuzzleSlot : MuzzleSlot_65
			{
				iconPosition[] = { 0,0.44999999 };
				iconScale = 0.2;
				compatibleItems[] = {};
			};
			class CowsSlot : CowsSlot_Rail
			{
				iconPosition[] = { 0.44999999,0.28 };
				iconScale = 0.2;
				compatibleItems[] = { "DBA_E11_Scope" };
			};
			class PointerSlot : PointerSlot_Rail
			{
				iconPosition[] = {0.34999999,0.44999999};
				iconScale = 0.2;
				compatibleItems[] = { "DBA_E11_Pointer" };
			};
		};
		class GunParticles : GunParticles
		{
			class SecondEffect
			{
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "CaselessAmmoCloud";
			};
		};
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		modes[] =
		{
			"Single",
			"FullAuto",
			"single_medium_optics1",
			"single_far_optics2",
			"fullauto_medium"
		};
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
				begin1[] = { "DBA_Imperial\Addons\DBA_Imperial\DBA_Weapons\DBA_E11\Data\E11Shot.wav",1,1,1800};
				closure2[] = { "A3\sounds_f\weapons\closure\zafir_closure_2",0.5,1,10 };
				soundBegin[] = { "begin1",1 };
				soundClosure[] = { "closure2",1 };
			};
			reloadTime = 0.075000003;
			dispersion = 0.00116;
			recoil = "recoil_single_ktb";
			recoilProne = "recoil_single_prone_ktb";
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 200;
			midRangeProbab = 0.69999999;
			maxRange = 400;
			maxRangeProbab = 0.30000001;
		};
		class FullAuto : Mode_FullAuto
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
				begin1[] = { "DBA_Imperial\Addons\DBA_Imperial\DBA_Weapons\DBA_E11\Data\E11Shot.wav",1,1,1800};
				closure2[] = { "A3\sounds_f\weapons\closure\zafir_closure_2",0.5,1,10 };
				soundBegin[] = { "begin1",1 };
				soundClosure[] = { "closure2",1 };
			};
			reloadTime = 0.075000003;
			dispersion = 0.00116;
			recoil = "recoil_auto_trg";
			recoilProne = "recoil_auto_prone_trg";
			minRange = 0;
			minRangeProbab = 0.89999998;
			midRange = 15;
			midRangeProbab = 0.69999999;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-006;
		};
		class fullauto_medium : FullAuto
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.69999999;
			maxRange = 150;
			maxRangeProbab = 0.050000001;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 200;
		};
		class single_medium_optics1 : Single
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			minRange = 2;
			minRangeProbab = 0.2;
			midRange = 450;
			midRangeProbab = 0.69999999;
			maxRange = 600;
			maxRangeProbab = 0.2;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 600;
		};
		class single_far_optics2 : single_medium_optics1
		{
			requiredOpticType = 2;
			minRange = 100;
			minRangeProbab = 0.1;
			midRange = 450;
			midRangeProbab = 0.60000002;
			maxRange = 800;
			maxRangeProbab = 0.050000001;
			aiRateOfFire = 8;
			aiRateOfFireDistance = 800;
		};
		aiDispersionCoefY = 6;
		aiDispersionCoefX = 4;

	};

	class DBA_E11_F : DBA_E11_Base_F
	{
		author = "Vulgar";
		_generalMacro = "arifle_Katiba_F";
		baseWeapon = "DBA_E11_F";
		scope = 2;
		displayName = "DBA E11";
		descriptionShort = "Its that stormtrooper gun :)";
		class Library
		{
			libTextDesc = "if you are reading this, please tell me where to find it :wave:";
		};
		model = "DBA_Imperial\Addons\DBA_Imperial\DBA_Weapons\DBA_E11\data\DBA_E11.p3d";
		picture = "\A3\weapons_F\Rifles\Khaybar\Data\UI\gear_Khaybar_X_CA.paa";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 100;
		};
		inertia = 0.40000001;
		aimTransitionSpeed = 1;
		dexterity = 1.6;
		initSpeed = 900;
	};

	class DBA_E11_Scope : optic_MRCO
	{
		author = "Trip";
		scope = 2;
		displayName = "E11 4x Scope";

		model = "DBA_Imperial\Addons\DBA_Imperial\DBA_Weapons\DBA_E11\Data\scope\DBA_ScopeE11.p3d";

		descriptionShort = "Standard Battle Sight";

		weaponInfoType = "RscOptics_sos";
		class ItemInfo : ItemInfo
		{
			mass = 8;
			opticType = 1;
			optics = 1;
			class OpticsModes
			{
				class MRCOcq
				{
					modelOptics = "\A3\Weapons_F\empty";
					opticsID = 1;
					useModelOptics = 0;
					opticsPPEffects[] =
					{
						"Default"
					};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					visionMode[] = {};
					distanceZoomMin = 300;
					distanceZoomMax = 300;
				};
				class MRCOscope
				{
					modelOptics = "\A3\Weapons_f\acc\reticle_nightstalker_F";
					opticsID = 2;
					useModelOptics = 1;
					opticsPPEffects[] =
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					// opticsZoomMin=0.025; //x10
					// opticsZoomMax=0.0625; //x4
					opticsZoomMin = 0.0625;
					opticsZoomMax = 0.125;
					opticsZoomInit = 0.125;
					discreteDistance[] = { 100,200,300,400,500,600,700,800,900,1000 };
					discreteDistanceInitIndex = 1;
					distanceZoomMin = 100;
					distanceZoomMax = 1000;
					memoryPointCamera = "opticView";
					visionMode[] =
					{
						"Normal",
						"NVG"
					};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					cameraDir = "";
				};

			};
		};
		inertia = 0.1;
	};
	class DBA_E11_Pointer : ItemCore
	{
		author = "Vulgar";
		_generalMacro = "acc_pointer_IR";
		scope = 2;
		displayName = "[DBA] E11 Laser Pointer";
		descriptionUse = "[DBA] E11 Laser Pointer";
		picture = "\A3\weapons_F\Data\UI\gear_accv_pointer_CA.paa";
		model = "DBA_Imperial\Addons\DBA_Imperial\DBA_Weapons\DBA_E11\Data\pointer\DBA_E11LaserPointer.p3d";
		descriptionShort = "$STR_A3_cfgWeapons_acc_pointer_IR1";
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			mass = 6;
			class Pointer
			{
				irLaserPos = "laser pos";
				irLaserEnd = "laser dir";
				irDistance = 5;
			};
			class FlashLight
			{
			};
		};
		inertia = 0.1;
	};
};

class cfgVehicles
{
	class Weapon_Base_F;
	class DBA_E11_Transport_F : Weapon_Base_F
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
				weapon = "DBA_E11_F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class DBA_E11_Mag
			{
				magazine = "DBA_E11_Mag";
				count = 1;
			};
		};
	};
};