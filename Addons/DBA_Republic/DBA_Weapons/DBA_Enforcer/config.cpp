class CfgPatches
{
	class DBA_Enforcer
	{
		addonRootClass = "A3_Weapons_F";
		requiredAddons[] =
		{
			"A3_Weapons_F"
		};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] =
		{
			"DBA_Enforcer_F"
		};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
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
class CfgWeapons
{
	class Rifle_Base_F;
	class Rifle_Short_Base_F : Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	class UGL_F;
	class DBA_Enforcer_Base_F : Rifle_Short_Base_F
	{
		author = "Vulgar";
		_generalMacro = "SMG_02_base_F";
		scope = 0;
		magazines[] =
		{
			"DBA_Enforcer_Mag"
		};
		reloadAction = "GestureReloadSMG_02";
		recoil = "recoil_smg_02";
		maxZeroing = 600;
		cursor = "smg";
		discreteDistance[] = { 100,200 };
		discreteDistanceInitIndex = 0;
		aiDispersionCoefY = 8;
		aiDispersionCoefX = 9;
		descriptionShort = "DBA Enforcer SMG";
		handAnim[] =
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_beta\Smgs\SMG_02\data\Anim\SMG_02.rtm"
		};
		hiddenSelections[] =
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Weapons\DBA_Enforcer\data\Enforcer_CO.paa",
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class MuzzleSlot : MuzzleSlot_9mm
			{
				iconPosition[] = { 0.079999998,0.40000001 };
				iconScale = 0.2;
			};
			class CowsSlot : CowsSlot_Rail
			{
				iconPosition[] = { 0.44999999,0.27000001 };
				iconScale = 0.2;
				compatibleItems[] = { "DBA_MRCO_A", "DBA_MRCO_B" };
			};
			class PointerSlot : PointerSlot_Rail
			{
				iconPosition[] = { 0.28,0.40000001 };
				iconScale = 0.25;
			};
		};
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		modes[] =
		{
			"Single",
			"Burst",
			"FullAuto"
		};
		drySound[] =
		{
			"A3\Sounds_F\arsenal\weapons\SMG\Sting\Dry_Sting",
			0.25118864,
			1,
			10
		};
		reloadMagazineSound[] =
		{
			"A3\Sounds_F\arsenal\weapons\SMG\Sting\reload_sting",
			1,
			1,
			10
		};
		changeFiremodeSound[] =
		{
			"A3\Sounds_F\arsenal\weapons\SMG\Sting\firemode_Sting",
			0.25118864,
			1,
			5
		};
		class Single : Mode_SemiAuto
		{
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
				begin1[] = { "101st_Aux_Mod\Addons\DBA_Republic\DBA_Weapons\DBA_Enforcer\SMG.ogg",1,1,1800 };
				soundBegin[] = { "begin1",1 };
			};
			reloadTime = 0.05;
			dispersion = 0.0020500001;
			recoil = "recoil_single_smg_02";
			recoilProne = "recoil_single_prone_smg_02";
			minRange = 2;
			minRangeProbab = 0.30000001;
			midRange = 100;
			midRangeProbab = 0.69999999;
			maxRange = 150;
			maxRangeProbab = 0.050000001;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
		};
		class Burst : Mode_Burst
		{
			sounds[] = { "StandardSound" };
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
			};
			class StandardSound : BaseSoundModeType
			{
				weaponSoundEffect = "";
				begin1[] = { "101st_Aux_Mod\Addons\DBA_Republic\DBA_Weapons\DBA_Enforcer\SMG.ogg",1,1,1800 };
				soundBegin[] = { "begin1",1 };
			};
			soundBurst = 0;
			burst = 3;
			reloadTime = 0.05;
			dispersion = 0.0020500001;
			recoil = "recoil_burst_smg_02";
			recoilProne = "recoil_burst_prone_smg_02";
			minRange = 2;
			minRangeProbab = 0.30000001;
			midRange = 50;
			midRangeProbab = 0.69999999;
			maxRange = 100;
			maxRangeProbab = 0.050000001;
			aiRateOfFire = 1;
			displayName = "Burst";
			aiRateOfFireDistance = 250;
		};
		class FullAuto : Mode_FullAuto
		{
			dispersion = 0.0020500001;
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
				begin1[] = { "101st_Aux_Mod\Addons\DBA_Republic\DBA_Weapons\DBA_Enforcer\SMG.ogg",1,1,1800 };
				soundBegin[] = { "begin1",1 };
			};
			reloadTime = 0.05;
			recoil = "recoil_auto_smg_02";
			recoilProne = "recoil_auto_prone_smg_02";
			minRange = 0;
			minRangeProbab = 0.89999998;
			midRange = 15;
			midRangeProbab = 0.69999999;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-006;
			aiRateOfFireDistance = 50;
		};
		class UGL_F : UGL_F
		{
		};
	};
	class DBA_Enforcer_F : DBA_Enforcer_Base_F
	{
		author = "Vulgar";
		_generalMacro = "SMG_02_F";
		baseWeapon = "DBA_Enforcer_F";
		scope = 2;
		model = "101st_Aux_Mod\DBA_Republic\DBA_Weapons\DBA_Enforcer\Enforcer.p3d";
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 50;
		};
		inertia = 0.40000001;
		aimTransitionSpeed = 1.3;
		dexterity = 1.6;
		initSpeed = 370;
		displayName = "DBA Enforcer SMG";
		picture = "\A3\Weapons_F_beta\Smgs\SMG_02\Data\UI\gear_smg_02_X_CA.paa";
		UiPicture = "\A3\Weapons_F\data\UI\icon_regular_CA.paa";
		descriptionShort = "Enforcer SMG";
		class Library
		{
			libTextDesc = "hi";
		};
	};
};
