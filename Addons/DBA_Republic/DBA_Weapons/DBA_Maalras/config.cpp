class CfgPatches
{
	class DBA_MaalrasSMG
	{
		requiredAddons[] =
		{
			"A3_Weapons_F_Mod"
		};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] =
		{
			"DBA_MaalrasSMG_F"
		};
	};
};
class Mode_SemiAuto;
class Mode_FullAuto;
class CowsSlot;
class PointerSlot;
class SlotInfo;
class MuzzleSlot;
class CowsSlot_Rail;
class CowsSlot_Rail_Pistol;
class CowsSlot_Pistol;
class CowsSlot_MSBS65;
class CowsSlot_Dovetail;
class CowsSlot_Dovetail_RPG;
class MuzzleSlot_45ACP;
class MuzzleSlot_9mm;
class MuzzleSlot_65;
class MuzzleSlot_65MG;
class MuzzleSlot_556;
class MuzzleSlot_762;
class MuzzleSlot_338;
class MuzzleSlot_93;
class MuzzleSlot_57;
class MuzzleSlot_58;
class MuzzleSlot_545R;
class MuzzleSlot_762R;
class UnderBarrelSlot_rail;
class PointerSlot_Rail;
class PointerSlot_Pistol;
class PointerSlot_Launcher;
class cfgWeapons {
	class Rifle;
	class Rifle_Base_F : Rifle
	{
		class WeaponSlotsInfo;
	};
	class DBA_MaalrasSMG_Base_F : Rifle_Base_F
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
		author = "Vulgar";
		_generalMacro = "SMG_03_TR_BASE";
		displayName = "DBA Maalras SMG";
		model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Weapons\DBA_Maalras\MaalrasSMG.p3d";
		hiddenSelections[] = { "camo1" };
		hiddenSelectionsTextures[] = { "101st_Aux_Mod\Addons\DBA_Republic\DBA_Weapons\DBA_Maalras\data\Maalras_CO.paa" };
		hiddenSelectionsMaterials[] = { "101st_Aux_Mod\Addons\DBA_Republic\DBA_Weapons\DBA_Maalras\Rifle.rvmat" };
		modelOptics = "-";
		optics = 1;
		opticsZoomMin = 0.34999999;
		opticsZoomMax = 0.34999999;
		magazines[] =
		{
			"DBA_Maalras_Mag"
		};
		muzzles[] =
		{
			"this"
		};
		modes[] =
		{
			"Single",
			"FullAuto"
		};
		handAnim[] =
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_Mod\SMGs\SMG_03\data\Anim\P90.rtm"
		};
		reloadAction = "GestureReload_smg_03";
		recoil = "recoil_smg_03";
		magazineReloadSwitchPhase = 0.40000001;
		inertia = 0.30000001;
		aimTransitionSpeed = 1.3;
		dexterity = 1.7;
		initSpeed = -1.1;
		maxZeroing = 800;
		picture = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Effects\icons\Maalras_CA.paa";
		UiPicture = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Effects\icons\Maalras_CA.paa";
		descriptionShort = "A Light SMG";
		class Library
		{
			libTextDesc = "Gun";
		};
		class OpticsModes
		{
			class Kolimator
			{
				opticsID = 1;
				useModelOptics = 0;
				opticsPPEffects[] =
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticsZoomMin = 0.25;
				opticsZoomMax = 1.25;
				opticsZoomInit = 0.75;
				memoryPointCamera = "opticView";
				opticsFlare = 0;
				opticsDisablePeripherialVision = 1;
				distanceZoomMin = 100;
				distanceZoomMax = 100;
				cameraDir = "";
			};
		};
		reloadMagazineSound[] =
		{
			"A3\Sounds_F_Mod\arsenal\weapons\SMG\ADR_97\ADR_97_Reload",
			1,
			1,
			10
		};
		changeFiremodeSound[] =
		{
			"A3\Sounds_F_Mod\arsenal\weapons\SMG\ADR_97\ADR_97_Firemode",
			1,
			1,
			5
		};
		drySound[] =
		{
			"A3\Sounds_F_Mod\arsenal\weapons\SMG\ADR_97\ADR_97_Dry",
			1,
			1,
			10
		};
		class Single : Mode_SemiAuto
		{
			multiplier = 1;
			burst = 1;
			reloadTime = 0.06;
			soundContinuous = 0;
			autoFire = 0;
			aiRateOfFire = 0.1;
			aiRateOfFireDistance = 0; 
			dispersion = 0.0020300001;
			sounds[] = { "StandardSound" };
			class BaseSoundModeType
			{
				weaponSoundEffect = "";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
			};
			class StandardSound : BaseSoundModeType
			{
				weaponSoundEffect = "";
				begin1[] = { "101st_Aux_Mod\Addons\DBA_Weapons\Maalras\SMG.ogg",1,1,1800 };
				soundBegin[] = { "begin1",1 };
			};
		};
		class FullAuto : Mode_FullAuto
		{
			multiplier = 1;
			burst = 1;
			soundContinuous = 0;
			autoFire = 1;
			aiRateOfFire = 0.079999998;
			aiRateOfFireDistance = 0;
			dispersion = 0.0020300001;
			sounds[] = { "StandardSound" };
			class BaseSoundModeType
			{
				weaponSoundEffect = "";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
			};
			class StandardSound : BaseSoundModeType
			{
				weaponSoundEffect = "";
				begin1[] = { "101st_Aux_Mod\Addons\DBA_Republic\DBA_Weapons\DBA_Maalras\SMG.ogg",1,1,1800 };
				soundBegin[] = { "begin1",1 };
			};
			reloadTime = 0.06;
		};
		class WeaponSlotsInfo
		{
			class CowsSlot : CowsSlot_Rail
			{

				compatibleItems[] = { "DBA_MRCO_A", "DBA_MRCO_B" };
				iconPosition[] = { 0.40000001,0.30000001 };
				iconScale = 0.2;
			};
			class PointerSlot : PointerSlot_Rail
			{
				iconPosition[] = { 0.33000001,0.37 };
				iconScale = 0.25;
			};
			class MuzzleSlot : MuzzleSlot_57
			{
				iconPosition[] = { 0,0.5 };
				iconScale = 0.25;
			};
			mass = 50;
		};
	};
	class DBA_MaalrasSMG : DBA_MaalrasSMG_Base_F
	{
		author = "Vulgar";
		_generalMacro = "SMG_03C_BASE";
		maxZeroing = 600;
		initSpeed = -1;
		inertia = 0.2;
		aimTransitionSpeed = 1.4;
		dexterity = 1.8;
		class Single : Single
		{
			dispersion = 0.0012000001;
		};
		class FullAuto : FullAuto
		{
			dispersion = 0.0012000001;
		};
	};
	class DBA_MaalrasSMG_F : DBA_MaalrasSMG
	{
		author = "Vulgar";
		_generalMacro = "SMG_03_TR_black";
		scope = 2;
		displayName = "DBA Maalras";
		picture = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Effects\icons\Maalras_CA.paa";
	};
};