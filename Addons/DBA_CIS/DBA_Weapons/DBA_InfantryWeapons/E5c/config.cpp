class CfgPatches
{
	class DBA_Aux_Mod_E5c
	{
		author="";
		requiredAddons[]=
		{
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"DBA_E5C_Standard",
			"DBA_E5c_Heavy",
		};
		magazines[]=
		{
			"DBA_792_PKW_x120_mag",
			"DBA_132_TUF_x80_mag",
		};
		ammo[]=
		{
			"DBA_792_59_PKW",
			"DBA_132_92_TUF",
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
	class Rifle_Base_F;
	class Rifle_Long_Base_F: Rifle_Base_F{
		class GunParticles;
		class GunClouds;
		class WeaponSlotsInfo;
	};
	class DBA_E5C_Standard : Rifle_Long_Base_F{
		scope=2;
		displayName="[101st] E-5c Standard";
		descriptionShort="Roger Roger";
		picture="\MRC\JLTS\weapons\e5c\data\ui\e5c_ui_ca.paa";
		model="\MRC\JLTS\weapons\e5c\e5c.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\weapons\e5c\data\e5c_co.paa"
		};
		maxZeroing=1200;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\MRC\JLTS\weapons\e5c\anims\e5c_handanim.rtm"
		};
		magazines[]=
		{
			"DBA_792_PKW_x120_mag"
		};
		magazineWell[]={};
		fireLightDiffuse[]={0,0,1};
		drySound[]=
		{
			"MRC\JLTS\weapons\Core\sounds\weapon_dry.wss",
			5,
			1,
			10
		};
		modes[] = {
			"manual",
			"short",
			"close",
			"medium",
			"far"
		};
		class manual : Mode_FullAuto{
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
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadTime=0.05454545455;
			dispersion=0.002327104;
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
		class close: manual
		{
			soundBurst=0;
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=10;
			burstRangeMax=30;
			aiRateOfFire=0.1;
			aiRateOfFireDispersion=0;
			aiRateOfFireDistance=500;
			minRange=0;
			minRangeProbab=0.88;
			midRange=250;
			midRangeProbab=0.90;
			maxRange=500;
			maxRangeProbab=1;
		};
		class short: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=10;
			burstRangeMax=30;
			aiRateOfFire=0.1;
			aiRateOfFireDispersion=0;
			aiRateOfFireDistance=750;
			minRange=0;
			minRangeProbab=0.9;
			midRange=600;
			midRangeProbab=0.9;
			maxRange=750;
			maxRangeProbab=0.9;
		};
		class medium: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=10;
			burstRangeMax=30;
			aiRateOfFire=0.1;
			aiRateOfFireDispersion=0;
			aiRateOfFireDistance=1300;
			minRange=0;
			minRangeProbab=0.9;
			midRange=1000;
			midRangeProbab=0.9;
			maxRange=1250;
			maxRangeProbab=0.9;
		};
		class far: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=10;
			burstRangeMax=40;
			aiRateOfFire=0.1;
			aiRateOfFireDispersion=0;
			aiRateOfFireDistance=2500;
			minRange=0;
			minRangeProbab=0.98;
			midRange=2000;
			midRangeProbab=0.98;
			maxRange=2500;
			maxRangeProbab=0.9;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=110;
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
		class GunParticles
		{
			class FirstEffect
			{
				directionName="Konec hlavne";
				effectName="RifleAssaultCloud";
				positionName="Usti hlavne";
			};
		};
	};
	class DBA_E5c_Heavy : Rifle_Long_Base_F{
		scope=2;
		displayName="E-5c Heavy";
		descriptionShort="Roger Roger";
		picture="\MRC\JLTS\weapons\e5c\data\ui\e5c_stock_ui_ca.paa";
		model="\MRC\JLTS\weapons\e5c\e5c_stock.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\weapons\e5c\data\e5c_co.paa"
		};
		maxZeroing=1200;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\MRC\JLTS\weapons\e5c\anims\e5c_stock_handanim.rtm"
		};
		inertia=0.69999999;
		magazines[]=
		{
			"DBA_132_TUF_x80_mag"
		};
		magazineWell[]={};
		fireLightDiffuse[]={0,0,1};
		drySound[]=
		{
			"MRC\JLTS\weapons\Core\sounds\weapon_dry.wss",
			5,
			0.8,
			10
		};
		modes[] = {
			"manual",
			"short",
			"medium",
			"far"
		};
		class manual : Mode_FullAuto{
			reloadTime=0.09836065574;
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
					2.5,
					0.825,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			dispersion=0.001018108;
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
		class close: manual
		{
			soundBurst=0;
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=5;
			burstRangeMax=20;
			aiRateOfFire=0.1;
			aiRateOfFireDispersion=0;
			aiRateOfFireDistance=500;
			minRange=0;
			minRangeProbab=0.88;
			midRange=250;
			midRangeProbab=0.90;
			maxRange=500;
			maxRangeProbab=1;
		};
		class short: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=5;
			burstRangeMax=20;
			aiRateOfFire=0.1;
			aiRateOfFireDispersion=0;
			aiRateOfFireDistance=750;
			minRange=500;
			minRangeProbab=0.9;
			midRange=600;
			midRangeProbab=0.9;
			maxRange=750;
			maxRangeProbab=0.9;
		};
		class medium: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=5;
			burstRangeMax=20;
			aiRateOfFire=0.1;
			aiRateOfFireDispersion=0;
			aiRateOfFireDistance=1300;
			minRange=900;
			minRangeProbab=0.9;
			midRange=1000;
			midRangeProbab=0.9;
			maxRange=1250;
			maxRangeProbab=0.9;
		};
		class far: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=5;
			burstRangeMax=20;
			aiRateOfFire=0.1;
			aiRateOfFireDispersion=0;
			aiRateOfFireDistance=2500;
			minRange=1500;
			minRangeProbab=0.98;
			midRange=2000;
			midRangeProbab=0.98;
			maxRange=2500;
			maxRangeProbab=0.9;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=150;
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
		class GunParticles
		{
			class FirstEffect
			{
				directionName="Konec hlavne";
				effectName="RifleAssaultCloud";
				positionName="Usti hlavne";
			};
		};
	};
};
class CfgMagazines{
	class CA_Magazine;
	class DBA_792_PKW_x120_mag : CA_Magazine{
		displayname="7.92mw Magazine (120 Rounds)";
		scope = 2;
		ammo="DBA_792_59_PKW";
		picture="\MRC\JLTS\weapons\e5c\data\ui\e5c_mag_ui_ca.paa";
		model="\MRC\JLTS\weapons\e5c\e5c_mag.p3d";
		displaynamemagazine="7.92mw Magazine (120 Rounds)";
		shortnamemagazine="7.92mw Mag";
		displayNameMFDFormat="7.92mw";
		displayNameShort="7.92mw";
		count=240;
		initspeed=809;
		tracersevery=1;
	};
	class DBA_132_TUF_x80_mag : CA_Magazine{
		displayname="13.2mw Magazine (80 Rounds)";
		scope = 2;
		ammo="DBA_132_92_TUF";
		picture="\MRC\JLTS\weapons\e5c\data\ui\e5c_mag_ui_ca.paa";
		model="\MRC\JLTS\weapons\e5c\e5c_mag.p3d";
		displaynamemagazine="13.2mw Magazine (80 Rounds)";
		shortnamemagazine="13.2mw Mag";
		displayNameMFDFormat="13.2mw";
		displayNameShort="13.2mw";
		count=160;
		initspeed=510;
		tracersevery=1;
	};
};
class CfgAmmo{
	class BulletBase;
	class DBA_792_59_PKW : BulletBase{
		hit = 16;
		indirectHit = 0;
		indirectHitRange = 0.0;
		explosive= 0.0;
		warheadName = "7.92mw";
		caliber = 5;
		deflecting = 1;
		airFriction = 0;
		timeToLive = 40;
		initSpeed=809;
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
	class DBA_132_92_TUF : BulletBase{
		hit = 28;
		indirectHit = 0;
		indirectHitRange = 0.0;
		explosive= 0.0;
		warheadName = "13.2mw";
		caliber = 13.07189542;
		deflecting = 1;
		airFriction = 0;
		timeToLive = 40;
		initSpeed=510;
		aiAmmoUsageFlags= "64 + 128 + 256";
		cost = 1.5;
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