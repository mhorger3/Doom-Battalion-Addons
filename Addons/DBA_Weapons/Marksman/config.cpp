class cfgPatches
{
	class DBA_Aux_Mod_Marksman
	{
		author = "Frisk";
		name = "101st Aux Mod Weapons";
		requiredaddons[] = {"JLTS_weapons_DC15A","101st_Aux_Mod","DBA_patch_weapons"};
		requiredversion = 0.1;
		units[] = {};
		weapons[] = {"DBA_Valken", "DBA_Verpine", "DBA_Zillo", "DBA_Gundark"};
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
	class DBA_Valken: JLTS_DC15x
	{
		baseWeapon = "DBA_Valken";
		ACE_overheating_allowSwapBarrel = 1;
		ACE_Overheating_Dispersion = 0;
		ACE_Overheating_JamChance = 0;
		ACE_overheating_mrbs = 3e+009;
		ACE_overheating_slowdownFactor = 0;
		ace_overpressure_angle = 0;
		ace_overpressure_damage = 0;
		ace_overpressure_priority = 1;
		ace_overpressure_range = 0;
		author="Trip";
		scope=2;
		model="101st_Aux_Mod\Addons\DBA_Weapons\Marksman\valken.p3d";
		picture="101st_Aux_Mod\Addons\DBA_Weapons\effects\icons\Valken_CA.paa";
		muzzles[] = {"this"};
		//magazines[] = {"101st_Valken_Mag"};
		magazines[] = { "DBA_762_50RoundMag_Base" };
		modelOptics="\A3\Weapons_F\acc\reticle_LRPS_F";
		opticsDisablePeripherialVision = 1;
		opticsFlare = 1;
		displayName = "[101st] XLE-47 Valken";
		descriptionShort = "XLE-47 Valken";
		hiddenSelections[]=
		{
			"camo1"
		};
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\firemode_Mk20",0.451189,1,5};
		hiddenSelectionsTextures[] = {"101st_Aux_Mod\Addons\DBA_Weapons\Marksman\data\Valken_CO.paa"};
		hiddenSelectionsMaterials[] = {"101st_Aux_Mod\Addons\DBA_Weapons\Marksman\data\Valken.rvmat"};
		modes[] = {"Single","close","short","medium", "Burst"};
		recoil = "recoil_zafir";
		simulation = "Weapon";
		fireLightDuration=0.050000001;
		fireLightIntensity=0.2;
		fireLightDiffuse[] = {0,0,1};
		fireLightAmbient[] = {0,0,1};
		weaponInfoType = "RscOptics_nightstalkergreencompass";
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
		class Single: Mode_SemiAuto
			{
				sounds[]=
				{
					"StandardSound"
				};
				class StandardSound
				{
					weaponSoundEffect = "DefaultRifle";
					begin1[] = {"101st_Aux_Mod\Addons\DBA_Weapons\Marksman\valken.ogg",5,1,1800};
					closure2[] = {"A3\sounds_f\weapons\closure\zafir_closure_2",0.5,1,10};
					soundBegin[] = {"begin1",1};
					soundClosure[] = {"closure1",1};
				};
				recoil = "recoil_auto_mk200";
				recoilProne = "recoil_auto_prone_mk200";
				reloadTime = 0.15;
				ddispersion = 0.00087;
				minRange = 5;
				minRangeProbab = 0.5;
				midRange = 500;
				midRangeProbab = 0.7;
				maxRange = 750;
				maxRangeProbab = 0.3;
				aiRateOfFire=1;
				aiRateOfFireDistance=300;
			};
			class close: Single
			{
				showToPlayer=0;
				aiRateOfFire=0.25;
				aiRateOfFireDistance=400;
				dispersion = "5*0.00087";
				minRange=500;
				minRangeProbab=0.050000001;
				midRange=750;
				midRangeProbab=0.69999999;
				maxRange=1000;
				maxRangeProbab=0.2;
			};
			class short: close
			{
				aiRateOfFire=0.5;
				aiRateOfFireDistance=500;
				minRange=750;
				minRangeProbab=0.2;
				midRange=1000;
				midRangeProbab=0.69999999;
				maxRange=1500;
				maxRangeProbab=0.2;
			};
			class medium: close
			{
				aiRateOfFire=1;
				aiRateOfFireDistance=900;
				minRange=1000;
				minRangeProbab=0.2;
				midRange=1750;
				midRangeProbab=0.69999999;
				maxRange=2000;
				maxRangeProbab=0.2;
			};
			class Burst : Mode_Burst
			{
				aiRateOfFire = 1;
				aiRateOfFireDistance = 250;
				burst = 3;
				dispersion = 0.0005;
				displayName = "Burst";
				recoil = "recoil_burst_smg_01";
				recoilProne = "recoil_burst_prone_smg_01";
				reloadTime = 0.12;
				maxRange = 2000;
				maxRangeProbab = 0.05;
				midRange = 1500;
				midRangeProbab = 0.7;
				minRange = 5;
				minRangeProbab = 0.3;
				sounds[] = {"StandardSound"};
				class StandardSound
				{
					weaponSoundEffect = "DefaultRifle";
					begin1[] = {"101st_Aux_Mod\Addons\DBA_Weapons\Marksman\valken.ogg",5,1,1800};
					closure2[] = {"A3\sounds_f\weapons\closure\zafir_closure_2",0.5,1,10};
					soundBegin[] = {"begin1",1};
					soundClosure[] = {"closure1",1};
				};
			};
		inertia = 3;
		dexterity = 1.7;
		initSpeed = 1050;
		maxRecoilSway = 0.008;
		swayDecaySpeed = 2;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=30;
			holsterScale = 0.9;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[] = {};
			};
			class CowsSlot: CowsSlot
			{
				compatibleItems[] = {};	
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[] = {};
				
			};
			class UnderBarrelSlot : UnderBarrelSlot
			{
				compatibleItems[] = {};
			};
		};
	};
	
	class DBA_Gundark: JLTS_DC15x
	{
		ACE_overheating_allowSwapBarrel = 1;
		ACE_Overheating_Dispersion = 0;
		ACE_Overheating_JamChance = 0;
		ACE_overheating_mrbs = 3e+009;
		ACE_overheating_slowdownFactor = 0;
		ace_overpressure_angle = 0;
		ace_overpressure_damage = 0;
		ace_overpressure_priority = 1;
		ace_overpressure_range = 0;
		selectionFireAnim="zasleh";
		flash="gunfire";
		flashSize=0.5;
		fireLightIntensity=0.02;
		fireLightDuration=0.050000001;
		author="Dutch";
		scope=2;
		model="\101st_Aux_Mod\Addons\DBA_Weapons\Marksman\gundark.p3d";
		muzzles[] = {"this"};
		//magazines[] = {"101st_Gundark_Mag"};
		magazines[] = 
		{ 
			"DBA_127x99_Mag_Base",
			"DBA_127x99Overcharge_Mag_Base"
		};
		reloadAction = "ReloadMagazine";
		modelOptics="\A3\Weapons_F\acc\reticle_LRPS_F";
		opticsDisablePeripherialVision = 1;
		opticsFlare = 1;
		displayName = "[101st] Gundark XLE-8";
		descriptionShort = "Gundark XLE-8";
		hiddenSelections[]=
		{
			"body", "scope"
		};
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\firemode_Mk20",0.251189,1,5};
		hiddenSelectionsTextures[] = {"\101st_Aux_Mod\Addons\DBA_Weapons\Marksman\data\Gundark_CO.paa", "\101st_Aux_Mod\Addons\DBA_Weapons\Marksman\data\Scope_CO.paa"};
		soundBullet[]={};
		modes[]=
		{
			"Single",
			"close",
			"short",
			"medium"
		};
		recoil = "recoil_mk20";
		simulation = "Weapon";
		fireLightDuration=0.050000001;
		fireLightIntensity=0.2;
		fireLightDiffuse[] = {0,0,0.1};
		fireLightAmbient[] = {0,0,0.5};
		weaponInfoType = "RscOptics_nightstalkergreencompass";
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
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_Closure_1",0.398107,1,30};
				closure2[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_Closure_2",0.398107,1,30};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound
			{
				weaponSoundEffect = "DefaultRifle";
				begin1[] = {"MRC\JLTS\weapons\DC15X\sounds\dc15x_fire",2.5,1,1800};
				closure2[] = {"A3\sounds_f\weapons\closure\zafir_closure_2",0.5,1,10};
				soundBegin[] = {"begin1",1};
				soundClosure[] = {"closure1",1};
			};
			recoil = "recoil_single_ebr";
			recoilProne = "recoil_single_prone_ebr";
			reloadTime = 0.5;
			dispersion = 0.0001;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 750;
			midRangeProbab = 0.7;
			maxRange = 1500;
			maxRangeProbab = 0.3;
			aiRateOfFire=1;
			aiRateOfFireDistance=500;
		};
		class close: Single
		{
			showToPlayer=0;
			aiRateOfFire=0.25;
			aiRateOfFireDistance=400;
			dispersion = "5*0.00087";
			minRange=1000;
			minRangeProbab=0.050000001;
			midRange=1500;
			midRangeProbab=0.69999999;
			maxRange=3000;
			maxRangeProbab=0.2;
		};
		class short: close
		{
			aiRateOfFire=0.5;
			aiRateOfFireDistance=500;
			minRange=2000;
			minRangeProbab=0.2;
			midRange=3000;
			midRangeProbab=0.69999999;
			maxRange=4000;
			maxRangeProbab=0.2;
		};
		class medium: close
		{
			aiRateOfFire=1;
			aiRateOfFireDistance=900;
			minRange=4000;
			minRangeProbab=0.2;
			midRange=4500;
			midRangeProbab=0.69999999;
			maxRange=5000;
			maxRangeProbab=0.2;
		};
		inertia = 1.2;
		dexterity=1;
		maxRecoilSway = 0.03;
		swayDecaySpeed=1.25;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=30;
			holsterScale = 0.9;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[] = {};
			};
			class CowsSlot: CowsSlot
			{
				compatibleItems[] = {};	
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[] = {};	
			};
			class UnderBarrelSlot : UnderBarrelSlot
			{
				compatibleItems[] = {};
			};
		};
	};
	
	class DBA_Verpine : JLTS_DC15x
	{
		baseWeapon = "DBA_Verpine";
		ACE_overheating_allowSwapBarrel = 1;
		ACE_Overheating_Dispersion = 0;
		ACE_Overheating_JamChance = 0;
		ACE_overheating_mrbs = 3e+009;
		ACE_overheating_slowdownFactor = 0;
		ace_overpressure_angle = 0;
		ace_overpressure_damage = 0;
		ace_overpressure_priority = 1;
		ace_overpressure_range = 0;
		author="Trip & Dutch";
		scope=2;
		model="101st_Aux_Mod\Addons\DBA_Weapons\Marksman\verpine.p3d";
		picture="101st_Aux_Mod\Addons\DBA_Weapons\effects\icons\Verpine_CA.paa";
		muzzles[] = {"this"};
		//magazines[] = {"DBA_DC15a_LE_x15_mag","DBA_DC15a_High_x15_mag"};
		magazines[] = { "DBA_762_15RoundClip_Base" };
		reloadAction = "ReloadMagazine";
		displayName = "[101st] Verpine DMR";
		descriptionShort = "Verpine DMR";
		hiddenSelections[]=
		{
			"camo1"
		};
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\firemode_Mk20",0.451189,1,5};
		hiddenSelectionsTextures[] = {"101st_Aux_Mod\Addons\DBA_Weapons\Marksman\data\VerpineDMR_CO.paa"};
		modes[] = {"Single"};
		recoil = "recoil_mk20";
		simulation = "Weapon";
		selectionFireAnim="zasleh";
		flash="gunfire";
		flashSize=0.5;
		fireLightIntensity=0.2;
		fireLightDuration=0.050000001;
		modelOptics="\A3\Weapons_F\acc\reticle_LRPS_F";
		opticsDisablePeripherialVision = 1;
		opticsFlare = 1;
		weaponInfoType = "RscOptics_nightstalkerred";
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
				weaponInfoType = "RscOptics_nightstalkerblue";
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
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				weaponSoundEffect = "DefaultRifle";
				begin1[] = {"MRC\JLTS\weapons\DC15X\sounds\dc15x_fire",2.5,1,1800};
				closure2[] = {"A3\sounds_f\weapons\closure\zafir_closure_2",0.5,1,10};
				soundBegin[] = {"begin1",1};
				soundClosure[] = {"closure1",1};
			};
			recoil = "recoil_single_mx";
			recoilProne = "recoil_single_prone_mx";
			reloadTime = 0.1;
			dispersion = 0.0001;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 750;
			midRangeProbab = 0.7;
			maxRange = 1500;
			maxRangeProbab = 0.3;
			aiRateOfFire=1;
			aiRateOfFireDistance=300;
		};

		modes[] = {"Single"};

		inertia = 1;
		dexterity=1;
		initSpeed=-1;
		maxRecoilSway = 0.03;
		swayDecaySpeed=0.75;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=45;
			holsterScale = 0.9;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[] = {""};
			};
			class CowsSlot: CowsSlot
			{
				compatibleItems[] = {""};				
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[] = {""};
			};
		};
	};
	class DBA_Zillo : Rifle_Long_Base_F
	{
		ACE_overheating_allowSwapBarrel = 1;
		ACE_Overheating_Dispersion = 0;
		ACE_Overheating_JamChance = 0;
		ACE_overheating_mrbs = 3e+009;
		ACE_overheating_slowdownFactor = 0;
		ace_overpressure_angle = 0;
		ace_overpressure_damage = 0;
		ace_overpressure_priority = 1;
		ace_overpressure_range = 0;
		selectionFireAnim="zasleh";
		flash="gunfire";
		flashSize=0.5;
		fireLightIntensity=0.5;
		fireLightDuration=0.050000001;
		fireLightDiffuse[] = {1,.65,0};
		fireLightAmbient[] = {1,.65,0};
		author="Dutch, Frisk";
		scope=2;
		model="101st_Aux_Mod\Addons\DBA_Weapons\Marksman\zillo.p3d";
		aimTransitionSpeed = 0.5;
		bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01",0.891251,1,25};
		bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02",0.707946,1,25};
		bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03",0.707946,1,25};
		bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04",0.707946,1,25};
		bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02",0.891251,1,25};
		bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03",0.891251,1,25};
		bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04",0.891251,1,25};
		bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01",0.794328,1,25};
		bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02",0.794328,1,25};
		bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03",0.794328,1,25};
		bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04",0.794328,1,25};
		bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01",0.707946,1,25};
		descriptionShort = "101st AT Rifle";
		muzzles[] = {"this"};
		//magazines[] = {"101st_Zillo_Mag"};
		magazines[] = { "DBA_AntiTankRound_Base" };
		displayName = "[101st] Zillo AT-6";
		drySound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_dry",0.501187,1,20};
		hiddenSelectionsTextures[] = {"101st_Aux_Mod\Addons\DBA_Weapons\Marksman\data\atRifle_CO.paa"};
		hiddenSelections[]=
		{
			"camo1"
		};
		modes[] = {"Single","far_optic1","medium_optic2","far_optic2"};
		picture = "\A3\Weapons_F\LongRangeRifles\M320\Data\UI\gear_M320_LRR_X_CA.paa";
		recoil = "recoil_m320";
		recoilProne = "assaultRifleBase";
		reloadAction = "GestureReloadLRR";
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_reload",1,1,10};
		UiPicture = "\A3\weapons_f\data\UI\icon_sniper_CA.paa";
		handAnim[] = {"OFP2_ManSkeleton","\MRC\JLTS\weapons\E5S\anims\E5S_handanim.rtm"};
		class Single: Mode_SemiAuto
		{
			sounds[]=
				{
					"StandardSound"
				};
				class BaseSoundModeType
				{
				};
				class StandardSound: BaseSoundModeType
				{
					soundsetshot[] = {"M320_Shot_SoundSet","M320_Tail_SoundSet","M320_InteriorTail_SoundSet"};
				};
				recoil = "recoil_single_mx";
				recoilProne = "recoil_single_prone_mx";
				reloadTime = 2.5;
				dispersion = "((0.50) * 0.00029088)";
				minRange = 2;
				minRangeProbab = 0.1;
				midRange = 750;
				midRangeProbab = 0.7;
				maxRange = 1500;
				maxRangeProbab = 0.3;
				aiRateOfFire=1;
				aiRateOfFireDistance=500;
		};
		class far_optic1: Single
		{
				sounds[]=
				{
					"StandardSound"
				};
				class BaseSoundModeType
				{
				};
				class StandardSound: BaseSoundModeType
				{
					soundsetshot[] = {"M320_Shot_SoundSet","M320_Tail_SoundSet","M320_InteriorTail_SoundSet"};
				};
				recoil = "recoil_single_mx";
				recoilProne = "recoil_single_prone_mx";
				reloadTime = 2.5;
				dispersion = "((0.50) * 0.00029088)";
				minRange = 1500;
				minRangeProbab = 0.1;
				midRange = 2000;
				midRangeProbab = 0.7;
				maxRange = 3500;
				maxRangeProbab = 0.3;
				aiRateOfFire=1;
				aiRateOfFireDistance=700;
		};
		class medium_optic2: Single
		{
				sounds[]=
				{
					"StandardSound"
				};
				class BaseSoundModeType
				{
				};
				class StandardSound: BaseSoundModeType
				{
					soundsetshot[] = {"M320_Shot_SoundSet","M320_Tail_SoundSet","M320_InteriorTail_SoundSet"};
				};
				recoil = "recoil_single_mx";
				recoilProne = "recoil_single_prone_mx";
				reloadTime = 3.8;
				dispersion = "((0.50) * 0.00029088)";
				minRange = 3500;
				minRangeProbab = 0.1;
				midRange = 5000;
				midRangeProbab = 0.7;
				maxRange = 7500;
				maxRangeProbab = 0.3;
				aiRateOfFire=1;
				aiRateOfFireDistance=1000;
		};
		class far_optic2: far_optic1
		{
				sounds[]=
				{
					"StandardSound"
				};
				class BaseSoundModeType
				{
				};
				class StandardSound: BaseSoundModeType
				{
					soundsetshot[] = {"M320_Shot_SoundSet","M320_Tail_SoundSet","M320_InteriorTail_SoundSet"};
				};
				recoil = "recoil_single_mx";
				recoilProne = "recoil_single_prone_mx";
				reloadTime = 3.8;
				dispersion = "((0.50) * 0.00029088)";
				minRange = 5000;
				minRangeProbab = 0.1;
				midRange = 7500;
				midRangeProbab = 0.7;
				maxRange = 10000;
				maxRangeProbab = 0.3;
				aiRateOfFire=1;
				aiRateOfFireDistance=2000;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=150;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[] = {};
			};
			class CowsSlot: CowsSlot
			{
				compatibleItems[] = {"optic_LRPS", "optic_KHS_blk", "optic_DMS", "optic_AMS", "RD501_scope_dc_15a_x4_x8"};		
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[] = {};	
			};
			
			class UnderBarrelSlot : UnderBarrelSlot
			{
				compatibleItems[] = {"bipod_01_F_blk","bipod_02_F_blk","bipod_03_F_blk"};
			}
		};
	};
};
// class CfgVehicles
// {
// 	class Weapon_Base_F;
// 	class DBA_VH_DC15A: Weapon_Base_F
// 	{
// 		author = "Frisk";
// 		displayName = "$STR_DBA_DC15A";
// 		scope = 2;
// 		class TransportWeapons
// 		{
// 			class DBA_Valken
// 			{
// 				count = 1;
// 				weapon = "DBA_DC15A";
// 			};
// 			class DBA_Verpine
// 			{
// 				count = 1;
// 				weapon = "DBA_DC15LE";
// 			};
// 		};
// 	};
// };