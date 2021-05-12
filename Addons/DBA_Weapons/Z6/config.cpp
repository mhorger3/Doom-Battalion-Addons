////////////////////////////////////////////////////////////////////
//DeRap: DBA_Weapons\Z6\config.bin
//Produced from mikero's Dos Tools Dll version 7.46
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Sat Dec 26 01:00:51 2020 : 'file' last modified on Sat Dec 26 00:55:23 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class cfgPatches
{
	class DBA_Aux_Mod_Z6
	{
		author = "Frisk";
		name = "101st Aux Mod Weapons";
		requiredaddons[] = {"JLTS_weapons_z6","101st_Aux_Mod","DBA_patch_weapons"};
		requiredversion = 0.1;
		units[] = {"DBA_VH_Z6"};
		weapons[] = {"DBA_Z6"};
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
	class LMG_Mk200_F: Rifle_Long_Base_F
	{
		class GunParticles;
		class GunClouds;
		class WeaponSlotsInfo;
	};
	class JLTS_Z6: LMG_Mk200_F
	{
		class GunParticles;
		class GunClouds;
		class WeaponSlotsInfo;
	};
	class DBA_Z6: JLTS_Z6
	{
		class FlashLight
        {
            color[]={180,160,130}; //color[]={180,160,130}; Default
            ambient[]={0.9,0.3,0.3}; //ambient[]={0.89999998,0.80000001,0.69999999}; Default
            intensity=100;
            size=1;
            innerAngle=5;
            outerAngle=100;
            coneFadeCoef=10;
            position="konec hlavne";
            direction="usti hlavne";
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
		displayName = "[101st] Z6 Rotary Cannon";
		scope = 2;
		scopeArsenal = 2;
		dlc = "101st_Aux_Mod";
		baseWeapon = "DBA_Z6";
		author = "Dutch";
		modes[] = {"FullAuto1","overcharge_burst","medium1","medium2","far1","far2"};
		ACE_Overheating_Dispersion = 0;
		ACE_Overheating_SlowdownFactor = 0;
		ACE_Overheating_JamChance = 0;
		ACE_overheating_mrbs = 3e+09;
		ACE_overheating_allowSwapBarrel = 1;
		ACE_clearJamAction = "ReloadMagazine";
		fireLightDuration = 0.05;
		fireLightIntensity = 0.2;
		fireLightDiffuse[] = {0,0,1};
		fireLightAmbient[] = {0,0,0.5};
		magazines[] = {"DBA_556_Mag_x200"};
		class FullAuto1: Mode_FullAuto
		{
			dispersion=0.00141;
			recoil = "recoil_single_smg_02";
			recoilProne = "recoil_single_prone_smg_02";
			reloadTime = 0.066;
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
				begin1[] = {"101st_Aux_Mod\Addons\DBA_Weapons\Z6\Z6.ogg",1,1,1800};
				soundBegin[] = {"begin1",1};
			};
		};
		class overcharge_burst: Mode_FullAuto
		{
			dispersion=0.00241;
			displayName = "Over Charge Auto";
			recoil = "recoil_single_smg_02";
			recoilProne = "recoil_single_prone_smg_02";
			reloadTime = 0.015;
			burst = 25;
			textureType = "fastAuto";
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
				begin1[] = {"101st_Aux_Mod\Addons\DBA_Weapons\Z6\Z6.ogg",1,1,1800};
				soundBegin[] = {"begin1",1};
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 30;
			class CowsSlot: CowsSlot
			{
				compatibleItems[] = {};
			};
		};
	};
};
class CfgVehicles
{
	class Weapon_Base_F;
	class DBA_VH_Z6: Weapon_Base_F
	{
		author = "Frisk";
		displayName = "$STR_DBA_Maalras";
		scope = 2;
		class TransportWeapons
		{
			class DBA_Z6_T
			{
				count = 1;
				weapon = "DBA_Z6";
			};
		};
	};
};
