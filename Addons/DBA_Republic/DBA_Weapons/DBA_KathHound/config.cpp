class cfgPatches
{
	class DBA_KathHound
	{
		author = "Vulgar";
		name = "101st Aux Mod Weapons";
		requiredaddons[] = {"A3_Weapons_F"};
		requiredversion = 0.1;
		units[] = {"DBA_VH_KathHound"};
		weapons[] = {"DBA_KathHound"};
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
	class Rifle_Base_F;
	class Rifle_Long_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	class UGL_F;
	class DBA_KathHound: Rifle_Long_Base_F
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
		selectionFireAnim = "zasleh";
		flash = "gunfire";
		flashSize = 0.5;
		fireLightIntensity = 0.2;
		fireLightDuration = 0.05;
		author = "Dutch & Trip";
		scope = 2;
		model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Weapons\DBA_KathHound\KathHound.p3d";
		picture="101st_Aux_Mod\Addons\DBA_Republic\DBA_Effects\icons\Maalras_CA.paa";
		muzzles[] = {"this"};
		//magazines[] = {"101st_Ion_Mag_Green"};
		magazines[] = { "DBA_Kathhound_Mag" };
		reloadAction = "ReloadMagazine";
		displayName = "DBA IR-01 Kath Hound";
		descriptionShort = "Hound Ion Rifle";
		hiddenSelections[] = {"camo1"};
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\firemode_Mk20",0.251189,1,5};
		hiddenSelectionsTextures[] = {"101st_Aux_Mod\Addons\DBA_Republic\DBA_Weapons\DBA_KathHound\data\Kath_Hound_CO.paa"};
		drySound[] = {"MRC\JLTS\weapons\Core\sounds\weapon_dry.wss",5,1,10};
		soundBullet[] = {};
		modes[] = {"Single","FullAuto","close","short","medium"};
		recoil = "recoil_mk20";
		simulation = "Weapon";
		handAnim[] = {"OFP2_ManSkeleton","101st_Aux_Mod\Addons\DBA_Republic\DBA_Weapons\DBA_KathHound\anims\KathHoundHandAnim.rtm"};
		fireLightDiffuse[] = {0,1,0};
		fireLightAmbient[] = {0,1,0};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				begin1[] = {"101st_Aux_Mod\Addons\DBA_Republic\DBA_Weapons\DBA_KathHound\AR.ogg",1,1,1800};
				soundBegin[] = {"begin1",1};
			};
			recoil = "recoil_single_ebr";
			recoilProne = "recoil_single_prone_ebr";
			reloadTime = 0.1;
			burst = 1;
			dispersion=0.00116;
			minRange = 5;
			minRangeProbab = 0.1;
			midRange = 250;
			midRangeProbab = 0.6;
			maxRange = 500;
			maxRangeProbab = 0.3;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 25;
		};
		class close: Single
		{
			showToPlayer = 0;
			aiRateOfFire = 0.25;
			aiRateOfFireDistance = 200;
			dispersion=0.00116;
			minRange = 10;
			minRangeProbab = 0.05;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 200;
			maxRangeProbab = 0.2;
		};
		class short: close
		{
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 400;
			minRange = 200;
			minRangeProbab = 0.2;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.2;
		};
		class medium: close
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 600;
			minRange = 400;
			minRangeProbab = 0.2;
			midRange = 500;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.2;
		};
		class FullAuto: Mode_FullAuto
		{
			aiRateOfFire = 1e-06;
			aiRateOfFireDispersion = 1;
			dispersion=0.00116;
			maxRange = 500;
			maxRangeProbab = 0.1;
			midRange = 250;
			midRangeProbab = 0.6;
			minRange = 5;
			minRangeProbab = 0.3;
			recoil = "recoil_auto_mk200";
			recoilProne = "recoil_auto_prone_mk200";
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				begin1[] = {"101st_Aux_Mod\Addons\DBA_Republic\DBA_Weapons\DBA_KathHound\AR.ogg",1,1,1800};
				soundBegin[] = {"begin1",1};
			};
		};
		inertia = 2;
		dexterity = 1.7;
		initSpeed = -1;
		maxRecoilSway = 0.008;
		swayDecaySpeed = 2;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 30;
			holsterScale = 0.9;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[] = {};
			};
			class CowsSlot: CowsSlot
			{
				compatibleItems[] = {"optic_MRCO","DBA_MRCO_A", "DBA_MRCO_B"};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[] = {"ACE_acc_pointer_green","acc_pointer_IR","acc_flashlight"};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[] = {"bipod_01_F_blk","bipod_02_F_blk","bipod_03_F_blk"};
			};
		};
	};
};
class CfgVehicles
{
	class Weapon_Base_F;
	class DBA_VH_KathHound: Weapon_Base_F
	{
		author = "Vulgar";
		displayName = "$STR_DBA_KathHound";
		scope = 2;
		class TransportWeapons
		{
			class DBA_KathHound_T
			{
				count = 1;
				weapon = "DBA_KathHound";
			};
		};
	};
};