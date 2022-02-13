class CfgPatches
{
	class DBA_Aux_Mod_E5
	{
		author="ISU";
		requiredAddons[]=
		{
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"DBA_E5_Standard",
			"DBA_E5_Assault",
			"DBA_E5_Commando",
		};
		magazines[]=
		{
			"DBA_792_PKW_x25_mag",
			"DBA_792_PKW_x40_mag",
			"DBA_792_PKW_x64_mag",
		};
		ammo[]=
		{
			"DBA_792_33_PKW",
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

class CfgWeapons{
	class Rifle_Base_F;
	class arifle_MX_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	class DBA_E5_Standard : arifle_MX_Base_F{
		scope=2;
		displayName="E-5 Standard";
		descriptionShort="Roger Roger";
		picture="\MRC\JLTS\weapons\E5\data\ui\E5_ui_ca.paa";
		model="\MRC\JLTS\weapons\E5\E5.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\weapons\E5\data\E5_co.paa"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\MRC\JLTS\weapons\E5\anims\E5_handanim.rtm"
		};
		magazines[]=
		{
			"DBA_792_PKW_x25_mag",
			"DBA_792_PKW_x40_mag",
			"DBA_792_PKW_x64_mag",
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
		modes[]=
		{
			"semi",
			"fullAuto",
			"close",
			"medium",
			"far",
			"veryFar",
		};
		class semi : Mode_SemiAuto{
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
					"MRC\JLTS\weapons\E5\sounds\E5_fire_2",
					4,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadTime=0.1;
			recoil="recoil_single_mx";
			recoilProne="recoil_single_prone_mx";
			dispersion=0.0011926408;
			aiRateOfFireDistance=1;
			minRange=0.1;
			minRangeProbab=0.0;
			midRange=0.2;
			midRangeProbab=0.0;
			maxRange=0.3;
			maxRangeProbab=0.0;
		};
		class fullAuto : Mode_FullAuto{
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
					"MRC\JLTS\weapons\E5\sounds\E5_fire_2",
					4,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadTime=0.1;
			dispersion=0.0011926408;
			recoil="recoil_auto_mx";
			recoilProne="recoil_auto_prone_mx";
			minRange=0.15;
			aiRateOfFireDistance=1;
			minRangeProbab=0.0;
			midRange=0.4;
			midRangeProbab=0.0;
			maxRange=0.5;
			maxRangeProbab=0.0;
			aiRateOfFire=1;
		};
		class close : fullAuto{
			soundBurst=0;
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=5;
			burstRangeMax=13;
			aiRateOfFire=1;
			aiRateOfFireDispersion=0.5;
			minRange=0;
			minRangeProbab=0.99999999;
			midRange=50;
			midRangeProbab=0.95;
			maxRange=75;
			maxRangeProbab=0.4;
		};
		class medium : semi{
			soundBurst=0;
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=5;
			burstRangeMax=13;
			aiRateOfFire=1;
			aiRateOfFireDispersion=0.5;
			minRange=100;
			minRangeProbab=0.99;
			midRange=200;
			midRangeProbab=0.99;
			maxRange=250;
			maxRangeProbab=0.99;
		};
		class far : medium{
			soundBurst=0;
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=5;
			burstRangeMax=13;
			aiRateOfFire=1;
			aiRateOfFireDispersion=0.5;
			minRange=300;
			minRangeProbab=0.99;
			midRange=600;
			midRangeProbab=0.99;
			maxRange=700;
			maxRangeProbab=0.55;
		};
		class veryFar : far{
			soundBurst=0;
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=5;
			burstRangeMax=13;
			aiRateOfFire=1;
			aiRateOfFireDispersion=0.5;
			minRange=800;
			minRangeProbab=0.8999998;
			midRange=1000;
			midRangeProbab=0.60000001;
			maxRange=1500;
			maxRangeProbab=0.550000001;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=30;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]={};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[]={};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[]={};
			};
		};
	};
	class DBA_E5_Assault : DBA_E5_Standard{
		scope=2;
		displayName="E-5 Assault";
		magazines[]=
		{
			"DBA_792_PKW_x25_mag",
			"DBA_792_PKW_x40_mag",
			"DBA_792_PKW_x64_mag",
		};
		modes[]=
		{
			"semi",
			"fullAuto",
			"close",
			"medium",
			"far",
			"veryFar",
		};
		class semi : Mode_SemiAuto{
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
					"MRC\JLTS\weapons\E5\sounds\E5_fire_2",
					4,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadTime=0.06666666667;
			recoil="recoil_single_mx";
			recoilProne="recoil_single_prone_mx";
			dispersion=0.003345212;
			minRange=2;
			minRangeProbab=0.0;
			midRange=200;
			midRangeProbab=0.0;
			maxRange=400;
			maxRangeProbab=0.0;
		};
		class fullAuto : Mode_FullAuto{
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
					"MRC\JLTS\weapons\E5\sounds\E5_fire_2",
					4,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadTime=0.06666666667;
			dispersion=0.003345212;
			recoil="recoil_auto_mx";
			recoilProne="recoil_auto_prone_mx";
			minRange=2;
			minRangeProbab=0.0;
			midRange=200;
			midRangeProbab=0.0;
			maxRange=400;
			maxRangeProbab=0.0;
			aiRateOfFire=1e-006;
		};
		class close : fullAuto{
			soundBurst=0;
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=20;
			burstRangeMax=32;
			aiRateOfFire=1;
			aiRateOfFireDispersion=1;
			aiRateOfFireDistance=300;
			minRange=0;
			minRangeProbab=0.99999999;
			midRange=100;
			midRangeProbab=0.95;
			maxRange=300;
			maxRangeProbab=0.2;
		};
		class medium : semi{
			soundBurst=0;
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=20;
			burstRangeMax=32;
			aiRateOfFire=1;
			aiRateOfFireDispersion=1;
			aiRateOfFireDistance=600;
			minRange=100;
			minRangeProbab=0.15;
			midRange=300;
			midRangeProbab=0.85;
			maxRange=600;
			maxRangeProbab=0.2;
		};
		class far : medium{
			soundBurst=0;
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=20;
			burstRangeMax=32;
			aiRateOfFire=1;
			aiRateOfFireDispersion=1;
			aiRateOfFireDistance=800;
			minRange=300;
			minRangeProbab=0.725;
			midRange=600;
			midRangeProbab=0.54999998;
			maxRange=800;
			maxRangeProbab=0.45;
		};
		class veryFar : far{
			soundBurst=0;
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=20;
			burstRangeMax=32;
			aiRateOfFire=1;
			aiRateOfFireDispersion=1;
			aiRateOfFireDistance=1000;
			minRange=800;
			minRangeProbab=0.2999998;
			midRange=1000;
			midRangeProbab=0.10000001;
			maxRange=1500;
			maxRangeProbab=0.050000001;
		};
	};
	class DBA_E5_Commando : DBA_E5_Standard{
		scope=2;
		displayName="E-5 Commando";
		magazines[]=
		{
			"DBA_792_PKW_x25_mag",
			"DBA_792_PKW_x40_mag",
			"DBA_792_PKW_x64_mag",
		};
		modes[]=
		{
			"semi",
			"fullAuto",
			"close",
			"medium",
			"far",
			"veryFar",
		};
		class semi : Mode_SemiAuto{
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
					"MRC\JLTS\weapons\E5\sounds\E5_fire_2",
					4,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadTime=0.07843137255;
			recoil="recoil_single_mx";
			recoilProne="recoil_single_prone_mx";
			dispersion=0.000436332;
			aiRateOfFireDistance=1;
			minRange=0.1;
			minRangeProbab=0.0;
			midRange=0.2;
			midRangeProbab=0.0;
			maxRange=0.3;
			maxRangeProbab=0.0;
		};
		class fullAuto : Mode_FullAuto{
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
					"MRC\JLTS\weapons\E5\sounds\E5_fire_2",
					4,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadTime=0.07843137255;
			dispersion=0.000436332;
			recoil="recoil_auto_mx";
			recoilProne="recoil_auto_prone_mx";
			minRange=0.15;
			aiRateOfFireDistance=1;
			minRangeProbab=0.0;
			midRange=0.4;
			midRangeProbab=0.0;
			maxRange=0.5;
			maxRangeProbab=0.0;
			aiRateOfFire=1;
		};
		class close : Mode_FullAuto{
			sounds[] =
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect = "";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
			};
			class StandardSound : BaseSoundModeType
			{
				weaponSoundEffect = "";
				begin1[] =
				{
					"MRC\JLTS\weapons\E5\sounds\E5_fire_2",
					4,
					1,
					1800
				};
				soundBegin[] =
				{
					"begin1",
					1
				};
			};
			soundBurst=0;
			textureType = "fullAuto";
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=10;
			autoFire=1;
			aiDispersionCoefY = 0.900000;
			aiDispersionCoefX = 0.800000;
			burstRangeMax=20;
			aiRateOfFire=1;
			aiRateOfFireDispersion=0.5;
			minRange=0;
			minRangeProbab=0.99999999;
			midRange=50;
			midRangeProbab=0.95;
			maxRange=75;
			maxRangeProbab=0.65;
		};
		class medium : Mode_SemiAuto{
			sounds[] =
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect = "";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
			};
			class StandardSound : BaseSoundModeType
			{
				weaponSoundEffect = "";
				begin1[] =
				{
					"MRC\JLTS\weapons\E5\sounds\E5_fire_2",
					4,
					1,
					1800
				};
				soundBegin[] =
				{
					"begin1",
					1
				};
			};
			soundBurst=0;
			textureType = "semi";
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=10;
			autoFire=0;
			burstRangeMax=20;
			aiRateOfFire=1;
			aiRateOfFireDispersion=0.5;
			aiDispersionCoefY = 0.900000;
			aiDispersionCoefX = 0.800000;
			minRange=100;
			minRangeProbab=0.85;
			midRange=200;
			midRangeProbab=0.85;
			maxRange=250;
			maxRangeProbab=0.7;
		};
		class far : medium{
			soundBurst=0;
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=10;
			burstRangeMax=20;
			aiRateOfFire=1;
			aiRateOfFireDispersion=0.5;
			minRange=300;
			minRangeProbab=0.9525;
			midRange=600;
			midRangeProbab=0.94999998;
			maxRange=700;
			maxRangeProbab=0.55;
		};
		class veryFar : far{
			soundBurst=0;
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=10;
			burstRangeMax=20;
			aiRateOfFire=1;
			aiRateOfFireDispersion=0.5;
			minRange=800;
			minRangeProbab=0.8999998;
			midRange=1000;
			midRangeProbab=0.60000001;
			maxRange=1500;
			maxRangeProbab=0.550000001;
		};
	};
};
class CfgMagazines{
	class CA_Magazine;
	class DBA_792_PKW_x25_mag : CA_Magazine{
		displayname="7.92mw Magazine (25 Rounds)";
		scope = 2;
		ammo="DBA_792_33_PKW";
		picture="\MRC\JLTS\weapons\E5\data\ui\E5_mag_ui_ca.paa";
		model="\MRC\JLTS\weapons\E5\E5_mag.p3d";
		displaynamemagazine="7.92mw Magazine (25 Rounds)";
		shortnamemagazine="7.92mw Mag";
		displayNameMFDFormat="7.92mw";
		displayNameShort="7.92mw";
		count=25;
		initspeed=685;
		tracersevery=1;
	};
	class DBA_792_PKW_x40_mag : DBA_792_PKW_x25_mag{
		displayname="7.92mw Magazine (40 Rounds)";
		scope = 2;
		ammo="DBA_792_33_PKW";
		picture="\MRC\JLTS\weapons\E5\data\ui\E5_mag_ui_ca.paa";
		model="\MRC\JLTS\weapons\E5\E5_mag.p3d";
		displaynamemagazine="7.92mw Magazine (40 Rounds)";
		shortnamemagazine="7.92mw Mag";
		displayNameMFDFormat="7.92mw";
		displayNameShort="7.92mw";
		count=40;
		initspeed=685;
		tracersevery=1;
	};
	class DBA_792_PKW_x64_mag : DBA_792_PKW_x25_mag{
		displayname="7.92mw Magazine (64 Rounds)";
		scope = 2;
		ammo="DBA_792_33_PKW";
		picture="\MRC\JLTS\weapons\E5\data\ui\E5_mag_ui_ca.paa";
		model="\MRC\JLTS\weapons\E5\E5_mag.p3d";
		displaynamemagazine="7.92mw Magazine (64 Rounds)";
		shortnamemagazine="7.92mw Mag";
		displayNameMFDFormat="7.92mw";
		displayNameShort="7.92mw";
		count=64;
		initspeed=685;
		tracersevery=1;
	};
};
class CfgAmmo{
	class BulletBase;
	class DBA_792_33_PKW : BulletBase{
		hit = 9;
		indirectHit = 0;
		indirectHitRange = 0.0;
		explosive= 0.0;
		warheadName = "7.92mw";
		caliber = 5;
		deflecting = 1;
		airFriction = 0;
		timeToLive = 40;
		initSpeed=685;
		aiAmmoUsageFlags= "64 + 128 + 256";
		cost = 1.2;
		model="\MRC\JLTS\weapons\Core\effects\laser_red.p3d";
		tracerScale = 1.0;
		tracerStartTime = 0.05;
		tracerEndTime = 20;
		brightness=100000;
		muzzleEffect = "";
		typicalSpeed = 400;	
		allowAgainstInfantry=1;
		coefGravity=0;
		waterFriction=0;
	};
};