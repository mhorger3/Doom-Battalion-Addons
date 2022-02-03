class CfgPatches
{
	class DBA_FlamerWeapons
	{
		author = "Vulgar";
		requiredAddons[] =
		{
			"A3_data_F",
			"A3_anims_F",
			"A3_weapons_F",
			"A3_characters_F"
		};
		weapons[] =
		{
			"DBA_VehicleFlamer",
		};
		units[] = {};
	};
};
class CfgCloudlets
{
	class ExploAmmoSmoke;
	class flamesExplosion : ExploAmmoSmoke
	{
		interval = "0.015";
		circleRadius = 0.1;
		circleVelocity[] = { 0,0,0 };
		particleShape = "\a3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 10;
		particleFSFrameCount = 32;
		particleFSLoop = 1;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 3;
		lifeTime = 3;
		moveVelocity[] = { 0,0.050000001,0 };
		rotationVelocity = 0;
		weight = 0.075000003;
		volume = 0.050000001;
		rubbing = 0.050000001;
		size[] = { 0.5,0.5,0.5,0.5 };
		sizeCoef = 2.5;
		color[] =
		{
			{0.69999999,1,0.60000002,0.60000002},
			{0.69999999,1,0.60000002,0.40000001},
			{0.69999999,1,0.60000002,0.22},
			{0.69999999,1,0.60000002,0.1},
			{0.69999999,1,0.60000002,0}
		};
		colorCoef[] = { 0.69999999,1,0.60000002,1 };
		animationSpeed[] = { 1.7,0.60000002,0.40000001,0.30000001,0.30000001 };
		randomDirectionPeriod = 0.2;
		randomDirectionIntensity = 0.050000001;
		onTimerScript = "";
		lifeTimeVar = 1.7;
		positionVar[] =
		{
			"1 + 1.1 * intensity",
			0.30000001,
			"1 + 1.1 * intensity"
		};
		moveVelocityVar[] = { 0.1,0.1,0.1 };
		rotationVelocityVar = 0;
		sizeVar = 0.050000001;
		colorVar[] = { 0.1,0.1,0.1,0 };
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		damageTime = 0.25;
		constantDistance = 1.6;
		damageType = "Fire";
	};
};
class Flame_Explosion
{
	class flame_Light
	{
		simulation = "light";
		type = "FiredLightMed";
		position = "destructionEffect1";
		intensity = 1;
		interval = 1;
		lifeTime = 10;
	};
	class Flame_sound
	{
		simulation = "sound";
		type = "Fire";
		position[] = { 0,0,0 };
		intensity = 1;
		interval = 1;
		lifeTime = 10;
	};
	class flamesExplosion
	{
		simulation = "particles";
		type = "BigDestructionFire";
		position[] = { 0,0,0 };
		intensity = 1;
		interval = 1;
		lifeTime = 20;
	};
};
class CfgAmmo
{
	class BulletBase;
	class DBA_FlameRound : BulletBase
	{
		submunitionAmmo = "DBA_FlameRound_sub";
		submunitionConeType[] =
		{
			"poissondisc",
			4
		};
		submunitionConeAngle = 4;
		triggerTime = 0.050000001;
		hit = 10;
		indirectHit = 6.5;
		indirectHitRange = 2.5;
		cartridge = "FxCartridge_127";
		cost = 2;
		dangerRadiusBulletClose = 12;
		dangerRadiusHit = 16;
		suppressionRadiusBulletClose = 8;
		suppressionRadiusHit = 12;
		visibleFire = 32;
		audibleFire = 12;
		visibleFireTime = 20;
		airFriction = 0.1;
		timetolive = 5;
		maxSpeed = 25;
		typicalSpeed = 0.12;
		coefGravity = 0;
		deflecting = 0;
		explosive = 1;
		fuseDistance = 1;
		caliber = 0.5;
		tracerScale = 0.001;
		tracerStartTime = 0.0099999998;
		tracerEndTime = 0.1;
		craterEffects = "";
		effectFly = "SmallFire";
		explosionEffects = "Flame_Explosion";
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class DBA_FlameRound_sub : BulletBase
	{
		hit = 10;
		indirectHit = 5;
		indirectHitRange = 1;
		cartridge = "FxCartridge_127";
		cost = 2;
		visibleFire = 32;
		audibleFire = 12;
		visibleFireTime = 20;
		airFriction = 0;
		timetolive = 3.5;
		maxSpeed = 25;
		typicalSpeed = 0.12;
		coefGravity = 0.25;
		deflecting = 0;
		explosive = 1;
		fuseDistance = 1;
		caliber = 0.5;
		tracerScale = 0.0099999998;
		tracerStartTime = 0.0099999998;
		tracerEndTime = 0.1;
		craterEffects = "";
		effectFly = "SmallFire";
		explosionEffects = "Flame_Explosion";
	};
};
class CfgMagazines {
	class VehicleMagazine;
	class DBA_VehicleFlamer_Mag : VehicleMagazine
	{
		author = "Vulgar";
		scope = 2;
		count = 500;
		ammo = "DBA_FlameRound";
		initSpeed = 25;
		maxLeadSpeed = 36.111099;
		tracersEvery = 1;
		nameSound = "mgun";
		displayName = "[DBA] Vehicle Mounted Flamer";
		descriptionShort = "$STR_A3_CfgMagazines_500Rnd_127x99_mag1";
		displaynameshort = "Flamer Fuel";
		muzzleImpulseFactor[] = {0.050000001,0.050000001};
		displayNameMFDFormat = "HMG";
	};
};
class CfgWeapons
{
	class MGun;
	class LMG_RCWS;
	class DBA_VehicleFlamer : LMG_RCWS
	{
		displayName = "Vehicle Mounted Flamer";
		scope = 1;
		magazines[] =
		{
			"DBA_VehicleFlamer_Mag"
		};
		maxZeroing = 2000;
		class GunParticles
		{
			class effect1
			{
				positionName = "usti hlavne";
				directionName = "konec hlavne";
				effectName = "MachineGunCloud";
			};
		};
		showAimCursorInternal = 0;
		class manual : MGun
		{
			displayName = "12.7mm HMG";
			sounds[] =
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[] =
				{
					"3AS\3AS_Weapons\X42\SFX\flamer.ogg",
					1.5848932,
					1,
					2100
				};
				begin2[] =
				{
					"3AS\3AS_Weapons\X42\SFX\flamer.ogg",
					1.5848932,
					1,
					2100
				};
				begin3[] =
				{
					"3AS\3AS_Weapons\X42\SFX\flamer.ogg",
					1.5848932,
					1,
					2100
				};
				soundBegin[] =
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.34
				};
				closure1[] =
				{
					"A3\Sounds_F\weapons\Closure\sfx10",
					0.63095737,
					1,
					20
				};
				closure2[] =
				{
					"A3\sounds_f\weapons\closure\sfx11",
					0.63095737,
					1.2,
					20
				};
				soundClosure[] =
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			soundContinuous = 0;
			soundBurst = 0;
			reloadTime = 0.1;
			dispersion = 0.0012000001;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.0099999998;
			midRange = 1;
			midRangeProbab = 0.0099999998;
			maxRange = 2;
			maxRangeProbab = 0.0099999998;
		};
		class close : manual
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 8;
			burstRangeMax = 16;
			aiRateOfFire = 0.5;
			aiRateOfFireDispersion = 1.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.69999999;
			midRange = 100;
			midRangeProbab = 0.69999999;
			maxRange = 200;
			maxRangeProbab = 0.2;
		};
		class short : close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 6;
			burstRangeMax = 16;
			aiRateOfFire = 1;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 150;
			minRange = 100;
			minRangeProbab = 0.69999999;
			midRange = 400;
			midRangeProbab = 0.75;
			maxRange = 800;
			maxRangeProbab = 0.2;
		};
		class medium : close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 4;
			burstRangeMax = 12;
			aiRateOfFire = 2;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 400;
			minRange = 400;
			minRangeProbab = 0.75;
			midRange = 800;
			midRangeProbab = 0.69999999;
			maxRange = 1500;
			maxRangeProbab = 0.1;
		};
		class far : close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 3;
			burstRangeMax = 12;
			aiRateOfFire = 4;
			aiRateOfFireDispersion = 4;
			aiRateOfFireDistance = 800;
			minRange = 800;
			minRangeProbab = 0.60000002;
			midRange = 1500;
			midRangeProbab = 0.25;
			maxRange = 2000;
			maxRangeProbab = 0.050000001;
		};
	};
};