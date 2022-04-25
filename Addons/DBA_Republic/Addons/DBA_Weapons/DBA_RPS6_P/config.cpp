class CfgPatches
{
	class DBA_Aux_Mod_RPS6
	{
		author="";
		requiredAddons[]=
		{
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"DBA_RPS6_Testbed",
		};
		magazines[]=
		{
			"DBA_90mm_IK55_HEAT_x1_mag",
			"DBA_90mm_IK55T_THEAT_x1_mag",
			"DBA_90mm_IK60_HEP_x1_mag",
			"DBA_90mm_IK40_FRAG_x1_mag",
		};
		ammo[]=
		{
			"DBA_90mm_HEAT_Penetrator",
			"DBA_90mm_THEAT_Penetrator",
			"DBA_90mm_IK55_HEAT",
			"DBA_90mm_IK55T_THEAT",
			"DBA_90mm_IK60_HEP",
			"DBA_90mm_IK40_FRAG",
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
	class DBA_RPS6_Testbed : Launcher_Base_F{
		displayName="RPS-6 Prototype";
		scope=2;
		descriptionShort="If you haven't been asked to use it DON'T";
		baseWeapon="DBA_RPS6_Testbed";
		model = "DBA_Republic\Addons\DBA_Weapons\DBA_RPS6\RPS6.p3d";
		picture = "\A3\Weapons_F\launchers\RPG32\data\UI\gear_RPG32_X_CA.paa";
		UiPicture = "\A3\Weapons_F\Data\UI\icon_at_CA.paa";
		handAnim[] = {"OFP2_ManSkeleton","DBA_Republic\Addons\DBA_Weapons\DBA_RPS6_P\anims\RPS6HandAnim.rtm"};
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
			"DBA_90mm_IK55_HEAT_x1_mag",
			"DBA_90mm_IK55T_THEAT_x1_mag",
			"DBA_90mm_IK60_HEP_x1_mag",
			"DBA_90mm_IK40_FRAG_x1_mag",
		};
		magazineWell[]={};
		recoil="recoil_recoiless_weapon";
		reloadaction = "ReloadRPG";
		modes[]=
		{
			"Single"
		};
		magazineReloadTime = 6.5;
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
			aiRateOfFire=7;
			aiRateOfFireDistance=600;
			dispersion=0.00145444;
			recoil = "recoil_single_law";
			minRange=50;
			minRangeProbab=0.40000001;
			midRange=500;
			midRangeProbab=0.80000001;
			maxRange=1000;
			maxRangeProbab=0.9;
		};
        maxZeroing = 750;
		modelOptics = "\a3\Weapons_F_Tank\acc\reticle_MRAWSNew.p3d";
		weaponInfoType = "RscOpticsRangeFinderMRAWS";
		class OpticsModes
		{
			class optic{
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
            visionMode[] = {"Normal","NVG","TI"};
			thermalMode[]={0,1};
            opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
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
	class DBA_90mm_IK55_HEAT_x1_mag : CA_LauncherMagazine{
		displayname="IK55 HEAT";
		ammo="DBA_90mm_IK55_HEAT";
		scope=2;
		model = "\a3\Weapons_F_Tank\Launchers\MRAWS\rocket_MRAWS_HEAT55_F_item.p3d";
		picture = "\a3\Weapons_F_Tank\Launchers\MRAWS\Data\UI\icon_rocket_MRAWS_HEAT55_F_ca.paa";
		displaynamemagazine="IK55 HEAT";
		shortnamemagazine="IK55 HEAT";
		displayNameMFDFormat="IK55 HEAT";
		displayNameShort="IK55 HEAT";
		mass=77;
		count=1;
		initspeed=255;
		tracersevery=1;
	};
	class DBA_90mm_IK55T_THEAT_x1_mag : CA_LauncherMagazine{
		displayname="IK55T Tandem Heat";
		scope=2;
		ammo="DBA_90mm_IK55T_THEAT";
		model = "\a3\Weapons_F_Tank\Launchers\MRAWS\rocket_MRAWS_HEAT_F_item.p3d";
		picture = "\a3\Weapons_F_Tank\Launchers\MRAWS\Data\UI\icon_rocket_MRAWS_HEAT_F_ca.paa";
		displaynamemagazine="IK55T Tandem Heat";
		shortnamemagazine="IK55T Tandem";
		displayNameMFDFormat="IK55T Tandem";
		displayNameShort="IK55T Tandem";
		mass=95;
		count=1;
		initspeed=210;
		tracersevery=1;
	};
	class DBA_90mm_IK60_HEP_x1_mag : CA_LauncherMagazine{
		displayname="IK60 High Explosive Plastic";
		ammo="DBA_90mm_IK60_HEP";
		scope=2;
		model="\a3\Weapons_F_Tank\Launchers\MRAWS\rocket_MRAWS_HE_F_item.p3d";
		picture = "\a3\Weapons_F_Tank\Launchers\MRAWS\Data\UI\icon_rocket_MRAWS_HE_F_ca.paa";
		displaynamemagazine="IK60 High Explosive Plastic";
		shortnamemagazine="IK60 HEP";
		displayNameMFDFormat="IK60 HEP";
		displayNameShort="IK60 HEP";
		mass=70;
		count=1;
		initspeed=255;
		tracersevery=1;
	};
	class DBA_90mm_IK40_FRAG_x1_mag : CA_LauncherMagazine{
		displayname="IK40 Fragmentation";
		scope=2;
		ammo="DBA_90mm_IK40_FRAG";
		model="\a3\Weapons_F_Tank\Launchers\MRAWS\rocket_MRAWS_HE_F_item.p3d";
		picture = "\a3\Weapons_F_Tank\Launchers\MRAWS\Data\UI\icon_rocket_MRAWS_HE_F_ca.paa";
		displaynamemagazine="IK40 Fragmentation";
		shortnamemagazine="IK40 FRAG";
		displayNameMFDFormat="IK40 FRAG";
		displayNameShort="IK40 FRAG";
		mass=65;
		count=1;
		initspeed=255;
		tracersevery=1;
	};
};

class CfgAmmo{
	class MissileBase;
	class RocketBase;
	class ammo_Penetrator_Base;
	class Sh_120mm_APFSDS;
	class B_762x54_Ball;
	class DBA_90mm_HEAT_Penetrator : ammo_Penetrator_Base{
		hit=600;
		warheadName = "HEAT";
		caliber=28.33333333;
	};
	class DBA_90mm_THEAT_Penetrator : ammo_Penetrator_Base{
		hit=825;
		warheadName = "Tandem";
		caliber=40;
	};
	class DBA_90mm_IK55_HEAT : MissileBase{
		model = "\A3\Weapons_F_Tank\Launchers\MRAWS\rocket_MRAWS_HEAT55_F.p3d";
		warheadName="HEAT";
		submunitionAmmo="DBA_90mm_HEAT_Penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0.000000;
		submunitionInitialOffset[]= {0, 0, -0.100000};
		triggerOnImpact = 1;
		deleteParentWhenTriggered=0;
		hit=50;
		indirectHit=30;
		indirectHitRange=2.5;
		explosive=1;
		cost=30;
		coefGravity=0.1;
		aiAmmoUsageFlags="128 + 512";
		allowAgainstInfantry=0;
		simulationStep=0.02;
		explosionSoundEffect="DefaultExplosion";
		explosionEffects = "ATMissileExplosion";
		CraterEffects = "ArtyShellCrater";
		effectsSmoke = "SmokeShellWhite";
		effectsMissileInit="RocketBackEffectsRPG";
		timeToLive=24;
		airfriction=0.0;
		sideAirFriction=0.00;
		maxSpeed=320;
		typicalspeed=10;
		initTime=0.1;
		thrustTime=1.5;
		thrust=120;
		fuseDistance=25;
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
	class DBA_90mm_IK55T_THEAT : MissileBase{
		model="\A3\Weapons_F_Tank\Launchers\MRAWS\rocket_MRAWS_HEAT_F.p3d";
		warheadName="Tandem";
		submunitionAmmo="DBA_90mm_THEAT_Penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0.000000;
		submunitionInitialOffset[]= {0, 0, -0.200000};
		triggerOnImpact = 1;
		deleteParentWhenTriggered=0;
		hit=50;
		indirectHit=30;
		indirectHitRange=1;
		explosive=0.80000001;
		cost=30;
		coefGravity=0.25;
		aiAmmoUsageFlags="128 + 512";
		allowAgainstInfantry=0;
		simulationStep=0.02;
		explosionSoundEffect="DefaultExplosion";
		explosionEffects = "ATMissileExplosion";
		CraterEffects = "ArtyShellCrater";
		effectsSmoke = "SmokeShellWhite";
		effectsMissileInit="RocketBackEffectsRPG";
		timeToLive=24;
		airfriction=0.0;
		sideAirFriction=0.00;
		maxSpeed=310;
		typicalspeed=10;
		initTime=0.029999999;
		thrustTime=1.75;
		thrust=150;
		fuseDistance=75;
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
	class DBA_90mm_IK60_HEP : MissileBase{
		warheadName="HE";
		submunitionAmmo="";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0.000000;
		submunitionInitialOffset[]= {0, 0, -0.200000};
		triggerOnImpact = 1;
		deleteParentWhenTriggered=0;
		hit=50;
		indirectHit=100;
		indirectHitRange=3;
		explosive=1.00000000;
		cost=30;
		coefGravity=0.1;
		aiAmmoUsageFlags="128 + 512";
		allowAgainstInfantry=0;
		simulationStep=0.02;
		explosionSoundEffect="DefaultExplosion";
		effectsSmoke = "SmokeShellWhite";
		model = "\A3\Weapons_F_Tank\Launchers\MRAWS\rocket_MRAWS_HE_F.p3d";
		CraterEffects = "ArtyShellCrater";
		ExplosionEffects = "MortarExplosion";
		effectsMissileInit="RocketBackEffectsRPG";
		timeToLive=24;
		airfriction=0.0;
		sideAirFriction=0.00;
		maxSpeed=310;
		typicalspeed=10;
		initTime=0.029999999;
		thrustTime=1.25;
		thrust=150;
		fuseDistance=25;
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
	class DBA_90mm_IK40_FRAG : MissileBase{
		warheadName="Frag";
		submunitionAmmo="";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0.000000;
		submunitionInitialOffset[]= {0, 0, -0.200000};
		triggerOnImpact = 1;
		deleteParentWhenTriggered=0;
		ace_frag_enabled = 1;  // Enable fragmentation (0-disabled, 1-enabled)
        ace_frag_metal = 4500;  // Amount of metal being fragmented (grams) - information below
        ace_frag_charge = 472.5;  // Amount of explosive filler (grams) - information below
        ace_frag_gurney_c = 2830;  // Gurney velocity constant for explosive type - information below
        ace_frag_gurney_k = 1/2;  // Gurney shape factor - information below
        ace_frag_classes[] = {"ACE_frag_huge"};  // Type of fragments - information below
        ace_frag_skip = 0;  // (Optional) Skip fragmentation for this ammo type (0-disabled, 1-enabled) - information below
        ace_frag_force = 1;  // (Optional) Force fragmentation system (0-disabled, 1-enabled) - information below
		hit=50;
		indirectHit=33;
		indirectHitRange=8;
		explosive=1.00000000;
		cost=30;
		coefGravity=0.35;
		aiAmmoUsageFlags="128 + 512";
		allowAgainstInfantry=0;
		simulationStep=0.02;
		explosionSoundEffect="DefaultExplosion";
		model = "\A3\Weapons_F_Tank\Launchers\MRAWS\rocket_MRAWS_HE_F.p3d";
		CraterEffects = "ArtyShellCrater";
		ExplosionEffects = "MortarExplosion";
		effectsSmoke = "SmokeShellWhite";
		effectsMissileInit="RocketBackEffectsRPG";
		timeToLive=24;
		airfriction=0.0;
		sideAirFriction=0.00;
		maxSpeed=310;
		typicalspeed=10;
		initTime=0.029999999;
		thrustTime=1.25;
		thrust=150;
		fuseDistance=25;
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
};