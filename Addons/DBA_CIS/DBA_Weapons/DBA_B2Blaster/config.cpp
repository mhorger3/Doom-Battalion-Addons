class CfgPatches
{
	class DBA_B2WristBlaster
	{
		author = "Vulgar";
		requiredaddons[] =
		{
			"A3_Weapons_F",
		};
		requiredversion = 0.1;
		units[] =
		{
		};
		weapons[] =
		{
			"DBA_B2_Weapon",
		};
	};
};
class CBA_Extended_EventHandlers_base;
class UGL_F;
class Mode_SemiAuto;
class Mode_Burst : Mode_SemiAuto
{
	class BaseSoundModeType;
	class StandardSound;
};
class Mode_FullAuto : Mode_SemiAuto
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
class CfgWeapons
{
	class Rifle_Base_F;
	class Rifle_Long_Base_F : Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	class DBA_B2_Weapon : Rifle_Long_Base_F
	{
		ACE_overheating_allowSwapBarrel = 1;
		ACE_Overheating_Dispersion = 0;
		ACE_Overheating_JamChance = 0;
		ACE_overheating_mrbs = 3e+09;
		ACE_overheating_slowdownFactor = 0;
		ace_overpressure_angle = 0;
		ace_overpressure_damage = 0;
		ace_overpressure_priority = 1;
		ace_overpressure_range = 0;
		author = "Dutch";
		scope = 2;
		scopeArsenal = 2;
		model = "101st_Aux_Mod\Addons\DBA_CIS\DBA_Weapons\DBA_B2Blaster\b2gun.p3d";
		muzzles[] = { "this","Secondary" };
		magazines[] = { "DBA_B2_Mag" };
		reloadAction = "ReloadMagazine";
		Modeloptics = "\A3\weapons_f\reticle\Optics_Gunner_02_F";
		displayname = "B2 HandBlaster";
		descriptionShort = "Standard B2 Blaster";
		hiddenSelections[] = { "" };
		bullet1[] = { "A3\sounds_f\weapons\shells\7_62\metal_762_01",0.501187,1,15 };
		bullet10[] = { "A3\sounds_f\weapons\shells\7_62\grass_762_02",0.251189,1,15 };
		bullet11[] = { "A3\sounds_f\weapons\shells\7_62\grass_762_03",0.251189,1,15 };
		bullet12[] = { "A3\sounds_f\weapons\shells\7_62\grass_762_04",0.251189,1,15 };
		bullet2[] = { "A3\sounds_f\weapons\shells\7_62\metal_762_02",0.501187,1,15 };
		bullet3[] = { "A3\sounds_f\weapons\shells\7_62\metal_762_03",0.501187,1,15 };
		bullet4[] = { "A3\sounds_f\weapons\shells\7_62\metal_762_04",0.501187,1,15 };
		bullet5[] = { "A3\sounds_f\weapons\shells\7_62\dirt_762_01",0.398107,1,15 };
		bullet6[] = { "A3\sounds_f\weapons\shells\7_62\dirt_762_02",0.398107,1,15 };
		bullet7[] = { "A3\sounds_f\weapons\shells\7_62\dirt_762_03",0.398107,1,15 };
		bullet8[] = { "A3\sounds_f\weapons\shells\7_62\dirt_762_04",0.398107,1,15 };
		bullet9[] = { "A3\sounds_f\weapons\shells\7_62\grass_762_01",0.251189,1,15 };
		changeFiremodeSound[] = { "",1,1 };
		useModelOptics = 1;
		drySound[] = { "A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG_02_Dry",0.177828,1,10 };
		reloadMagazineSound[] = { "SW_CloneWarsWeapons\M134\reload2.ogg",1.5,1,20 };
		soundBullet[] = {};
		modes[] = { "Single","FullAuto","close","short","medium" };
		recoil = "recoil_mmg_01";
		simulation = "Weapon";
		handAnim[] = { "OFP2_ManSkeleton","101st_Aux_Mod\Addons\DBA_CIS\DBA_Weapons\DBA_B2Blaster\b2.rtm" };
		fireLightDuration = 0.05;
		fireLightIntensity = 0.2;
		fireLightDiffuse[] = { 0,1,0 };
		fireLightAmbient[] = { 0,0.5,0 };
		class Secondary : Rifle_Long_Base_F {
			ACE_overheating_allowSwapBarrel = 1;
			ACE_Overheating_Dispersion = 0;
			ACE_Overheating_JamChance = 0;
			ACE_overheating_mrbs = 3e+09;
			ACE_overheating_slowdownFactor = 0;
			ace_overpressure_angle = 0;
			ace_overpressure_damage = 0;
			ace_overpressure_priority = 1;
			ace_overpressure_range = 0;
			author = "Dutch";
			scope = 2;
			scopeArsenal = 2;
			model = "101st_Aux_Mod\Addons\DBA_CIS\DBA_Weapons\DBA_B2Blaster\b2gun.p3d";
			muzzles[] = { "this" };
			magazines[] = { "DBA_B2_Rocket" };
			reloadAction = "ReloadMagazine";
			Modeloptics = "\A3\weapons_f\reticle\Optics_Gunner_02_F";
			displayname = "B2 Rockets";
			descriptionShort = "Standard B2 Rockers";
			hiddenSelections[] = { "" };
			changeFiremodeSound[] = { "",1,1 };
			useModelOptics = 1;
			drySound[] = { "A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG_02_Dry",0.177828,1,10 };
			reloadMagazineSound[] = { "SW_CloneWarsWeapons\M134\reload2.ogg",1.5,1,20 };
			soundBullet[] = {};
			modes[] = { "Single" };
			recoil = "recoil_mmg_01";
			simulation = "Weapon";
			handAnim[] = { "OFP2_ManSkeleton","101st_Aux_Mod\Addons\DBA_CIS\DBA_Weapons\DBA_B2Blaster\b2.rtm" };
			fireLightDuration = 0.05;
			fireLightIntensity = 0.2;
			fireLightDiffuse[] = { 0,1,0 };
			fireLightAmbient[] = { 0,0.5,0 };
			class Single : Mode_SemiAuto
			{
				sounds[] = { "StandardSound" };
				class BaseSoundModeType
				{
					weaponSoundEffect = "DefaultRifle";
					closure1[] = { "A3\Sounds_F\arsenal\weapons\Rifles\MX\Closure_Mx_01",0.5,1,10 };
					closure2[] = { "A3\Sounds_F\arsenal\weapons\Rifles\MX\Closure_Mx_02",0.5,1,10 };
					soundClosure[] = { "closure1",0.5,"closure2",0.5 };
				};
				class StandardSound : BaseSoundModeType
				{
					weaponSoundEffect = "DefaultRifle";
					begin1[] = { "101st_Aux_Mod\Addons\DBA_CIS\DBA_Weapons\DBA_B2Blaster\Wrist.wss",1,1,1800 };
					soundBegin[] = { "begin1",1 };
					closure1[] = { "A3\Sounds_F\arsenal\weapons\Rifles\MX\Closure_Mx_01",0.5,1,10 };
					closure2[] = { "A3\Sounds_F\arsenal\weapons\Rifles\MX\Closure_Mx_02",0.5,1,10 };
					soundClosure[] = { "closure1",0.5,"closure2",0.5 };
				};
				recoil = "recoil_auto_primary_3outof10";
				recoilProne = "recoil_single_prone_mx";
				reloadTime = 0.2;
				burst = 1;
				dispersion = 0.00073;
				minRange = 5;
				minRangeProbab = 0.1;
				midRange = 150;
				midRangeProbab = 0.6;
				maxRange = 300;
				maxRangeProbab = 0.3;
				aiRateOfFire = 1;
				aiRateOfFireDistance = 500;
			};
			inertia = 1.1;
			dexterity = 1.7;
			initSpeed = -1;
			maxRecoilSway = 0.008;
			swayDecaySpeed = 2;
			UIPicture = "\A3\weapons_f\data\UI\icon_mg_CA.paa";
			class WeaponSlotsInfo : WeaponSlotsInfo
			{
				mass = 150;
				holsterScale = 0.9;
				class MuzzleSlot : MuzzleSlot
				{
					compatibleItems[] = {};
				};
				class CowsSlot : CowsSlot
				{
					compatibleItems[] = {};
				};
				class UnderBarrelSlot : UnderBarrelSlot
				{
					compatibleItems[] = {};
				};
			};
		};
		class Single : Mode_SemiAuto
		{
			sounds[] = { "StandardSound" };
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = { "A3\Sounds_F\arsenal\weapons\Rifles\MX\Closure_Mx_01",0.5,1,10 };
				closure2[] = { "A3\Sounds_F\arsenal\weapons\Rifles\MX\Closure_Mx_02",0.5,1,10 };
				soundClosure[] = { "closure1",0.5,"closure2",0.5 };
			};
			class StandardSound : BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				begin1[] = { "101st_Aux_Mod\Addons\DBA_CIS\DBA_Weapons\DBA_B2Blaster\b2.ogg",1,1,1800 };
				soundBegin[] = { "begin1",1 };
				closure1[] = { "A3\Sounds_F\arsenal\weapons\Rifles\MX\Closure_Mx_01",0.5,1,10 };
				closure2[] = { "A3\Sounds_F\arsenal\weapons\Rifles\MX\Closure_Mx_02",0.5,1,10 };
				soundClosure[] = { "closure1",0.5,"closure2",0.5 };
			};
			recoil = "recoil_auto_primary_3outof10";
			recoilProne = "recoil_single_prone_mx";
			reloadTime = 0.2;
			burst = 1;
			dispersion = 0.00073;
			minRange = 5;
			minRangeProbab = 0.1;
			midRange = 25;
			midRangeProbab = 0.6;
			maxRange = 50;
			maxRangeProbab = 0.3;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 500;
		};
		class close : Single
		{
			showToPlayer = 0;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			dispersion = 0.00073;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.2;
		};
		class short : close
		{
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 200;
			minRange = 50;
			minRangeProbab = 0.2;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.2;
		};
		class medium : close
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 600;
			minRange = 300;
			minRangeProbab = 0.2;
			midRange = 450;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.2;
		};
		class FullAuto : Mode_FullAuto
		{
			aiRateOfFireDistance = 900;
			aiRateOfFireDispersion = 1;
			autoFire = 1;
			dispersion = "2*0.00087";
			burst = "";
			maxRange = 50;
			maxRangeProbab = 0.1;
			midRange = 25;
			midRangeProbab = 0.6;
			minRange = 5;
			reloadTime = 0.25;
			minRangeProbab = 0.3;
			recoil = "recoil_auto_pdw";
			recoilProne = "recoil_auto_prone_pdw";
			sounds[] = { "StandardSound" };
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = { "A3\Sounds_F\arsenal\weapons\Rifles\MX\Closure_Mx_01",0.5,1,10 };
				closure2[] = { "A3\Sounds_F\arsenal\weapons\Rifles\MX\Closure_Mx_02",0.5,1,10 };
				soundClosure[] = { "closure1",0.5,"closure2",0.5 };
			};
			class StandardSound : BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				begin1[] = { "101st_Aux_Mod\Addons\DBA_CIS\DBA_Weapons\DBA_B2Blaster\b2.ogg",1,1,1800 };
				soundBegin[] = { "begin1",1 };
				closure1[] = { "A3\Sounds_F\arsenal\weapons\Rifles\MX\Closure_Mx_01",0.5,1,10 };
				closure2[] = { "A3\Sounds_F\arsenal\weapons\Rifles\MX\Closure_Mx_02",0.5,1,10 };
				soundClosure[] = { "closure1",0.5,"closure2",0.5 };
			};
		};
		inertia = 1.1;
		dexterity = 1.7;
		initSpeed = -1;
		maxRecoilSway = 0.008;
		swayDecaySpeed = 2;
		UIPicture = "\A3\weapons_f\data\UI\icon_mg_CA.paa";
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 150;
			holsterScale = 0.9;
			class MuzzleSlot : MuzzleSlot
			{
				compatibleItems[] = {};
			};
			class CowsSlot : CowsSlot
			{
				compatibleItems[] = {};
			};
			class UnderBarrelSlot : UnderBarrelSlot
			{
				compatibleItems[] = {};
			};
		};
	};
};
class CfgAmmo
{
		class JLTS_bullet_carbine_red;
		class DBA_Wrist_Rocket_Ammo : JLTS_bullet_carbine_red {
			cost = 200;
			caliber = 3;
			dangerRadiusBulletClose = 16;
			dangerRadiusHit = 40;
			effectFly = "b2rockets_Effect";
			explosionAngle = 60;
			explosive = 0.8;
			hit = 100;
			effectFlare = "FlareShell";
			effectsFire = "CannonFire";
			explosionDir = "explosionDir";
			explosionEffects = "ATMissileExplosion";
			explosionEffectsDir = "explosionDir";
			explosionPos = "explosionPos";
			explosionType = "explosive";
			indirectHit = 5;
			indirectHitRange = 3;
			model = "\A3\Weapons_F\Ammo\ugl_slug";
			muzzleEffect = "BIS_fnc_effectFiredRocket";
			nameSound = "missiles";
			simulation = "shotBullet";
			soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_2",0.501187,1.3,400};
			soundSetBulletFly[] = {"bulletFlyBy_SoundSet"};
			soundSetSonicCrack[] = {"bulletSonicCrack_SoundSet","bulletSonicCrackTail_SoundSet"};
			supersonicCrackFar[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\scrack_middle",3.16228,1,500};
			supersonicCrackNear[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\scrack_close",3.16228,1,500};
			soundHit[] = {"",100,1};
			soundHit1[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_01",2.51189,1,2000};
			soundHit2[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_02",2.51189,1,2000};
			soundHit3[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_03",2.51189,1,2000};
			SoundSetExplosion[] = {"RocketsHeavy_Exp_SoundSet","RocketsHeavy_Tail_SoundSet","Explosion_Debris_SoundSet"};
			thrust = 210;
			thrustTime = 1.5;
			timeToLive = 6;
			tracerColor[] = {0.7,0.7,0.5,0.04};
			tracerColorR[] = {0.7,0.7,0.5,0.04};
			tracerScale=1;
			tracerStartTime=0;
			tracerEndTime=10;
			tracerScale = 1;
			typicalSpeed = 30;
		};
		class DBA_B2_Ammo : JLTS_bullet_carbine_red {
			cost = 1;
			caliber = 3;
			dangerRadiusBulletClose = 16;
			dangerRadiusHit = 40;
			effectfly = "JLTS_plasma_red";
			explosionAngle = 60;
			explosive = 0;
			hit = 20;
			explosionEffects = "3AS_ImpactPlasma";
			effectsSmoke = "SmokeShellWhite";
			effectsFire = "CannonFire";
			indirectHit = 0.1;
			indirectHitRange = 0.2;
			model = "\MRC\JLTS\weapons\Core\effects\laser_red.p3d";
			muzzleEffect = "";
			simulation = "shotBullet";
			soundFly[] = {"",0.251189,0.7};
			soundSetBulletFly[] = {"bulletFlyBy_SoundSet"};
			soundSetSonicCrack[] = {"bulletSonicCrack_SoundSet","bulletSonicCrackTail_SoundSet"};
			supersonicCrackFar[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\scrack_middle",3.16228,1,500};
			supersonicCrackNear[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\scrack_close",3.16228,1,500};
			thrust = 210;
			thrustTime = 1.5;
			timeToLive = 2;
			tracerColor[] = {0.7,0.7,0.5,0.04};
			tracerColorR[] = {0.7,0.7,0.5,0.04};
			tracerScale = 0.7;
			typicalSpeed = 60;
			tracerScale=1;
			tracerStartTime=0;
			tracerEndTime=10;
		};
};

class CfgMagazines {
	class CA_Magazine;
	class DBA_B2_Rocket : CA_Magazine {
		count = 5;
		descriptionShort = "5Rnd Wrist Rockets";
		displayName = "5Rnd B2 Wrist Rockets";
		initSpeed = 100;
		mass = 50;
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_2",0.501187,1.3,400};
		scope = 2;
		type = 16;
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
		ammo = "DBA_Wrist_Rocket_Ammo";
		tracersEvery=1;
	};
	class DBA_B2_Mag : CA_Magazine {
		count = 60;
		descriptionShort = "60Rnd B2 Droid Magazine";
		displayName = "60Rnd B2 Droid Magazine";
		initSpeed = 310;
		mass = 15;
		scope = 2;
		type = 16;
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
		ammo = "DBA_B2_Ammo";
		tracersEvery=1;
	};
};
