class cfgPatches
{
	class DBA_Aux_Mod_Rebel_Weapons
	{
		author = "Trip";
		name = "101st Aux Mod Weapons";
		requiredaddons[] = {"JLTS_weapons_DC15A","101st_Aux_Mod","DBA_patch_weapons"};
		requiredversion = 0.1;
		units[] = {};
		weapons[] = 
		{
			"DBA_A280", 
			"DBA_E11",
			"DBA_Galaar_Base",
			"DBA_Galaar_Rifle",
			"DBA_Galaar_LSW",
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
class CfgWeapons
{
	class Pistol;
	class Pistol_Base_F: Pistol
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class Rifle_Base_F;
	class Rifle_Long_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	class Launcher_Base_F;
	class launch_RPG32_F: Launcher_Base_F
	{
		class WeaponSlotsInfo;
	};
	class arifle_MX_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class UGL_F;
	class 101st_stun_muzzle;
	class JLTS_stun_muzzle;
	class JLTS_DC15A: arifle_MX_Base_F
	{
		class FullAuto;
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class JLTS_DC15S: arifle_MX_Base_F
	{
		class Stun;
		class Single;
		class FullAuto;
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class JLTS_DC15x: arifle_MX_Base_F
	{
		class Single;
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class 3AS_DC15L_Base_F: Rifle_Base_F
	{
		class FullAuto;
		class WeaponSlotsInfo;
	};
	class 3AS_DC15L_F: 3AS_DC15L_Base_F
	{
		class FullAuto;
		class WeaponSlotsInfo;
	};
	class ItemCore;
	class optic_MRD: ItemCore
	{
		class ItemInfo;
	};
	class optic_MRCO: ItemCore
	{
		class ItemInfo;
	};
	class optic_Hamr: ItemCore
	{
		class ItemInfo;
	};


	class DBA_E11: JLTS_DC15S
	{
		JLTS_hasEMPProtection = 1;
		JLTS_canHaveShield = 0;
		displayName = "[DBA] E11 Rifle (Experimental)";
		baseWeapon = "DBA_E11";
		scope = 2;
		scopeArsenal = 2;
		ACE_Overheating_Dispersion = 0;
		ACE_Overheating_SlowdownFactor = 0;
		ACE_Overheating_JamChance = 0;
		ACE_overheating_mrbs = 3e+09;
		ACE_overheating_allowSwapBarrel = 1;
		ACE_clearJamAction = "ReloadMagazine";
		canShootInWater = 1;
		magazines[] = { "DBA_65_Mag_x30_Red" };
		muzzles[] = {"this","Stun"};
		model = "101st_Aux_Mod\Addons\DBA_Weapons\empireEraWeapons\e11.p3d";
		handAnim[] = {"OFP2_ManSkeleton","\MRC\JLTS\weapons\DC15S\anims\DC15S_handanim.rtm"};

		fireLightDuration = 0.05;
		fireLightIntensity = 0.2;
		fireLightDiffuse[] = {1,0,0};
		fireLightAmbient[] = {0.5,0,0};

		class Stun: 101st_stun_muzzle
		{
			reloadAction = "ReloadMagazine";
			reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\reload_P07",1,1,10};
		};
		class Single: Single
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "";
				begin1[] = {"MRC\JLTS\weapons\DC15A\sounds\dc15a_fire",1,1,1800};
				soundBegin[] = {"begin1",1};
			};
			reloadTime = 0.095;
			recoil = "recoil_single_mx";
			recoilProne = "recoil_single_prone_mx";
			dispersion=0.00087;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 250;
			midRangeProbab = 0.7;
			maxRange = 450;
			maxRangeProbab = 0.3;
		};
		class Burst: Mode_Burst
		{
			reloadTime = 0.3334;
			dispersion=0.00087;
			recoil = "recoil_auto_primary_3outof10";
			recoilProne = "recoil_auto_primary_prone_3outof10";
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "";
				begin1[] = {"MRC\JLTS\weapons\DC15A\sounds\dc15a_fire",1,1,1800};
				soundBegin[] = {"begin1",1};
			};
		};
		class FullAuto: FullAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "";
				begin1[] = {"MRC\JLTS\weapons\DC15A\sounds\dc15a_fire",1,1,1800};
				soundBegin[] = {"begin1",1};
			};
			reloadTime = 0.085;
			recoil = "recoil_auto_mx";
			recoilProne = "recoil_auto_prone_mx";
			dispersion=0.00087;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-06;
		};
		modes[] = {"FullAuto"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 30;
			class CowsSlot: CowsSlot
			{
				compatibleItems[] = {"DBA_E11_Scope"};
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[] = {};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[] = {};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[] = {};
			};
		};
		class FlashLight
        {
            color[]={180,30,30}; //color[]={180,160,130}; Default
            ambient[]={0.9,0.3,0.3}; //ambient[]={0.89999998,0.80000001,0.69999999}; Default
            intensity=100;
            size=1;
            innerAngle=5;
            outerAngle=100;
            coneFadeCoef=10;
            position="usti hlavne";
            direction="konec hlavne";
            useFlare=1;
            flareSize=1.5;
            flareMaxDistance=100;
            dayLight=1;
            class Attenuation
            {
                start=0;
                constant=0.5;
                linear=0.1;
                quadratic=0.2;
                hardLimitStart=27;
                hardLimitEnd=34;
            };
            scale[]={0};
        };
	};
	class DBA_A280: JLTS_DC15A
	{
		JLTS_hasEMPProtection = 1;
		displayName = "[DBA] A280 Rifle (Experimental)";
		baseWeapon = "DBA_A280";
		scope = 2;
		scopeArsenal = 2;
		ACE_Overheating_Dispersion = 0;
		ACE_Overheating_SlowdownFactor = 0;
		ACE_Overheating_JamChance = 0;
		ACE_overheating_mrbs = 3e+09;
		ACE_overheating_allowSwapBarrel = 1;
		ACE_clearJamAction = "ReloadMagazine";
		canShootInWater = 1;
		magazines[] = { "DBA_65_Mag_x30_Red" };
		muzzles[] = {"this","Stun"};
		model = "101st_Aux_Mod\Addons\DBA_Weapons\empireEraWeapons\A280.p3d";
		handAnim[] = {"OFP2_ManSkeleton","\MRC\JLTS\weapons\DC15S\anims\DC15S_handanim.rtm"};


		fireLightDuration = 0.05;
		fireLightIntensity = 0.2;
		fireLightDiffuse[] = {1,0,0};
		fireLightAmbient[] = {0.5,0,0};

		class Stun: 101st_stun_muzzle
		{
			reloadAction = "ReloadMagazine";
			reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\reload_P07",1,1,10};
		};
		class Single: Single
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "";
				begin1[] = {"MRC\JLTS\weapons\DC15A\sounds\dc15a_fire",1,1,1800};
				soundBegin[] = {"begin1",1};
			};
			reloadTime = 0.12;
			recoil = "recoil_single_mx";
			recoilProne = "recoil_single_prone_mx";
			dispersion=0.00087;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 250;
			midRangeProbab = 0.7;
			maxRange = 450;
			maxRangeProbab = 0.3;
		};
		class Burst: Mode_Burst
		{
			reloadTime = 0.4;
			dispersion=0.00087;
			recoil = "recoil_auto_primary_3outof10";
			recoilProne = "recoil_auto_primary_prone_3outof10";
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "";
				begin1[] = {"MRC\JLTS\weapons\DC15A\sounds\dc15a_fire",1,1,1800};
				soundBegin[] = {"begin1",1};
			};
		};
		modes[] = {"Single","Burst"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 30;
			class CowsSlot: CowsSlot
			{
				compatibleItems[] = {"DBA_A280_Scope"};
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[] = {};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[] = {};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[] = {};
			};
		};
		class FlashLight
        {
            color[]={180,160,130}; //color[]={180,160,130}; Default
            ambient[]={0.9,0.3,0.3}; //ambient[]={0.89999998,0.80000001,0.69999999}; Default
            intensity=100;
            size=1;
            innerAngle=5;
            outerAngle=100;
            coneFadeCoef=10;
            position="usti hlavne";
            direction="konec hlavne";
            useFlare=1;
            flareSize=1.5;
            flareMaxDistance=100;
            dayLight=1;
            class Attenuation
            {
                start=0;
                constant=0.5;
                linear=0.1;
                quadratic=0.2;
                hardLimitStart=27;
                hardLimitEnd=34;
            };
            scale[]={0};
        };
	};
	class DBA_Galaar_Base: JLTS_DC15A
	{
		JLTS_hasEMPProtection = 1;
		displayName = "[DBA] Galaar 15 Carbine (Experimental)";
		baseWeapon = "DBA_Galaar_Base";
		scope = 2;
		scopeArsenal = 2;
		ACE_Overheating_Dispersion = 0;
		ACE_Overheating_SlowdownFactor = 0;
		ACE_Overheating_JamChance = 0;
		ACE_overheating_mrbs = 3e+09;
		ACE_overheating_allowSwapBarrel = 1;
		ACE_clearJamAction = "ReloadMagazine";
		canShootInWater = 1;

		magazines[] = { "DBA_65_Mag_x30_Yellow" };
		muzzles[] = {"this","Stun"};
		model = "101st_Aux_Mod\Addons\DBA_Weapons\empireEraWeapons\Galaar15s.p3d";
		handAnim[] = {"OFP2_ManSkeleton","\A3\Weapons_F_epa\LongRangeRifles\DMR_01\Data\Anim\dmr_01.rtm"};

		fireLightDuration = 0.05;
		fireLightIntensity = 0.2;
		fireLightDiffuse[] = {1,1,0};
		fireLightAmbient[] = {1,1,0};

		class Stun: 101st_stun_muzzle
		{
			reloadAction = "ReloadMagazine";
			reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\reload_P07",1,1,10};
		};
		class Single: Single
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "";
				begin1[] = {"MRC\JLTS\weapons\DC15A\sounds\dc15a_fire",1,1,1800};
				soundBegin[] = {"begin1",1};
			};
			reloadTime = 0.13;
			recoil = "recoil_single_mx";
			recoilProne = "recoil_single_prone_mx";
			dispersion=0.00187;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 250;
			midRangeProbab = 0.7;
			maxRange = 450;
			maxRangeProbab = 0.3;
		};
		class Burst: Mode_Burst
		{
			reloadTime = 0.0333334;
			dispersion=0.00087;
			recoil = "recoil_auto_primary_3outof10";
			recoilProne = "recoil_auto_primary_prone_3outof10";
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "";
				begin1[] = {"MRC\JLTS\weapons\DC15A\sounds\dc15a_fire",1,1,1800};
				soundBegin[] = {"begin1",1};
			};
		};
		class FullAuto: FullAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "";
				begin1[] = {"MRC\JLTS\weapons\DC15A\sounds\dc15a_fire",1,1,1800};
				soundBegin[] = {"begin1",1};
			};
			reloadTime = 0.1;
			recoil = "recoil_auto_mx";
			recoilProne = "recoil_auto_prone_mx";
			dispersion=0.00087;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-06;
		};
		modes[] = {"FullAuto"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 30;
			class CowsSlot: CowsSlot
			{
				compatibleItems[] = {};
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[] = {};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[] = {};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[] = {};
			};
		};
		class FlashLight
        {
            color[]={180,30,30}; //color[]={180,160,130}; Default
            ambient[]={0.9,0.3,0.3}; //ambient[]={0.89999998,0.80000001,0.69999999}; Default
            intensity=100;
            size=1;
            innerAngle=5;
            outerAngle=100;
            coneFadeCoef=10;
            position="usti hlavne";
            direction="konec hlavne";
            useFlare=1;
            flareSize=1.5;
            flareMaxDistance=100;
            dayLight=1;
            class Attenuation
            {
                start=0;
                constant=0.5;
                linear=0.1;
                quadratic=0.2;
                hardLimitStart=27;
                hardLimitEnd=34;
            };
            scale[]={0};
        };
	};
	class DBA_Galaar_Rifle:  DBA_Galaar_Base
	{
		displayName = "[DBA] Galaar 15 Rifle (Experimental)";
		baseWeapon = "DBA_Galaar_Rifle";
		scope = 2;
		scopeArsenal = 2;

		magazines[] = { "DBA_65_Mag_x30_Yellow" };
		muzzles[] = {"this","Stun"};
		model = "101st_Aux_Mod\Addons\DBA_Weapons\empireEraWeapons\Galaar15a.p3d";

		fireLightDuration = 0.05;
		fireLightIntensity = 0.2;
		fireLightDiffuse[] = {1,1,0};
		fireLightAmbient[] = {1,1,0};

		modes[] = {"Single","Burst"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 30;
			class CowsSlot: CowsSlot
			{
				compatibleItems[] = {"DBA_A280_Scope", "DBA_E11_Scope"};
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[] = {};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[] = {};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[] = {};
			};
		};
	};
	class DBA_Galaar_LSW:  DBA_Galaar_Base
	{
		displayName = "[DBA] Galaar 15 LSW (Experimental)";
		baseWeapon = "DBA_Galaar_LSW";
		scope = 2;
		scopeArsenal = 2;

		magazines[] = { "DBA_65_Mag_x30_Yellow", "DBA_65_Mag_x120_yellow" };
		muzzles[] = {"this","Stun"};
		model = "101st_Aux_Mod\Addons\DBA_Weapons\empireEraWeapons\Galaar15l.p3d";

		fireLightDuration = 0.05;
		fireLightIntensity = 0.2;
		fireLightDiffuse[] = {1,1,0};
		fireLightAmbient[] = {1,1,0};

		modes[] = {"FullAuto"};

		class FullAuto: FullAuto
		{
			reloadTime = 0.07;
			dispersion=0.00087;
			recoil = "recoil_auto_mk20";
			recoilProne = "recoil_auto_prone_mk20";
		};

		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 30;
			class CowsSlot: CowsSlot
			{
				compatibleItems[] = {"DBA_A280_Scope", "DBA_E11_Scope"};
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[] = {};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[] = {};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[] = {"bipod_01_F_blk","bipod_02_F_blk","bipod_03_F_blk"};
			};
		};
	};

	//Scopes

	class DBA_E11_Scope: optic_MRCO
	{
		author="Trip";
		scope=2;
		displayName="E11 4x Scope";

		model = "101st_Aux_Mod\Addons\DBA_Weapons\empireEraWeapons\ScopeE11.p3d";
		
		descriptionShort="Standard Battle Sight";

		weaponInfoType="RscOptics_sos";
		class ItemInfo: ItemInfo
		{
			mass=8;
			opticType=1;
			optics=1;
			class OpticsModes
			{
				class MRCOcq
				{
					modelOptics="\A3\Weapons_F\empty";
					opticsID=1;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						"Default"
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					visionMode[]={};
					distanceZoomMin=300;
					distanceZoomMax=300;
				};
				class MRCOscope
				{
					modelOptics="\A3\Weapons_f\acc\reticle_nightstalker_F";
					opticsID=2;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					// opticsZoomMin=0.025; //x10
					// opticsZoomMax=0.0625; //x4
					opticsZoomMin = "0.25/4";
					opticsZoomMax = "0.25/2";
					opticsZoomInit = "0.25/2";
					discreteDistance[]={100,200,300,400,500,600,700,800,900,1000};
					discreteDistanceInitIndex=1;
					distanceZoomMin=100;
					distanceZoomMax=1000;
					memoryPointCamera="opticView";
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					cameraDir="";
				};
				
			};
		};
		inertia=0.1;
	};
	class DBA_A280_Scope: optic_MRCO
	{
		author="Trip";
		scope=2;
		displayName="A280 4x Scope";

		model = "101st_Aux_Mod\Addons\DBA_Weapons\empireEraWeapons\ScopeA280.p3d";
		
		descriptionShort="Standard Battle Sight";

		weaponInfoType="RscOptics_sos";
		class ItemInfo: ItemInfo
		{
			mass=8;
			opticType=1;
			optics=1;
			class OpticsModes
			{
				class MRCOcq
				{
					modelOptics="\A3\Weapons_F\empty";
					opticsID=1;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						"Default"
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					visionMode[]={};
					distanceZoomMin=300;
					distanceZoomMax=300;
				};
				class MRCOscope
				{
					modelOptics="\A3\Weapons_f\acc\reticle_nightstalker_F";
					opticsID=2;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					// opticsZoomMin=0.025; //x10
					// opticsZoomMax=0.0625; //x4
					opticsZoomMin = "0.25/4";
					opticsZoomMax = "0.25/2";
					opticsZoomInit = "0.25/2";
					discreteDistance[]={100,200,300,400,500,600,700,800,900,1000};
					discreteDistanceInitIndex=1;
					distanceZoomMin=100;
					distanceZoomMax=1000;
					memoryPointCamera="opticView";
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					cameraDir="";
				};
				
			};
		};
		inertia=0.1;
	};
};
