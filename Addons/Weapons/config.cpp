class cfgPatches
{	
	class 101st_Aux_Mod_Weapons
	{
		author="Mutt / Dutch";
		name="101st Aux Mod Weapons";
		requiredaddons[] = 
		{
			"A3_Weapons_F", 
			"A3_Functions_F",
			"A3_Static_F_Jets_SAM_System_01", 
			"A3_Static_F_Jets_SAM_System_02", 
			"A3_Data_F_Destroyer",
			"A3_Static_F_Destroyer", 
			"A3_Static_F_Destroyer_Ship_MRLS_01", 
			"OPTRE_Core", 
			"OPTRE_Weapons", 
			"OPTRE_Weapons_SMG",
			"OPTRE_Weapons_Rockets", 
			"A3_Armor_F_EPB_MBT_03",
			"101st_Aux_Mod",
			"DBA_patch_weapons"
		};
		requiredversion = 0.1;
		units[] = 
		{
		};
		weapons[]=
		{
			
		};
	}
};

// THIS IS WHERE THE REST OF THE SWOP BASED WEAPONS ARE, THEY ARE LEFT OUT OF CFGPATCHES FOR A REASON

class UGL_F;
class Mode_SemiAuto;
class Mode_Burst : Mode_SemiAuto {
	class BaseSoundModeType;
	class StandardSound;
};
class Mode_FullAuto : Mode_SemiAuto {
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
	class JLTS_stun_muzzle;
	class 101st_stun_muzzle : JLTS_stun_muzzle
	{
		magazines[]=
		{
			"101st_Stun_Short",
			"101st_Stun_Long"
		};
		reloadAction = "ReloadMagazine";
	};

	// add custom DC series with JLTS stuns here
	class Pistol;
	class Pistol_Base_F: Pistol
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
	};
	class Rifle_Long_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	class Launcher_Base_F;
	class launch_RPG32_F: Launcher_Base_F
	{
		class WeaponSlotsInfo;
	};
	class AntiMaterial: Rifle_Long_Base_F
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
		magazines[] = {"101st_Gundark_Mag"};
		reloadAction = "ReloadMagazine";
		modelOptics="\A3\Weapons_F\acc\reticle_LRPS_F";
		opticsDisablePeripherialVision = 1;
		opticsFlare = 1;
		displayName = "[101st] Gundark XLE-8";
		descriptionShort = "Gundark XLE-8";
		hiddenSelections[]=
		{
			"camo1", "camo2"
		};
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\firemode_Mk20",0.251189,1,5};
		hiddenSelectionsTextures[] = {"\101st_Aux_Mod\Addons\DBA_Weapons\Marksman\data\Gundark_CO.paa", "\101st_Aux_Mod\Addons\DBA_Weapons\Marksman\data\Gundark_Stock_CO.paa"};
		drySound[] = {"SW_EmpireWeapons\e11\noammo-16.ogg",1,1,20};
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
			class StandardSound: BaseSoundModeType
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

	class Clone_Cannon: Rifle_Long_Base_F
	{
		author="Dutch";
		model="\101st_Aux_Mod\Addons\Weapons\Repulsor\cannon.p3d";
		displayName = "[101st] Reciprocating Quad Blaster";
		descriptionShort = "Quad Blaster";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[] = {"\101st_Aux_Mod\Addons\Weapons\Repulsor\data\gun_CO.paa"};
		ACE_overheating_allowSwapBarrel = 1;
		ACE_Overheating_Dispersion = 0;
		ACE_Overheating_JamChance = 0;
		ACE_overheating_mrbs = 3e+009;
		ACE_overheating_slowdownFactor = 0;
		ace_overpressure_angle = 0;
		ace_overpressure_damage = 0;
		ace_overpressure_priority = 1;
		ace_overpressure_range = 0;
		scope=0;
		muzzles[] = {"this"};
		magazines[] = {"101st_Quad_Mag"};
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
		drySound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG_02_Dry",0.177828,1,10};
		reloadMagazineSound[] = {"SW_CloneWarsWeapons\M134\reload2.ogg",1.5,1,20};
		soundBullet[]={};
		modes[] = {"manual","close","short","medium","far_optic1","far_optic2","ACE_Burst_far"};
		picture = "\A3\Weapons_F_Mark\Machineguns\MMG_02\Data\UI\gear_MMG_02_black_X_co.paa";
		recoil = "recoil_mmg_01";
		simulation = "Weapon";
		handAnim[] = {"OFP2_ManSkeleton","SW_CloneWarsWeapons\SW_Z6\anim\M134.rtm"};
		fireLightDuration=0.050000001;
		fireLightIntensity=0.2;
		fireLightDiffuse[] = {0.937,0.631,0.259};
		fireLightAmbient[] = {0,0,0.5};
		class manual: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
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
				begin1[] = {"SW_EmpireWeapons\e22\e225.ogg",0.8,1,1800};
				soundBegin[] = {"begin1",1};
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Closure_Mx_01",0.5,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Closure_Mx_02",0.5,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			recoil = "recoil_auto_primary_3outof10";
			recoilProne = "recoil_single_prone_mx";
			reloadTime = 0.1;
			burst = 1;
			dispersion = 0.00073;
			minRange = 1;
			minRangeProbab = 0.1;
			midRange = 30;
			midRangeProbab = 0.6;
			maxRange = 80;
			maxRangeProbab = 0.3;
			aiRateOfFire=1;
			aiRateOfFireDistance=500;
		};
		class close: manual
		{
			showToPlayer=0;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=50;
			dispersion = 0.00073;
			minRange=0;
			minRangeProbab=0.050000001;
			midRange=25;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.2;
		};
		class short: close
		{
			aiRateOfFire=0.5;
			aiRateOfFireDistance=200;
			minRange=50;
			minRangeProbab=0.2;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.2;
		};
		class medium: close
		{
			aiRateOfFire=1;
			aiRateOfFireDistance=600;
			minRange=300;
			minRangeProbab=0.2;
			midRange=450;
			midRangeProbab=0.69999999;
			maxRange=600;
			maxRangeProbab=0.2;
		};
		class ACE_Burst_far : medium
		{
			aiRateOfFireDistance = 900;
			aiRateOfFireDispersion = 1;
			dispersion = "5*0.00087";
			dispersion = 0.00073;
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
				begin1[] = {"SW_EmpireWeapons\e22\e225.ogg",0.8,1,1800};
				soundBegin[] = {"begin1",1};
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Closure_Mx_01",0.5,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Closure_Mx_02",0.5,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
		};
		class far_optic1 : close
		{
			aiRateOfFire=0.5;
			aiRateOfFireDistance=200;
			minRange=400;
			minRangeProbab=0.2;
			midRange=500;
			midRangeProbab=0.69999999;
			maxRange=600;
			maxRangeProbab=0.2;
		};
		class far_optic2 : far_optic1
		{
			aiRateOfFire=0.5;
			aiRateOfFireDistance=200;
			minRange=600;
			minRangeProbab=0.2;
			midRange=700;
			midRangeProbab=0.69999999;
			maxRange=800;
			maxRangeProbab=0.2;
		};
		inertia = 1.1;
		dexterity=1.7;
		initSpeed=-1;
		maxRecoilSway = 0.008;
		swayDecaySpeed=2;
		UIPicture = "\A3\weapons_f\data\UI\icon_mg_CA.paa";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=150;
			holsterScale = 0.9;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]=
				{
				};
			};
			class CowsSlot: CowsSlot
			{	
			compatibleItems[]=
				{
					"101st_Aux_Pistol_A"
				};
			};
			class UnderBarrelSlot : UnderBarrelSlot
			{
				compatibleItems[]=
				{
				};
			};
		};
	};

	class 101st_Scuba_Rifle: Rifle_Long_Base_F
	{
		displayName="[101st] Scuba Rifle";
		scope=0;
		scopeArsenal=2;
		weaponPoolAvailable=1;
		magazines[]=
		{
			"DBA_DC15s_x60_mag",
			"DBA_DC15_underwater_x40_mag"
		};
		muzzles[] = {"this", "Stun"};
		model="101st_Aux_Mod\Addons\Weapons\Scuba\Scuba.p3d";
		hiddenSelections[]=
		{
			"rifle", "flashlight"
		};
		hiddenSelectionsTextures[] = {"\101st_Aux_Mod\Addons\Weapons\Scuba\data\ScubaRifle_CO.paa","\101st_Aux_Mod\Addons\Weapons\Scuba\data\Flashlight_CO.paa" };
		ACE_Overheating_Dispersion=0;
		ACE_Overheating_SlowdownFactor=0;
		ACE_Overheating_JamChance=0;
		ACE_overheating_mrbs=3e+009;
		ACE_overheating_allowSwapBarrel=1;
		ACE_clearJamAction="ReloadMagazine";
		modes[]=
		{
			"Single",
			"FullAuto",
			"close",
			"short",
			"medium"
		};
		class Stun: 101st_stun_muzzle
		{
			reloadAction="ReloadMagazine";
			reloadMagazineSound[]=
			{
				"A3\Sounds_F\arsenal\weapons\Pistols\P07\reload_P07",
				1,
				1,
				10
			};
		};
		class FullAuto: Single
		{
			reloadTime=0.075000003;
			dispersion="0.0001*1";
		};
		class Single: Mode_SemiAuto
		{
			reloadTime="0.075*2";
			dispersion="0.0001*1*0.8";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=30;
			class CowsSlot: CowsSlot
			{
				access=1;
				compatibleItems[]=
				{
					"RD501_scope_dc_15a_acog", "SWOP_DC15S_HoloScope", "101st_Aux_Pistol_A", "101st_Aux_HAMR_A"
				};
			};
		};
	};

	class 101st_Westar2_Pistol: Pistol_Base_F
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
		author="Dutch";
		scope=0;
		JLTS_canHaveShield=1;
		JLTS_shieldedWeapon="101st_Westar_shield";
		model="\101st_Aux_Mod\Addons\Weapons\NewWestar\wester2.p3d";
		picture = "\SW_extraweapons\SW_Westar35\westar35icon_x_ca.paa";
		muzzles[] = {"this", "Stun"};
		magazines[]=
		{
			"101st_Westar_Shooter_Mag",
			"101st_Westar_Shooter_Mag_Red",
			"101st_Westar_Shooter_Mag_Green"
		};
		reloadAction="GestureReloadPistol";
		displayName = "[101st] SP1 Pistol";
		descriptionShort = "SP1 Pistol";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[] = {"\101st_Aux_Mod\Addons\Weapons\NewWestar\data\Westar2_CO.paa"};
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\dry_4_Five",
			0.39810717,
			1,
			20
		};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\reload_4_five",0.562341,1,30};
		soundBullet[]={};
		modes[]=
		{
			"Single",
			"close",
			"short",
			"medium"
		};
		reloadTime = 0.5;
		fireLightDuration=0.050000001;
		fireLightIntensity=0.4;
		fireLightDiffuse[]={0,0,0.01};
		fireLightAmbient[]={0,0,0};
		recoil = "recoil_pistol_rook40";
		class Stun: 101st_stun_muzzle
		{
			reloadAction="GestureReloadPistol";
			reloadMagazineSound[]=
			{
				"A3\Sounds_F\arsenal\weapons\Pistols\P07\reload_P07",
				1,
				1,
				10
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
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				begin1[] = {"sw_extraweapons\SW_Westar35\westar35.ogg",1.5,1,1200};
				begin2[] = {"sw_extraweapons\SW_Westar35\westar35.ogg",1.5,1,1200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
			};
			recoil="recoil_pistol_heavy";
			recoilProne="recoil_prone_pistol_heavy";
			reloadTime=0.6;
			dispersion=0.01015;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
		class close: Single
		{
			showToPlayer=0;
			aiRateOfFire=0.25;
			aiRateOfFireDistance=400;
			minRange=0;
			minRangeProbab=0.050000001;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.2;
		};
		class short: close
		{
			aiRateOfFire=0.5;
			aiRateOfFireDistance=500;
			minRange=300;
			minRangeProbab=0.2;
			midRange=400;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.2;
		};
		class medium: close
		{
			aiRateOfFire=1;
			aiRateOfFireDistance=900;
			minRange=400;
			minRangeProbab=0.2;
			midRange=700;
			midRangeProbab=0.69999999;
			maxRange=900;
			maxRangeProbab=0.2;
		};
		inertia = 1.4;
		dexterity=1.7;
		initSpeed=300;
		maxRecoilSway=0.0125;
		swayDecaySpeed=1.25;
		recoil="recoil_pistol_4five";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=24;
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
		};
	};
	class 101st_Westar_shield: 101st_Westar2_Pistol
	{
		displayName="[101st] SP1 Pistol (shield)";
		baseWeapon="101st_Westar_shield";
		scope=1;
		JLTS_isShielded=1;
		JLTS_baseWeapon="101st_Westar2_Pistol";
		model="\101st_Aux_Mod\Addons\Weapons\NewWestar\wester2_shield.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\MRC\JLTS\weapons\DC17SA\anims\DC17SA_shielded_handanim.rtm"
		};
		inertia=0.80000001;
		recoil="recoil_pdw";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass="(5*22.04622622)-((5*22.04622622)%1)";
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[]=
				{
					"JLTS_riot_shield_attachment"
				};
			};
		};
	};
	class 101st_Westar3_Pistol: Pistol_Base_F
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
		author="Dutch";
		scope=0;
		model="\101st_Aux_Mod\Addons\Weapons\JangoPistol\JangoWestar.p3d";
		picture = "\SW_extraweapons\SW_Westar35\westar35icon_x_ca.paa";
		muzzles[] = {"this"};
		magazines[]=
		{
			"101st_Westar_Shooter_Mag",
			"101st_Westar_Shooter_Mag_Red",
			"101st_Westar_Shooter_Mag_Green"
		};
		reloadAction="GestureReloadPistol";
		displayName = "[101st] Mandalorian Westar";
		descriptionShort = "Mando Westar";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[] = {"\101st_Aux_Mod\Addons\Weapons\JangoPistol\data\blasters_CO.paa"};
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\dry_4_Five",
			0.39810717,
			1,
			20
		};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\reload_4_five",0.562341,1,30};
		soundBullet[]={};
		modes[]=
		{
			"Single",
			"close",
			"short",
			"medium"
		};
		reloadTime = 0.5;
		fireLightDuration=0.050000001;
		fireLightIntensity=0.4;
		fireLightDiffuse[]={0,0,0.01};
		fireLightAmbient[]={0,0,0};
		recoil = "recoil_pistol_rook40";
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_closure_01",0.398107,1,40};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_closure_02",0.398107,1,40};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				begin1[] = {"101st_Aux_Mod\Addons\Weapons\JangoPistol\blaster.ogg",1.5,1,1200};
				soundBegin[] = {"begin1",1};
				closure1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_closure_01",0.398107,1,40};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_closure_02",0.398107,1,40};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			recoil="recoil_pistol_heavy";
			recoilProne="recoil_prone_pistol_heavy";
			reloadTime=0.6;
			dispersion=0.01015;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
		class close: Single
		{
			showToPlayer=0;
			aiRateOfFire=0.25;
			aiRateOfFireDistance=400;
			minRange=0;
			minRangeProbab=0.050000001;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.2;
		};
		class short: close
		{
			aiRateOfFire=0.5;
			aiRateOfFireDistance=500;
			minRange=300;
			minRangeProbab=0.2;
			midRange=400;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.2;
		};
		class medium: close
		{
			aiRateOfFire=1;
			aiRateOfFireDistance=900;
			minRange=400;
			minRangeProbab=0.2;
			midRange=700;
			midRangeProbab=0.69999999;
			maxRange=900;
			maxRangeProbab=0.2;
		};
		inertia = 1.4;
		dexterity=1.7;
		initSpeed=300;
		maxRecoilSway=0.0125;
		swayDecaySpeed=1.25;
		recoil="recoil_pistol_4five";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=24;
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
		};
	};
	

	class GrenadeLauncher;
	class Throw : GrenadeLauncher
	{
		muzzles[]+=
		{
			"SmokeShell_Cluster_Muzzle",
			"SmokeShell_Cluster_Full_Muzzle"
		};
		class ThrowMuzzle;
		class SmokeShell_Cluster_Muzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"SmokeShell_Cluster"
			};
		};
		class SmokeShell_Cluster_Full_Muzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"SmokeShell_Cluster_Full"
			};
		};
	};

	class autocannon_35mm;
	class GMG_40mm;
	class cannon_120mm;
	class 3AS_HeavyRepeater;
	class 101st_CIS_Mech : 3AS_HeavyRepeater
	{
		displayName="CIS Long Range Cannon";
		displayNameShort="CIS LR Cannon";
		author="Dutch";
		magazines[] = {"101st_CIS_LR_Mag"};
		reloadTime = 0.375;
		sounds[] = {"StandardSound"};
		class StandardSound {
			begin1[] = {"\101st_Aux_Mod\Addons\Weapons\cannon.ogg",0.75,1,2100};
			soundBegin[] = {"begin1",1};
		};
	};
	class 101st_TX130_mg: autocannon_35mm
	{
		displayName="TX-130 MG";
		displayNameShort="TX-130 MG";
		author="Dutch";
		magazines[]=
		{
			"101st_TX130_mg_mag"
		};
		reloadTime=5;
		magazineReloadTime=6;
	};
	class 101st_TX130_top_ap: autocannon_35mm
	{
		displayName="TX-130 AP";
		displayNameShort="TX-130 AP";
		author="Dutch";
		magazines[]=
		{
			"101st_TX130_mg_mag"
		};
		reloadTime=5;
		magazineReloadTime=6;
	};
	class 101st_TX130_cannon: cannon_120mm
	{
		displayName="TX-130 cannon";
		displayNameShort="TX-130";
		author="Dutch";
		magazines[]=
		{
			"101st_TX130_cannon_mag"
		};
		reloadTime=0.1;
		magazineReloadTime=2;
		class player : Mode_SemiAuto
		{
			class StandardSound
			{
				begin1[] = {"SW_Droides_2\ATTE\atte_fire.ogg",2,1,1500};
				soundBegin[] = {"begin1",1};
			};
		};
		class GunParticles
		{
			class FirstEffect
			{
				effectName="CannonFired";
				positionName="Usti hlavne";
				directionName="Konec hlavne";
			};
			class SecondEffect
			{
				effectName="CannonFired";
				positionName="Usti hlavne 2";
				directionName="Konec hlavne 2";
			};
		};
	};
};