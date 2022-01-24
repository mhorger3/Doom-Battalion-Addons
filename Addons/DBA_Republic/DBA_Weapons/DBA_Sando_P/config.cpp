class CfgPatches
{
	class DBA_Aux_Mod_Sando
	{
		author="";
		requiredAddons[]=
		{
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"DBA_Sando_Testbed",
		};
		magazines[]=
		{
			"DBA_180mm_Flash_x1_mag",
		};
		ammo[]=
		{
			"DBA_Flash_Penetrator",
			"DBA_180mm_Flash_Missile",
		};
	};
};
class UGL_F;
class Mode_SemiAuto;
class Mode_Burst: Mode_SemiAuto
{
	class BaseSoundModeType;
	class StandardSound;
};
class Mode_FullAuto: Mode_SemiAuto
{
	class BaseSoundModeType;
	class StandardSound;
};
class Single;
class close;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class GunParticles;
class CfgWeapons{
	class Launcher;
	class Launcher_Base_F: Launcher
	{
		class WeaponSlotsInfo;
	};
	class DBA_Sando_Testbed : Launcher_Base_F{
		displayName="Sando Testbed";
		scope=2;
		descriptionShort="If you haven't been asked to use it DON'T";
		baseWeapon="DBA_Sando_Testbed";
		model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Weapons\DBA_Sando\SandoFinal.p3d";
		picture = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Effects\icons\Sando_CA.paa";
		UiPicture = "\A3\Weapons_F\Data\UI\icon_at_CA.paa";
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\Dry_RPG32",0.446684,1,20};
		handAnim[] = {"OFP2_ManSkeleton","101st_Aux_Mod\Addons\DBA_Republic\DBA_Weapons\DBA_Sando_P\anims\SandoHandAnim.rtm"};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\reload_RPG32",0.251189,1,10};
		cameraDir = "look";
		ace_overpressure_angle = 45;  // Cone in which the damage is applied (in degrees from the muzzle of the cannon)
        ace_overpressure_range = 10;  // Range in meters in which the damage is applied
        ace_overpressure_damage = 0.25;  // Damage multiplier
		reloadaction = "ReloadRPG";
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
		class Library
		{
			libtextdesc = "";
		};
		magazines[]=
		{
			"DBA_180mm_Flash_x1_mag",
		};
		magazineWell[]={};
		modes[]=
		{
			"Single"
		};
		magazineReloadTime = 6;
		sound[] = {"A3\Sounds_F\weapons\Launcher\rocket_launcher_5",1,1,800};
		soundFly[] = {"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\Fly_RPG32",0.316228,1.5,900};
		class OpticsModes
		{
			class StepScope
			{
				opticsID = 1;
				useModelOptics = 1;
				opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
				opticsFlare = 0;
				opticsZoomInit = "0.25/1";
				opticsZoomMax = "0.25/1";
				opticsZoomMin = "0.25/6";
				distanceZoomMin = 300;
				distanceZoomMax = 300;
				memoryPointCamera = "eye";
				cameraDir = "look";
				visionMode[] = {"Normal","NVG","Ti"};
				thermalMode[] = {0};
				opticsDisablePeripherialVision = 1;
				discretefov[] = {"0.25/1","0.25/3","0.25/6"};
				discreteInitIndex = 0;
			};
		};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType
			{
				soundBegin[] = {"begin1",1};
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Launchers\NLAW\nlaw",1.9952624,1,1800};
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
		weaponInfoType = "RscOpticsRangeFinderVorona";
		modelOptics = "A3\Weapons_F_Tank\acc\reticle_Vorona.p3d";
		optics = 1;
		opticsDisablePeripherialVision = 1;
		opticsFlare = 1;
		opticsPPEffects[] = {};
		opticsZoomInit = 0.1083;
		opticsZoomMax = 0.1083;
		opticsZoomMin = 0.1083;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=250;
		};
	};
};
class CfgMagazines{
	class CA_LauncherMagazine;
	class DBA_180mm_Flash_x1_mag : CA_LauncherMagazine{
		displayname="Flash ATGM";
		ammo="DBA_180mm_Flash_Missile";
		scope=2;
		model="\a3\Weapons_F_Tank\Ammo\rocket_spg9_item.p3d";
		picture="\a3\Weapons_F_Tank\Launchers\Vorona\Data\UI\icon_rocket_vorona_HEAT_F_ca.paa";
		displaynamemagazine="Flash ATGM";
		shortnamemagazine="Flash ATGM";
		displayNameMFDFormat="Flash ATGM";
		displayNameShort="Flash ATGM";
		mass=135;
		count=1;
		initspeed=1000;
		tracersevery=1;
	};
};

class CfgAmmo{
	class MissileBase;
	class ammo_Penetrator_Base;
	class DBA_Flash_Penetrator : ammo_Penetrator_Base{
		hit=1100;
		warheadName = "Tandem";
		caliber=30;
	};
	class DBA_180mm_Flash_Missile : MissileBase{
		model = "\A3\weapons_f\launchers\nlaw\nlaw_rocket";
		warheadName="Tandem";
		submunitionAmmo="DBA_Flash_Penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0.000000;
		submunitionInitialOffset[]= {0, 0, -0.200000};
		triggerOnImpact = 1;
		deleteParentWhenTriggered=0;
		hit=100;
		indirectHit=30;
		indirectHitRange=1.5;
		explosive=0.80000001;
		cost=30;
		coefGravity=0.00;
		aiAmmoUsageFlags="128 + 512";
		allowAgainstInfantry=0;
		simulationStep=0.02;
		explosionSoundEffect="DefaultExplosion";
		effectsMissileInit="RocketBackEffectsRPG";
		timeToLive=24;
		airFriction = 0.0;
		sideAirFriction = 0.0;
		maxSpeed=1000;
		typicalspeed=100;
		initTime=0.05;
		thrustTime=6;
		thrust=500;
		fuseDistance=25;
		effectsMissile="missile2";
		whistleDist=4;
		manualControl = 0;
		class CamShakeExplode
		{
			power=50;
			duration=3.5;
			frequency=20;
			distance=100;
		};
		class CamShakeHit
		{
			power=110;
			duration=1.8;
			frequency=20;
			distance=20;
		};
		class CamShakeFire
		{
			power=2.78316;
			duration=1.6;
			frequency=20;
			distance=61.967701;
		};
		class CamShakePlayerFire
		{
			power=3;
			duration=0.1;
			frequency=20;
			distance=1;
		};
	
	};
};