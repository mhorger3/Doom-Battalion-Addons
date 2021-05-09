class cfgPatches
{
	class DBA_Aux_Mod_DC17
	{
		author = "Trip";
		name = "101st Aux Mod Weapons";
		requiredaddons[] = {"JLTS_weapons_DC15S","101st_Aux_Mod","DBA_patch_weapons"};
		requiredversion = 0.1;
		units[] = {};
		weapons[] = {"DBA_Test_Pistol","DBA_A180","DBA_DC17","DBA_Cannok","DBA_Defender","DBA_Westar35_Mod_0","DBA_Dual_Westar35_Mod_0", "DBA_Dual_Defender"};
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
	class hgun_P07_F: Pistol_Base_F
	{
		class WeaponSlotsInfo;
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
	class DBA_Pistol_Base : hgun_P07_F
	{
		//Make sure you add these somewhere or its probably not going to work
		
		/*JLTS_canHaveShield = 1;
		JLTS_shieldedWeapon = "JLTS_DC17SA_shield";
		baseWeapon = "JLTS_DC17SA";
		model = "\MRC\JLTS\weapons\DC17SA\DC17SA.p3d";
		hiddenSelections[] = {"camo1","illum"};
		hiddenSelectionsTextures[] = {"\MRC\JLTS\weapons\DC17SA\data\DC17SA_co.paa"};
		hiddenSelectionsMaterials[] = {"","\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"};
		magazines[] = {};
		magazineWell[] = {};
		modes[] = {"Single","Burst","FullAuto"};*/

		author = "Trip";
		scope = 0; // Change this to 2
		picture = "\MRC\JLTS\weapons\DC17SA\data\ui\DC17SA_ui_ca.paa";

		selectionFireAnim = "zasleh";
		flash = "gunfire";
		flashSize = 0.5;
		fireLightDiffuse[] = {0,1,0};
		fireLightAmbient[] = {0,0.5,0};
		fireLightIntensity = 0.2;
		fireLightDuration = 0.05;
		drySound[] = {"MRC\JLTS\weapons\Core\sounds\weapon_dry.wss",5,1,10};
		muzzles[] = {"this","Stun"};
		class Stun: JLTS_stun_muzzle
		{
			reloadAction = "GestureReloadPistol";
			reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\reload_P07",1,1,10};
		};
		class Single: Mode_SemiAuto
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
				begin1[] = {"MRC\JLTS\weapons\DC17SA\sounds\dc17sa_fire_2",3,0.9,1800};
				soundBegin[] = {"begin1",1};
			};
			recoil = "recoil_pistol_light";
			recoilProne = "recoil_prone_pistol_light";
			reloadTime = 0.12;
			dispersion = 0.0029;
			minRange = 5;
			minRangeProbab = 0.3;
			midRange = 25;
			midRangeProbab = 0.6;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 25;
		};
		class Burst: Mode_Burst
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
				begin1[] = {"MRC\JLTS\weapons\DC17SA\sounds\dc17sa_fire_2",3,0.9,1800};
				soundBegin[] = {"begin1",1};
			};
			recoil = "recoil_pistol_light";
			recoilProne = "recoil_prone_pistol_light";
			reloadTime = 0.12;
			dispersion = 0.0029;
			minRange = 5;
			minRangeProbab = 0.3;
			midRange = 25;
			midRangeProbab = 0.6;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 25;
		};
		class FullAuto: Mode_FullAuto
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
				begin1[] = {"MRC\JLTS\weapons\DC17SA\sounds\dc17sa_fire_2",3,0.9,1800};
				soundBegin[] = {"begin1",1};
			};
			recoil = "recoil_pistol_light";
			recoilProne = "recoil_prone_pistol_light";
			reloadTime = 0.12;
			dispersion = 0.0029;
			minRange = 5;
			minRangeProbab = 0.3;
			midRange = 25;
			midRangeProbab = 0.6;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 25;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 20;
			class CowsSlot: CowsSlot
			{
				compatibleItems[] = {"DBA_MRCO_A", "DBA_MRCO_B"};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[] = {};
			};
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconPosition[] = {0.24,0.35};
				iconScale = 0.2;
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[] = {};
			};
		};

		//Ace overheat shit do not touch

		ACE_overheating_allowSwapBarrel = 1;
		ACE_Overheating_Dispersion = 0;
		ACE_Overheating_JamChance = 0;
		ACE_overheating_mrbs = 3e+09;
		ACE_overheating_slowdownFactor = 0;
		ace_overpressure_angle = 0;
		ace_overpressure_damage = 0;
		ace_overpressure_priority = 1;
		ace_overpressure_range = 0;
	};
	class DBA_Pistol_Base_Shield : DBA_Pistol_Base
	{
		displayName = "[101st] DC17 Shielded";
		baseWeapon = "DBA_Pistol_Base_Shield";
		scope = 1;
		JLTS_isShielded = 1;
		JLTS_baseWeapon = "DBA_Pistol_Base";
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
					access = 1;
				linkProxy = "\A3\Data_F_Mark\Proxies\Weapon_Slots\UNDERBARREL";
			};
		};
	};
	class DBA_DC17: DBA_Pistol_Base
	{
		//JLTS Shield Things
		JLTS_canHaveShield = 1;
		JLTS_shieldedWeapon = "DBA_DC17_shield";

		modes[] = {"Single", "Stun"};

		displayName = "[101st] DC-17";
		baseWeapon = "DBA_DC17";
		scope = 2;
		scopeArsenal = 2;
		weaponPoolAvailable = 1;
		fireLightDiffuse[] = {0,0,1};
		fireLightAmbient[] = {0,0,.5};
		model = "\MRC\JLTS\weapons\DC17SA\DC17SA.p3d";
		magazines[] = {"DBA_DC17_x20_mag"};
		magazineWell[] = {"DBA_DC17_GL_Mags_magwell"};
		class Single: Single
		{
			dispersion = 0.0001;
			reloadTime = 0.1;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 20;
			class CowsSlot: CowsSlot
			{
				compatibleItems[] = {};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[] = {"JLTS_DC17SA_flashlight"};
			};
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconPosition[] = {0.24,0.35};
				iconScale = 0.2;
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[] = {};
			};
		};
	};
	class DBA_DC17_shield: DBA_DC17
	{
		displayName = "[101st] DC17 Shielded";
		baseWeapon = "DBA_DC17_shield";
		scope = 1;
		scopeArsenal = 1;
		JLTS_isShielded = 1;
		JLTS_baseWeapon = "DBA_DC17";
		model = "\MRC\JLTS\weapons\DC17SA\DC17SA_shielded.p3d";
		handAnim[] = {"OFP2_ManSkeleton","\MRC\JLTS\weapons\DC17SA\anims\DC17SA_shielded_handanim.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 110;
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
				compatibleItems[] = {"JLTS_DC17SA_flashlight"};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[] = {"JLTS_riot_shield_attachment","JLTS_riot_shield_212_attachment","JLTS_riot_shield_501_attachment","JLTS_riot_shield_101_attachment","JLTS_riot_shield_CG_attachment","JLTS_riot_shield_GD_attachment","JLTS_riot_shield_droid_attachment"};
				access = 1;
				linkProxy = "\A3\Data_F_Mark\Proxies\Weapon_Slots\UNDERBARREL";
			};
		};
	};
	class DBA_Cannok: DBA_Pistol_Base
	{
		author="Trip, Dutch";
		scope=2;
		baseweapon="DBA_Cannok";
		JLTS_canHaveShield=1;
		JLTS_shieldedWeapon="DBA_Cannok_shield";
		model="101st_Aux_Mod\Addons\DBA_Weapons\Pistols\revolver.p3d";
		picture = "\A3\Weapons_F_EPA\Pistols\Pistol_Heavy_02\data\UI\gear_Pistol_heavy_02_X_CA.paa";
		muzzles[] = {"this", "Stun"};
		magazines[]=
		{
			"101st_Revolver_Mag_Green"
		};
		magazineWell[] = {};
		displayName = "[101st] CR-8 Cannok";
		descriptionShort = "CR-8 Revolver";
		hiddenSelections[]=
		{
			"camo1", "camo2", "camo3"
		};
		hiddenSelectionsTextures[] = 
		{
			"101st_Aux_Mod\Addons\DBA_Weapons\Pistols\data\base_CO.paa",
			"101st_Aux_Mod\Addons\DBA_Weapons\Pistols\data\barrel_CO.paa",
			"101st_Aux_Mod\Addons\DBA_Weapons\Pistols\data\scope_CO.paa"
		};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Zubr\reload_Zubr",0.562341,1,10};
		reloadAction = "GestureReloadPistolHeavy02";
		soundBullet[]={};
		modes[]=
		{
			"Single"
		};
		simulation = "Weapon";
		fireLightDuration=0.05;
		fireLightIntensity=0.2;
		fireLightDiffuse[] = {0,1,0};
		fireLightAmbient[] = {0,1,0};
		weaponInfoType = "RscOptics_nightstalker";
		modelOptics = "\a3\weapons_f\acc\reticle_nightstalker_f.p3d";
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
				modelOptics = "\a3\weapons_f\acc\reticle_nightstalker_f.p3d";
				opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
				opticsFlare = 1;
				opticsID = 1;
				weaponInfoType = "RscOptics_nightstalker";
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
			recoil = "recoil_pistol_heavy";
			recoilProne = "recoil_prone_pistol_heavy";
			reloadTime = 0.2;
			dispersion = 0.00145;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.3;
			aiRateOfFire=2;
			aiRateOfFireDistance=500;
		};
		
		inertia = 0.3;
		dexterity=1.7;
		initSpeed = -0.905512;
		maxRecoilSway = 0.008;
		swayDecaySpeed=1.25;
		maxRange = 100;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=20;
			holsterOffset = "holster";
			holsterScale = 0.85;
			allowedSlots[] = {801,701,901};
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
	class DBA_Cannok_shield: DBA_Cannok
	{
		displayName="[101st] CR-8 Cannok (shield)";
		baseWeapon="DBA_Cannok_shield";
		scope=1;
		JLTS_isShielded=1;
		JLTS_baseWeapon="DBA_Cannok";
		model="101st_Aux_Mod\Addons\DBA_Weapons\Pistols\revolver_shield.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\MRC\JLTS\weapons\DC17SA\anims\DC17SA_shielded_handanim.rtm"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=110;
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[] = {"JLTS_riot_shield_attachment","JLTS_riot_shield_212_attachment","JLTS_riot_shield_501_attachment","JLTS_riot_shield_101_attachment","JLTS_riot_shield_CG_attachment","JLTS_riot_shield_GD_attachment","JLTS_riot_shield_droid_attachment"};
					access = 1;
				linkProxy = "\A3\Data_F_Mark\Proxies\Weapon_Slots\UNDERBARREL";
			};
		};
	};
	class DBA_Defender: DBA_Pistol_Base
	{
		author="Trip";
		scope=2;
		JLTS_canHaveShield=1;
		baseweapon="DBA_Defender";
		JLTS_shieldedWeapon="DBA_Defender_shield";
		model="101st_Aux_Mod\Addons\DBA_Weapons\Pistols\Defender.p3d";
		muzzles[] = {"this", "Stun"};
		magazines[]=
		{
			"101st_PDW_Butcher_Mag_Green"
		};
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[] = 
		{
			"101st_Aux_Mod\Addons\DBA_Weapons\Pistols\data\ParticleAccelPistol_CO.paa"
		};
		magazineWell[] = {};
		reloadAction = "ReloadMagazine";
		displayName = "[101st] PDW Defender";
		descriptionShort = "PDW Defender";
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\firemode_Mk20",0.251189,1,5};
		soundBullet[]={};
		modes[]=
		{
			"Single",
			"Burst",
			"FullAuto"
		};
		simulation = "Weapon";
		fireLightDiffuse[] = {0,1,0};
		fireLightAmbient[] = {0,0.5,0};
		fireLightIntensity = 0.2;
		fireLightDuration = 0.05;
		class Single: Single
		{
			reloadTime = 0.065;
			dispersion = "5*0.00087";
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.3;
			aiRateOfFire=2;
			aiRateOfFireDistance=500;
		};
		class Burst : Burst
		{
			reloadTime = 0.065;
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
		};
		class FullAuto : FullAuto
		{
			reloadTime = 0.065;
			aiRateOfFire = 1e-006;
			aiRateOfFireDispersion = 1;
			displayName = "Full";
			dispersion = 0.00131;
			maxRange = 30;
			maxRangeProbab = 0.1;
			midRange = 15;
			midRangeProbab = 0.7;
			minRange = 0;
			minRangeProbab = 0.9;
		}
		
		inertia = 0.3;
		dexterity=1.7;
		initSpeed = -1.00148;
		maxRecoilSway = 0.008;
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
		};
	};
	class DBA_Defender_shield: DBA_Defender
	{
		displayName="[101st] PDW Defender (shield)";
		baseWeapon="DBA_Defender_shield";
		scope=1;
		JLTS_isShielded=1;
		JLTS_baseWeapon="DBA_Defender";
		model="101st_Aux_Mod\Addons\DBA_Weapons\Pistols\Defender_shield.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\MRC\JLTS\weapons\DC17SA\anims\DC17SA_shielded_handanim.rtm"
		};
		inertia=0.80000001;
		recoil="recoil_pdw";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=110;
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[] = {"JLTS_riot_shield_attachment","JLTS_riot_shield_212_attachment","JLTS_riot_shield_501_attachment","JLTS_riot_shield_101_attachment","JLTS_riot_shield_CG_attachment","JLTS_riot_shield_GD_attachment","JLTS_riot_shield_droid_attachment"};
					access = 1;
				linkProxy = "\A3\Data_F_Mark\Proxies\Weapon_Slots\UNDERBARREL";
			};
		};
	};
	class DBA_Westar35_Mod_0: DBA_Pistol_Base
	{
		author="Trip";
		scope=2;
		//JLTS_canHaveShield=1; //No Shield Model Yet
		//JLTS_shieldedWeapon="DBA_Defender_shield";
		baseweapon="DBA_Westar35_Mod_0";
		model="101st_Aux_Mod\Addons\DBA_Weapons\Pistols\Westar35m0.p3d";
		muzzles[] = {"this", "Stun"};
		magazines[]=
		{
			"DBA_DC15_Hammerhead_x9_mag"
		};
		magazineWell[] = {};
		displayName = "[101st] Westar-35 'Hammerhead'";
		descriptionShort = "Westar-35";
		hiddenSelections[]=
		{
			"camo1"
		};
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\firemode_Mk20",0.251189,1,5};
		hiddenSelectionsTextures[] = 
		{
			"101st_Aux_Mod\Addons\DBA_Weapons\Pistols\data\DefaultMaterial_CO.paa"
		};
		soundBullet[]={};
		modes[]=
		{
			"Single"
		};
		simulation = "Weapon";
		fireLightDiffuse[] = {1,1,0};
		fireLightAmbient[] = {0.5,0.5,0};
		fireLightIntensity = 0.2;
		fireLightDuration = 0.05;
		picture="101st_Aux_Mod\Addons\DBA_Weapons\effects\icons\Westar_CA.paa";
		class Single: Single
		{
			reloadTime = 0.075;
			dispersion = "5*0.00087";
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.3;
			aiRateOfFire=2;
			aiRateOfFireDistance=500;
		};
		
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=30;
			holsterScale = 0.75;
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
	class DBA_Dual_Westar35_Mod_0: DBA_Westar35_Mod_0
	{
		scope=2;
		displayName = "[101st] Dual Westar-35 'Hammerhead'";
		baseweapon="DBA_Dual_Westar35_Mod_0";
		model="101st_Aux_Mod\Addons\DBA_Weapons\Pistols\DualWestar35m0.p3d";
		picture="101st_Aux_Mod\Addons\DBA_Weapons\effects\icons\Westar_CA.paa";
		weaponInfoType="RscWeaponZeroing";
		reloadAction="3AS_GestureReloadDualDC17S";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"3AS\3AS_Weapons\DC17S\data\anim\attempt1.rtm"
		};
		magazines[]=
		{
			"Dual_Hammerhead_x9_Magazine"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=60;
		};
	};
	
	class DBA_Dual_Defender: DBA_Dual_Westar35_Mod_0
	{
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[] = 
		{
			"101st_Aux_Mod\Addons\DBA_Weapons\Pistols\data\ParticleAccelPistol_CO.paa"
		};
		magazineWell[] = {};
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\firemode_Mk20",0.251189,1,5};
		soundBullet[]={};
		modes[]=
		{
			"Single",
			"Burst",
			"FullAuto"
		};
		simulation = "Weapon";
		fireLightDiffuse[] = {0,1,0};
		fireLightAmbient[] = {0,0.5,0};
		fireLightIntensity = 0.2;
		fireLightDuration = 0.05;
		class Single: Single
		{
			reloadTime = 0.065;
			dispersion = "5*0.00087";
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.3;
			aiRateOfFire=2;
			aiRateOfFireDistance=500;
		};
		class Burst : Burst
		{
			reloadTime = 0.065;
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
		};
		class FullAuto : FullAuto
		{
			reloadTime = 0.065;
			aiRateOfFire = 1e-006;
			aiRateOfFireDispersion = 1;
			displayName = "Full";
			dispersion = 0.00131;
			maxRange = 30;
			maxRangeProbab = 0.1;
			midRange = 15;
			midRangeProbab = 0.7;
			minRange = 0;
			minRangeProbab = 0.9;
		}
		inertia = 0.3;
		dexterity=1.7;
		initSpeed = -1.00148;
		maxRecoilSway = 0.008;
		swayDecaySpeed=1.25;
		scope=2;
		displayName = "[101st] Dual PDW Defender";
		baseweapon="DBA_Dual_Defender";
		model="101st_Aux_Mod\Addons\DBA_Weapons\Pistols\DualDefender.p3d";
		reloadAction="3AS_GestureReloadDualDC17S";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"3AS\3AS_Weapons\DC17S\data\anim\attempt1.rtm"
		};
		magazines[]=
		{
			"Dual_Defender_x22_Magazine"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=60;
		};
	};
	class DBA_DC17TEST : DBA_Pistol_Base
	{
		//JLTS Shield Things
		JLTS_canHaveShield = 1;
		JLTS_shieldedWeapon = "DBA_DC17_shield";

		modes[] = { "Single", "Stun" };

		displayName = "[101st] DC-17";
		baseWeapon = "DBA_DC17";
		scope = 2;
		scopeArsenal = 2;
		weaponPoolAvailable = 1;
		fireLightDiffuse[] = { 0,0,1 };
		fireLightAmbient[] = { 0,0,.5 };
		model = "\MRC\JLTS\weapons\DC17SA\DC17SA.p3d";
		magazines[] = { "DBA_DC17_x20_mag" };
		magazineWell[] = { 
			"DBA_DC17_GL_Mags_magwell",
			"DBA_Test_magwell" 
		};
		class Single : Single
		{
			dispersion = 0.0001;
			reloadTime = 0.1;
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 20;
			class CowsSlot : CowsSlot
			{
				compatibleItems[] = {};
			};
			class PointerSlot : PointerSlot
			{
				compatibleItems[] = { "JLTS_DC17SA_flashlight" };
			};
			class MuzzleSlot : MuzzleSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconPosition[] = { 0.24,0.35 };
				iconScale = 0.2;
			};
			class UnderBarrelSlot : UnderBarrelSlot
			{
				compatibleItems[] = {};
			};
		};
	};
	class DBA_A180:DBA_Pistol_Base
	{
		//Make sure you add these somewhere or its probably not going to work
		
		displayName = "[101st] A180 Blaster Pistol";
		JLTS_canHaveShield = 0;
		baseWeapon = "DBA_A180";
		model = "101st_Aux_Mod\Addons\DBA_Weapons\Pistols\A180.p3d";
		magazines[] = {"DBA_A180_Mag_x20"};
		magazineWell[] = {};
		modes[] = {"Single","Burst","FullAuto"};

		author = "Trip";
		scope = 2; // Change this to 2
		picture = "\MRC\JLTS\weapons\DC17SA\data\ui\DC17SA_ui_ca.paa";

		selectionFireAnim = "zasleh";
		flash = "gunfire";
		flashSize = 0.5;
		fireLightDiffuse[] = {.7,0,.7};
		fireLightAmbient[] = {.7,0,.7};
		fireLightIntensity = 0.2;
		fireLightDuration = 0.05;
		drySound[] = {"MRC\JLTS\weapons\Core\sounds\weapon_dry.wss",5,1,10};
		muzzles[] = {"this","Stun"};
		class Stun: JLTS_stun_muzzle
		{
			reloadAction = "GestureReloadPistol";
			reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\reload_P07",1,1,10};
		};
		class Single: Mode_SemiAuto
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
				weaponSoundEffect="";
				begin1[]=
				{
					"MRC\JLTS\weapons\RG4D\sounds\RG4D_fire",
					3,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			recoil = "recoil_pistol_light";
			recoilProne = "recoil_prone_pistol_light";
			reloadTime = 0.12;
			dispersion = 0.0029;
			minRange = 5;
			minRangeProbab = 0.3;
			midRange = 25;
			midRangeProbab = 0.6;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 25;
		};
		class Burst: Mode_Burst
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
				begin1[] = {"MRC\JLTS\weapons\DC17SA\sounds\dc17sa_fire_2",3,0.9,1800};
				soundBegin[] = {"begin1",1};
			};
			recoil = "recoil_pistol_light";
			recoilProne = "recoil_prone_pistol_light";
			reloadTime = 0.12;
			dispersion = 0.0029;
			minRange = 5;
			minRangeProbab = 0.3;
			midRange = 25;
			midRangeProbab = 0.6;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 25;
		};
		class FullAuto: Mode_FullAuto
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
				begin1[] = {"MRC\JLTS\weapons\DC17SA\sounds\dc17sa_fire_2",3,0.9,1800};
				soundBegin[] = {"begin1",1};
			};
			recoil = "recoil_pistol_light";
			recoilProne = "recoil_prone_pistol_light";
			reloadTime = 0.12;
			dispersion = 0.0029;
			minRange = 5;
			minRangeProbab = 0.3;
			midRange = 25;
			midRangeProbab = 0.6;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 25;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 20;
			class CowsSlot: CowsSlot
			{
				compatibleItems[] = {};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[] = {};
			};
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconPosition[] = {0.24,0.35};
				iconScale = 0.2;
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[] = {};
			};
		};

		//Ace overheat shit do not touch

		ACE_overheating_allowSwapBarrel = 1;
		ACE_Overheating_Dispersion = 0;
		ACE_Overheating_JamChance = 0;
		ACE_overheating_mrbs = 3e+09;
		ACE_overheating_slowdownFactor = 0;
		ace_overpressure_angle = 0;
		ace_overpressure_damage = 0;
		ace_overpressure_priority = 1;
		ace_overpressure_range = 0;
	};
	class DBA_Test_Pistol:DBA_Pistol_Base
	{
		//Make sure you add these somewhere or its probably not going to work
		
		displayName = "[101st] TESTING WEAPON ONLY";
		JLTS_canHaveShield = 0;
		baseWeapon = "DBA_Test_Pistol";
		model = "101st_Aux_Mod\Addons\DBA_Weapons\Pistols\A180.p3d";
		magazines[] = {};
		magazineWell[] = 
		{ 
			"DBA_DC17_GL_Mags_magwell",
			"DBA_Test_magwell" 
		};
		modes[] = {"Single","Burst","FullAuto"};

		author = "Trip";
		scope = 2; // Change this to 2
		picture = "\MRC\JLTS\weapons\DC17SA\data\ui\DC17SA_ui_ca.paa";

		selectionFireAnim = "zasleh";
		flash = "gunfire";
		flashSize = 0.5;
		fireLightDiffuse[] = {.7,0,.7};
		fireLightAmbient[] = {.7,0,.7};
		fireLightIntensity = 0.2;
		fireLightDuration = 0.05;
		drySound[] = {"MRC\JLTS\weapons\Core\sounds\weapon_dry.wss",5,1,10};
		muzzles[] = {"this","Stun"};
		class Stun: JLTS_stun_muzzle
		{
			reloadAction = "GestureReloadPistol";
			reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\reload_P07",1,1,10};
		};
		class Single: Mode_SemiAuto
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
				weaponSoundEffect="";
				begin1[]=
				{
					"MRC\JLTS\weapons\RG4D\sounds\RG4D_fire",
					3,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			recoil = "recoil_pistol_light";
			recoilProne = "recoil_prone_pistol_light";
			reloadTime = 0.12;
			dispersion = 0.0029;
			minRange = 5;
			minRangeProbab = 0.3;
			midRange = 25;
			midRangeProbab = 0.6;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 25;
		};
		class Burst: Mode_Burst
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
				begin1[]=
				{
					"MRC\JLTS\weapons\RG4D\sounds\RG4D_fire",
					3,
					1,
					1800
				};
				soundBegin[] = {"begin1",1};
			};
			recoil = "recoil_pistol_light";
			recoilProne = "recoil_prone_pistol_light";
			reloadTime = 0.12;
			dispersion = 0.0029;
			minRange = 5;
			minRangeProbab = 0.3;
			midRange = 25;
			midRangeProbab = 0.6;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 25;
		};
		class FullAuto: Mode_FullAuto
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
				begin1[]=
				{
					"MRC\JLTS\weapons\RG4D\sounds\RG4D_fire",
					3,
					1,
					1800
				};
				soundBegin[] = {"begin1",1};
			};
			recoil = "recoil_pistol_light";
			recoilProne = "recoil_prone_pistol_light";
			reloadTime = 0.12;
			dispersion = 0.0029;
			minRange = 5;
			minRangeProbab = 0.3;
			midRange = 25;
			midRangeProbab = 0.6;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 25;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 20;
			class CowsSlot: CowsSlot
			{
				compatibleItems[] = {};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[] = {};
			};
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconPosition[] = {0.24,0.35};
				iconScale = 0.2;
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[] = {};
			};
		};
		class FlashLight
        {
            color[]={180,60,60}; //color[]={180,160,130}; Default
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

		//Ace overheat shit do not touch

		ACE_overheating_allowSwapBarrel = 1;
		ACE_Overheating_Dispersion = 0;
		ACE_Overheating_JamChance = 0;
		ACE_overheating_mrbs = 3e+09;
		ACE_overheating_slowdownFactor = 0;
		ace_overpressure_angle = 0;
		ace_overpressure_damage = 0;
		ace_overpressure_priority = 1;
		ace_overpressure_range = 0;
	};
};
class CfgMagazines
{
	class CA_Magazine;
	class Dual_Hammerhead_x9_Magazine: CA_Magazine
	{
		author="Trip";
		scope=2;
		displayName = "9Rnd Dual Hammerhead Magazine";
		picture = "\MRC\JLTS\weapons\DC17SA\data\ui\DC17SA_mag_ui_ca.paa";
		ammo="DBA_Dual_Hammerhead_ammo";
		count=9;
		mass=4;
		initSpeed=310;
		tracersEvery=1;
		modelSpecial="101st_Aux_Mod\Addons\DBA_Weapons\Pistols\Dual\WestarDualMag.p3d";
		modelSpecialIsProxy = 1;
		descriptionShort="For the fastest guns in the west";
	};
	
	class Dual_Defender_x22_Magazine: CA_Magazine
	{
		author="Trip";
		scope=2;
		displayName="101st PDW Dual Defender Magazine";
		ammo="101st_PDW_Balls";
		tracersEvery = 1;
		lastRoundsTracer = 28;
		type = 256;
		count=22;
		descriptionShort="101st PDW";
		displayNameShort = "101st PDW";
		mass=10;
		initSpeed=300;
		modelSpecial="101st_Aux_Mod\Addons\DBA_Weapons\Pistols\Dual\DualDefenderMag.p3d";
		modelSpecialIsProxy = 1;
	};
	class DBA_A180_Mag_x20: CA_Magazine
	{
		author="Trip";
		scope=2;
		displayName = "20Rnd A180 Magazine";
		picture = "\MRC\JLTS\weapons\DC17SA\data\ui\DC17SA_mag_ui_ca.paa";
		ammo="DBA_Purple_9_Ammo";
		count=20;
		mass=4;
		initSpeed=400;
		typicalSpeed=400;
		tracersEvery=1;
	};
};
class CfgAmmo
{
	class JLTS_bullet_pistol_yellow;
	class DBA_Dual_Hammerhead_ammo:JLTS_bullet_pistol_yellow
	{	
		model="101st_Aux_Mod\Addons\DBA_Weapons\Pistols\data\tracer_yellow_dual.p3d";
		hit = 50;
		caliber = 5;
	};
	class 442_ammo_9_purple;
	class DBA_Purple_9_Ammo:442_ammo_9_purple
	{
		airFriction=0;
	};
};
/*class CfgVehicles
{
	class Weapon_Base_F;
	class DBA_VH_DC17: Weapon_Base_F
	{
		author = "Trip";
		displayName = "$STR_DBA_Maalras";
		scope = 2;
		class TransportWeapons
		{
			class DBA_DC17_T
			{
				count = 1;
				weapon = "DBA_DC17";
			};
		};
	};
};*/

