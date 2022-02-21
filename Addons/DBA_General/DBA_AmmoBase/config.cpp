class CfgPatches
{
	class DBA_AmmoBase
	{
		author = "Vulgar";
		requiredAddons[] =
		{
		};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
		ammo[] =
		{
			"DBA_ammo_base",
			"DBA_shotgun_base"
		};
		magazines[] =
		{
		};
	};
};

class cfgCloudlets
{
	class default;
	class DBA_Sparks1 : default
	{
		interval = 0.00089999998;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 13;
		particleFSFrameCount = 2;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 3;
		lifeTime = 2.5;
		moveVelocity[] = {0,1,0};
		rotationVelocity = 1;
		weight = 100;
		volume = 0.0099999998;
		rubbing = 0.30000001;
		size[] = {0.12,0};
		sizeCoef = 1;
		color[] =
		{
			{1,0.60000002,0.40000001,-50}
		};
		colorCoef[] = {1,1,1,1};
		emissiveColor[] =
		{
			{10,6,4,1}
		};
		animationSpeed[] = {1000};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		blockAIVisibility = 0;
		bounceOnSurface = 0.1;
		bounceOnSurfaceVar = 0.1;
		lifeTimeVar = 5;
		position[] = {0,0,0};
		positionVar[] = {0.0099999998,0.0099999998,0.0099999998};
		moveVelocityVar[] = {1,1,1};
		rotationVelocityVar = 0;
		sizeVar = 0;
		colorVar[] = {0.050000001,0.050000001,0.050000001,5};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class DBA_Sparks2 : default
	{
		interval = 0.0099999998;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 13;
		particleFSFrameCount = 2;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 3;
		lifeTime = 0.039000001;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 1;
		weight = 1.275;
		volume = 1;
		rubbing = 0;
		size[] = {0.44999999,0.22499999,0};
		sizeCoef = 1;
		color[] =
		{
			{1,0.60000002,0.40000001,-50}
		};
		colorCoef[] = {1,1,1,1};
		animationSpeed[] = {1000};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		blockAIVisibility = 0;
		lifeTimeVar = 0.02;
		position[] = {0,0,0};
		positionVar[] = {0,0,0};
		moveVelocityVar[] = {0,0,0};
		rotationVelocityVar = 0;
		sizeVar = 0.029999999;
		colorVar[] = {0.050000001,0.050000001,0.050000001,5};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
};

class DBA_PlasmaDamage
{
	class SparksLight
	{
		simulation = "light";
		type = "DBA_Sparks";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.5;
	};
	class ImpactSparks1
	{
		simulation = "particles";
		type = "DBA_Sparks1";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
};
class CfgLights
{
	class DBA_PlasmaBlue
	{
		color[] = {0,0,1,1};
		ambient[] = {0,0,1,1};
		brightness = 10;
		intensity = 10000;
		drawLight = 0;
		blinking = 1;
		class Attenuation
		{
			start = 0;
			constant = 0;
			linear = 0;
			quadratic = 2.2;
			hardLimitStart = 500;
			hardLimitEnd = 1000;
		};
		position[] = {0,3.5,0};
		diffuse[] = {0,0,1};
	};
	class DBA_PlasmaRed : DBA_PlasmaBlue
	{
		color[] = {1,0,0,1};
		ambient[] = {1,0,0,1};
		diffuse[] = {1,0,0};
	};
	class DBA_sparks
	{
		diffuse[] = {1,0.80000001,0.80000001};
		color[] = {1,0.80000001,0.80000001};
		ambient[] = {0,0,0,0};
		brightness = 50;
		size = 1;
		intensity = 1000;
		drawLight = 0;
		blinking = 0;
		class Attenuation
		{
			start = 0;
			constant = 0;
			linear = 0;
			quadratic = 1;
			hardLimitStart = 40;
			hardLimitEnd = 80;
		};
		position[] = {0,0,0};
	};
};
class DBA_BluePlasma
{
	class DBA_Plasma_Blue
	{
		simulation = "light";
		type = "DBA_PlasmaBlue";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.30000001;
	};
};
class DBA_RedPlasma
{
	class DBA_Plasma_Red
	{
		simulation = "light";
		type = "DBA_PlasmaRed";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.30000001;
	};
};

class CfgAmmo
{
	class BulletBase;
	class ShotgunBase;
	class G_40mm_HE;
	class FlareBase;
	class DBA_ammo_base : BulletBase
	{
		hit = 8;
		indirecthit = 0;
		indirecthitrange = 0;
		caliber = 0.86956501;
		typicalspeed = 920;
		nvgonly = 0;
		airlock = 1;
		irtarget = 1;
		dangerRadiusBulletClose = 8;
		dangerRadiusHit = 12;
		suppressionRadiusBulletClose = 6;
		suppressionradiushit = 8;
		aiAmmoUsageFlags = "32 + 64 + 128 + 256 + 512";
		audiblefire = 35;
		brightness = 1000;
		effectfly = "DBA_BluePlasma";
		model = "101st_Aux_Mod\Addons\DBA_General\DBA_AmmoBase\BlasterBoltBlue.p3d";
		lightcolor[] = { 0.5,0.5,0.5 };
		flaresize = 5;
		tracerscale = 0.5;
		effectflare = "FlareShell";
		tracerstarttime = 0.090000004;
		tracerendtime = 10;
		waterFriction = 0;
		cartridge = "";
		cost = 1;
		muzzleeffect = "";
		deflecting = 0;
		inittime = 0;
		timetolive = 6;
		coefgravity = 0;
		airfriction = 0;
		supersoniccracknear[] = {};
		supersoniccrackfar[] = {};
		class SuperSonicCrack
		{
		};
		bulletFly[] =
		{
			"bulletFly1",
			1,
		};
		bulletFly1[] =
		{
			"101st_Aux_Mod\Addons\DBA_General\DBA_AmmoBase\DBA_BlasterFire.wss",
			1.58,
			1,
			30
		};
		multiSoundHit[] =
		{
			"soundHit1",
			1
		};
		class HitEffects
		{
			default_mat = "DBA_PlasmaDamage";
			Hit_Foliage_Banana = "DBA_PlasmaDamage";
			Hit_Foliage_Dead = "DBA_PlasmaDamage";
			Hit_Foliage_green = "DBA_PlasmaDamage";
			Hit_Foliage_Green_big = "DBA_PlasmaDamage";
			Hit_Foliage_Palm = "DBA_PlasmaDamage";
			Hit_Foliage_Pine = "DBA_PlasmaDamage";
			hitBuilding = "DBA_PlasmaDamage";
			hitConcrete = "DBA_PlasmaDamage";
			hitFoliage = "DBA_PlasmaDamage";
			hitGlass = "DBA_PlasmaDamage";
			hitGlassArmored = "DBA_PlasmaDamage";
			hitGroundHard = "DBA_PlasmaDamage";
			hitGroundRed = "DBA_PlasmaDamage";
			hitGroundSoft = "DBA_PlasmaDamage";
			hitHay = "DBA_PlasmaDamage";
			hitMan = "DBA_PlasmaDamage";
			hitMetal = "DBA_PlasmaDamage";
			hitMetalPlate = "DBA_PlasmaDamage";
			hitPlastic = "DBA_PlasmaDamage";
			hitRubber = "DBA_PlasmaDamage";
			hitTyre = "DBA_PlasmaDamage";
			hitVirtual = "DBA_PlasmaDamage";
			hitWater = "DBA_PlasmaDamage";
			hitWood = "DBA_PlasmaDamage";
		};
	};
	class DBA_shotgun_base : ShotgunBase
	{
		hit = 2;
		indirectHit = 2;
		indirectHitRange = 0.40000001;
		cartridge = "FxCartridge_slug";
		cost = 5;
		typicalSpeed = 400;
		airFriction = -0.0080000004;
		caliber = 1;
		deflecting = 30;
		class CamShakeFire
		{
			power = 3;
			duration = 0.5;
			frequency = 20;
			distance = 10;
		};
		class CamShakePlayerFire
		{
			power = 1;
			duration = 0.1;
			frequency = 20;
		};
		class CamShakeHit
		{
			power = 10;
			duration = 1;
			frequency = 20;
		};
		effectfly = "DBA_BluePlasma";
		simulation = "shotSpread";
		model = "101st_Aux_Mod\Addons\DBA_General\DBA_AmmoBase\BlasterBoltBlue.p3d";
		lightcolor[] = { 0.5,0.5,0.5 };
		flaresize = 5;
		tracerscale = 1.1;
		effectflare = "FlareShell";
		tracerstarttime = 0;
		tracerendtime = 10;
		class HitEffects
		{
			default_mat = "DBA_PlasmaDamage";
			Hit_Foliage_Banana = "DBA_PlasmaDamage";
			Hit_Foliage_Dead = "DBA_PlasmaDamage";
			Hit_Foliage_green = "DBA_PlasmaDamage";
			Hit_Foliage_Green_big = "DBA_PlasmaDamage";
			Hit_Foliage_Palm = "DBA_PlasmaDamage";
			Hit_Foliage_Pine = "DBA_PlasmaDamage";
			hitBuilding = "DBA_PlasmaDamage";
			hitConcrete = "DBA_PlasmaDamage";
			hitFoliage = "DBA_PlasmaDamage";
			hitGlass = "DBA_PlasmaDamage";
			hitGlassArmored = "DBA_PlasmaDamage";
			hitGroundHard = "DBA_PlasmaDamage";
			hitGroundRed = "DBA_PlasmaDamage";
			hitGroundSoft = "DBA_PlasmaDamage";
			hitHay = "DBA_PlasmaDamage";
			hitMan = "DBA_PlasmaDamage";
			hitMetal = "DBA_PlasmaDamage";
			hitMetalPlate = "DBA_PlasmaDamage";
			hitPlastic = "DBA_PlasmaDamage";
			hitRubber = "DBA_PlasmaDamage";
			hitTyre = "DBA_PlasmaDamage";
			hitVirtual = "DBA_PlasmaDamage";
			hitWater = "DBA_PlasmaDamage";
			hitWood = "DBA_PlasmaDamage";
		};
	};
	class DBA_556_base :DBA_ammo_base //556 NATO
	{
		hit = 9; //How much damage when it hits
		indirecthit = 0; //Splash Damage
		indirecthitrange = 0; //Splash Damage Range in meters
		caliber = 0.9; //Acts as penetration multiplier for the projectile.
		typicalspeed = 920; //What speed does this need to be going to inflict full damage

		tracerScale = 0.3;

		dangerRadiusBulletClose = 8;
		dangerRadiusHit = 12;
		suppressionRadiusBulletClose = 6;
		suppressionRadiusHit = 8;
		aiAmmoUsageFlags = 64;
		class CamShakeExplode
		{
			power = 2.2360699;
			duration = 0.40000001;
			frequency = 20;
			distance = 6.7082;
		};
		class CamShakeHit
		{
			power = 5;
			duration = 0.2;
			frequency = 20;
			distance = 1;
		};
	};
	class DBA_65_base :DBA_ammo_base //65 MX
	{
		hit = 10; //How much damage when it hits
		indirecthit = 0; //Splash Damage
		indirecthitrange = 0; //Splash Damage Range in meters
		caliber = 1; //Acts as penetration multiplier for the projectile.
		typicalspeed = 820; //What speed does this need to be going to inflict full damage

		tracerScale = 0.3;

		dangerRadiusBulletClose = 8;
		dangerRadiusHit = 12;
		suppressionRadiusBulletClose = 6;
		suppressionRadiusHit = 8;
		aiAmmoUsageFlags = 64;
		class CamShakeExplode
		{
			power = 2.4494901;
			duration = 0.40000001;
			frequency = 20;
			distance = 7.3484702;
		};
		class CamShakeHit
		{
			power = 6;
			duration = 0.40000001;
			frequency = 20;
			distance = 1;
		};
	};
	class DBA_LegoGun_ammo :DBA_ammo_base //65 MX
	{
		hit = 15000; //How much damage when it hits
		indirecthit = 15000; //Splash Damage
		indirecthitrange = 3; //Splash Damage Range in meters
		caliber = 100; //Acts as penetration multiplier for the projectile.
		typicalspeed = 820; //What speed does this need to be going to inflict full damage

		tracerScale = 0.3;

		dangerRadiusBulletClose = 8;
		dangerRadiusHit = 12;
		suppressionRadiusBulletClose = 6;
		suppressionRadiusHit = 8;
		aiAmmoUsageFlags = 64;
		class CamShakeExplode
		{
			power = 2.4494901;
			duration = 0.40000001;
			frequency = 20;
			distance = 7.3484702;
		};
		class CamShakeHit
		{
			power = 6;
			duration = 0.40000001;
			frequency = 20;
			distance = 1;
		};
	};
	class DBA_AMMO_ORBITAL :DBA_ammo_base //762 Nato
	{
		hit = 1; //How much damage when it hits
		indirecthit = 0; //Splash Damage
		indirecthitrange = 0; //Splash Damage Range in meters
		caliber = 1.6; //Acts as penetration multiplier for the projectile.
		typicalspeed = 800; //What speed does this need to be going to inflict full damage

		tracerScale = 0.01;

		brightness = 0; // How Bright/color
		flaresize = 0; //how big the flash is

		audibleFire = 45; //Alerts AI from further away

		timetolive = 45;
		dangerRadiusBulletClose = 8;
		dangerRadiusHit = 12;
		suppressionRadiusBulletClose = 6;
		suppressionRadiusHit = 8;
		aiAmmoUsageFlags = 64;
		class CamShakeExplode
		{
			power = 2.8284299;
			duration = 0.60000002;
			frequency = 20;
			distance = 8.48528;
		};
		class CamShakeHit
		{
			power = 5;
			duration = 0.2;
			frequency = 20;
			distance = 1;
		};
		DBA_IsDesignator = 1;
	};
	class DBA_762_base :DBA_ammo_base //762 Nato
	{
		hit = 11.6; //How much damage when it hits
		indirecthit = 0; //Splash Damage
		indirecthitrange = 0; //Splash Damage Range in meters
		caliber = 1.6; //Acts as penetration multiplier for the projectile.
		typicalspeed = 800; //What speed does this need to be going to inflict full damage

		tracerScale = 0.4;

		audibleFire = 45; //Alerts AI from further away

		dangerRadiusBulletClose = 8;
		dangerRadiusHit = 12;
		suppressionRadiusBulletClose = 6;
		suppressionRadiusHit = 8;
		aiAmmoUsageFlags = 64;
		class CamShakeExplode
		{
			power = 2.8284299;
			duration = 0.60000002;
			frequency = 20;
			distance = 8.48528;
		};
		class CamShakeHit
		{
			power = 5;
			duration = 0.2;
			frequency = 20;
			distance = 1;
		};
	};
	class DBA_338_base :DBA_ammo_base //.338 Win Mag
	{
		hit = 16; //How much damage when it hits
		indirecthit = 0; //Splash Damage
		indirecthitrange = 0; //Splash Damage Range in meters
		caliber = 2; //Acts as penetration multiplier for the projectile.
		typicalSpeed = 890; //What speed does this need to be going to inflict full damage
		model = "101st_Aux_Mod\Addons\DBA_General\DBA_AmmoBase\BlasterBoltBlue.p3d";
		tracerScale = 0.4;

		audibleFire = 80; //Alerts AI from further away

		dangerRadiusBulletClose = 10;
		dangerRadiusHit = 14;
		suppressionRadiusBulletClose = 8;
		suppressionRadiusHit = 10;
		aiAmmoUsageFlags = 64;
		class CamShakeExplode
		{
			power = 2.8284299;
			duration = 0.60000002;
			frequency = 20;
			distance = 8.48528;
		};
		class CamShakeHit
		{
			power = 5;
			duration = 0.2;
			frequency = 20;
			distance = 1;
		};
	};
	class DBA_HeavyWeapon_Base :DBA_ammo_base //.338 Win Mag
	{
		hit = 19; //How much damage when it hits
		indirecthit = 0; //Splash Damage
		indirecthitrange = 0; //Splash Damage Range in meters
		caliber = 3.5; //Acts as penetration multiplier for the projectile.
		typicalSpeed = 890; //What speed does this need to be going to inflict full damage

		tracerScale = 0.5;

		audibleFire = 800; //Alerts AI from further away

		dangerRadiusBulletClose = 10;
		dangerRadiusHit = 14;
		suppressionRadiusBulletClose = 8;
		suppressionRadiusHit = 10;
		aiAmmoUsageFlags = 64;
		class CamShakeExplode
		{
			power = 2.8284299;
			duration = 0.60000002;
			frequency = 20;
			distance = 8.48528;
		};
		class CamShakeHit
		{
			power = 5;
			duration = 0.2;
			frequency = 20;
			distance = 1;
		};
	};
	class DBA_408_base :DBA_ammo_base //408 Cheytac
	{
		hit = 24; //How much damage when it hits
		indirecthit = 0; //Splash Damage
		indirecthitrange = 0; //Splash Damage Range in meters
		caliber = 1.6; //Acts as penetration multiplier for the projectile.
		typicalspeed = 800; //What speed does this need to be going to inflict full damage

		visibleFire = 5;
		audibleFire = 120;
		visibleFireTime = 3; //Alerts AI from further away

		tracerScale = 0.7;

		dangerRadiusBulletClose = 8;
		dangerRadiusHit = 12;
		suppressionRadiusBulletClose = 6;
		suppressionRadiusHit = 8;
		aiAmmoUsageFlags = 64;
		class CamShakeExplode
		{
			power = 3.1622801;
			duration = 0.60000002;
			frequency = 20;
			distance = 9.4868298;
		};
		class CamShakeHit
		{
			power = 10;
			duration = 0.40000001;
			frequency = 20;
			distance = 1;
		};
	};
	class DBA_127x99_base :DBA_ammo_base //50 BMG
	{
		hit = 30; //How much damage when it hits
		indirecthit = 0; //Splash Damage
		indirecthitrange = 0; //Splash Damage Range in meters
		caliber = 2.5999999; //Acts as penetration multiplier for the projectile.
		typicalSpeed = 880; //What speed does this need to be going to inflict full damage

		visibleFire = 8;
		audibleFire = 120;
		visibleFireTime = 3; //Alerts AI from further away

		tracerScale = 10;

		dangerRadiusBulletClose = 8;
		dangerRadiusHit = 12;
		suppressionRadiusBulletClose = 6;
		suppressionRadiusHit = 8;
		aiAmmoUsageFlags = 64;
		class CamShakeExplode
		{
			power = 3.6055501;
			duration = 0.80000001;
			frequency = 20;
			distance = 10.8167;
		};
		class CamShakeHit
		{
			power = 13;
			duration = 0.40000001;
			frequency = 20;
			distance = 1;
		};
	};
	class DBA_127x99_SLAP_base :DBA_ammo_base //50 SLAP - Use for Snipers
	{
		hit = 50;//How much damage when it hits
		indirecthit = 0; //Splash Damage
		indirecthitrange = 0; //Splash Damage Range in meters
		caliber = 3.4000001; //Acts as penetration multiplier for the projectile.
		typicalSpeed = 880; //What speed does this need to be going to inflict full damage

		visibleFire = 8;
		audibleFire = 120;
		visibleFireTime = 3; //Alerts AI from further away

		tracerScale = 1.2;

		dangerRadiusBulletClose = 8;
		dangerRadiusHit = 12;
		suppressionRadiusBulletClose = 6;
		suppressionRadiusHit = 8;
		aiAmmoUsageFlags = 64;
		class CamShakeExplode
		{
			power = 4.4721398;
			duration = 0.80000001;
			frequency = 20;
			distance = 13.4164;
		};
		class CamShakeHit
		{
			power = 20;
			duration = 0.40000001;
			frequency = 20;
			distance = 1;
		};
	};
	class DBA_AntiTank_base :DBA_ammo_base //AT Rifle Ammo
	{
		hit = 550; //How much damage when it hits
		indirecthit = 40; //Splash Damage
		indirecthitrange = 2.5; //Splash Damage Range in meters
		caliber = 16; //Acts as penetration multiplier for the projectile.
		typicalspeed = 400; //What speed does this need to be going to inflict full damage

		visibleFire = 5;
		audibleFire = 120;
		visibleFireTime = 3; //Alerts AI from further away

		tracerScale = 3;
		model = "101st_Aux_Mod\Addons\DBA_General\DBA_AmmoBase\BlasterBoltGreen.p3d";
		effectfly = "DBA_Plasma_Red";

		dangerRadiusBulletClose = 8;
		dangerRadiusHit = 12;
		suppressionRadiusBulletClose = 6;
		suppressionRadiusHit = 8;
		aiAmmoUsageFlags = 64;
		class CamShakeExplode
		{
			power = 3.1622801;
			duration = 0.60000002;
			frequency = 20;
			distance = 9.4868298;
		};
		class CamShakeHit
		{
			power = 10;
			duration = 0.40000001;
			frequency = 20;
			distance = 1;
		};
	};
	class DBA_Billow_base :DBA_ammo_base //AT Rifle Ammo
	{
		hit = 1000; //How much damage when it hits
		indirecthit = 40; //Splash Damage
		indirecthitrange = 2.5; //Splash Damage Range in meters
		caliber = 30; //Acts as penetration multiplier for the projectile.
		typicalspeed = 400; //What speed does this need to be going to inflict full damage

		visibleFire = 5;
		audibleFire = 120;
		visibleFireTime = 3; //Alerts AI from further away

		tracerScale = 5;
		model = "101st_Aux_Mod\Addons\DBA_General\DBA_AmmoBase\BlasterBoltRed.p3d";
		effectfly = "DBA_Plasma_Red";

		dangerRadiusBulletClose = 8;
		dangerRadiusHit = 12;
		suppressionRadiusBulletClose = 6;
		suppressionRadiusHit = 8;
		aiAmmoUsageFlags = 64;
		class CamShakeExplode
		{
			power = 3.1622801;
			duration = 0.60000002;
			frequency = 20;
			distance = 9.4868298;
		};
		class CamShakeHit
		{
			power = 10;
			duration = 0.40000001;
			frequency = 20;
			distance = 1;
		};
	};
	class DBA_EMP_base :DBA_ammo_base //AT Rifle EMP Ammo
	{
		hit = 1; //How much damage when it hits
		indirecthit = 0; //Splash Damage
		indirecthitrange = 0; //Splash Damage Range in meters
		caliber = 100; //Acts as penetration multiplier for the projectile.
		typicalspeed = 800; //What speed does this need to be going to inflict full damage

		visibleFire = 5;
		audibleFire = 120;
		visibleFireTime = 3; //Alerts AI from further away

		tracerScale = 3;
		model = "101st_Aux_Mod\Addons\DBA_General\DBA_AmmoBase\BlasterBoltRed.p3d";
		effectfly = "DBA_Plasma_Red";

		DBA_isDisruptorRound = 1;
		DBA_disruptDuration = 7;

		dangerRadiusBulletClose = 8;
		dangerRadiusHit = 12;
		suppressionRadiusBulletClose = 6;
		suppressionRadiusHit = 8;
		aiAmmoUsageFlags = 64;
		class CamShakeExplode
		{
			power = 3.1622801;
			duration = 0.60000002;
			frequency = 20;
			distance = 9.4868298;
		};
		class CamShakeHit
		{
			power = 10;
			duration = 0.40000001;
			frequency = 20;
			distance = 1;
		};
	};

	//Pistol Calibers

	class DBA_9x21_base :DBA_ammo_base //9mm Luger
	{
		hit = 5; //How much damage when it hits
		indirecthit = 0; //Splash Damage
		indirecthitrange = 0; //Splash Damage Range in meters
		caliber = 1.2; //Acts as penetration multiplier for the projectile.
		typicalSpeed = 380; //What speed does this need to be going to inflict full damage

		tracerScale = 0.2;

		audibleFire = 30;

		aiAmmoUsageFlags = 64;
		dangerRadiusBulletClose = 4;
		dangerRadiusHit = 8;
		suppressionRadiusBulletClose = 2;
		suppressionRadiusHit = 4;
	};
	class DBA_45acp_base :DBA_ammo_base //45ACP
	{
		hit = 5; //How much damage when it hits
		indirecthit = 0; //Splash Damage
		indirecthitrange = 0; //Splash Damage Range in meters
		caliber = 1.2; //Acts as penetration multiplier for the projectile.
		typicalSpeed = 280; //What speed does this need to be going to inflict full damage

		tracerScale = 0.2;

		audibleFire = 50;

		aiAmmoUsageFlags = 64;
		dangerRadiusBulletClose = 4;
		dangerRadiusHit = 8;
		suppressionRadiusBulletClose = 2;
		suppressionRadiusHit = 4;
	};
	class DBA_127x33_base :DBA_ammo_base //.50 Action Express
	{
		hit = 7.5; //How much damage when it hits
		indirecthit = 0; //Splash Damage
		indirecthitrange = 0; //Splash Damage Range in meters
		caliber = 1; //Acts as penetration multiplier for the projectile.
		typicalSpeed = 420; //What speed does this need to be going to inflict full damage

		tracerScale = 0.2;

		audibleFire = 50;

		aiAmmoUsageFlags = 64;
		dangerRadiusBulletClose = 4;
		dangerRadiusHit = 8;
		suppressionRadiusBulletClose = 2;
		suppressionRadiusHit = 4;
	};
	class DBA_127x33_yellow : DBA_127x33_base
	{
		model = "101st_Aux_Mod\Addons\DBA_General\DBA_AmmoBase\BlasterBoltRed.p3d";
		effectfly = "442_plasma_yellow";
	};

	//Shotgun Calibers

	class DBA_12gaSlug_Base :DBA_ammo_base //12GA
	{
		hit = 42;
		indirectHit = 0;
		indirectHitRange = 0;
		cost = 5;
		typicalSpeed = 600;
		airFriction = 0;
		caliber = 3;
		deflecting = 15;
	};
	class DBA_12gaPellets_Base :DBA_shotgun_base //12GA
	{
		hit = 6; //Vanilla is 2
		indirectHit = 2;
		indirectHitRange = 0.4;
		cost = 5;
		typicalSpeed = 400;
		airFriction = 0;
		caliber = 2; //Vanilla is 1
		deflecting = 30;
		airFriction = -0;
		caliber = 1.5;
		deflecting = 15;
		class CamShakeFire
		{
			power = 3;
			duration = 0.5;
			frequency = 20;
			distance = 10;
		};
		class CamShakePlayerFire
		{
			power = 1;
			duration = 0.1;
			frequency = 20;
		};
		class CamShakeHit
		{
			power = 10;
			duration = 1;
			frequency = 20;
		};
	};
	// GL
	class DBA_GL_HE_ammo : G_40mm_HE
	{
		hit = 60;
		indirectHit = 50;
		indirectHitRange = 5;
		timeToLive = 30;
		model = "\MRC\JLTS\weapons\Core\effects\laser_orange.p3d";
		lightcolor[] = { 1,0.37,0 };
		effectfly = "JLTS_plasma_orange";
		fuseDistance = 3;
	};
	class ammo_Penetrator_Base;
	class DBA_GL_AP_Penetrator : ammo_Penetrator_Base{
		hit=280;
		warheadName = "HEAT";
		caliber=24.33333333;
	};
	class DBA_GL_AP_ammo : G_40mm_HE
	{
		hit = 175;
		indirectHit = 1;
		indirectHitRange = 0.1;
		timeToLive = 30;
		model = "\MRC\JLTS\weapons\Core\effects\laser_orange.p3d";
		lightcolor[] = { 1,0.37,0 };
		effectfly = "JLTS_plasma_orange";
		fuseDistance = 3;
		explosive = 0.0001;
		deflecting = 5;
		caliber = 5;
		submunitionAmmo = "DBA_GL_AP_Penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 1;
		triggerOnImpact = 1;
		submunitionInitialOffset[]={0,0,-0.2};
		ace_frag_enabled = 0;
		ace_frag_force = 0;
		ace_frag_classes[] = { "" };
		ace_frag_metal = 0;
		ace_frag_charge = 0;
		ace_frag_gurney_c = 0;
		ace_frag_gurney_k = "0";
		ace_rearm_caliber = 0;
	};
	// Flares

	class DBA_40mm_white_ammo : FlareBase
	{
		model = "\A3\Weapons_F\Ammo\UGL_Flare";
		lightColor[] = { 1,1,1,1 };
		useFlare = 1;
		deflecting = 30;
		smokeColor[] = { 1,1,1,1 };
		brightness = 1200;
		size = 3;
		triggerTime = 3;
		triggerSpeedCoef = 1;
		audibleFire = 20;
		intensity = 1000000;
		flareSize = 3;
		timeToLive = 120;
		flareMaxDistance = 300;
	};
	class DBA_40mm_green_ammo : DBA_40mm_white_ammo
	{
		model = "\A3\Weapons_F\Ammo\UGL_Flare";
		lightColor[] = { 0,1,0,0 };
	};
	class DBA_40mm_red_ammo : DBA_40mm_white_ammo
	{
		model = "\A3\Weapons_F\Ammo\UGL_Flare";
		lightColor[] = { 1,0,0,0 };
	};
	class DBA_40mm_yellow_ammo : DBA_40mm_white_ammo
	{
		model = "\A3\Weapons_F\Ammo\UGL_Flare";
		lightColor[] = { 1,1,0,0 };
	};
	class DBA_40mm_CIR_ammo : DBA_40mm_white_ammo
	{
		model = "\A3\Weapons_F\Ammo\UGL_Flare";
		lightColor[] = { 0.5,0.5,0.25,0 };
	};
	class DBA_40mm_blue_ammo : DBA_40mm_white_ammo
	{
		model = "\A3\Weapons_F\Ammo\UGL_Flare";
		lightColor[] = { 0,0,1,0 };
	};
	class DBA_40mm_cyan_ammo : DBA_40mm_white_ammo
	{
		model = "\A3\Weapons_F\Ammo\UGL_Flare";
		lightColor[] = { 0,1,1,0 };
	};
	class DBA_40mm_purple_ammo : DBA_40mm_white_ammo
	{
		model = "\A3\Weapons_F\Ammo\UGL_Flare";
		lightColor[] = { 0.7,0,1,0 };
	};
	class ACE_G_Handflare_Purple : DBA_40mm_white_ammo {
		LightColor[] = { 1,0,1,0.5 };
		model = "\A3\weapons_f\ammo\flare_yellow";
	};
};
