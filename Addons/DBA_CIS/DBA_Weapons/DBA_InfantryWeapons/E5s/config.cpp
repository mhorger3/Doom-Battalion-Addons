class CfgPatches
{
	class DBA_Aux_Mod_E5s
	{
		author="";
	requiredAddons[]=
		{
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"DBA_E5s_Standard",
			"DBA_E5s_Jedikiller",
		};
		magazines[]=
		{
			"DBA_9_57_x10_mag",
			"DBA_25_163_x1_mag",
		};
		ammo[]=
		{
			"DBA_9_57_AUS",
			"DBA_25_163_MFE",
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
	class arifle_MX_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class DBA_E5s_Standard : arifle_MX_Base_F{
		scope=2;
		displayName="E-5S Standard";
		descriptionShort="Roger Roger";
		picture="\MRC\JLTS\weapons\E5S\data\ui\E5S_ui_ca.paa";
		model="\MRC\JLTS\weapons\E5S\E5S.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\weapons\E5S\data\E5S_co.paa"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\MRC\JLTS\weapons\E5S\anims\E5S_handanim.rtm"
		};
		magazines[]=
		{
			"DBA_9_57_x10_mag",
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
					"MRC\JLTS\weapons\E5\sounds\E5_fire_2",
					10,
					0.85,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadTime=0.5454545455;
			recoil="recoil_single_dmr";
			recoilProne="recoil_single_prone_dmr";
			dispersion=0.00036361;
			aiRateOfFireDistance=1;
			minRange=0.1;
			minRangeProbab=0.0;
			midRange=0.2;
			midRangeProbab=0.0;
			maxRange=0.3;
			maxRangeProbab=0.0;
		};
		class close : manual{
			showToPlayer=0;
			aiRateOfFireDistance=1;
			minRange=0.1;
			minRangeProbab=0.0;
			midRange=0.2;
			midRangeProbab=0.0;
			maxRange=0.3;
			maxRangeProbab=0.0;
		};
		class medium : close{
			showToPlayer=0;
			aiRateOfFireDistance=1;
			minRange=0.1;
			minRangeProbab=0.0;
			midRange=0.2;
			midRangeProbab=0.0;
			maxRange=0.3;
			maxRangeProbab=0.0;
		};
		class far : medium{
			showToPlayer=0;
			aiRateOfFireDistance=1;
			minRange=0.1;
			minRangeProbab=0.0;
			midRange=0.2;
			midRangeProbab=0.0;
			maxRange=0.3;
			maxRangeProbab=0.0;
		};
		modelOptics="\MRC\JLTS\weapons\E5S\E5S_reticle.p3d";
		class OpticsModes
		{
			class Snip
			{
				cameraDir="";
				discreteDistance[]={100};
				discreteDistanceInitIndex=0;
				discretefov[]={0.045000002,0.011};
				discreteInitIndex=0;
				distanceZoomMax=2400;
				distanceZoomMin=300;
				memoryPointCamera="opticView";
				modelOptics[]=
				{
					"\MRC\JLTS\weapons\E5S\E5S_reticle.p3d"
				};
				opticsDisablePeripherialVision=1;
				opticsDisplayName="WFOV";
				opticsFlare=1;
				opticsID=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticsZoomInit=0.045000002;
				opticsZoomMax=0.045000002;
				opticsZoomMin=0.011;
				useModelOptics=1;
				visionMode[]=
				{
					"Normal",
					"NVG",
					"TI"
				};
			};
			class Iron: Snip
			{
				opticsID=2;
				useModelOptics=0;
				opticsPPEffects[]=
				{
					"",
					""
				};
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
				discreteDistance[]={100};
				discreteDistanceInitIndex=0;
				opticsZoomMin=0.25;
				opticsZoomMax=1.25;
				opticsZoomInit=0.75;
				memoryPointCamera="eye";
				visionMode[]={};
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=92;
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
	class DBA_E5s_Jedikiller : DBA_E5s_Standard{
		scope=2;
		displayName="E-5S Anti-Heavy";
		descriptionShort="Roger Roger";
		magazines[]=
		{
			"DBA_25_163_x1_mag",
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
					"MRC\JLTS\weapons\E5\sounds\E5_fire_2",
					10,
					0.5,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadTime=1;
			recoil="LynxRecoil";
			recoilProne="LynxRecoilprone";
			dispersion=0.000145444;
			aiRateOfFireDistance=1;
			minRange=0.1;
			minRangeProbab=0.0;
			midRange=0.2;
			midRangeProbab=0.0;
			maxRange=0.3;
			maxRangeProbab=0.0;
		};
		class close : manual{
			showToPlayer=0;
			aiRateOfFireDistance=1;
			minRange=0.1;
			minRangeProbab=0.0;
			midRange=0.2;
			midRangeProbab=0.0;
			maxRange=0.3;
			maxRangeProbab=0.0;
		};
		class medium : close{
			showToPlayer=0;
			aiRateOfFireDistance=1;
			minRange=0.1;
			minRangeProbab=0.0;
			midRange=0.2;
			midRangeProbab=0.0;
			maxRange=0.3;
			maxRangeProbab=0.0;
		};
		class far : medium{
			showToPlayer=0;
			aiRateOfFireDistance=1;
			minRange=0.1;
			minRangeProbab=0.0;
			midRange=0.2;
			midRangeProbab=0.0;
			maxRange=0.3;
			maxRangeProbab=0.0;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=200;
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
};
class CfgMagazines{
	class CA_Magazine;
	class DBA_9_57_x10_mag : CA_Magazine{
		displayname="10mw Magazine (10 Rounds)";
		scope = 2;
		ammo="DBA_9_57_AUS";
		picture="\MRC\JLTS\weapons\E5S\data\ui\E5S_mag_ui_ca.paa";
		model="\MRC\JLTS\weapons\E5S\E5S_mag.p3d";
		displaynamemagazine="10mw Magazine (10 Rounds)";
		shortnamemagazine="10mw Mag";
		displayNameMFDFormat="10mw";
		displayNameShort="10mw";
		count=10;
		initspeed=739;
		tracersevery=1;
	};
	class DBA_25_163_x1_mag : CA_Magazine{
		displayname="25mw Cartridge (1 Rounds)";
		scope = 2;
		ammo="DBA_25_163_MFE";
		picture="\MRC\JLTS\weapons\E5S\data\ui\E5S_mag_ui_ca.paa";
		model="\MRC\JLTS\weapons\E5S\E5S_mag.p3d";
		displaynamemagazine="25mw Cartridge (1 Rounds)";
		shortnamemagazine="25mw Cartridge";
		displayNameMFDFormat="25mw";
		displayNameShort="25mw";
		count=1;
		initspeed=875;
		tracersevery=1;
	};
};
class CfgAmmo{
	class BulletBase;
	class DBA_9_57_AUS : BulletBase{
		hit = 32;
		indirectHit = 0;
		indirectHitRange = 0.0;
		explosive= 0.0;
		warheadName = "10mw";
		caliber = 5;
		deflecting = 1;
		airFriction = 0;
		timeToLive = 40;
		initSpeed=739;
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
	class DBA_25_163_MFE : BulletBase{
		hit = 200;
		indirectHit = 3;
		indirectHitRange = 0.5;
		explosive= 0.0;
		warheadName = "25w";
		caliber = 19.04761905;
		deflecting = 1;
		airFriction = 0;
		timeToLive = 40;
		initSpeed=875;
		aiAmmoUsageFlags= "64 + 128 + 256";
		cost = 1.2;
		model="\MRC\JLTS\weapons\Core\effects\laser_red.p3d";
		tracerScale = 1.7;
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