class CfgPatches
{
	class DBA_305mw_VKM8_Cannon
	{
		author = "Vulgar & ISU";
		requiredAddons[] =
		{
			"A3_Weapons_F",
			"A3_Sounds_F",
		};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] =
		{
			"DBA_305mw_VKM8_Cannon"
		};
		magazines[] =
		{
			"DBA_305mm_M19K_HE_x2_mag"
		};
		ammo[] =
		{
			"DBA_305mm_M19K_HE"
		};
	};
};

class CfgWeapons
{
	class CannonCore;
	class cannon_120mm : CannonCore
	{
		class player;
	};
	class DBA_305mw_VKM8_Cannon : cannon_120mm {
		ace_overpressure_angle = 45;  // Cone in which the damage is applied (in degrees from the muzzle of the cannon)
		ace_overpressure_range = 10;  // Range in meters in which the damage is applied
		ace_overpressure_damage = 0.25;  // Damage multiplier
		displayName = "305mw VKM-8 Turbolaser";
		scope = 2;
		magazines[] =
		{
			"DBA_305mm_M19K_HE_x2_mag",
		};
		modes[] =
		{
			"player",
			"close",
			"medium",
			"far"
		};
		magazineReloadTime = 22;
		class player : player
		{
			displayName = "305mw VKM-8 Turbolaser";
			sounds[] =
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[] =
				{
					"DBA_Core\Addons\DBA_General\DBA_Sounds\bigboigun.ogg",
					50.1622777,
					0.8,
					2500
				};
				soundBegin[] =
				{
					"begin1",
					1
				};
			};
			soundContinuous = 0;
			reloadTime = 0.75;
			autoReload = 1;
			burst = 2;
			autoFire = 0;
			dispersion = 0.00011;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.64999998;
			midRange = 1250;
			midRangeProbab = 0.80000001;
			maxRange = 1750;
			maxRangeProbab = 0.5;
		};
		class close : player {
			soundBurst = 0;
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 2;
			burstRangeMax = 2;
			aiRateOfFire = 0.1;
			aiRateOfFireDispersion = 0;
			aiRateOfFireDistance = 500;
			minRange = 0;
			minRangeProbab = 0.88;
			midRange = 250;
			midRangeProbab = 0.90;
			maxRange = 500;
			maxRangeProbab = 1;
		};
		class medium :close {
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 2;
			burstRangeMax = 2;
			aiRateOfFire = 0.1;
			aiRateOfFireDispersion = 0;
			aiRateOfFireDistance = 1300;
			minRange = 900;
			minRangeProbab = 0.9;
			midRange = 1000;
			midRangeProbab = 0.9;
			maxRange = 1250;
			maxRangeProbab = 0.9;
		};
		class far :medium {
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 2;
			burstRangeMax = 2;
			aiRateOfFire = 0.1;
			aiRateOfFireDispersion = 0;
			aiRateOfFireDistance = 2500;
			minRange = 1500;
			minRangeProbab = 0.98;
			midRange = 2000;
			midRangeProbab = 0.98;
			maxRange = 2500;
			maxRangeProbab = 0.9;
		};
		class GunParticles
		{
			class effect1
			{
				positionName = "konec hlavne";
				directionName = "usti hlavne";
				effectName = "MachineGunCloud";
			};
			class effect2
			{
				positionName = "konec hlavne2";
				directionName = "usti hlavne2";
				effectName = "MachineGunCloud";
			};
		};
	};
};
class CfgMagazines
{
	class VehicleMagazine;
	class DBA_305mm_M19K_HE_x2_mag : VehicleMagazine {
		displayname = "305mw M-19K High Explosive";
		ammo = "DBA_305mm_M19K_HE";
		displaynamemagazine = "305mw M-19K HE";
		shortnamemagazine = "M-19K HE";
		displayNameMFDFormat = "HE";
		displayNameShort = "HE";
		count = 2;
		initspeed = 808;
		tracersevery = 1;
	};
};
class CfgAmmo
{
	class Sh_120mm_APFSDS;
	class DBA_305mm_M19K_HE : Sh_120mm_APFSDS {
		displayName = "305mw M-19K HE";
		hit = 2000;
		indirectHit = 4100;
		indirectHitRange = 65;
		warheadName = "HE";
		dangerRadiusHit = 750;
		suppressionRadiusHit = 125;
		typicalSpeed = 250;
		caliber = 30;
		deflecting = 0;
		explosive = 0.800000;
		cost = 300;
		model = "DBA_Core\addons\dba_general\dba_AmmoBase\CapitalShipBlasterBoltGreen.p3d";
		tracerStartTime = 0.15;
		tracerEndTime = 10000000;
		tracerScale = 2.25;
		CraterEffects = "ArtyShellCrater";
		ExplosionEffects = "MortarExplosion";
		whistleDist = 100;
		artilleryLock = 1;
		thrust = 0;
		timeToLive = 210;
		airFriction = 0;
		coefGravity = 0;
		sideairFriction = 0.000000;
		soundHit1[] = { "A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_01", 2.511886, 0.7, 1900 };
		soundHit2[] = { "A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_02", 2.511886, 0.72, 1900 };
		soundHit3[] = { "A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_03", 2.511886, 0.65, 1900 };
		soundHit4[] = { "A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_04", 2.511886, 0.75, 1900 };
		multiSoundHit[] = { "soundHit1", 0.250000, "soundHit2", 0.250000, "soundHit3", 0.250000, "soundHit4", 0.250000 };
		submunitionAmmo = "";
		submunitionDirectionType = "";
		submunitionInitSpeed = 1610;
		submunitionParentSpeedCoef = 1;
		submunitionInitialOffset[] = { 0,0,-0.2 };
		aiAmmoUsageFlags = "128 + 512";
		allowAgainstInfantry = 0;
		timeToLive = 240;
		class CamShakeExplode {
			power = 50;
			duration = 5.500000;
			frequency = 20;
			distance = 500;
		};

		class CamShakeHit {
			power = 200;
			duration = 8;
			frequency = 20;
			distance = 200;
		};

		class CamShakeFire {
			power = 12;
			duration = 4.500000;
			frequency = 20;
			distance = 175;
		};

		class CamShakePlayerFire {
			power = 0.010000;
			duration = 0.100000;
			frequency = 20;
			distance = 1;
		};
	};
};