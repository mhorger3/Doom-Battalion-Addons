class CfgPatches
{
	class DBA_Sando_ATLauncher
	{
		requiredAddons[] =
		{
			"A3_Weapons_F"
		};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] =
		{
			"DBA_SandoLauncher_F"
		};
	};
};
class Mode_SemiAuto;
class CfgWeapons
{
	class Launcher;
	class Launcher_Base_F : Launcher
	{
		class WeaponSlotsInfo;
	};
	class DBA_SandoLauncher_F : Launcher_Base_F
	{
		ACE_overheating_allowSwapBarrel = 1;
		ACE_overheating_dispersion = 0.75;
		ACE_Overheating_JamChance = 1.5e-12;
		ACE_overheating_mrbs = 30000000;
		ACE_overheating_slowdownFactor = 1;
		dispersion = 0.002;
		author = "Vulgar";
		_generalMacro = "launch_RPG32_F";
		scope = 2;
		displayName = "DBA Sando Launcher";
		model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Weapons\DBA_Sando\SandoFinal.p3d";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Weapons\DBA_Sando\Data\Front_CO.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Weapons\DBA_Sando\Data\Back_gun_CO.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Weapons\DBA_Sando\Data\SandoFront.rvmat",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Weapons\DBA_Sando\Data\SandoBack.rvmat"
		};
		picture = "\A3\Weapons_F\launchers\RPG32\data\UI\gear_RPG32_X_CA.paa";
		UiPicture = "\A3\Weapons_F\Data\UI\icon_at_CA.paa";
		handAnim[] =
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F\Launchers\RPG32\data\Anim\RPG32.rtm"
		};
		hiddenSelections[] =
		{
			"Camo_1",
			"Camo_2"
		};
		hiddenSelectionsTextures[] =
		{
			"\a3\weapons_f\launchers\rpg32\data\rpg_32_body_co.paa",
			"\a3\weapons_f\launchers\rpg32\data\rpg_32_optics_co.paa"
		};
		reloadAction = "ReloadRPG";
		recoil = "recoil_single_law";
		maxZeroing = 600;
		weaponInfoType = "RscOptics_titan";
		modelOptics = "\A3\Weapons_F_Beta\acc\reticle_titan.p3d";
		UiPicture = "\A3\Weapons_F\Data\UI\icon_at_CA.paa";
		optics = 1;
		opticsDisablePeripherialVision = 1;
		opticsFlare = 1;
		opticsPPEffects[] = {};
		opticsZoomInit = 0.1083;
		opticsZoomMax = 0.1083;
		opticsZoomMin = 0.1083;
		cameraDir = "look";
		class GunParticles
		{
			class effect1
			{
				positionName = "konec hlavne";
				directionName = "usti hlavne";
				effectName = "RocketBackEffectsRPGNT";
			};
		};
		class OpticsModes
		{
			class optic
			{
				opticsID = 1;
				useModelOptics = 1;
				opticsPPEffects[] = { "OpticsCHAbera1","OpticsBlur1" };
				opticsFlare = 0;
				opticsZoomInit = "0.25/1";
				opticsZoomMax = "0.25/1";
				opticsZoomMin = "0.25/6";
				distanceZoomMin = 300;
				distanceZoomMax = 300;
				memoryPointCamera = "eye";
				cameraDir = "look";
				visionMode[] = { "Normal","NVG","Ti" };
				thermalMode[] = { 0 };
				opticsDisablePeripherialVision = 1;
				discretefov[] = { 0.25, 0.083333, 0.04166 };
				discreteInitIndex = 0;
			};
		};
		magazines[] = { "DBA_AARocket_Mag","DBA_ATRocket_Mag","DBA_APRocket_Mag" };
		magazineWell[] =
		{
			"RPG32"
		};
		modes[] =
		{
			"Single"
		};
		class Single : Mode_SemiAuto
		{

			sounds[] = { "StandardSound" };
			class BaseSoundModeType {};
			class StandardSound : BaseSoundModeType
			{
				soundBegin[] = { "begin1",1 };
				begin1[] = { "A3\Sounds_F\arsenal\weapons\Launchers\NLAW\nlaw",1.9952624,1,1800 };
			};
			recoil = "recoil_single_law";
			reloadTime = 1.6;
			dispersion = 0.0002;
			minRange = 10;
			minRangeProbab = 0.5;
			midRange = 800;
			midRangeProbab = 0.7;
			maxRange = 1000;
			maxRangeProbab = 0.3;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 600;
			artilleryCharge = 1;
			artilleryDispersion = 1;
		};
		drySound[] =
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\Dry_RPG32",
			0.44668359,
			1,
			20
		};
		reloadMagazineSound[] =
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\reload_RPG32",
			0.25118864,
			1,
			10
		};
		weaponLockDelay = 3;
		aimTransitionSpeed = 0.5;
		dexterity = 1.1;
		lockAcquire = 0;
		canLock = 2;
		htMax = 460;
		ace_overpressure_angle = 60;
		ace_overpressure_damage = 0.4;
		ace_overpressure_priority = 1;
		ace_overpressure_range = 15;
		ace_reloadlaunchers_enabled = 1;
		artilleryCharge = 1;
		artilleryDispersion = 1;
		burst = 1;
		initSpeed = 30;
		inertia = 0.9;
		magazineReloadTime = 12;
		ffCount = 1;
		ffFrequency = 1;
		ffMagnitude = 0.1;
		fireLightAmbient[] = { 0,0,0 };
		fireLightDiffuse[] = { 0.937,0.631,0.259 };
		fireLightDuration = 0.05;
		fireLightIntensity = 0.2;
		fireSpreadAngle = 3;
		forceOptics = 0;
		maxRange = 500;
		maxRangeProbab = 0.04;
		maxRecoilSway = 0.008;
		maxZeroing = 600;
		midRange = 150;
		midRangeProbab = 0.58;
		minRange = 20;
		minRangeProbab = 0.3;
		tBody = 100;
		swayCoef = 0.5;
		swayDecaySpeed = 2;
		type = 4;
		reloadTime = 3.4;
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 100;
		};
		descriptionShort = "AT Launcher";
		class Library
		{
			libTextDesc = "$STR_A3_CfgWeapons_launch_LAW_Library0";
		};
	};
};
