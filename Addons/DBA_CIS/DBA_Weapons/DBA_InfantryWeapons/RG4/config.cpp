class CfgPatches
{
	class DBA_Aux_Mod_RG4
	{
		author="";
		requiredAddons[]=
		{
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"DBA_RG4_Standard",
			"DBA_RG4R",
		};
		magazines[]=
		{
			"DBA_9_25_x16_mag",
		};
		ammo[]=
		{
			"DBA_9_25_APM",
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
	class Pistol_Base_F;
	class hgun_P07_F: Pistol_Base_F
	{
		class WeaponSlotsInfo;
	};
	class DBA_RG4_Standard : hgun_P07_F{
		displayName="RG-4 Standard";
		descriptionShort="Roger Roger";
		scope=2;
		baseWeapon="DBA_RG4_Standard";
		picture="\MRC\JLTS\weapons\RG4D\data\ui\RG4D_ui_ca.paa";
		model="\MRC\JLTS\weapons\RG4D\RG4D.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\weapons\RG4D\data\RG4D_co.paa"
		};
		magazines[]=
		{
			"DBA_9_25_x16_mag"
		};
		magazineWell[]={};
		fireLightDiffuse[]={1,0,0};
		drySound[]=
		{
			"MRC\JLTS\weapons\Core\sounds\weapon_dry.wss",
			5,
			1,
			10
		};
		muzzles[]=
		{
			"this"
		};
		modes[] = {
			"manual",
			"close",
			"medium",
			"far"
		};
		class manual : Mode_SemiAuto{
		sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"MRC\JLTS\weapons\RG4D\sounds\RG4D_fire",
					3,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
		displayName = "0.357kw";
		textureType = "semi";
		recoil = "recoil_pistol_heavy";
		recoilProne = "recoil_prone_pistol_heavy";
		reloadTime=0.225;
		dispersion=0.00036361;
		aiRateOfFireDistance=1;
		minRange=0.1;
		minRangeProbab=0.0;
		midRange=0.2;
		midRangeProbab=0.0;
		maxRange=0.3;
		maxRangeProbab=0.0;
		aiDispersionCoefY = 0.700000;
		aiDispersionCoefX = 0.700000;
		aiRateOfFire = 0.1000000;
		};
		class close : manual{
			showToPlayer=0;
			aiRateOfFireDistance=1;
			minRange=5;
			minRangeProbab=1.0;
			midRange=10;
			midRangeProbab=1.0;
			maxRange=15;
			maxRangeProbab=1.0;
		};
		class medium : close{
			showToPlayer=0;
			aiRateOfFireDistance=1;
			minRange=20;
			minRangeProbab=0.67;
			midRange=25;
			midRangeProbab=0.6;
			maxRange=30;
			maxRangeProbab=0.55;
		};
		class far : medium{
			showToPlayer=0;
			aiRateOfFireDistance=1;
			minRange=32;
			minRangeProbab=0.5;
			midRange=37;
			midRangeProbab=0.45;
			maxRange=40;
			maxRangeProbab=0.4;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=20;
			class CowsSlot
			{
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[]=
				{
					"JLTS_DC17SA_flashlight"
				};
			};
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]={};
				iconPosition[]={0.23999999,0.34999999};
				iconScale=0.2;
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[]={};
			};
		};
		weaponInfoType="RscOptics_nightstalker";
		modelOptics="\a3\weapons_f\acc\reticle_nightstalker_f.p3d";
		class OpticModes
		{
			class Scope
			{
				opticsID=1;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticsZoomMin=0.025;
				opticsZoomMax=0.0625;
				opticsZoomInit=0.0625;
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000};
				discreteDistanceInitIndex=1;
				distanceZoomMin=100;
				distanceZoomMax=1000;
				memoryPointCamera="opticView";
				visionMode[]=
				{
					"Normal",
					"NVG",
					"Ti"
				};
				thermalMode[]={5,6};
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				cameraDir="";
			};
		};
	};
	class DBA_RG4R : DBA_RG4_Standard{
		scope=2;
		displayName="RG-4R";
		descriptionShort="Roger Roger";
		baseWeapon="DBA_RG4R";
		picture="\MRC\JLTS\weapons\RG4D\data\ui\RG4D_ui_ca.paa";
		model="\MRC\JLTS\weapons\RG4D\RG4D.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\weapons\RG4D\data\RG4D_co.paa"
		};
		magazines[]=
		{
			"DBA_9_25_x16_mag"
		};
		magazineWell[]={};
		fireLightDiffuse[]={1,0,0};
		drySound[]=
		{
			"MRC\JLTS\weapons\Core\sounds\weapon_dry.wss",
			5,
			1,
			10
		};
		muzzles[]=
		{
			"this"
		};
		modes[] = {
			"manual",
			"close",
			"medium",
			"far"
		};
		class manual : Mode_Burst{
		sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"MRC\JLTS\weapons\RG4D\sounds\RG4D_fire",
					3,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
		displayName = "0.357kw";
		textureType = "semi";
		recoil = "recoil_pistol_heavy";
		recoilProne = "recoil_prone_pistol_heavy";
		reloadTime = 0.07407407407;
		burst = 4;
		dispersion=0.00036361;
		aiRateOfFireDistance=1;
		minRange=0.1;
		minRangeProbab=0.0;
		midRange=0.2;
		midRangeProbab=0.0;
		maxRange=0.3;
		maxRangeProbab=0.0;
		aiDispersionCoefY = 0.700000;
		aiDispersionCoefX = 0.700000;
		aiRateOfFire = 0.1000000;
		};
		class close : manual{
			showToPlayer=0;
			aiRateOfFireDistance=1;
			minRange=5;
			minRangeProbab=1.0;
			midRange=10;
			midRangeProbab=1.0;
			maxRange=15;
			maxRangeProbab=1.0;
		};
		class medium : close{
			showToPlayer=0;
			aiRateOfFireDistance=1;
			minRange=20;
			minRangeProbab=0.67;
			midRange=25;
			midRangeProbab=0.6;
			maxRange=30;
			maxRangeProbab=0.55;
		};
		class far : medium{
			showToPlayer=0;
			aiRateOfFireDistance=1;
			minRange=32;
			minRangeProbab=0.5;
			midRange=37;
			midRangeProbab=0.45;
			maxRange=40;
			maxRangeProbab=0.4;
		};
	};
};
class CfgMagazines{
	class CA_Magazine;
	class DBA_9_25_x16_mag : CA_Magazine{
		displayname="0.357kw Magazine (16 Rounds)";
		scope = 2;
		ammo="DBA_9_25_APM";
		model="\MRC\JLTS\weapons\RG4D\RG4D_mag.p3d";
		picture="\MRC\JLTS\weapons\RG4D\data\ui\RG4D_mag_ui_ca.paa";
		displaynamemagazine="0.357kw Magazine (16 Rounds)";
		shortnamemagazine="0.357kw Mag";
		displayNameMFDFormat="0.357kw";
		displayNameShort="0.357kw";
		count=16;
		initspeed=580;
		tracersevery=1;
	};
};
class CfgAmmo{
	class BulletBase;
	class DBA_9_25_APM : BulletBase{
		hit = 10;
		indirectHit = 0;
		indirectHitRange = 0.0;
		explosive= 0.0;
		warheadName = "0.357kw";
		caliber = 1;
		deflecting = 5;
		airFriction = 0;
		timeToLive = 40;
		initSpeed=580;
		aiAmmoUsageFlags= "64 + 128 + 256";
		cost = 1.2;
		model="\MRC\JLTS\weapons\Core\effects\laser_red.p3d";
		tracerScale = 1.0;
		tracerStartTime = 0.05;
		tracerEndTime = 30;
		brightness=100000;
		muzzleEffect = "";
		typicalSpeed = 400;	
		allowAgainstInfantry=1;
		coefGravity=0;
		waterFriction=0;
	};
};