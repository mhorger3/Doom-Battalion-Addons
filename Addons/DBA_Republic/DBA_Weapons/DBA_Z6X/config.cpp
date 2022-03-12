class CfgPatches
{
	class DBA_Aux_Mod_Z6X_P
	{
		author="";
		requiredAddons[]=
		{};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"DBA_Z6X_P",
		};
		magazines[]=
		{
			"DBA_25mm_PL15SN_x1000_mag"
		};
		ammo[]=
		{
			"DBA_PL15SM_Penetrator",
			"DBA_25mm_PL15SN_SAPHEI"
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
class CfgRecoils{
	class Default;
	class DBA_Recoil_Z6X : Default {
		muzzleOuter[]= {0.150000, 0.1500000, 0.1, 0.150000};
		kickBack[]= {0.00075000, 0.00750000};
		permanent = 0.00750000;
		temporary = 0.0050000;
	};
};
class CfgWeapons{
	class Launcher;
	class Launcher_Base_F: Launcher
	{
		class WeaponSlotsInfo;
	};

class DBA_Z6X_P : Launcher_Base_F
	{
		author = "Vulgar";
		_generalMacro = "launch_RPG32_F";
		scope = 2;
		displayName = "DBA Z6X-P Chaingun";
		picture = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Effects\icons\Z6-X_CA.paa";
		UiPicture = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Effects\icons\Z6-X_CA.paa";
		model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Weapons\DBA_Z6\DBA_Z6X.p3d";
		simulation = "weapon";
		ace_overpressure_angle = 2;  // Cone in which the damage is applied (in degrees from the muzzle of the cannon)
        ace_overpressure_range = 0.25;  // Range in meters in which the damage is applied
        ace_overpressure_damage = 0.01;  // Damage multiplier
		handAnim[] =
		{
			"OFP2_ManSkeleton",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Weapons\DBA_Z6X\anims\Z6XHandAnim.rtm"
		};
		hiddenSelections[] =
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Weapons\DBA_Z6\data\Z6X_Handle_CO.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Weapons\DBA_Z6\data\Z6X_Body_CO.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Weapons\DBA_Z6\data\Z6X_Mag_CO.paa",
		};
		hiddenSelectionsMaterials[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Weapons\DBA_Z6\Data\Z6X_Handle.RVMAT",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Weapons\DBA_Z6\Data\Z6X_Body.RVMAT",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Weapons\DBA_Z6\Data\Z6X_Mag.RVMAT",
		};
		reloadAction = "ReloadRPG";
		recoil = "DBA_Recoil_Z6X";
		maxZeroing = 600;
		modelOptics = "\A3\Weapons_F\acc\reticle_LRPS_F";
		weaponInfoType = "RscWeaponEmpty";
		opticsZoomMin = 0.1083;
		opticsZoomMax = 0.1083;
		opticsZoomInit = 0.1083;
		cameraDir = "look";
		class GunParticles
		{
			class effect1
			{
			};
		};
		class OpticsModes
		{
			class optic
			{
				opticsID = 1;
				useModelOptics = 1;
				opticsPPEffects[] = 
				{ 
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticsFlare = 0;
				opticsZoomMin = 0.125;
				opticsZoomMax = 0.0625;
				opticsZoomInit = 0.125;
				distanceZoomMin = 300;
				distanceZoomMax = 300;
				memoryPointCamera = "eye";
				cameraDir = "look";
				visionMode[] = 
				{ 
					"Normal",
					"NVG",
					"Ti" 
				};
				thermalMode[] = { 0,1 };
				opticsDisablePeripherialVision = 1;
				discretefov[] = { 0.125, 0.0313, 0.0156 };
				discreteInitIndex = 0;
				modelOptics = "\A3\Weapons_F\acc\reticle_LRPS_F";
			};
		};
		magazines[] =
		{
			"DBA_25mm_PL15SN_x1000_mag"
		};
		modes[] =
		{
			"Slow",
			"Fast"
		};
		class Slow : Mode_FullAuto
		{
			sounds[] = { "StandardSound" };
			class BaseSoundModeType
			{
				closure1[] = { "A3\sounds_f\weapons\gatling\gatling_rotation_short_2",0.316228,1,20 };
				soundClosure[] = { "closure1",0.5 };
			};
			class StandardSound : BaseSoundModeType
			{
				begin1[] = { "3AS\3AS_Static\data\Sounds\HeavyRepeater\Blaster_Cannon_1",0.95,0.9,2000 };
				soundBegin[] = { "begin1",0.1 };
			};
			reloadTime = 0.03243243243;
			dispersion = 0.002327104;
			recoil = "recoil_auto_mk200";
			minRange = 2;
			minRangeProbab = 0.95;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.5;
			soundBurst = 0;
			burst = 1;
			displayName = "Full Auto";
			textureType = "fullAuto";
		};
		class Fast : Slow {
			reloadTime = 0.01818181818;
			dispersion = 0.00872664;
			minRange = 2;
			minRangeProbab = 0.95;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.5;
			soundBurst = 0;
			burst = 1;
			displayName = "Full Auto";
			textureType = "fastAuto";
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
		descriptionShort = "DBA Z6-X";
		class Library
		{
			libTextDesc = "Bigger Burr";
		};
	};
};

class CfgMagazines{
	class CA_Magazine;
	class DBA_25mm_PL15SN_x1000_mag : CA_Magazine{
		scope=2;
		displayName="1000rnd PL15SN Drum";
		ammo="DBA_25mm_PL15SN_SAPHEI";
		tracersEvery=1;
		lastRoundsTracer=28;
		type="2*256";
		ACE_isBelt=1;
		count=1000;
		descriptionShort="PL15 Snub-Nose Ammo Drum";
		displayNameShort="25mw Snub-Nose";
		mass=200;
		initSpeed=1000;
		picture="\A3\Weapons_F\launchers\RPG32\data\UI\gear_tbg32v_rocket_ca.paa";
		model="\A3\weapons_f\launchers\RPG32\tbg32v_rocket_item.p3d";
	};
};

class CfgAmmo{
	class ammo_Penetrator_Base;
	class DBA_PL15SM_Penetrator : ammo_Penetrator_Base{
		hit=40;
		warheadName = "Tandem";
		caliber=7.666666667;
	};
	class M_NLAW_AT_F;
	class DBA_25mm_PL15SN_SAPHEI: M_NLAW_AT_F
	{
		hit=20;
		indirectHit=10;
		indirectHitRange=0.25;
		explosive=1;
		caliber=2;
		ACE_caliber=0;
		model="\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
		cost=500;
		airFriction=0;
		sideairFriction=0;
		coefGravity=0;
		maxSpeed=1000;
		typicalSpeed=100;
		initTime=0;
		thrustTime=3.4000001;
		thrust=1000;
		fuseDistance=0;
		simulationStep=0.02;
		timeToLive=4;
		whistleDist=20;
		triggerOnImpact=1;
		triggerDistance=2.5;
		directionalExplosion=0;
		dangerRadiusBulletClose=-1;
		dangerRadiusHit=-1;
		flightProfiles[]=
		{
			"Direct"
		};
		deleteParentWhenTriggered=0;
		aiAmmoUsageFlags="64 + 128 + 256 + 512";
		submunitionAmmo="DBA_PL15SM_Penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitSpeed=1000;
		submunitionParentSpeedCoef=0;
		submunitionInitialOffset[]={0,0,-0.2};
		minTimeToLive=0;
		tracerColor[]={0.69999999,0.69999999,0.5,0.039999999};
		tracerColorR[]={0.69999999,0.69999999,0.5,0.039999999};
		simulation="shotMissile";
		proximityExplosionDistance=5;
		CraterEffects="ExploAmmoCrater";
		effectFlare="FlareShell";
		effectFly="AmmoClassic";
		effectsFire="CannonFire";
		effectsMissile="EmptyEffect";
		effectsMissileInit="";
		effectsSmoke="SmokeShellWhite";
		explosionAngle=60;
		explosionEffects="3AS_ImpactPlasma";
		explosionEffectsDir="explosionDir";
		explosionSoundEffect="";
		muzzleEffect="";
		soundHit[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_01",
			1,
			1,
			150
		};
		soundHit1[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_01",
			1,
			1,
			200
		};
		soundHit2[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_01",
			1,
			1,
			200
		};
		soundHit3[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_01",
			1,
			1,
			2000
		};
		soundFly[]=
		{
			"",
			1,
			1,
			50
		};
		SoundSetExplosion[]=
		{
			""
		};
		class HitEffects
		{
			Hit_Foliage_green="ImpactLeavesGreen";
			Hit_Foliage_Dead="ImpactLeavesDead";
			Hit_Foliage_Green_big="ImpactLeavesGreenBig";
			Hit_Foliage_Palm="ImpactLeavesPalm";
			Hit_Foliage_Pine="ImpactLeavesPine";
			hitFoliage="ImpactLeaves";
			hitGlass="ImpactMetalSabotSmall";
			hitGlassArmored="ImpactMetalSabotSmall";
			hitWood="ImpactMetalSabotSmall";
			hitMetal="ImpactMetalSabotSmall";
			hitMetalPlate="ImpactMetalSabotSmall";
			hitBuilding="ImpactMetalSabotSmall";
			hitPlastic="ImpactMetalSabotSmall";
			hitRubber="ImpactMetalSabotSmall";
			hitTyre="ImpactMetalSabotSmall";
			hitConcrete="ImpactMetalSabotSmall";
			hitMan="ImpactMetalSabotSmall";
			hitGroundSoft="ImpactMetalSabotSmall";
			hitGroundRed="ImpactMetalSabotSmall";
			hitGroundHard="ImpactMetalSabotSmall";
			hitWater="ImpactEffectsWater";
			default_mat="ImpactMetalSabotSmall";
		};
		class Direct
		{
		};
		class CamShakeExplode
		{
			power=5;
			duration=1.5;
			frequency=20;
			distance=5;
		};
		class CamShakeHit
		{
			power=10;
			duration=1.60000002;
			frequency=20;
			distance=2;
		};
		class CamShakeFire
		{
			power=0;
			duration=0.0;
			frequency=0;
			distance=0;
		};
		class CamShakePlayerFire
		{
			power=0;
			duration=0.01;
			frequency=0;
			distance=0;
		};
	};
};