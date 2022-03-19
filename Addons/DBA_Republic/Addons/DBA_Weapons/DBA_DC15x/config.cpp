class CfgPatches
{
	class DBA_DC15x
	{
		requiredAddons[] =
		{
			"A3_Weapons_F"
		};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] =
		{"DBA_DC15x",
			"DBA_Forest_DC15x",
			"DBA_Desert_DC15x"
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
	class JLTS_DC15x: arifle_MX_Base_F
	{
		class Single;
		class WeaponSlotsInfo;
		class GunParticles;
	};

	class DBA_DC15x: JLTS_DC15x
	{
		author = "Dutch";
		baseWeapon = "DBA_DC15x";
		displayName = "[101st] W4-LRUS";
		scope = 2;
		scopeArsenal = 2;
		ACE_Overheating_JamChance = 0;
		ACE_overheating_mrbs = 3e+09;
		ACE_overheating_allowSwapBarrel = 1;
		ACE_clearJamAction = "ReloadMagazine";
		model = "DBA_Republic\Addons\DBA_Weapons\DBA_DC15x\dc15x.p3d";
		handAnim[] = {"OFP2_ManSkeleton","DBA_Republic\Addons\DBA_Weapons\DBA_DC15x\anims\DC15XHandAnim.rtm"};
		//magazines[] = {"101st_DC15x_Mag"};
		magazines[] = { "DBA_DC15x_Mag" };
		recoil = "recoil_m320";

		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 100;
			class CowsSlot: CowsSlot
			{
				compatibleItems[] = {};
			};
			class PointerSlot: PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[] = {};
			};
		};
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"DBA_Republic\Addons\DBA_Weapons\DBA_DC15x\data\DC15X_CO.paa","DBA_Republic\Addons\DBA_Weapons\DBA_DC15x\data\DC15X_Scope_CO.paa"};
		maxZeroing = 1200;
		opticsZoomMin = 0.01;
		opticsZoomMax = 0.042;
		opticsZoomInit = 0.042;
		discretefov[] = {0.042,0.01};
		discreteInitIndex = 0;
		distanceZoomMin = 100;
		distanceZoomMax = 1200;
		discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200};
		descriptionShort = "DC15-X Long Range Sniper";
		dexterity = 0.5;
		caseless[] = {"",1,1,1};
		soundBullet[] = {"caseless",1};
		selectionFireAnim = "zasleh";
		flash = "gunfire";
		flashSize = 0.5;
		fireLightIntensity = 0.2;
		fireLightDuration = 0.05;
		modes[] = {"Single"};
		class Single: Single
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = { "A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_Closure_1",0.398107,1,30 };
				closure2[] = { "A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_Closure_2",0.398107,1,30 };
				soundClosure[] = { "closure1",0.5,"closure2",0.5 };
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				begin1[] = {"DBA_Republic\Addons\DBA_Weapons\DBA_DC15LE\LE_Sound.ogg",1,1,1800};
				closure1[] = {"A3\sounds_f\weapons\closure\zafir_closure_2",0.5,1,10};
				soundBegin[] = { "begin1", 1 };
				soundClosure[] = { "closure2", 1 };
			};
			reloadTime = 0.5;
			dispersion = 0.00029;
			minRange = 1;
			minRangeProbab = 0.3;
			midRange = 150;
			midRangeProbab = 0.58;
			maxRange = 1000;
			maxRangeProbab = 0.04;
		};
		aiDispersionCoefY = 6;
		aiDispersionCoefX = 6;
		modelOptics="\A3\Weapons_F\acc\reticle_LRPS_F";
		class OpticModes
		{
			class Scope
			{
				opticsID = 1;
				useModelOptics = 1;
				opticsPPEffects[] = {"OpticsCHAbera5","OpticsBlur5"};
				opticsDisablePeripherialVision = 0.67;
				opticsZoomMin = 0.01;
				opticsZoomMax = 0.042;
				opticsZoomInit = 0.042;
				discretefov[] = {0.042,0.01};
				discreteInitIndex = 0;
				distanceZoomMin = 100;
				distanceZoomMax = 1200;
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200};
				discreteDistanceInitIndex = 0;
				memoryPointCamera = "opticView";
				visionMode[] = {"Normal","NVG","TI"};
				opticsFlare = "true";
				cameraDir = "";
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
	class DBA_Forest_DC15x: DBA_DC15x
	{
		baseWeapon = "DBA_Forest_DC15x";
		displayName = "[101st] W4-LRUS (Forest)";
		model = "DBA_Republic\Addons\DBA_Weapons\DBA_DC15x\DC15X_Camo.p3d";
		handAnim[] = {"OFP2_ManSkeleton","DBA_Republic\Addons\DBA_Weapons\DBA_DC15x\anims\DC15XCHandAnim.rtm"};
		hiddenSelections[] = {"camo","camo1","camo2"};
		hiddenSelectionsTextures[] = {"DBA_Republic\Addons\DBA_Weapons\DBA_DC15x\data\DC15X_CO.paa","DBA_Republic\Addons\DBA_Weapons\DBA_DC15x\data\DC15X_Scope_CO.paa","DBA_Republic\Addons\DBA_Weapons\DBA_DC15x\data\DC15X_Netting_Forest_CO.paa"};
	};
	class DBA_Desert_DC15x: DBA_Forest_DC15x
	{
		baseWeapon = "DBA_Desert_DC15x";
		displayName = "[101st] W4-LRUS (Desert)";
		hiddenSelections[] = {"camo","camo1","camo2"};
		hiddenSelectionsTextures[] = {"DBA_Republic\Addons\DBA_Weapons\DBA_DC15x\data\DC15X_CO.paa","DBA_Republic\Addons\DBA_Weapons\DBA_DC15x\data\DC15X_Scope_CO.paa","DBA_Republic\Addons\DBA_Weapons\DBA_DC15x\data\DC15X_Netting_Desert_CO.paa"};
	};
	
};