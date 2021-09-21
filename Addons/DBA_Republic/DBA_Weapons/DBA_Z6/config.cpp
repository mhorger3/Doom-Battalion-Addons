class CfgPatches
{
	class DBA_Z6_RotaryCannon
	{
		requiredAddons[] =
		{
			"A3_Weapons_F"
		};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] =
		{
			"DBA_Z6_F",
			"DBA_Z6X_F"
		};
	};
};
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
	class Rifle_Long_Base_F : Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	class DBA_Z6_F : Rifle_Long_Base_F
	{
		author = "Vulgar";
		_generalMacro = "LMG_Mk200_F";
		baseWeapon = "DBA_Z6_F";
		scope = 2;
		magazines[] =
		{
			"DBA_Z6_Mag"
		};
		reloadAction = "GestureReloadM200";
		recoil = "recoil_mk200";
		maxZeroing = 1200;
		handAnim[] =
		{
			"OFP2_ManSkeleton",
			"\A3\weapons_f\Machineguns\M200\data\Anim\M200.rtm"
		};
		class ItemInfo
		{
			priority = 1;
		};
		displayName = "DBA Z6 Rotary Cannon";
		nameSound = "Mgun";
		class Library
		{
			libTextDesc = "Burrrrrrr";
		};
		descriptionShort = "Burrrrrrr";
		cursor = "mg";
		cursorAim = "EmptyCursor";
		inertia = 0.69999999;
		aimTransitionSpeed = 0.80000001;
		dexterity = 1.3;
		picture = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Effects\icons\Z6-X_CA.paa";
		model = "\MRC\JLTS\weapons\Z6\Z6.p3d";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"\MRC\JLTS\weapons\Z6\data\Z6_1_co.paa",
			"\MRC\JLTS\weapons\Z6\data\Z6_2_co.paa"
		};
		maxZeroing = 1200;
		handAnim[] =
		{
			"OFP2_ManSkeleton",
			"\MRC\JLTS\weapons\Z6\anims\Z6_handanim.rtm"
		};
		magazineReloadSwitchPhase = 0.54100001;
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 220;
			class MuzzleSlot : MuzzleSlot_65MG
			{
				iconPinpoint = "center";
				iconPosition[] = { -0.07,0.389 };
				iconScale = 0.2;
			};
			class CowsSlot : CowsSlot_Rail
			{
				iconPinpoint = "center";
				iconPosition[] = { 0.551,0.219 };
				iconScale = 0.2;
			};
			class PointerSlot : PointerSlot_Rail
			{
				iconPinpoint = "center";
				iconPosition[] = { 0.25400001,0.40599999 };
				iconScale = 0.23;
			};
		};
		modes[] =
		{
			"manual",
			"close",
			"short",
			"medium",
			"far_optic1",
			"far_optic2",
			"overcharge_burst"
		};
		drySound[] =
		{
			"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\dry_Mk200",
			0.44668359,
			1,
			10
		};
		reloadMagazineSound[] =
		{
			"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Reload_Mk200",
			1,
			1,
			10
		};
		class manual : Mode_FullAuto
		{
			reloadTime = 0.075000003;
			dispersion = 0.00102;
			recoil = "recoil_single_smg_02";
			recoilProne = "recoil_single_prone_smg_02";
			sounds[] =
			{
				"StandardSound",
			};
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
				begin1[] = { "101st_Aux_Mod\Addons\DBA_Republic\DBA_Weapons\DBA_Z6\Z6.ogg",1,1,1800 };
				soundBegin[] = { "begin1",1 };
			};
			soundContinuous = 0;
			soundBurst = 0;
			minRange = 0;
			minRangeProbab = 0.30000001;
			midRange = 5;
			midRangeProbab = 0.69999999;
			maxRange = 10;
			maxRangeProbab = 0.039999999;
			showToPlayer = 1;
		};
		class overcharge_burst : Mode_FullAuto
		{
			dispersion = 0.00241;
			showToPlayer = 1;
			displayName = "Over Charge Auto";
			recoil = "recoil_single_smg_02";
			recoilProne = "recoil_single_prone_smg_02";
			reloadTime = 0.015;
			burst = 25;
			textureType = "fastAuto";
			sounds[] =
			{
				"StandardSound",
			};
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
				begin1[] = { "101st_Aux_Mod\Addons\DBA_Republic\DBA_Weapons\DBA_Z6\Z6.ogg",1,1,1800 };
				soundBegin[] = { "begin1",1 };
			};
		};
		class close : manual
		{
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 10;
			minRangeProbab = 0.050000001;
			midRange = 20;
			midRangeProbab = 0.69999999;
			maxRange = 50;
			maxRangeProbab = 0.039999999;
			showToPlayer = 0;
		};
		class short : close
		{
			burst = 8;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.050000001;
			midRange = 150;
			midRangeProbab = 0.69999999;
			maxRange = 300;
			maxRangeProbab = 0.039999999;
		};
		class medium : close
		{
			burst = 7;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.050000001;
			midRange = 300;
			midRangeProbab = 0.69999999;
			maxRange = 500;
			maxRangeProbab = 0.1;
		};
		class far_optic1 : medium
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			burst = 3;
			aiRateOfFire = 10;
			aiRateOfFireDistance = 1000;
			minRange = 300;
			minRangeProbab = 0.050000001;
			midRange = 500;
			midRangeProbab = 0.40000001;
			maxRange = 650;
			maxRangeProbab = 0.0099999998;
		};
		class far_optic2 : far_optic1
		{
			burst = 3;
			requiredOpticType = 2;
			minRange = 400;
			minRangeProbab = 0.050000001;
			midRange = 750;
			midRangeProbab = 0.69999999;
			maxRange = 900;
			maxRangeProbab = 0.0099999998;
			aiRateOfFire = 10;
			aiRateOfFireDistance = 900;
		};
		aiDispersionCoefY = 24;
		aiDispersionCoefX = 21;
	};
	class Launcher;
	class Launcher_Base_F : Launcher
	{
		class WeaponSlotsInfo;
	};
	class DBA_Z6X_F : Launcher_Base_F
	{
		author = "Vulgar";
		_generalMacro = "launch_RPG32_F";
		scope = 2;
		displayName = "DBA Z6X Chaingun";
		model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Weapons\DBA_Z6\DBA_Z6X.p3d";
		picture = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Effects\icons\Z6-X_CA.paa";
		UiPicture = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Effects\icons\Z6-X_CA.paa";
		handAnim[] =
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F\Launchers\RPG32\data\Anim\RPG32.rtm"
		};
		hiddenSelections[] =
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Weapons\DBA_Z6\data\Z6X_Handle_CO.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Weapons\DBA_Z6\data\Z6X_Body_CO.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Weapons\DBA_Z6\data\Z6X_Mag_CO.paa",
		};
		hiddenSelectionsMaterials[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Weapons\DBA_Z6\Data\Z6X_Handle.RVMAT",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Weapons\DBA_Z6\Data\Z6X_Body.RVMAT",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Weapons\DBA_Z6\Data\Z6X_Mag.RVMAT",
		};
		reloadAction = "ReloadRPG";
		recoil = "recoil_auto_mk200";
		maxZeroing = 600;
		modelOptics = "\A3\Weapons_F\acc\reticle_LRPS_F";
		weaponInfoType = "RscWeaponEmpty";
		opticsZoomMin = 0.1083;
		opticsZoomMax = 0.1083;
		opticsZoomInit = 0.1083;
		cameraDir = "look";
		class GunParticles
		{
			class effect1
			{
			};
		};
		class OpticsModes
		{
			class optic
			{
				opticsID = 1;
				useModelOptics = 1;
				opticsPPEffects[] = 
				{ 
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticsFlare = 0;
				opticsZoomMin = 0.125;
				opticsZoomMax = 0.0625;
				opticsZoomInit = 0.125;
				distanceZoomMin = 300;
				distanceZoomMax = 300;
				memoryPointCamera = "eye";
				cameraDir = "look";
				visionMode[] = 
				{ 
					"Normal",
					"NVG",
					"Ti" 
				};
				thermalMode[] = { 0,1 };
				opticsDisablePeripherialVision = 1;
				discretefov[] = { 0.125, 0.0313, 0.0156 };
				discreteInitIndex = 0;
				modelOptics = "\A3\Weapons_F\acc\reticle_LRPS_F";
			};
		};
		magazines[] =
		{
			"101st_Chaingun_Mag"
		};
		modes[] =
		{
			"FullAuto"
		};
		class FullAuto : Mode_FullAuto
		{
			sounds[] = { "StandardSound" };
			class BaseSoundModeType
			{
				closure1[] = { "A3\sounds_f\weapons\gatling\gatling_rotation_short_2",0.316228,1,20 };
				soundClosure[] = { "closure1",0.5 };
			};
			class StandardSound : BaseSoundModeType
			{
				begin1[] = { "3AS\3AS_Static\data\Sounds\HeavyRepeater\Blaster_Cannon_1",0.95,1,2000 };
				soundBegin[] = { "begin1",0.1 };
			};
			reloadTime = 0.033;
			dispersion = 0.001;
			recoil = "recoil_auto_mk200";
			minRange = 2;
			minRangeProbab = 0.95;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.5;
			soundBurst = 0;
			burst = 1;
			displayName = "Full Auto";
			textureType = "fullAuto";
		};
		drySound[] =
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\Dry_RPG32",
			0.44668359,
			1,
			20
		};
		reloadMagazineSound[] =
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\reload_RPG32",
			0.25118864,
			1,
			10
		};
		canLock = 0;
		weaponLockDelay = 3;
		lockAcquire = 0;
		inertia = 0.89999998;
		aimTransitionSpeed = 0.5;
		dexterity = 1.1;
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 100;
		};
		descriptionShort = "DBA Z6-X";
		class Library
		{
			libTextDesc = "Bigger Burr";
		};
	};
};
class CfgVehicles
{
	class Weapon_Base_F;
	class DBA_Z6_Transport_F : Weapon_Base_F
	{
		author = "Vulgar";
		displayName = "DBA Z6 Rotatey boi";
		scope = 2;
		class TransportWeapons
		{
			class JLTS_Z6
			{
				count = 1;
				weapon = "DBA_Z6_F";
			};
		};
	};
};
