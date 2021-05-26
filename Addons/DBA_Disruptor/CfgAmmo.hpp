class CfgAmmo
{
	class DBA_ammo_base;

	class DBA_Disruptor_Ammo: DBA_ammo_base
	{
		hit = 0.01; //How much damage when it hits
		indirecthit = 0; //Splash Damage
		indirecthitrange = 0; //Splash Damage Range in meters
		caliber = 25; //Acts as penetration multiplier for the projectile.
		typicalspeed = 800; //What speed does this need to be going to inflict full damage

		visibleFire = 5;
		audibleFire = 120;
		visibleFireTime = 3; //Alerts AI from further away

		tracerScale = 5;

		dangerRadiusBulletClose = 8;
		dangerRadiusHit = 12;
		suppressionRadiusBulletClose = 6;
		suppressionRadiusHit = 8;
		aiAmmoUsageFlags = 128; // AI use against vehicles

		timeToLive = 2; // Disappear after 2 seconds

		DBA_isDisruptorRound = 1;
		DBA_disruptDuration = 10;

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
};
