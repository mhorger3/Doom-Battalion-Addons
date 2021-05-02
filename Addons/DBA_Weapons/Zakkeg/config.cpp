#define _ARMA_

class cfgPatches
{
	class DBA_Aux_Mod_DC_Series
	{
		author = "Frisk";
		name = "101st Aux Mod Weapons";
		requiredaddons[] = {"JLTS_weapons_DC15S","101st_Aux_Mod","DBA_patch_weapons"};
		requiredversion = 0.1;
		units[] = {"DBA_VH_Zakkeg"};
		weapons[] = {"DBA_ZakkegMG"};
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
	class DBA_ZakkegMG: Rifle_Long_Base_F
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
		model = "101st_Aux_Mod\Addons\DBA_Weapons\Zakkeg\ZakkegMG.p3d";
		picture="101st_Aux_Mod\Addons\DBA_Weapons\effects\icons\Zakkeg_CA.paa";
		muzzles[] = {"this"};
		magazines[] = {"101st_MG_Mag_Green"};
		reloadAction = "ReloadMagazine";
		displayName = "[101st] MG5 Zakkeg";
		descriptionShort = "Zakkeg MG5 Rifle";
		hiddenSelections[] = {"camo1"};
		bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01",0.501187,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02",0.251189,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03",0.251189,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04",0.251189,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02",0.501187,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03",0.501187,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04",0.501187,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01",0.398107,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02",0.398107,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03",0.398107,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04",0.398107,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01",0.251189,1,15};
		changeFiremodeSound[] = {"",1,1};
		hiddenSelectionsTextures[] = {"\101st_Aux_Mod\Addons\DBA_Weapons\Zakkeg\data\Zakkeg_CO.paa"};
		drySound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG_02_Dry",0.177828,1,10};
		reloadMagazineSound[] = {"SW_CloneWarsWeapons\M134\reload2.ogg",1.5,1,20};
		soundBullet[] = {};
		modes[] = {"manual","close","short","medium","far_optic1","far_optic2","ACE_Burst_far"};
		picture = "\A3\Weapons_F_Mark\Machineguns\MMG_02\Data\UI\gear_MMG_02_black_X_co.paa";
		recoil = "recoil_mmg_01";
		simulation = "Weapon";
		handAnim[] = {"OFP2_ManSkeleton","\A3\Weapons_F_epa\LongRangeRifles\DMR_01\Data\Anim\dmr_01.rtm"};
		fireLightDuration = 0.05;
		fireLightIntensity = 0.2;
		fireLightDiffuse[] = {0,1,0};
		fireLightAmbient[] = {0,0.5,0};
		class manual: Mode_FullAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Closure_Mx_01",0.5,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Closure_Mx_02",0.5,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				begin1[] = {"101st_Aux_Mod\Addons\DBA_Weapons\Zakkeg\Zakkeg.ogg",1,1,1800};
				soundBegin[] = {"begin1",1};
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Closure_Mx_01",0.5,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Closure_Mx_02",0.5,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			recoil = "recoil_auto_primary_3outof10";
			recoilProne = "recoil_single_prone_mx";
			reloadTime = 0.2;
			burst = 1;
			dispersion = 0.00073;
			minRange = 1;
			minRangeProbab = 0.1;
			midRange = 30;
			midRangeProbab = 0.6;
			maxRange = 80;
			maxRangeProbab = 0.3;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 500;
		};
		class close: manual
		{
			showToPlayer = 0;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			dispersion = 0.00073;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 25;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.2;
		};
		class short: close
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
		class medium: close
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
		class ACE_Burst_far: medium
		{
			aiRateOfFireDistance = 900;
			aiRateOfFireDispersion = 1;
			dispersion = "5*0.00087";
			burst = "3 + round random 5";
			maxRange = 600;
			maxRangeProbab = 0.1;
			midRange = 450;
			midRangeProbab = 0.6;
			minRange = 300;
			minRangeProbab = 0.3;
			recoil = "recoil_auto_primary_3outof10";
			recoilProne = "recoil_single_prone_mx";
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Closure_Mx_01",0.5,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Closure_Mx_02",0.5,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				begin1[] = {"101st_Aux_Mod\Addons\DBA_Weapons\Zakkeg\Zakkeg.ogg",1,1,1800};
				soundBegin[] = {"begin1",1};
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Closure_Mx_01",0.5,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Closure_Mx_02",0.5,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
		};
		class far_optic1: close
		{
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 200;
			minRange = 400;
			minRangeProbab = 0.2;
			midRange = 500;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.2;
		};
		class far_optic2: far_optic1
		{
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 200;
			minRange = 600;
			minRangeProbab = 0.2;
			midRange = 700;
			midRangeProbab = 0.7;
			maxRange = 800;
			maxRangeProbab = 0.2;
		};
		inertia = 1.1;
		dexterity = 1.7;
		initSpeed = -1;
		maxRecoilSway = 0.008;
		swayDecaySpeed = 2;
		UIPicture = "\A3\weapons_f\data\UI\icon_mg_CA.paa";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 150;
			holsterScale = 0.9;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[] = {};
			};
			class CowsSlot: CowsSlot
			{
				compatibleItems[] = {"DBA_MRCO_A", "DBA_MRCO_B"};
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
	class DBA_VH_Zakkeg: Weapon_Base_F
	{
		author = "Frisk";
		displayName = "$STR_DBA_Zakkeg";
		scope = 2;
		class TransportWeapons
		{
			class DBA_Zakkeg
			{
				count = 1;
				weapon = "DBA_ZakkegMG";
			};
		};
	};
};
