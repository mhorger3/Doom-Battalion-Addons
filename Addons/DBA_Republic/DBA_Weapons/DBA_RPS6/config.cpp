class CfgPatches
{
	class DBA_RPS6
	{
		requiredAddons[] =
		{
			"A3_Weapons_F"
		};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] =
		{
			"DBA_RPS6_Launcher_F"
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
	class DBA_RPS6_Launcher_F : Launcher_Base_F
	{
		author = "Vulgar";
		_generalMacro = "launch_RPG32_F";
		scope = 2;
		displayName = "DBA RPS6";
		model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Weapons\DBA_RPS6\RPS6.p3d";
		picture = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Effects\icons\Sando_CA.paa";
		UiPicture = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Effects\icons\Sando_CA.paa";
		handAnim[] =
		{
			"OFP2_ManSkeleton",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Weapons\DBA_RPS6\anims\RPS6HandAnim.rtm"
		};
		hiddenSelections[] =
		{
			"Camo1",
		};
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Weapons\DBA_RPS6\data\RPS6_CO.paa"
		};
		reloadAction = "ReloadRPG";
		recoil = "recoil_rpg";
		maxZeroing = 600;
		modelOptics = "\A3\Weapons_F\acc\reticle_RPG_F";
		weaponInfoType = "RscWeaponEmpty";
		opticsZoomMin = 0.1083;
		opticsZoomMax = 0.1083;
		opticsZoomInit = 0.1083;
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
				opticsZoomMin = 0.1083;
				opticsZoomMax = 0.1083;
				opticsZoomInit = 0.1083;
				distanceZoomMin = 300;
				distanceZoomMax = 300;
				memoryPointCamera = "eye";
				opticsFlare = 1;
				opticsDisablePeripherialVision = 1;
				cameraDir = "look";
				visionMode[] =
				{
					"Normal",
					"NVG"
				};
				opticsPPEffects[] =
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
			};
		};
		magazines[] = 
		{ 
			"101st_RPS6_HEAA",
			"101st_RPS6_HEDP" 
		};
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
			sounds[] =
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
			};
			class StandardSound : BaseSoundModeType
			{
				begin1[] =
				{
					"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\rpg32",
					1.9952624,
					1,
					1500
				};
				soundBegin[] =
				{
					"begin1",
					1
				};
			};
			recoil = "recoil_single_law";
			aiRateOfFire = 5;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 2;
			minRange = 10;
			minRangeProbab = 0.30000001;
			midRange = 40;
			midRangeProbab = 0.85000002;
			maxRange = 600;
			maxRangeProbab = 0.85000002;
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
		canLock = 0;
		weaponLockDelay = 3;
		lockAcquire = 0;
		inertia = 0.89999998;
		aimTransitionSpeed = 0.5;
		dexterity = 1.1;
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 100;
		};
		descriptionShort = "DBA RPS6";
		class Library
		{
			libTextDesc = "$STR_A3_CfgWeapons_launch_LAW_Library0";
		};
	};
};
