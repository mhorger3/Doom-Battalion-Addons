//AMMO REDO VOLUME 2
		class DBA_ammo_base:BulletBase
		{
			hit=8; //How much damage when it hits
			indirecthit=0; //Splash Damage
			indirecthitrange=0; //Splash Damage Range in meters
			caliber=0.86956501; //Acts as penetration multiplier for the projectile.
			typicalspeed=920; //What speed does this need to be going to inflict full damage

			//Penetration depth in mm: velocity[m/s] * caliber * penetrability / 1000. Penetrability is a material property (for RHA steel it is 15, for concrete 80, for meat 250).

			nvgonly=0;

			airlock=1;
			irtarget=1;

			dangerRadiusBulletClose=8; //AI Stuff
			dangerRadiusHit=12;
			suppressionRadiusBulletClose=6;
			suppressionradiushit=8;

			aiAmmoUsageFlags="32 + 64 + 128 + 256 + 512"; //What AI will shoot at 

			//32 	Underwater 			used in underwater environment
			//64 	OffensiveInf 		against infantry
			//128 	OffensiveVeh 		against vehicles
			//256 	OffensiveAir 		against air
			//512 	OffensiveArmour 	against armored vehicles 

			audiblefire=35;

			brightness=1000; // How Bright/color
			effectfly="442_plasma_blue";
			model = "\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
			lightcolor[]={.5,.5,.5}; //Color of light in {R,G,B}
			flaresize=5; //how big the flash is

			tracerscale=0.5; //how big the model is that comes out of the barrel
			effectflare="FlareShell";
			tracerstarttime=0.090000001;
			tracerendtime=10;
			
			waterFriction=0;

			cartridge=""; //no cartrige pls

			cost=1;
			muzzleeffect="";
			deflecting=0;
			inittime=0;

			timetolive=6; // How long the ammo flys in seconds

			coefgravity=0; //Makes them fly like lasers
			airfriction=0;

			supersoniccracknear[]={};
			supersoniccrackfar[]={};
			class SuperSonicCrack
			{
			};
			bulletFly[]=
			{
				"bulletFly1",
				0.082999997,
				"bulletFly2",
				0.082999997,
				"bulletFly3",
				0.082999997,
				"bulletFly4",
				0.082999997,
				"bulletFly5",
				0.082999997,
				"bulletFly6",
				0.082999997,
				"bulletFly7",
				0.082999997,
				"bulletFly8",
				0.082999997,
				"bulletFly9",
				0.082999997,
				"bulletFly10",
				0.082999997,
				"bulletFly11",
				0.082999997,
				"bulletFly12",
				0.082999997
			};
			bulletFly1[]=
			{
				"kobra\kobra_core\sounds\blaster_fire1.wss",
				1.58,
				1,
				30
			};
			bulletFly10[]=
			{
				"kobra\kobra_core\sounds\blaster_fire1.wss",
				1.58,
				1,
				30
			};
			bulletFly11[]=
			{
				"kobra\kobra_core\sounds\blaster_fire1.wss",
				1.58,
				1,
				30
			};
			bulletFly12[]=
			{
				"kobra\kobra_core\sounds\blaster_fire1.wss",
				1.58,
				1,
				30
			};
			bulletFly2[]=
			{
				"kobra\kobra_core\sounds\blaster_fire1.wss",
				1.58,
				1,
				30
			};
			bulletFly3[]=
			{
				"kobra\kobra_core\sounds\blaster_fire1.wss",
				1.58,
				1,
				30
			};
			bulletFly4[]=
			{
				"kobra\kobra_core\sounds\blaster_fire1.wss",
				2.2387199,
				1,
				100
			};
			bulletFly5[]=
			{
				"kobra\kobra_core\sounds\blaster_fire1.wss",
				2.2387199,
				1,
				100
			};
			bulletFly6[]=
			{
				"kobra\kobra_core\sounds\blaster_fire1.wss",
				2.2387199,
				1,
				100
			};
			bulletFly7[]=
			{
				"kobra\kobra_core\sounds\blaster_fire1.wss",
				2.2387199,
				1,
				100
			};
			bulletFly8[]=
			{
				"kobra\kobra_core\sounds\blaster_fire1.wss",
				2.2387199,
				1,
				100
			};
			bulletFly9[]=
			{
				"kobra\kobra_core\sounds\blaster_fire1.wss",
				2.2387199,
				1,
				100
			};
			soundHit1[]=
			{
				"kobra\kobra_core\sounds\blaster_fire1.wss",
				1.9952624,
				1,
				120
			};
			soundHit2[]=
			{
				"kobra\kobra_core\sounds\blaster_fire1.wss",
				1.9952624,
				1,
				120
			};
			soundHit3[]=
			{
				"kobra\kobra_core\sounds\blaster_fire1.wss",
				1.9952624,
				1,
				120
			};
			soundHit4[]=
			{
				"kobra\kobra_core\sounds\blaster_fire1.wss",
				1.9952624,
				1,
				120
			};
			soundHit5[]=
			{
				"kobra\kobra_core\sounds\blaster_fire1.wss",
				1.9952624,
				1,
				120
			};
			soundHit6[]=
			{
				"kobra\kobra_core\sounds\blaster_fire1.wss",
				1.9952624,
				1,
				120
			};
			multiSoundHit[]=
			{
				"soundHit1",
				0.2,
				"soundHit2",
				0.2,
				"soundHit3",
				0.2,
				"soundHit4",
				0.1,
				"soundHit5",
				0.15000001,
				"soundHit6",
				0.15000001
			};
			class HitEffects
			{
				default_mat="442_plasma_impact";
				Hit_Foliage_Banana="442_plasma_impact";
				Hit_Foliage_Dead="442_plasma_impact";
				Hit_Foliage_green="442_plasma_impact";
				Hit_Foliage_Green_big="442_plasma_impact";
				Hit_Foliage_Palm="442_plasma_impact";
				Hit_Foliage_Pine="442_plasma_impact";
				hitBuilding="442_plasma_impact";
				hitConcrete="442_plasma_impact";
				hitFoliage="442_plasma_impact";
				hitGlass="442_plasma_impact";
				hitGlassArmored="442_plasma_impact";
				hitGroundHard="442_plasma_impact";
				hitGroundRed="442_plasma_impact";
				hitGroundSoft="442_plasma_impact";
				hitHay="442_plasma_impact";
				hitMan="442_plasma_impact";
				hitMetal="442_plasma_impact";
				hitMetalPlate="442_plasma_impact";
				hitPlastic="442_plasma_impact";
				hitRubber="442_plasma_impact";
				hitTyre="442_plasma_impact";
				hitVirtual="442_plasma_impact";
				hitWater="442_plasma_impact";
				hitWood="442_plasma_impact";
			};
		};

		class DBA_shotgun_base: ShotgunBase
		{
			hit=2;
			indirectHit=2;
			indirectHitRange=0.40000001;
			cartridge="FxCartridge_slug";
			cost=5;
			typicalSpeed=400;
			airFriction=-0.0080000004;
			caliber=1;
			deflecting=30;
			class CamShakeFire
			{
				power=3;
				duration=0.5;
				frequency=20;
				distance=10;
			};
			class CamShakePlayerFire
			{
				power=1;
				duration=0.1;
				frequency=20;
			};
			class CamShakeHit
			{
				power=10;
				duration=1;
				frequency=20;
			};
			effectfly="442_plasma_blue";
			simulation="shotSpread"; //This makes it spread
			model="kobra\442_weapons\ammo\blue_tracer.p3d";
			lightcolor[]={.5,.5,.5};
			flaresize=5;
			tracerscale=1.1;
			effectflare="FlareShell";
			tracerstarttime=0;
			tracerendtime=10;
			class HitEffects
			{
				default_mat="442_plasma_impact";
				Hit_Foliage_Banana="442_plasma_impact";
				Hit_Foliage_Dead="442_plasma_impact";
				Hit_Foliage_green="442_plasma_impact";
				Hit_Foliage_Green_big="442_plasma_impact";
				Hit_Foliage_Palm="442_plasma_impact";
				Hit_Foliage_Pine="442_plasma_impact";
				hitBuilding="442_plasma_impact";
				hitConcrete="442_plasma_impact";
				hitFoliage="442_plasma_impact";
				hitGlass="442_plasma_impact";
				hitGlassArmored="442_plasma_impact";
				hitGroundHard="442_plasma_impact";
				hitGroundRed="442_plasma_impact";
				hitGroundSoft="442_plasma_impact";
				hitHay="442_plasma_impact";
				hitMan="442_plasma_impact";
				hitMetal="442_plasma_impact";
				hitMetalPlate="442_plasma_impact";
				hitPlastic="442_plasma_impact";
				hitRubber="442_plasma_impact";
				hitTyre="442_plasma_impact";
				hitVirtual="442_plasma_impact";
				hitWater="442_plasma_impact";
				hitWood="442_plasma_impact";
			};
		};

	//Rifle Calibers

		class DBA_556_base:DBA_ammo_base //556 NATO
		{
			hit=9; //How much damage when it hits
			indirecthit=0; //Splash Damage
			indirecthitrange=0; //Splash Damage Range in meters
			caliber=0.9; //Acts as penetration multiplier for the projectile.
			typicalspeed=920; //What speed does this need to be going to inflict full damage

			tracerScale=0.3;

			dangerRadiusBulletClose=8;
			dangerRadiusHit=12;
			suppressionRadiusBulletClose=6;
			suppressionRadiusHit=8;
			aiAmmoUsageFlags=64;
			class CamShakeExplode
			{
				power=2.2360699;
				duration=0.40000001;
				frequency=20;
				distance=6.7082;
			};
			class CamShakeHit
			{
				power=5;
				duration=0.2;
				frequency=20;
				distance=1;
			};
		};
		class DBA_65_base:DBA_ammo_base //65 MX
		{
			hit=10; //How much damage when it hits
			indirecthit=0; //Splash Damage
			indirecthitrange=0; //Splash Damage Range in meters
			caliber=1; //Acts as penetration multiplier for the projectile.
			typicalspeed=820; //What speed does this need to be going to inflict full damage

			tracerScale=0.3;

			dangerRadiusBulletClose=8;
			dangerRadiusHit=12;
			suppressionRadiusBulletClose=6;
			suppressionRadiusHit=8;
			aiAmmoUsageFlags=64;
			class CamShakeExplode
			{
				power=2.4494901;
				duration=0.40000001;
				frequency=20;
				distance=7.3484702;
			};
			class CamShakeHit
			{
				power=6;
				duration=0.40000001;
				frequency=20;
				distance=1;
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
			DBA_IsDesignator = 1;
		};
		class DBA_762_base:DBA_ammo_base //762 Nato
		{
			hit=11.6; //How much damage when it hits
			indirecthit=0; //Splash Damage
			indirecthitrange=0; //Splash Damage Range in meters
			caliber=1.6; //Acts as penetration multiplier for the projectile.
			typicalspeed=800; //What speed does this need to be going to inflict full damage

			tracerScale=0.4;

			audibleFire=45; //Alerts AI from further away

			dangerRadiusBulletClose=8;
			dangerRadiusHit=12;
			suppressionRadiusBulletClose=6;
			suppressionRadiusHit=8;
			aiAmmoUsageFlags=64;
			class CamShakeExplode
			{
				power=2.8284299;
				duration=0.60000002;
				frequency=20;
				distance=8.48528;
			};
			class CamShakeHit
			{
				power=5;
				duration=0.2;
				frequency=20;
				distance=1;
			};
		};
		class DBA_338_base:DBA_ammo_base //.338 Win Mag
		{
			hit=16; //How much damage when it hits
			indirecthit=0; //Splash Damage
			indirecthitrange=0; //Splash Damage Range in meters
			caliber=2; //Acts as penetration multiplier for the projectile.
			typicalSpeed=890; //What speed does this need to be going to inflict full damage

			tracerScale=0.4;

			audibleFire=80; //Alerts AI from further away

			dangerRadiusBulletClose=10;
			dangerRadiusHit=14;
			suppressionRadiusBulletClose=8;
			suppressionRadiusHit=10;
			aiAmmoUsageFlags=64;
			class CamShakeExplode
			{
				power=2.8284299;
				duration=0.60000002;
				frequency=20;
				distance=8.48528;
			};
			class CamShakeHit
			{
				power=5;
				duration=0.2;
				frequency=20;
				distance=1;
			};
		};
		class DBA_Vulken :DBA_ammo_base //.338 Win Mag
		{
			hit = 19; //How much damage when it hits
			indirecthit = 0; //Splash Damage
			indirecthitrange = 0; //Splash Damage Range in meters
			caliber = 3.5; //Acts as penetration multiplier for the projectile.
			typicalSpeed = 890; //What speed does this need to be going to inflict full damage

			tracerScale=0.5;

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
		class DBA_408_base:DBA_ammo_base //408 Cheytac
		{
			hit=24; //How much damage when it hits
			indirecthit=0; //Splash Damage
			indirecthitrange=0; //Splash Damage Range in meters
			caliber=1.6; //Acts as penetration multiplier for the projectile.
			typicalspeed=800; //What speed does this need to be going to inflict full damage

			visibleFire=5;
			audibleFire=120;
			visibleFireTime=3; //Alerts AI from further away

			tracerScale=0.7;

			dangerRadiusBulletClose=8;
			dangerRadiusHit=12;
			suppressionRadiusBulletClose=6;
			suppressionRadiusHit=8;
			aiAmmoUsageFlags=64;
			class CamShakeExplode
			{
				power=3.1622801;
				duration=0.60000002;
				frequency=20;
				distance=9.4868298;
			};
			class CamShakeHit
			{
				power=10;
				duration=0.40000001;
				frequency=20;
				distance=1;
			};
		};
		class DBA_127x99_base:DBA_ammo_base //50 BMG
		{
			hit=30; //How much damage when it hits
			indirecthit=0; //Splash Damage
			indirecthitrange=0; //Splash Damage Range in meters
			caliber=2.5999999; //Acts as penetration multiplier for the projectile.
			typicalSpeed=880; //What speed does this need to be going to inflict full damage

			visibleFire=8;
			audibleFire=120;
			visibleFireTime=3; //Alerts AI from further away

			tracerScale=10;

			dangerRadiusBulletClose=8;
			dangerRadiusHit=12;
			suppressionRadiusBulletClose=6;
			suppressionRadiusHit=8;
			aiAmmoUsageFlags=64;
			class CamShakeExplode
			{
				power=3.6055501;
				duration=0.80000001;
				frequency=20;
				distance=10.8167;
			};
			class CamShakeHit
			{
				power=13;
				duration=0.40000001;
				frequency=20;
				distance=1;
			};
		};
		class DBA_127x99_SLAP_base:DBA_ammo_base //50 SLAP - Use for Snipers
		{
			hit=50;//How much damage when it hits
			indirecthit=0; //Splash Damage
			indirecthitrange=0; //Splash Damage Range in meters
			caliber=3.4000001; //Acts as penetration multiplier for the projectile.
			typicalSpeed=880; //What speed does this need to be going to inflict full damage

			visibleFire=8;
			audibleFire=120;
			visibleFireTime=3; //Alerts AI from further away

			tracerScale=1.2;

			dangerRadiusBulletClose=8;
			dangerRadiusHit=12;
			suppressionRadiusBulletClose=6;
			suppressionRadiusHit=8;
			aiAmmoUsageFlags=64;
			class CamShakeExplode
			{
				power=4.4721398;
				duration=0.80000001;
				frequency=20;
				distance=13.4164;
			};
			class CamShakeHit
			{
				power=20;
				duration=0.40000001;
				frequency=20;
				distance=1;
			};
		};
		class DBA_AntiTank_base :DBA_ammo_base //AT Rifle Ammo
		{
			hit = 70; //How much damage when it hits
			indirecthit = 0; //Splash Damage
			indirecthitrange = 0; //Splash Damage Range in meters
			caliber = 30; //Acts as penetration multiplier for the projectile.
			typicalspeed = 800; //What speed does this need to be going to inflict full damage

			visibleFire = 5;
			audibleFire = 120;
			visibleFireTime = 3; //Alerts AI from further away

			tracerScale = 3;
			model="kobra\442_weapons\ammo\orange_tracer.p3d";
			effectfly="442_plasma_orange";

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
			model="kobra\442_weapons\ammo\orange_tracer.p3d";
			effectfly="442_plasma_orange";

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

		class DBA_9x21_base:DBA_ammo_base //9mm Luger
		{
			hit=5; //How much damage when it hits
			indirecthit=0; //Splash Damage
			indirecthitrange=0; //Splash Damage Range in meters
			caliber=1.2; //Acts as penetration multiplier for the projectile.
			typicalSpeed=380; //What speed does this need to be going to inflict full damage

			tracerScale=0.2;

			audibleFire=30;

			aiAmmoUsageFlags=64;
			dangerRadiusBulletClose=4;
			dangerRadiusHit=8;
			suppressionRadiusBulletClose=2;
			suppressionRadiusHit=4;
		};
		class DBA_45acp_base:DBA_ammo_base //45ACP
		{
			hit=5; //How much damage when it hits
			indirecthit=0; //Splash Damage
			indirecthitrange=0; //Splash Damage Range in meters
			caliber=1.2; //Acts as penetration multiplier for the projectile.
			typicalSpeed=280; //What speed does this need to be going to inflict full damage

			tracerScale=0.2;

			audibleFire=50;

			aiAmmoUsageFlags=64;
			dangerRadiusBulletClose=4;
			dangerRadiusHit=8;
			suppressionRadiusBulletClose=2;
			suppressionRadiusHit=4;
		};
		class DBA_127x33_base:DBA_ammo_base //.50 Action Express
		{
			hit=7.5; //How much damage when it hits
			indirecthit=0; //Splash Damage
			indirecthitrange=0; //Splash Damage Range in meters
			caliber=1; //Acts as penetration multiplier for the projectile.
			typicalSpeed=420; //What speed does this need to be going to inflict full damage

			tracerScale=0.2;

			audibleFire=50;

			aiAmmoUsageFlags=64;
			dangerRadiusBulletClose=4;
			dangerRadiusHit=8;
			suppressionRadiusBulletClose=2;
			suppressionRadiusHit=4;
		};
	
	//Shotgun Calibers

		class DBA_12gaSlug_Base:DBA_ammo_base //12GA
		{
			hit=42;
			indirectHit=0;
			indirectHitRange=0;
			cost=5;
			typicalSpeed=600;
			airFriction=0;
			caliber=3;
			deflecting=15;
		};
		class DBA_12gaSlug_green: DBA_12gaSlug_Base
		{
			model="kobra\442_weapons\ammo\green_tracer.p3d";
			effectfly="442_plasma_green";
		};
		class DBA_12gaPellets_Base:DBA_shotgun_base //12GA
		{
			hit=4; //Vanilla is 2
			indirectHit=2;
			indirectHitRange=0.4;
			cost=5;
			typicalSpeed=400;
			airFriction=0;
			caliber=2; //Vanilla is 1
			deflecting=30;
			airFriction=-0;
			caliber=1.5;
			deflecting=15;
			class CamShakeFire
			{
				power=3;
				duration=0.5;
				frequency=20;
				distance=10;
			};
			class CamShakePlayerFire
			{
				power=1;
				duration=0.1;
				frequency=20;
			};
			class CamShakeHit
			{
				power=10;
				duration=1;
				frequency=20;
			};
		};

	//5.56 Color Variants

		class DBA_556_blue: DBA_556_base
		{
			model = "\3AS\3AS_Weapons\Data\tracer_blue.p3d";
			effectfly="442_plasma_blue";
		};
		class DBA_556_green: DBA_556_base
		{
			model="kobra\442_weapons\ammo\green_tracer.p3d";
			effectfly="442_plasma_green";
		};
		class DBA_556_orange: DBA_556_base
		{
			model="kobra\442_weapons\ammo\orange_tracer.p3d";
			effectfly="442_plasma_orange";
		};
		class DBA_556_red: DBA_556_base
		{
			model="kobra\442_weapons\ammo\red_tracer.p3d";
			effectfly="442_plasma_red";
		};
		class DBA_556_pink: DBA_556_base
		{
			model="kobra\442_weapons\ammo\pink_tracer.p3d";
			effectfly="442_plasma_pink";
		};
		class DBA_556_purple: DBA_556_base
		{
			model="kobra\442_weapons\ammo\purple_tracer.p3d";
			effectfly="442_plasma_purple";
		};
		class DBA_556_black: DBA_556_base
		{
			model="kobra\442_weapons\ammo\black_tracer.p3d";
			effectfly="442_plasma_black";
		};
		class DBA_556_yellow: DBA_556_base
		{
			model="kobra\442_weapons\ammo\yellow_tracer.p3d";
			effectfly="442_plasma_yellow";
		};

	//6.5 Color Variants

		class DBA_65_blue: DBA_65_base
		{
			model = "\3AS\3AS_Weapons\Data\tracer_blue.p3d";
			effectfly="442_plasma_blue";
		};
		class DBA_65_green: DBA_65_base
		{
			model="kobra\442_weapons\ammo\green_tracer.p3d";
			effectfly="442_plasma_green";
		};
		class DBA_65_orange: DBA_65_base
		{
			model="kobra\442_weapons\ammo\orange_tracer.p3d";
			effectfly="442_plasma_orange";
		};
		class DBA_65_red: DBA_65_base
		{
			model="kobra\442_weapons\ammo\red_tracer.p3d";
			effectfly="442_plasma_red";
		};
		class DBA_65_pink: DBA_65_base
		{
			model="kobra\442_weapons\ammo\pink_tracer.p3d";
			effectfly="442_plasma_pink";
		};
		class DBA_65_purple: DBA_65_base
		{
			model="kobra\442_weapons\ammo\purple_tracer.p3d";
			effectfly="442_plasma_purple";
		};
		class DBA_65_black: DBA_65_base
		{
			model="kobra\442_weapons\ammo\black_tracer.p3d";
			effectfly="442_plasma_black";
		};
		class DBA_65_yellow: DBA_65_base
		{
			model="kobra\442_weapons\ammo\yellow_tracer.p3d";
			effectfly="442_plasma_yellow";
		};

	//7.62 Color Variants

		class DBA_762_blue: DBA_762_base
		{
			model = "\3AS\3AS_Weapons\Data\tracer_blue.p3d";
			effectfly="442_plasma_blue";
		};
		class DBA_762_green: DBA_762_base
		{
			model="kobra\442_weapons\ammo\green_tracer.p3d";
			effectfly="442_plasma_green";
		};
		class DBA_762_orange: DBA_762_base
		{
			model="kobra\442_weapons\ammo\orange_tracer.p3d";
			effectfly="442_plasma_orange";
		};
		class DBA_762_red: DBA_762_base
		{
			model="kobra\442_weapons\ammo\red_tracer.p3d";
			effectfly="442_plasma_red";
		};
		class DBA_762_pink: DBA_762_base
		{
			model="kobra\442_weapons\ammo\pink_tracer.p3d";
			effectfly="442_plasma_pink";
		};
		class DBA_762_purple: DBA_762_base
		{
			model="kobra\442_weapons\ammo\purple_tracer.p3d";
			effectfly="442_plasma_purple";
		};
		class DBA_762_black: DBA_762_base
		{
			model="kobra\442_weapons\ammo\black_tracer.p3d";
			effectfly="442_plasma_black";
		};
		class DBA_762_yellow: DBA_762_base
		{
			model="kobra\442_weapons\ammo\yellow_tracer.p3d";
			effectfly="442_plasma_yellow";
		};

	//.338 Color Variants

		class DBA_338_blue: DBA_338_base
		{
			model = "\3AS\3AS_Weapons\Data\tracer_blue.p3d";
			effectfly="442_plasma_blue";
		};
		class DBA_338_green: DBA_338_base
		{
			model="kobra\442_weapons\ammo\green_tracer.p3d";
			effectfly="442_plasma_green";
		};
		class DBA_338_orange: DBA_338_base
		{
			model="kobra\442_weapons\ammo\orange_tracer.p3d";
			effectfly="442_plasma_orange";
		};
		class DBA_338_red: DBA_338_base
		{
			model="kobra\442_weapons\ammo\red_tracer.p3d";
			effectfly="442_plasma_red";
		};
		class DBA_338_pink: DBA_338_base
		{
			model="kobra\442_weapons\ammo\pink_tracer.p3d";
			effectfly="442_plasma_pink";
		};
		class DBA_338_purple: DBA_338_base
		{
			model="kobra\442_weapons\ammo\purple_tracer.p3d";
			effectfly="442_plasma_purple";
		};
		class DBA_338_black: DBA_338_base
		{
			model="kobra\442_weapons\ammo\black_tracer.p3d";
			effectfly="442_plasma_black";
		};
		class DBA_338_yellow: DBA_338_base
		{
			model="kobra\442_weapons\ammo\yellow_tracer.p3d";
			effectfly="442_plasma_yellow";
		};

	//.408 Color Variants

		class DBA_408_blue: DBA_408_base
		{
			model = "\3AS\3AS_Weapons\Data\tracer_blue.p3d";
			effectfly="442_plasma_blue";
		};
		class DBA_408_green: DBA_408_base
		{
			model="kobra\442_weapons\ammo\green_tracer.p3d";
			effectfly="442_plasma_green";
		};
		class DBA_408_orange: DBA_408_base
		{
			model="kobra\442_weapons\ammo\orange_tracer.p3d";
			effectfly="442_plasma_orange";
		};
		class DBA_408_red: DBA_408_base
		{
			model="kobra\442_weapons\ammo\red_tracer.p3d";
			effectfly="442_plasma_red";
		};
		class DBA_408_pink: DBA_408_base
		{
			model="kobra\442_weapons\ammo\pink_tracer.p3d";
			effectfly="442_plasma_pink";
		};
		class DBA_408_purple: DBA_408_base
		{
			model="kobra\442_weapons\ammo\purple_tracer.p3d";
			effectfly="442_plasma_purple";
		};
		class DBA_408_black: DBA_408_base
		{
			model="kobra\442_weapons\ammo\black_tracer.p3d";
			effectfly="442_plasma_black";
		};
		class DBA_408_yellow: DBA_408_base
		{
			model="kobra\442_weapons\ammo\yellow_tracer.p3d";
			effectfly="442_plasma_yellow";
		};

	//.50 BMG Color Variants

		class DBA_127x99_blue: DBA_127x99_base
		{
			model = "\3AS\3AS_Weapons\Data\tracer_blue.p3d";
			effectfly="442_plasma_blue";
		};
		class DBA_127x99_green: DBA_127x99_base
		{
			model="kobra\442_weapons\ammo\green_tracer.p3d";
			effectfly="442_plasma_green";
		};
		class DBA_127x99_orange: DBA_127x99_base
		{
			model="kobra\442_weapons\ammo\orange_tracer.p3d";
			effectfly="442_plasma_orange";
		};
		class DBA_127x99_red: DBA_127x99_base
		{
			model="kobra\442_weapons\ammo\red_tracer.p3d";
			effectfly="442_plasma_red";
		};
		class DBA_127x99_pink: DBA_127x99_base
		{
			model="kobra\442_weapons\ammo\pink_tracer.p3d";
			effectfly="442_plasma_pink";
		};
		class DBA_127x99_purple: DBA_127x99_base
		{
			model="kobra\442_weapons\ammo\purple_tracer.p3d";
			effectfly="442_plasma_purple";
		};
		class DBA_127x99_black: DBA_127x99_base
		{
			model="kobra\442_weapons\ammo\black_tracer.p3d";
			effectfly="442_plasma_black";
		};
		class DBA_127x99_yellow: DBA_127x99_base
		{
			model="kobra\442_weapons\ammo\yellow_tracer.p3d";
			effectfly="442_plasma_yellow";
		};
	
	//.50 SLAP Color Variants

		class DBA_127x99_SLAP_blue: DBA_127x99_SLAP_base
		{
			model = "\3AS\3AS_Weapons\Data\tracer_blue.p3d";
			effectfly="442_plasma_blue";
		};
		class DBA_127x99_SLAP_green: DBA_127x99_SLAP_base
		{
			model="kobra\442_weapons\ammo\green_tracer.p3d";
			effectfly="442_plasma_green";
		};
		class DBA_127x99_SLAP_orange: DBA_127x99_SLAP_base
		{
			model="kobra\442_weapons\ammo\orange_tracer.p3d";
			effectfly="442_plasma_orange";
		};
		class DBA_127x99_SLAP_red: DBA_127x99_SLAP_base
		{
			model="kobra\442_weapons\ammo\red_tracer.p3d";
			effectfly="442_plasma_red";
		};
		class DBA_127x99_SLAP_pink: DBA_127x99_SLAP_base
		{
			model="kobra\442_weapons\ammo\pink_tracer.p3d";
			effectfly="442_plasma_pink";
		};
		class DBA_127x99_SLAP_purple: DBA_127x99_SLAP_base
		{
			model="kobra\442_weapons\ammo\purple_tracer.p3d";
			effectfly="442_plasma_purple";
		};
		class DBA_127x99_SLAP_black: DBA_127x99_SLAP_base
		{
			model="kobra\442_weapons\ammo\black_tracer.p3d";
			effectfly="442_plasma_black";
		};
		class DBA_127x99_SLAP_yellow: DBA_127x99_SLAP_base
		{
			model="kobra\442_weapons\ammo\yellow_tracer.p3d";
			effectfly="442_plasma_yellow";
		};
		
	// 9mm Color Variants

		class DBA_9x21_blue: DBA_9x21_base
		{
			model = "\3AS\3AS_Weapons\Data\tracer_blue.p3d";
			effectfly="442_plasma_blue";
		};
		class DBA_9x21_green: DBA_9x21_base
		{
			model="kobra\442_weapons\ammo\green_tracer.p3d";
			effectfly="442_plasma_green";
		};
		class DBA_9x21_orange: DBA_9x21_base
		{
			model="kobra\442_weapons\ammo\orange_tracer.p3d";
			effectfly="442_plasma_orange";
		};
		class DBA_9x21_red: DBA_9x21_base
		{
			model="kobra\442_weapons\ammo\red_tracer.p3d";
			effectfly="442_plasma_red";
		};
		class DBA_9x21_pink: DBA_9x21_base
		{
			model="kobra\442_weapons\ammo\pink_tracer.p3d";
			effectfly="442_plasma_pink";
		};
		class DBA_9x21_purple: DBA_9x21_base
		{
			model="kobra\442_weapons\ammo\purple_tracer.p3d";
			effectfly="442_plasma_purple";
		};
		class DBA_9x21_black: DBA_9x21_base
		{
			model="kobra\442_weapons\ammo\black_tracer.p3d";
			effectfly="442_plasma_black";
		};
		class DBA_9x21_yellow: DBA_9x21_base
		{
			model="kobra\442_weapons\ammo\yellow_tracer.p3d";
			effectfly="442_plasma_yellow";
		};	

	//.45 Color Variants

		class DBA_45acp_blue: DBA_45acp_base
		{
			model = "\3AS\3AS_Weapons\Data\tracer_blue.p3d";
			effectfly="442_plasma_blue";
		};
		class DBA_45acp_green: DBA_45acp_base
		{
			model="kobra\442_weapons\ammo\green_tracer.p3d";
			effectfly="442_plasma_green";
		};
		class DBA_45acp_orange: DBA_45acp_base
		{
			model="kobra\442_weapons\ammo\orange_tracer.p3d";
			effectfly="442_plasma_orange";
		};
		class DBA_45acp_red: DBA_45acp_base
		{
			model="kobra\442_weapons\ammo\red_tracer.p3d";
			effectfly="442_plasma_red";
		};
		class DBA_45acp_pink: DBA_45acp_base
		{
			model="kobra\442_weapons\ammo\pink_tracer.p3d";
			effectfly="442_plasma_pink";
		};
		class DBA_45acp_purple: DBA_45acp_base
		{
			model="kobra\442_weapons\ammo\purple_tracer.p3d";
			effectfly="442_plasma_purple";
		};
		class DBA_45acp_black: DBA_45acp_base
		{
			model="kobra\442_weapons\ammo\black_tracer.p3d";
			effectfly="442_plasma_black";
		};
		class DBA_45acp_yellow: DBA_45acp_base
		{
			model="kobra\442_weapons\ammo\yellow_tracer.p3d";
			effectfly="442_plasma_yellow";
		};		

	//.50 Action Color Variants

		class DBA_127x33_blue: DBA_127x33_base
		{
			model = "\3AS\3AS_Weapons\Data\tracer_blue.p3d";
			effectfly="442_plasma_blue";
		};
		class DBA_127x33_green: DBA_127x33_base
		{
			model="kobra\442_weapons\ammo\green_tracer.p3d";
			effectfly="442_plasma_green";
		};
		class DBA_127x33_orange: DBA_127x33_base
		{
			model="kobra\442_weapons\ammo\orange_tracer.p3d";
			effectfly="442_plasma_orange";
		};
		class DBA_127x33_red: DBA_127x33_base
		{
			model="kobra\442_weapons\ammo\red_tracer.p3d";
			effectfly="442_plasma_red";
		};
		class DBA_127x33_pink: DBA_127x33_base
		{
			model="kobra\442_weapons\ammo\pink_tracer.p3d";
			effectfly="442_plasma_pink";
		};
		class DBA_127x33_purple: DBA_127x33_base
		{
			model="kobra\442_weapons\ammo\purple_tracer.p3d";
			effectfly="442_plasma_purple";
		};
		class DBA_127x33_black: DBA_127x33_base
		{
			model="kobra\442_weapons\ammo\black_tracer.p3d";
			effectfly="442_plasma_black";
		};
		class DBA_127x33_yellow: DBA_127x33_base
		{
			model="kobra\442_weapons\ammo\yellow_tracer.p3d";
			effectfly="442_plasma_yellow";
		};
		// Imperial Stuff
		class E11D_Base_Ammo : DBA_Vulken
		{
			bulletFly[] =
			{
				"bulletFly1",
				0.082999997,
				"bulletFly2",
				0.082999997,
				"bulletFly3",
				0.082999997,
				"bulletFly4",
				0.082999997,
				"bulletFly5",
				0.082999997,
				"bulletFly6",
				0.082999997,
				"bulletFly7",
				0.082999997,
				"bulletFly8",
				0.082999997,
				"bulletFly9",
				0.082999997,
				"bulletFly10",
				0.082999997,
				"bulletFly11",
				0.082999997,
				"bulletFly12",
				0.082999997
			};
			bulletFly1[] =
			{
				"\101st_Aux_Mod\Addons\DBA_Weapons\empireEraWeapons\sounds\E11DShot.ogg",
				1.58,
				1,
				30
			};
			bulletFly10[] =
			{
				"\101st_Aux_Mod\Addons\DBA_Weapons\empireEraWeapons\sounds\E11DShot.ogg",
				1.58,
				1,
				30
			};
			bulletFly11[] =
			{
				"\101st_Aux_Mod\Addons\DBA_Weapons\empireEraWeapons\sounds\E11DShot.ogg",
				1.58,
				1,
				30
			};
			bulletFly12[] =
			{
				"\101st_Aux_Mod\Addons\DBA_Weapons\empireEraWeapons\sounds\E11DShot.ogg",
				1.58,
				1,
				30
			};
			bulletFly2[] =
			{
				"\101st_Aux_Mod\Addons\DBA_Weapons\empireEraWeapons\sounds\E11DShot.ogg",
				1.58,
				1,
				30
			};
			bulletFly3[] =
			{
				"\101st_Aux_Mod\Addons\DBA_Weapons\empireEraWeapons\sounds\E11DShot.ogg",
				1.58,
				1,
				30
			};
			bulletFly4[] =
			{
				"\101st_Aux_Mod\Addons\DBA_Weapons\empireEraWeapons\sounds\E11DShot.ogg",
				2.2387199,
				1,
				100
			};
			bulletFly5[] =
			{
				"\101st_Aux_Mod\Addons\DBA_Weapons\empireEraWeapons\sounds\E11DShot.ogg",
				2.2387199,
				1,
				100
			};
			bulletFly6[] =
			{
				"\101st_Aux_Mod\Addons\DBA_Weapons\empireEraWeapons\sounds\E11DShot.ogg",
				2.2387199,
				1,
				100
			};
			bulletFly7[] =
			{
				"\101st_Aux_Mod\Addons\DBA_Weapons\empireEraWeapons\sounds\E11DShot.ogg",
				2.2387199,
				1,
				100
			};
			bulletFly8[] =
			{
				"\101st_Aux_Mod\Addons\DBA_Weapons\empireEraWeapons\sounds\E11DShot.ogg",
				2.2387199,
				1,
				100
			};
			bulletFly9[] =
			{
				"\101st_Aux_Mod\Addons\DBA_Weapons\empireEraWeapons\sounds\E11DShot.ogg",
				2.2387199,
				1,
				100
			};
			soundHit1[] =
			{
				"\101st_Aux_Mod\Addons\DBA_Weapons\empireEraWeapons\sounds\E11DShot.ogg",
				1.9952624,
				1,
				120
			};
			soundHit2[] =
			{
				"\101st_Aux_Mod\Addons\DBA_Weapons\empireEraWeapons\sounds\E11DShot.ogg",
				1.9952624,
				1,
				120
			};
			soundHit3[] =
			{
				"\101st_Aux_Mod\Addons\DBA_Weapons\empireEraWeapons\sounds\E11DShot.ogg",
				1.9952624,
				1,
				120
			};
			soundHit4[] =
			{
				"\101st_Aux_Mod\Addons\DBA_Weapons\empireEraWeapons\sounds\E11DShot.ogg",
				1.9952624,
				1,
				120
			};
			soundHit5[] =
			{
				"\101st_Aux_Mod\Addons\DBA_Weapons\empireEraWeapons\sounds\E11DShot.ogg",
				1.9952624,
				1,
				120
			};
			soundHit6[] =
			{
				"\101st_Aux_Mod\Addons\DBA_Weapons\empireEraWeapons\sounds\E11DShot.ogg",
				1.9952624,
				1,
				120
			};
			multiSoundHit[] =
			{
				"soundHit1",
				0.2,
				"soundHit2",
				0.2,
				"soundHit3",
				0.2,
				"soundHit4",
				0.1,
				"soundHit5",
				0.15000001,
				"soundHit6",
				0.15000001
			};
		};
		// Rebel Stuff

		class P7_Base_Ammo :DBA_ammo_base //.338 Win Mag
		{
			hit = 23; //How much damage when it hits
			indirecthit = 0; //Splash Damage
			indirecthitrange = 0; //Splash Damage Range in meters
			caliber = 4; //Acts as penetration multiplier for the projectile.
			typicalSpeed = 890; //What speed does this need to be going to inflict full damage

			tracerScale = 0.5;

			audibleFire = 100; //Alerts AI from further away

			brightness = 1; // How Bright/color
			effectfly = "442_plasma_blue";
			model = "\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
			lightcolor[] = { .5,.5,.5 }; //Color of light in {R,G,B}
			flaresize = 1; //how big the flash is
			tracerscale = 0;

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