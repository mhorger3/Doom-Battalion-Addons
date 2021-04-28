class cfgPatches
{
	class DBA_Aux_Mod_DC_Series
	{
		author = "Frisk";
		name = "101st Aux Mod Weapons";
		requiredaddons[] = {"JLTS_weapons_DC15A","101st_Aux_Mod","DBA_patch_weapons"};
		requiredversion = 0.1;
		units[] = {"DBA_VH_DC15A"};
		weapons[] = {"DBA_DC15A","DBA_DC15LSW","DBA_DC15LE", "DBA_DC15x", "DBA_Forest_DC15x", "DBA_Desert_DC15x", "DBA_DC15GL"};
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
	class 3AS_DC15L_Base_F: Rifle_Base_F
	{
		class FullAuto;
		class WeaponSlotsInfo;
	};
	class 3AS_DC15L_F: 3AS_DC15L_Base_F
	{
		class FullAuto;
		class WeaponSlotsInfo;
	};
	class DBA_DC15A: JLTS_DC15A
	{
		JLTS_hasEMPProtection = 1;
		displayName = "[101st] DC-15A Rifle";
		baseWeapon = "DBA_DC15A";
		scope = 2;
		scopeArsenal = 2;
		ACE_Overheating_Dispersion = 0;
		ACE_Overheating_SlowdownFactor = 0;
		ACE_Overheating_JamChance = 0;
		ACE_overheating_mrbs = 3e+09;
		ACE_overheating_allowSwapBarrel = 1;
		ACE_clearJamAction = "ReloadMagazine";
		canShootInWater = 1;
		magazines[] = {"DBA_DC15a_Med_x30_mag","DBA_DC15a_High_x15_mag","DBA_DC15a_Low_x60_mag"};
		muzzles[] = {"this","Stun"};
		model = "101st_Aux_Mod\Addons\DBA_Weapons\DC15\DC15A.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"101st_Aux_Mod\Addons\DBA_Weapons\DC15\data\DC-15A_CO.paa"};
		fireLightDuration = 0.05;
		fireLightIntensity = 0.2;
		fireLightDiffuse[] = {0,0,1};
		fireLightAmbient[] = {0,0,0.5};
		class Stun: JLTS_stun_muzzle{};
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
				begin1[] = {"MRC\JLTS\weapons\DC15A\sounds\dc15a_fire",1,1,1800};
				soundBegin[] = {"begin1",1};
			};
			reloadTime = 0.13;
			recoil = "recoil_single_mx";
			recoilProne = "recoil_single_prone_mx";
			dispersion = 0.00073;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 250;
			midRangeProbab = 0.7;
			maxRange = 450;
			maxRangeProbab = 0.3;
		};
		class Burst: Mode_Burst
		{
			reloadTime = 0.13;
			dispersion = 0.0001;
			recoil = "recoil_auto_primary_3outof10";
			recoilProne = "recoil_auto_primary_prone_3outof10";
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
				begin1[] = {"MRC\JLTS\weapons\DC15A\sounds\dc15a_fire",1,1,1800};
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
				begin1[] = {"MRC\JLTS\weapons\DC15A\sounds\dc15a_fire",1,1,1800};
				soundBegin[] = {"begin1",1};
			};
			reloadTime = 0.13;
			recoil = "recoil_auto_mx";
			recoilProne = "recoil_auto_prone_mx";
			dispersion = 0.00073;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-06;
		};
		modes[] = {"Single","Burst","FullAuto"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 30;
			class CowsSlot: CowsSlot
			{
				compatibleItems[] = {"DBA_HAMR_A","DBA_HAMR_B"};
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
	class DBA_DC15GL: JLTS_DC15A
	{
		JLTS_hasEMPProtection = 1;
		displayName = "[101st] DC-15GL Rifle";
		baseWeapon = "DBA_DC15GL";
		scope = 2;
		scopeArsenal = 2;
		ACE_Overheating_Dispersion = 0;
		ACE_Overheating_SlowdownFactor = 0;
		ACE_Overheating_JamChance = 0;
		ACE_overheating_mrbs = 3e+09;
		ACE_overheating_allowSwapBarrel = 1;
		ACE_clearJamAction = "ReloadMagazine";
		canShootInWater = 1;
		magazines[] = {"DBA_DC15a_Med_x30_mag","DBA_DC15a_High_x15_mag","DBA_DC15a_Low_x60_mag"};
		muzzles[] = {"this","101st_GL"};
		model = "101st_Aux_Mod\Addons\DBA_Weapons\DC15\15GL.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"101st_Aux_Mod\Addons\DBA_Weapons\DC15\data\DC15GL_CO.paa"};
		fireLightDuration = 0.05;
		fireLightIntensity = 0.2;
		fireLightDiffuse[] = {0,0,1};
		fireLightAmbient[] = {0,0,0.5};
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
				begin1[] = {"MRC\JLTS\weapons\DC15A\sounds\dc15a_fire",1,1,1800};
				soundBegin[] = {"begin1",1};
			};
			reloadTime = 0.13;
			recoil = "recoil_single_mx";
			recoilProne = "recoil_single_prone_mx";
			dispersion = 0.00073;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 250;
			midRangeProbab = 0.7;
			maxRange = 450;
			maxRangeProbab = 0.3;
		};
		class Burst: Mode_Burst
		{
			reloadTime = 0.13;
			dispersion = 0.0001;
			recoil = "recoil_auto_primary_3outof10";
			recoilProne = "recoil_auto_primary_prone_3outof10";
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
				begin1[] = {"MRC\JLTS\weapons\DC15A\sounds\dc15a_fire",1,1,1800};
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
				begin1[] = {"MRC\JLTS\weapons\DC15A\sounds\dc15a_fire",1,1,1800};
				soundBegin[] = {"begin1",1};
			};
			reloadTime = 0.13;
			recoil = "recoil_auto_mx";
			recoilProne = "recoil_auto_prone_mx";
			dispersion = 0.00073;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-06;
		};
		modes[] = {"Single","Burst","FullAuto"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 30;
			class CowsSlot: CowsSlot
			{
				compatibleItems[] = {"DBA_HAMR_A","DBA_HAMR_B"};
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
	class DBA_DC15LE: JLTS_DC15x
	{
		weaponPoolAvailable = 1;
		JLTS_hasEMPProtection = 1;
		displayName = "[101st] DC-15A Long Engagement";
		scope = 2;
		scopeArsenal = 2;
		baseWeapon = "DBA_DC15LE";
		ACE_Overheating_Dispersion = 0;
		ACE_Overheating_SlowdownFactor = 0;
		ACE_Overheating_JamChance = 0;
		ACE_overheating_mrbs = 3e+09;
		ACE_overheating_allowSwapBarrel = 1;
		ACE_clearJamAction = "ReloadMagazine";
		canShootInWater = 1;
		selectionFireAnim = "zasleh";
		flash = "gunfire";
		flashSize = 0.5;
		fireLightIntensity = 0.2;
		fireLightDuration = 0.05;
		modes[] = {"Single"};
		muzzles[] = {"this","Stun"};
		model = "101st_Aux_Mod\Addons\DBA_Weapons\DC15\DC15LE.p3d";
		modelOptics="\A3\Weapons_F\acc\reticle_LRPS_F";
		hiddenSelections[] = {"body", "scope"};
		hiddenSelectionsTextures[] = {"101st_Aux_Mod\Addons\DBA_Weapons\DC15\data\DC15LEScoped_Gun_CO.paa", "101st_Aux_Mod\Addons\DBA_Weapons\DC15\data\DC15LEScoped_Scope_CO.paa"};
		magazines[] = {"DBA_DC15a_LE_x15_mag","DBA_DC15a_High_x15_mag"};
		class Stun: 101st_stun_muzzle
		{
			reloadAction = "ReloadMagazine";
			reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\reload_P07",1,1,10};
		};
		class OpticsModes
		{
			class Snip
			{
				cameraDir = "";
				discreteDistance[] = {300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600};
				discreteDistanceInitIndex = 1;
				discreteInitIndex = 1;
				discretefov[] = {".25/4",".25/8",".25/12",".25/24"};
				distanceZoomMax = 4000;
				distanceZoomMin = 100;
				memoryPointCamera = "eye";
				modelOptics="\A3\Weapons_F\acc\reticle_LRPS_F";
				opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
				opticsFlare = 1;
				opticsID = 1;
				weaponInfoType = "RscOptics_nightstalkergreencompass";
				opticsZoomMin = ".25/24";
				opticsZoomMax = 0.25;
				opticsZoomInit = 0.25;
				thermalMode[] = {1};
				useModelOptics = 1;
				visionMode[] = {"Normal","NVG","TI"};
				opticsDisplayName = "WFOV";
				opticsDisablePeripherialVision = 0;
			};
			class Iron
	            {
	                opticsID = 2;
	                opticsDisplayName = "";
	                useModelOptics = 0;
	                opticsPPEffects[] = {"", ""};
	                opticsFlare = 0;
	                opticsDisablePeripherialVision = 0;
	                opticsZoomMin = 0.25;
	                opticsZoomMax = 1.25;
	                opticsZoomInit = 0.75;
	                memoryPointCamera = "eye";
	                visionMode[] = {};
	                discretefov[] = {};
	                discreteDistance[] = {200};
	                discreteDistanceInitIndex = 0;
	                distanceZoomMin = 200;
	                distanceZoomMax = 200;
	                discreteInitIndex = 0;
	                modelOptics = "\A3\Weapons_F\empty";
	            };
		};
		class Single: Single
		{
			reloadTime = "0.2 /2";
			dispersion = "0.0001/10";
			recoil = "recoil_single_mx";
			recoilProne = "recoil_single_prone_mx";
			modelOptics="\A3\Weapons_F\acc\reticle_LRPS_F";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 30;
			class CowsSlot: CowsSlot
			{
				compatibleItems[] = {};
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
	class DBA_DC15x: JLTS_DC15x
	{
		author = "Frisk";
		baseWeapon = "DBA_DC15x";
		displayName = "[101st] W4-LRUS";
		scope = 2;
		scopeArsenal = 2;
		ACE_Overheating_JamChance = 0;
		ACE_overheating_mrbs = 3e+09;
		ACE_overheating_allowSwapBarrel = 1;
		ACE_clearJamAction = "ReloadMagazine";
		model = "101st_Aux_Mod\Addons\DBA_Weapons\DC15\DC15x\dc15x.p3d";
		handAnim[] = {"OFP2_ManSkeleton","\A3\Weapons_F_EPA\LongRangeRifles\DMR_01\data\Anim\dmr_01.rtm"};
		magazines[] = {"101st_DC15x_Mag"};
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
		hiddenSelectionsTextures[] = {"101st_Aux_Mod\Addons\DBA_Weapons\DC15\DC15x\data\DC15X_CO.paa","101st_Aux_Mod\Addons\DBA_Weapons\DC15\DC15x\data\DC15X_Scope_CO.paa"};
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
	};
	class DBA_Forest_DC15x: DBA_DC15x
	{
		baseWeapon = "DBA_Forest_DC15x";
		displayName = "[101st] W4-LRUS (Forest)";
		model = "101st_Aux_Mod\Addons\DBA_Weapons\DC15\DC15x\DC15X_Camo.p3d";
		hiddenSelections[] = {"camo","camo1","camo2"};
		hiddenSelectionsTextures[] = {"101st_Aux_Mod\Addons\DBA_Weapons\DC15\DC15x\data\DC15X_CO.paa","101st_Aux_Mod\Addons\DBA_Weapons\DC15\DC15x\data\DC15X_Scope_CO.paa","101st_Aux_Mod\Addons\DBA_Weapons\DC15\DC15x\data\DC15X_Netting_Forest_CO.paa"};
	};
	class DBA_Desert_DC15x: DBA_Forest_DC15x
	{
		baseWeapon = "DBA_Desert_DC15x";
		displayName = "[101st] W4-LRUS (Desert)";
		hiddenSelections[] = {"camo","camo1","camo2"};
		hiddenSelectionsTextures[] = {"101st_Aux_Mod\Addons\DBA_Weapons\DC15\DC15x\data\DC15X_CO.paa","101st_Aux_Mod\Addons\DBA_Weapons\DC15\DC15x\data\DC15X_Scope_CO.paa","101st_Aux_Mod\Addons\DBA_Weapons\DC15\DC15x\data\DC15X_Netting_Desert_CO.paa"};
	};
	class DBA_DC15LSW: 3AS_DC15L_F
	{
		displayname = "[101st] DC-15A Mod-0 LSW Rifle";
		scope = 2;
		scopeArsenal = 2;
		baseWeapon = "DBA_DC15LSW";
		ACE_Overheating_Dispersion = 0;
		ACE_Overheating_SlowdownFactor = 0;
		ACE_Overheating_JamChance = 0;
		ACE_overheating_mrbs = 3e+09;
		ACE_overheating_allowSwapBarrel = 1;
		ACE_clearJamAction = "ReloadMagazine";
		canShootInWater = 1;
		selectionFireAnim = "zasleh";
		flash = "gunfire";
		flashSize = 0.5;
		fireLightIntensity = 0.2;
		fireLightDuration = 0.05;
		modes[] = {"FullAuto","close","short","medium"};
		muzzles[] = {"this","Stun"};
		recoil = "recoil_mk20";
		magazines[] = {"DBA_DC15a_box_mag_x240_mag","101st_DC15Mod0_Mag","101st_DC15Mod0_HiMag"};
		class Stun: 101st_stun_muzzle
		{
			reloadAction = "ReloadMagazine";
			reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\reload_P07",1,1,10};
		};
		class FullAuto: FullAuto
		{
			reloadTime = "0.12*(2/3)";
			dispersion = "0.0001*10";
			recoil = "recoil_auto_mk20";
			recoilProne = "recoil_auto_prone_mk20";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 30;
			class CowsSlot: CowsSlot
			{
				compatibleItems[] = {"DBA_MRCO_A_TI_2x4", "DBA_MRCO_B_TI_2x4"};
			};
		};
	};
};
