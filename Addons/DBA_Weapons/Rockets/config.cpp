////////////////////////////////////////////////////////////////////
//DeRap: DBA_Weapons\Rockets\config.bin
//Produced from mikero's Dos Tools Dll version 7.46
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Sat Dec 26 01:00:50 2020 : 'file' last modified on Sat Dec 26 00:55:23 2020
////////////////////////////////////////////////////////////////////

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
		weapons[] = {"DBA_Sando_Launcher","DBA_RPS6_Launcher","DBA_Chaingun"};
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
	class 3AS_Chaingun: Launcher_Base_F
	{
		class GunParticles;
		class OpticsModes;
		class FullAuto;
	};
	class DBA_Sando_Launcher: launch_RPG32_F
	{
		author = "Dutch";
		scope = 2;
		airLock = 1;
		model = "101st_Aux_Mod\Addons\DBA_Weapons\Rockets\SandoFinal.p3d";
		displayName = "[101st] Sando AT8";
		descriptionShort = "Sando AT8";
		magazines[] = {"101st_AA_Mag","101st_AT_Mag","101st_AP_Mag"};
		magazineWell[] = {};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\Dry_RPG32",0.446684,1,20};
		picture = "\MRC\JLTS\weapons\RPS6\data\ui\rps6_ui_ca.paa";
		handAnim[] = {"OFP2_ManSkeleton","\OPTRE_Weapons\Rockets\Data\Anim\m41_hand_anim.rtm"};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\reload_RPG32",0.251189,1,10};
		lockAcquire = 0;
		canLock = 2;
		htMax = 460;
		ace_overpressure_angle = 60;
		ace_overpressure_damage = 0.4;
		ace_overpressure_priority = 1;
		ace_overpressure_range = 15;
		ace_reloadlaunchers_enabled = 1;
		artilleryCharge = 1;
		artilleryDispersion = 1;
		burst = 1;
		initSpeed = 30;
		inertia = 0.9;
		magazineReloadTime = 12;
		ffCount = 1;
		ffFrequency = 1;
		ffMagnitude = 0.1;
		fireLightAmbient[] = {0,0,0};
		fireLightDiffuse[] = {0.937,0.631,0.259};
		fireLightDuration = 0.05;
		fireLightIntensity = 0.2;
		fireSpreadAngle = 3;
		forceOptics = 0;
		maxRange = 500;
		maxRangeProbab = 0.04;
		maxRecoilSway = 0.008;
		maxZeroing = 600;
		midRange = 150;
		midRangeProbab = 0.58;
		minRange = 20;
		minRangeProbab = 0.3;
		tBody = 100;
		swayCoef = 0.5;
		swayDecaySpeed = 2;
		type = 4;
		reloadTime = 3.4;
		recoil = "recoil_single_law";
		ACE_overheating_allowSwapBarrel = 1;
		ACE_overheating_dispersion = 0.75;
		ACE_Overheating_JamChance = 1.5e-12;
		ACE_overheating_mrbs = 30000000;
		ACE_overheating_slowdownFactor = 1;
		dispersion = 0.002;
		modes[] = {"Single"};
		weaponLockSystem = 0;
		weaponLockDelay = 3;
		sound[] = {"A3\Sounds_F\weapons\Launcher\rocket_launcher_5",1,1,800};
		soundFly[] = {"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\Fly_RPG32",0.316228,1.5,900};
		class OpticsModes
		{
			class StepScope
			{
				opticsID = 1;
				useModelOptics = 1;
				opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
				opticsFlare = 0;
				opticsZoomInit = "0.25/1";
				opticsZoomMax = "0.25/1";
				opticsZoomMin = "0.25/6";
				distanceZoomMin = 300;
				distanceZoomMax = 300;
				memoryPointCamera = "eye";
				cameraDir = "look";
				visionMode[] = {"Normal","NVG","Ti"};
				thermalMode[] = {0};
				opticsDisablePeripherialVision = 1;
				discretefov[] = {"0.25/1","0.25/3","0.25/6"};
				discreteInitIndex = 0;
			};
		};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType
			{
				soundBegin[] = {"begin1",1};
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Launchers\NLAW\nlaw",1.9952624,1,1800};
			};
			recoil = "recoil_single_law";
			reloadTime = 1.6;
			dispersion = 0.0002;
			minRange = 10;
			minRangeProbab = 0.5;
			midRange = 800;
			midRangeProbab = 0.7;
			maxRange = 1000;
			maxRangeProbab = 0.3;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 600;
			artilleryCharge = 1;
			artilleryDispersion = 1;
		};
		weaponInfoType = "RscOptics_titan";
		modelOptics = "\A3\Weapons_F_Beta\acc\reticle_titan.p3d";
		UiPicture = "\A3\Weapons_F\Data\UI\icon_at_CA.paa";
		optics = 1;
		opticsDisablePeripherialVision = 1;
		opticsFlare = 1;
		opticsPPEffects[] = {};
		opticsZoomInit = 0.1083;
		opticsZoomMax = 0.1083;
		opticsZoomMin = 0.1083;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 85;
		};
	};
	class DBA_RPS6_Launcher: launch_RPG32_F
	{
		reloadaction = "ReloadRPG";
		magazines[] = {"101st_RPS6_HEAA","101st_RPS6_HEDP"};
		scope = 2;
		author = "Dutch";
		dlc = "101st_Aux_Mod";
		displayName = "[101st] RPS6 Launcher";
		descriptionShort = "RPS6 Launcher";
		model = "101st_Aux_Mod\Addons\DBA_Weapons\Rockets\RPS6.p3d";
		sounds[] = {"StandardSound"};
		cameraDir = "look";
		handAnim[] = {"OFP2_ManSkeleton","101st_Aux_Mod\Addons\DBA_Weapons\Rockets\data\MAAWS.rtm"};
		class Library
		{
			libtextdesc = "";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 85;
		};
		inertia = 1.2;
	};
	class DBA_Chaingun: 3AS_Chaingun
	{
		author = "Frisk";
		scope = 2;
		displayName = "[101st] Z6X-A Chaingun";
		descriptionShort = "Z6X-A Chaingun";
		magazines[] = {"101st_Chaingun_Mag"};
		class OpticsModes
		{
			class StepScope
			{
				opticsID = 1;
				useModelOptics = 1;
				opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
				opticsFlare = 0;
				opticsZoomMin = 0.125;
				opticsZoomMax = "0.125/2";
				opticsZoomInit = 0.125;
				distanceZoomMin = 300;
				distanceZoomMax = 300;
				memoryPointCamera = "eye";
				cameraDir = "look";
				visionMode[] = {"Normal","NVG","Ti"};
				thermalMode[] = {0,1};
				opticsDisablePeripherialVision = 1;
				discretefov[] = {0.125,"0.125/4","0.125/8"};
				discreteInitIndex = 0;
				modelOptics="\A3\Weapons_F\acc\reticle_LRPS_F";
			};
		};
		modelOptics="\A3\Weapons_F\acc\reticle_LRPS_F";
		optics = 1;
		opticsDisablePeripherialVision = 1;
		opticsFlare = 1;
		opticsPPEffects[] = {};
		opticsZoomInit = 0.1083;
		opticsZoomMax = 0.1083;
		opticsZoomMin = 0.1083;
		flash = "gunfire";
		flashSize = 0.5;
		fireLightAmbient[] = {0,0,0.5};
		fireLightIntensity = 0.2;
		fireLightDuration = 0.05;
		fireLightDiffuse[] = {0,0,1};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\sounds_f\weapons\gatling\gatling_rotation_short_2",0.316228,1,20};
				soundClosure[] = {"closure1",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"3AS\3AS_Static\data\Sounds\HeavyRepeater\Blaster_Cannon_1",0.95,1,2000};
				soundBegin[] = {"begin1",0.1};
			};
			reloadTime = 0.033;
			dispersion = 0.001;
			recoil = "recoil_auto_mk200";
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.05;
			soundBurst = 0;
			burst = 1;
			displayName = "Full";
			textureType = "fullAuto";
		};
	};
};
// class CfgVehicles
// {
// 	class Weapon_Base_F;
// 	class DBA_VH_Maalras: Weapon_Base_F
// 	{
// 		author = "Frisk";
// 		displayName = "$STR_DBA_Maalras";
// 		scope = 2;
// 		class TransportWeapons
// 		{
// 			class DBA_Maalras_T
// 			{
// 				count = 1;
// 				weapon = "DBA_MaalrasSMG";
// 			};
// 		};
// 	};
// 	class DBA_VH_PDWSMG: Weapon_Base_F
// 	{
// 		author = "Frisk";
// 		displayName = "$STR_DBA_Maalras";
// 		scope = 2;
// 		class TransportWeapons
// 		{
// 			class DBA_Maalras_T
// 			{
// 				count = 1;
// 				weapon = "DBA_MaalrasSMG";
// 			};
// 		};
// 	};
// };