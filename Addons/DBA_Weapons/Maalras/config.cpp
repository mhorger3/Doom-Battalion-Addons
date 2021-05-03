#define _ARMA_

class cfgPatches
{
	class DBA_Aux_Mod_Maalras
	{
		author = "Frisk";
		name = "101st Aux Mod Weapons";
		requiredaddons[] = {"JLTS_weapons_DC15S","101st_Aux_Mod","DBA_patch_weapons"};
		requiredversion = 0.1;
		units[] = {"DBA_VH_Maalras"};
		weapons[] = {"DBA_MaalrasSMG, DBA_SMG_A"};
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
	class DBA_MaalrasSMG: JLTS_DC15S
	{
		JLTS_canHaveShield = 0;
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
		fireLightDiffuse[] = {0,1,0};
		fireLightAmbient[] = {0,0.5,0};
		fireLightIntensity = 0.2;
		fireLightDuration = 0.05;
		author = "Trip";
		scope = 2;
		model = "101st_Aux_Mod\Addons\DBA_Weapons\Maalras\maalrasSMG.p3d";
		picture="101st_Aux_Mod\Addons\DBA_Weapons\effects\icons\Maalras_CA.paa";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"101st_Aux_Mod\Addons\DBA_Weapons\Maalras\data\None_CO.paa"};
		hiddenSelectionsMaterials[] = {"101st_Aux_Mod\Addons\DBA_Weapons\Maalras\data\Rifle.rvmat"};
		magazines[] = {"101st_Maalras_Mag_Green","101st_Maalras_Ext_Mag_Green"};
		magazineWell[] = {""};
		displayName = "[101st] Maalras SMG";
		descriptionShort = "Maalras SMG";
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\firemode_Mk20",0.251189,1,5};
		handAnim[] = {"OFP2_ManSkeleton","\A3\Weapons_F_Exp\Rifles\ARX\data\anim\arx.rtm"};
		soundBullet[] = {};
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
				begin1[] = {"101st_Aux_Mod\Addons\DBA_Weapons\Maalras\SMG.ogg",1,1,1800};
				soundBegin[] = {"begin1",1};
			};
			reloadTime = 0.06;
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
				begin1[] = {"101st_Aux_Mod\Addons\DBA_Weapons\Maalras\SMG.ogg",1,1,1800};
				soundBegin[] = {"begin1",1};
			};
			reloadTime = 0.06;
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
	class DBA_SMG_A: DBA_MaalrasSMG
	{
		JLTS_canHaveShield = 0;
		author = "Trip";
		scope = 2;
		model = "101st_Aux_Mod\Addons\DBA_Weapons\Maalras\Enforcer.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"101st_Aux_Mod\Addons\DBA_Weapons\Maalras\data\Enforcer_CO.paa"};
		hiddenSelectionsMaterials[] = {""};
		magazines[] = {"101st_PDW_Enforcer_Mag_Green"};
		magazineWell[] = {""};
		displayName = "[101st] SM-01 Enforcer";
		descriptionShort = "Enforcer SMG";
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\firemode_Mk20",0.251189,1,5};
		handAnim[] = {"OFP2_ManSkeleton","\A3\Weapons_F_beta\Smgs\SMG_02\data\Anim\SMG_02.rtm"};
		soundBullet[] = {};
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
				begin1[] = {"101st_Aux_Mod\Addons\DBA_Weapons\Maalras\SMG.ogg",1,1,1800};
				soundBegin[] = {"begin1",1};
			};
			reloadTime = 0.05;
		};
		class Burst: Mode_Burst
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 250;
			burst = 2;
			displayName = "Burst";
			recoil = "recoil_burst_smg_01";
			recoilProne = "recoil_burst_prone_smg_01";
			maxRange = 100;
			maxRangeProbab = 0.05;
			midRange = 50;
			midRangeProbab = 0.7;
			minRange = 25;
			minRangeProbab = 0.3;
			sounds[] = {"StandardSound"};
			reloadTime = 0.05;
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "";
				begin1[] = {"101st_Aux_Mod\Addons\DBA_Weapons\Maalras\SMG.ogg",1,1,1800};
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
				begin1[] = {"101st_Aux_Mod\Addons\DBA_Weapons\Maalras\SMG.ogg",1,1,1800};
				soundBegin[] = {"begin1",1};
			};
			reloadTime = 0.05;
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
};
class CfgVehicles
{
	class Weapon_Base_F;
	class DBA_VH_Maalras: Weapon_Base_F
	{
		author = "Frisk";
		displayName = "$STR_DBA_Maalras";
		scope = 2;
		class TransportWeapons
		{
			class DBA_Maalras_T
			{
				count = 1;
				weapon = "DBA_MaalrasSMG";
			};
		};
	};
	class DBA_VH_PDWSMG: Weapon_Base_F
	{
		author = "Frisk";
		displayName = "$STR_DBA_Enforcer";
		scope = 2;
		class TransportWeapons
		{
			class DBA_Maalras_T
			{
				count = 1;
				weapon = "DBA_SMG_A";
			};
		};
	};
};