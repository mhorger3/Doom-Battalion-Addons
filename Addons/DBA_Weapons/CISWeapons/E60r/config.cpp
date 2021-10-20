class CfgPatches
{
	class DBA_Aux_Mod_E60r
	{
		author="";
		requiredAddons[]=
		{
			"101st_Aux_Mod",
			"DBA_patch_weapons",
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"DBA_E60R",
			"DBA_E60J",
		};
		magazines[]=
		{
			"DBA_DR15_HEAT_mag",
			"DBA_SR8_THEAT_mag",
		};
		ammo[]=
		{
			"DBA_DR15_Penetrator",
			"DBA_SR8_Penetrator",
			"DBA_DR15_HEAT",
			"DBA_SR8_THEAT",
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
	class DBA_E60R : Launcher_Base_F{
		displayName="E60R";
		scope=2;
		descriptionShort="Roger Roger";
		baseWeapon="DBA_E60R";
		picture="\MRC\JLTS\weapons\E60R\data\ui\E60R_ui_ca.paa";
		uiPicture="MRC\JLTS\weapons\E60R\data\ui\E60R_ui_ca.paa";
		model="\MRC\JLTS\weapons\E60R\E60R.p3d";
		modelSpecial="";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\MRC\JLTS\weapons\E60R\anims\E60R_handanim.rtm"
		};
		hiddenSelections[]=
		{
			"camo1",
			"illum"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\weapons\E60R\data\E60R_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"",
			"\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
		};
		magazines[]=
		{
			"DBA_DR15_HEAT_mag",
		};
		magazineWell[]={};
		recoil="recoil_rpg";
		modes[]=
		{
			"Single"
		};
		magazineReloadTime = 6;
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\rpg32",
					1.9952624,
					1,
					1500
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			recoil="recoil_single_law";
			aiRateOfFire=7;
			aiRateOfFireDistance=600;
			dispersion=0.07;
			minRange=50;
			minRangeProbab=0.90000001;
			midRange=400;
			midRangeProbab=0.90000001;
			maxRange=700;
			maxRangeProbab=0.85;
		};
		modelOptics="A3\Weapons_F_Tank\acc\reticle_Vorona.p3d";
		class OpticsModes
		{
			class optic
			{
				opticsID=1;
				useModelOptics=1;
				opticsZoomMin=0.175;
				opticsZoomMax=0.175;
				opticsZoomInit=0.175;
				distanceZoomMin=300;
				distanceZoomMax=300;
				memoryPointCamera="eye";
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				cameraDir="look";
				visionMode[]=
				{
					"Normal"
				};
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
			};
		};
		canLock=0;
		weaponLockSystem=0;
		textureType="semi";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=200;
		};
	};
	class DBA_E60J : Launcher_Base_F{
		displayName="E60J";
		scope=2;
		descriptionShort="Roger Roger";
		baseWeapon="DBA_E60J";
		picture="\MRC\JLTS\weapons\E60R\data\ui\E60R_ui_ca.paa";
		uiPicture="MRC\JLTS\weapons\E60R\data\ui\E60R_ui_ca.paa";
		model="\MRC\JLTS\weapons\E60R\E60R.p3d";
		modelSpecial="";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\MRC\JLTS\weapons\E60R\anims\E60R_handanim.rtm"
		};
		hiddenSelections[]=
		{
			"camo1",
			"illum"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\weapons\E60R\data\E60R_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"",
			"\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
		};
		magazines[]=
		{
			"DBA_SR8_THEAT_mag",
		};
		magazineWell[]={};
		recoil="recoil_rpg";
		modes[]=
		{
			"Single"
		};
		magazineReloadTime = 6;
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\rpg32",
					1.9952624,
					1,
					1500
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			recoil="recoil_single_law";
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
				thermalMode[]={4,5};
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
	class DBA_DR15_HEAT_mag : CA_LauncherMagazine{
		displayname="DR-15 HEAT Rockets";
		ammo="DBA_DR15_HEAT";
		scope=2;
		model="\a3\Weapons_F_Tank\Ammo\rocket_spg9_item.p3d";
		picture="\a3\Weapons_F_Tank\Launchers\Vorona\Data\UI\icon_rocket_vorona_HEAT_F_ca.paa";
		displaynamemagazine="DR-15 HEAT";
		shortnamemagazine="DR-15 HEAT";
		displayNameMFDFormat="HEAT";
		displayNameShort="DR-15 HEAT";
		mass=100;
		count=1;
		initspeed=300;
		tracersevery=1;
	};
	class DBA_SR8_THEAT_mag : CA_LauncherMagazine{
		displayname="SR-8 Tandem Heat Missile";
		scope=2;
		ammo="DBA_SR8_THEAT";
		model="A3\Weapons_F_Tank\Launchers\Vorona\Vorona_tube_heat.p3d";
		picture="\a3\Weapons_F_Tank\Launchers\Vorona\Data\UI\icon_rocket_vorona_HEAT_F_ca.paa";
		displaynamemagazine="SR-8 Tandem Heat";
		shortnamemagazine="SR-8 Tandem Heat";
		displayNameMFDFormat="Tandem Heat";
		displayNameShort="SR-8 Tandem Heat";
		mass=250;
		count=1;
		initspeed=300;
		tracersevery=1;
	};
};
class CfgAmmo{
	class RocketBase;
	class MissileBase;
	class ammo_Penetrator_Base;
	class DBA_DR15_Penetrator : ammo_Penetrator_Base{
		hit=850;
		warheadName = "HEAT";
		caliber=23.33333333;
	};
	class DBA_SR8_Penetrator : ammo_Penetrator_Base{
		hit=1300;
		warheadName = "TandemHEAT";
		caliber=40;
	};
	class DBA_DR15_HEAT : RocketBase{
		model="\a3\Weapons_F_Tank\Ammo\rocket_spg9.p3d";
		warheadName="HEAT";
		submunitionAmmo="DBA_DR15_Penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0.000000;
		submunitionInitialOffset[]= {0, 0, -0.200000};
		triggerOnImpact = 1;
		deleteParentWhenTriggered=0;
		hit=50;
		indirectHit=125;
		manualControl=0;
		indirectHitRange=4.5;
		explosive=0.80000001;
		cost=30;
		aiAmmoUsageFlags="128 + 512";
		allowAgainstInfantry=0;
		simulationStep=0.02;
		explosionSoundEffect="DefaultExplosion";
		effectsMissileInit="RocketBackEffectsRPG";
		timeToLive=24;
		airfriction=0.44999999;
		sideAirFriction=0.0099999998;
		maxSpeed=820;
		typicalspeed=400;
		initTime=0.029999999;
		thrustTime=1.25;
		thrust=400;
		fuseDistance=15;
		effectsMissile="missile2";
		whistleDist=4;
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
	class DBA_SR8_THEAT : MissileBase{
		model = "\A3\Weapons_F\Ammo\Rocket_01_fly_F";
		hit = 100;
		indirectHit = 20;
		indirectHitRange = 4.500000;
		explosive = 0.400000;
		warheadName = "ATGM";
		simulationStep = 0.002000;
		timeToLive = 75;
		initTime = 0.2;
		thrustTime = 5;
		thrust = 60;
		maxSpeed = 550;
		fuseDistance = 25;
		airFriction = 0.2;
		sideAirFriction = 0.35;
		trackOversteer = 1.4;
		trackLead = 1;
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
		submunitionAmmo = "DBA_SR8_Penetrator";
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
			ascendHeight = 160;
			descendDistance = 200;
			minDistance = 150;
			ascendAngle = 45;
		};
		class Cruise
		{
			preferredFlightAltitude = 60;
			lockDistanceToTarget = 1000;
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
                        minRange = 500;
                        maxRange = 3000;
                        objectDistanceLimitCoef = 1;
                        viewDistanceLimitCoef = -1;
                    };
                    class GroundTarget
                    {
                        minRange = 500;
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
                    maxTrackableSpeed = 37;
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
            seekerMaxRange = 2500;  // Maximum from the missile which the seeker can visually search

            defaultAttackProfile = "JAV_TOP";
			attackProfiles[] = {"JAV_TOP","JAV_DIR"};
			useModeForAttackProfile = 1;
		}
	};
};