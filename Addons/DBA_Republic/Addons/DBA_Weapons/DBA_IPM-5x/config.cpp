class CfgPatches
{
	class DBA_Aux_Mod_IPM5
	{
		author="";
		requiredAddons[]=
		{
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"DBA_IPM5x",
		};
		magazines[]=
		{
			"DBA_IK3_x2_mag",
			"DBA_IAD5_x3_mag",
		};
		ammo[]=
		{
			"DBA_IK3_Penetrator",
			"DBA_IK3_MMissile",
			"DBA_IAD5_MMissile",
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
	class DBA_IPM5x : Launcher_Base_F{
		displayName="IPM-5x";
		scope=2;
		descriptionShort="Not the PLX Plox";
		baseWeapon="DBA_IPM5x";
		model = "\3AS\3AS_Weapons\RPS6\3AS_RPS6_F.p3d";
		picture = "\A3\Weapons_F\launchers\RPG32\data\UI\gear_RPG32_X_CA.paa";
		UiPicture = "\A3\Weapons_F\Data\UI\icon_at_CA.paa";
		handAnim[] = {"OFP2_ManSkeleton","3as\3as_weapons\data\anim\rps6_hold.rtm"};
		sounds[] = {"StandardSound"};
		cameraDir = "look";
		ace_overpressure_angle = 45;  // Cone in which the damage is applied (in degrees from the muzzle of the cannon)
        ace_overpressure_range = 10;  // Range in meters in which the damage is applied
        ace_overpressure_damage = 0.25;  // Damage multiplier
		class Library
		{
			libtextdesc = "";
		};
		magazines[]=
		{
			"DBA_IK3_x2_mag",
			"DBA_IAD5_x3_mag",
		};
		magazineWell[]={};
		recoil="recoil_pistol";
		modes[]=
		{
			"Single"
		};
		magazineReloadTime = 4;
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
			};
			class StandardSound
			{
            begin1[] = {"swlw_rework\sounds\launcher\PLX_shot.wss",10,1.1,2000};
            soundBegin[] = {"begin1",1};
			};
			aiRateOfFire=7;
			aiRateOfFireDistance=600;
			dispersion=0.07;
			minRange=50;
			minRangeProbab=0.40000001;
			midRange=500;
			midRangeProbab=0.80000001;
			maxRange=1000;
			maxRangeProbab=0.9;
		};
		ace_javelin_enabled = 1;  // Enable Javelin-style locking (0-disabled, 1-enabled)
        weaponInfoType = "ACE_RscOptics_javelin";  // Inteface
        modelOptics = "\z\ace\addons\javelin\data\reticle_titan.p3d";  // Optics model
        canLock = 0;  // Disable vanilla locking (0-disabled, 1-enabled)
        lockingTargetSound[] = {"", 0, 1};  // Locking sound
        lockedTargetSound[] = {"", 0, 1};  // Target acquired sound
		weaponLockSystem="0";
		class OpticsModes
		{
			class StepScope
			{
				opticsID=1;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticsFlare=0;
				opticsZoomMin=0.087499999;
				opticsZoomMax=0.087499999;
				opticsZoomInit=0.087499999;
				distanceZoomMin=300;
				distanceZoomMax=300;
				memoryPointCamera="eye";
				cameraDir="look";
				visionMode[]=
				{
					"Normal",
					"TI"
				};
				thermalMode[]={7};
				opticsDisablePeripherialVision=1;
				discretefov[]={0.0583333,0.0291667};
				discreteInitIndex=0;
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=250;
		};
	};
};
class CfgMagazines{
	class CA_LauncherMagazine;
	class DBA_IK3_x2_mag : CA_LauncherMagazine{
		displayname="IK-3 ATGM Pod";
		ammo="DBA_IK3_MMissile";
		scope=2;
		model="\a3\Weapons_F_Tank\Ammo\rocket_spg9_item.p3d";
		picture="\a3\Weapons_F_Tank\Launchers\Vorona\Data\UI\icon_rocket_vorona_HEAT_F_ca.paa";
		displaynamemagazine="IK-3 ATGM Pod";
		shortnamemagazine="IK-3 ATGM Pod";
		displayNameMFDFormat="IK-3 ATGM";
		displayNameShort="IK-3 ATGM";
		mass=100;
		count=2;
		initspeed=100;
		tracersevery=1;
	};
	class DBA_IAD5_x3_mag : CA_LauncherMagazine{
		displayname="IAD-5 MANPAD Pod";
		scope=2;
		ammo="DBA_IAD5_MMissile";
		model="A3\Weapons_F_Tank\Launchers\Vorona\Vorona_tube_heat.p3d";
		picture="\a3\Weapons_F_Tank\Launchers\Vorona\Data\UI\icon_rocket_vorona_HEAT_F_ca.paa";
		displaynamemagazine="IAD-5 MANPAD";
		shortnamemagazine="IAD-5 MANPAD";
		displayNameMFDFormat="IAD-5";
		displayNameShort="IAD-5";
		mass=80;
		count=3;
		initspeed=100;
		tracersevery=1;
	};
};

class CfgAmmo{
	class MissileBase;
	class ammo_Penetrator_Base;
	class DBA_IK3_Penetrator : ammo_Penetrator_Base{
		hit=900;
		warheadName = "Tandem";
		caliber=27.33333333;
	};
	class DBA_IK3_MMissile : MissileBase{
		model="\a3\Weapons_F_Tank\Ammo\rocket_spg9.p3d";
		warheadName="Tandem";
		submunitionAmmo="DBA_IK3_Penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0.000000;
		submunitionInitialOffset[]= {0, 0, -0.200000};
		triggerOnImpact = 1;
		deleteParentWhenTriggered=0;
		hit=50;
		indirectHit=125;
		indirectHitRange=4.5;
		explosive=0.80000001;
		cost=30;
		aiAmmoUsageFlags="128 + 512";
		allowAgainstInfantry=0;
		simulationStep=0.02;
		explosionSoundEffect="DefaultExplosion";
		effectsMissileInit="RocketBackEffectsRPG";
		timeToLive=24;
		airFriction = 0.2;
		sideAirFriction = 0.35;
		trackOversteer = 2.5;
		trackLead = 1.5;
		maneuvrability = 32;
		maxSpeed=215;
		typicalspeed=100;
		initTime=0.1;
		thrustTime=10;
		thrust=85;
		fuseDistance=15;
		effectsMissile="missile2";
		whistleDist=4;
		manualControl = 0;
		flightProfiles[] = {"Direct","TopDown","Cruise"};
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
		class Direct
		{
		};
		class TopDown
		{
			ascendHeight = 400;
			descendDistance = 30;
			minDistance = 300;
			ascendAngle = 90;
		};
		class Cruise
		{
			preferredFlightAltitude = 100;
			lockDistanceToTarget = 3000;
		};
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent
					{
                    class AirTarget
                    {
                        minRange = 3000;
                        maxRange = 3000;
                        objectDistanceLimitCoef = 1;
                        viewDistanceLimitCoef = -1;
                    };
                    class GroundTarget
                    {
                        minRange = 3000;
                        maxRange = 3000;
                        objectDistanceLimitCoef = 1;
                        viewDistanceLimitCoef = -1;
                    };
                    typeRecognitionDistance = -1;
                    angleRangeHorizontal = 20;
                    angleRangeVertical = 20;
                    groundNoiseDistanceCoef = 0;
                    maxGroundNoiseDistance = 0;
                    minTrackableSpeed = 0;
                    maxTrackableSpeed = 9999;
                    minTrackableATL = 0;
                    minSpeedThreshold = 0;
                    maxSpeedThreshold = 1;
                    maxFogSeeThrough = 0.95;
                    aimDown = 25;
                    componentType = "IRSensorComponent";
                    color[] = {1,0,0,1};
                    allowsMarking = 1;
                    animDirection = "";
                    maxTrackableATL = 1e+010;
					};
				};
			};
		};
		class ace_missileguidance {
            enabled = 1; // Enable missile guidance (0-disabled, 1-enabled)

            minDeflection = 5e-005;
			maxDeflection = 0.025;
			incDeflection = 5e-005;

            canVanillaLock = 0;  // Enable vanilla lock, only applicable to non-cadet modes, 'recruit' always uses vanilla locking (0-disabled, 1-enabled)

            defaultSeekerType = "Optic";  // Default seeker type
            seekerTypes[] = {"Optic"};  // Seeker types available

            defaultSeekerLockMode = "LOBL";  // Default seeker lock mode
            seekerLockModes[] = {"LOBL"};  // Seeker lock modes available

            seekerAngle = 180;  // Angle in front of the missile which can be searched
            seekerAccuracy = 1;  // Seeker accuracy multiplier

            seekerMinRange = 0;  // Minimum range from the missile which the seeker can visually search
            seekerMaxRange = 3000;  // Maximum from the missile which the seeker can visually search

            defaultAttackProfile = "JAV_TOP";
			attackProfiles[] = {"JAV_TOP","JAV_DIR"};
			useModeForAttackProfile = 1;
		}
	};
	class DBA_IAD5_MMissile : MissileBase{
		model = "\A3\Weapons_F\Ammo\Rocket_01_fly_F";
		hit = 100;
		indirectHit = 120;
		indirectHitRange = 12;
		proximityExplosionDistance=12;
		explosive = 1.000000;
		warheadName = "SAM";
		simulationStep = 0.002000;
		timeToLive = 75;
		initTime = 0.2;
		thrustTime = 17;
		thrust = 230;
		maxSpeed = 686;
		fuseDistance = 25;
		airFriction = 0.2;
		sideAirFriction = 0.35;
		trackOversteer = 1.4;
		trackLead = 0.9;
		maneuvrability = 32;
		cost = 500;
		aiAmmoUsageFlags = "128 + 512";
		dangerRadiusHit = 1000;
		suppressionRadiusHit = 120;
		craterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		explosionSoundEffect = "DefaultExplosion";
		effectsMissileInit = "RocketBackEffectsRPG";
		effectsMissile = "missile2";
		muzzleEffect = "";
		whistleDist = 4;
		lockType = 0;
		maxControlRange = 10000;
		weaponLockSystem[]= {"1+2+16"};
		cmImmunity = 1;
		cameraViewAvailable = 1;
		submunitionAmmo = "";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0.000000;
		submunitionInitialOffset[]= {0, 0, -0.200000};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		manualControl = 0;
		flightProfiles[] = {"Direct","TopDown","Cruise"};
		class Direct
		{
		};
		class TopDown
		{
			ascendHeight = 400;
			descendDistance = 200;
			minDistance = 300;
			ascendAngle = 25;
		};
		class Cruise
		{
			preferredFlightAltitude = 60;
			lockDistanceToTarget = 5000;
		};
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent
					{
                    class AirTarget
                    {
                        minRange = 5000;
                        maxRange = 5000;
                        objectDistanceLimitCoef = 1;
                        viewDistanceLimitCoef = -1;
                    };
                    class GroundTarget
                    {
                        minRange = 5000;
                        maxRange = 5000;
                        objectDistanceLimitCoef = 1;
                        viewDistanceLimitCoef = -1;
                    };
                    typeRecognitionDistance = -1;
                    angleRangeHorizontal = 20;
                    angleRangeVertical = 20;
                    groundNoiseDistanceCoef = 0;
                    maxGroundNoiseDistance = 0;
                    minTrackableSpeed = 0;
                    maxTrackableSpeed = 9999;
                    minTrackableATL = 0;
                    minSpeedThreshold = 0;
                    maxSpeedThreshold = 1;
                    maxFogSeeThrough = 0.95;
                    aimDown = 25;
                    componentType = "IRSensorComponent";
                    color[] = {1,0,0,1};
                    allowsMarking = 1;
                    animDirection = "";
                    maxTrackableATL = 1e+010;
					};
				};
			};
		};
		class ace_missileguidance {
            enabled = 1; // Enable missile guidance (0-disabled, 1-enabled)

            minDeflection = 5e-005;
			maxDeflection = 0.025;
			incDeflection = 5e-005;

            canVanillaLock = 0;  // Enable vanilla lock, only applicable to non-cadet modes, 'recruit' always uses vanilla locking (0-disabled, 1-enabled)

            defaultSeekerType = "Optic";  // Default seeker type
            seekerTypes[] = {"Optic"};  // Seeker types available

            defaultSeekerLockMode = "LOBL";  // Default seeker lock mode
            seekerLockModes[] = {"LOBL"};  // Seeker lock modes available

            seekerAngle = 180;  // Angle in front of the missile which can be searched
            seekerAccuracy = 1;  // Seeker accuracy multiplier

            seekerMinRange = 0;  // Minimum range from the missile which the seeker can visually search
            seekerMaxRange = 5000;  // Maximum from the missile which the seeker can visually search

            defaultAttackProfile = "JAV_TOP";
			attackProfiles[] = {"JAV_TOP","JAV_DIR"};
			useModeForAttackProfile = 1;
		}
	};
};