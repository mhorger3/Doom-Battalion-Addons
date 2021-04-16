class cfgPatches
{
	class DBA_Aux_Mod_DC15S
	{
		author = "Frisk";
		name = "101st Aux Mod Weapons";
		requiredaddons[] = {"JLTS_weapons_DC15S","101st_Aux_Mod","DBA_patch_weapons"};
		requiredversion = 0.1;
		units[] = {"DBA_VH_DC15S"};
		weapons[] = {"DBA_DC15S_base","DBA_DC15S_Secondary_Base","DBA_DC15sGL"};
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
	class JLTS_DC15S: arifle_MX_Base_F
	{
		class Stun;
		class Single;
		class FullAuto;
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class DBA_DC15S_base: JLTS_DC15S
	{
		displayName = "[101st] DC-15s Carbine";
		JLTS_canHaveShield = 0;
		scope = 2;
		scopeArsenal = 2;
		weaponPoolAvailable = 1;
		magazines[] = {"DBA_DC15s_x60_mag","DBA_DC15_underwater_x40_mag"};
		muzzles[] = {"this","Stun"};
		model = "101st_Aux_Mod\Addons\DBA_Weapons\DC15S\DC15S.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"101st_Aux_Mod\Addons\DBA_Weapons\DC15S\data\DC15S_CO.paa"};
		ACE_Overheating_Dispersion = 0;
		ACE_Overheating_SlowdownFactor = 0;
		ACE_Overheating_JamChance = 0;
		ACE_overheating_mrbs = 3e+09;
		ACE_overheating_allowSwapBarrel = 1;
		ACE_clearJamAction = "ReloadMagazine";
		selectionFireAnim = "zasleh";
		flash = "gunfire";
		flashSize = 0.5;
		fireLightIntensity = 0.2;
		fireLightDiffuse[] = {0,0,1};
		fireLightDuration = 0.05;
		modes[] = {"Single","FullAuto","close","short","medium"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "";
				begin1[] = {"MRC\JLTS\weapons\DC15A\sounds\dc15a_fire",1,1,1800};
				soundBegin[] = {"begin1",1};
			};
			reloadTime = 0.25;
			dispersion = 0.00116;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 100;
			midRangeProbab = 0.58;
			maxRange = 150;
			maxRangeProbab = 0.04;
		};
		class FullAuto: FullAuto
		{
			reloadTime = 0.075;
			dispersion = "0.0001*1";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 30;
			class CowsSlot: CowsSlot
			{
				compatibleItems[] = {"DBA_MRCO_A", "DBA_MRCO_B"};
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
	class DBA_DC15S_Secondary_Base: Pistol_Base_F
	{
		magazines[] = {"DBA_DC15s_x60_mag","DBA_DC15_underwater_x40_mag"};
		scope = 2;
		model = "101st_Aux_Mod\Addons\DBA_Weapons\DC15S\DC15S_Pistol.p3d";
		JLTS_canHaveShield = 1;
		JLTS_shieldedWeapon = "DBA_DC15S_Secondary_Shield";
		reloadAction = "ReloadMagazine";
		magazineReloadSwitchPhase = 1;
		baseWeapon = "DBA_DC15S_Secondary_Base";
		discreteDistanceInitIndex = 0;
		maxRecoilSway = 0.008;
		swayDecaySpeed = 2;
		inertia = 0.4;
		initSpeed = -1;
		opticsZoomMin = 0.25;
		opticsZoomMax = 1.25;
		opticsZoomInit = 0.75;
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		descriptionShort = "DC15 Carbine Secondary";
		displayName = "[101st] DC-15s Carbine";
		dexterity = 1.5;
		selectionFireAnim = "zasleh";
		flash = "gunfire";
		flashSize = 0.5;
		fireLightIntensity = 0.2;
		fireLightDuration = 0.05;
		modes[] = {"Single","FullAuto"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "";
				begin1[] = {"MRC\JLTS\weapons\DC15A\sounds\dc15a_fire",1,1,1800};
				soundBegin[] = {"begin1",1};
			};
			reloadTime = 0.075;
			dispersion = 0.00116;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 100;
			midRangeProbab = 0.58;
			maxRange = 150;
			maxRangeProbab = 0.04;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "";
				begin1[] = {"MRC\JLTS\weapons\DC15A\sounds\dc15a_fire",1,1,1800};
				soundBegin[] = {"begin1",1};
			};
			reloadTime = 0.075;
			dispersion = 0;
			minRange = 1;
			minRangeProbab = 1;
			midRange = 25;
			midRangeProbab = 0.58;
			maxRange = 50;
			maxRangeProbab = 0.04;
		};
		recoil = "recoil_smg_02";
		aiDispersionCoefY = 6;
		aiDispersionCoefX = 6;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 30;
			class CowsSlot: CowsSlot
			{
				compatibleItems[] = {"DBA_MRCO_A", "DBA_MRCO_B"};
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
	class DBA_DC15S_Secondary_Shield: DBA_DC15S_Secondary_Base
	{
		descriptionShort = "DC15 Carbine Secondary";
		displayName = "[101st] DC-15s Carbine Shielded";
		baseWeapon = "DBA_DC15S_Secondary_Shield";
		scope = 1;
		JLTS_isShielded = 1;
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"101st_Aux_Mod\Addons\DBA_Weapons\DC15S\data\DC15S_CO.paa", "\MRC\JLTS\weapons\Shield\data\shield_co.paa"};
		JLTS_baseWeapon = "DBA_DC15S_Secondary_Base";
		model = "101st_Aux_Mod\Addons\DBA_Weapons\DC15S\DC15S_Shielded.p3d";
		handAnim[] = {"OFP2_ManSkeleton","\MRC\JLTS\weapons\DC17SA\anims\DC17SA_shielded_handanim.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 110;
			class CowsSlot: CowsSlot
			{
				compatibleItems[] = {"DBA_MRCO_A", "DBA_MRCO_B"};
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
				compatibleItems[] = {"JLTS_riot_shield_attachment","JLTS_riot_shield_212_attachment","JLTS_riot_shield_501_attachment","JLTS_riot_shield_101_attachment","JLTS_riot_shield_CG_attachment","JLTS_riot_shield_GD_attachment","JLTS_riot_shield_droid_attachment"};
			};
		};
	};
	class DBA_DC15sGL: DBA_DC15S_base
	{
		JLTS_canHaveShield = 0;
		displayName = "[101st] DC-15sGL Carbine";
		scope = 2;
		scopeArsenal = 2;
		weaponPoolAvailable = 1;
		magazines[] = {"DBA_DC15s_x60_mag","DBA_DC15_underwater_x40_mag"};
		class 101st_GL: UGL_F
		{
			useModelOptics = "false";
			useExternalOptic = "false";
			magazines[] = {};
			magazineWell[] += {"DBA_GL_Mags_magwell"};
			reloadAction = "GestureReloadMXUGL";
			reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Mx_UGL_reload",1,1,10};
			cameraDir = "OP_look";
			discreteDistance[] = {75,150,250,350,425};
			discreteDistanceCameraPoint[] = {"OP_eye","OP_eye2","OP_eye3","OP_eye4","OP_eye5"};
			discreteDistanceInitIndex = 0;
		};
		handAnim[] = {"OFP2_ManSkeleton","\A3\Weapons_F_beta\Rifles\MK20\Data\Anim\mk20G.rtm"};
		muzzles[] = {"this","101st_GL"};
		model = "\101st_Aux_Mod\Addons\DC15SGL\DC15SGL.p3d";
		ACE_clearJamAction = "ReloadMagazine";
		modes[] = {"Single","FullAuto","close","short","medium"};
		class Single;
		class FullAuto: FullAuto
		{
			reloadTime = 0.075;
			dispersion = "0.0001*1";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 30;
			class CowsSlot: CowsSlot
			{
				access = 1;
				compatibleItems[] = {"optic_MRCO","DBA_MRCO_A", "DBA_MRCO_B"};
			};
			class MuzzleSlot: MuzzleSlot
			{
				access = 1;
				compatibleItems[] = {"RD501_muzzle_flash"};
			};
			class PointerSlot: PointerSlot
			{
				access = 1;
				compatibleItems[] = {"acc_flashlight_smg_01"};
			};
		};
	};
};
class CfgVehicles
{
	class Weapon_Base_F;
	class DBA_VH_DC15S: Weapon_Base_F
	{
		author = "Frisk";
		displayName = "$STR_DBA_DC15S";
		scope = 2;
		class TransportWeapons
		{
			class DBA_DC15S_T
			{
				count = 1;
				weapon = "DBA_DC15S_base";
			};
		};
	};
};