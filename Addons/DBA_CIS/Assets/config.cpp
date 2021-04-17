class CfgPatches
{
	class 101st_Aux_Mod_Units
	{
		author="Mutt / Dutch";
		name="101st Aux Mod";
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
			"A3_Armor_F_EPB_MBT_03"
		};
		requiredversion = 0.1;
		units[] = 
		{
			"101st_IG88",
			"101st_B2",
			"101st_Magna",
			"DBA_VH_B2"
		};
		weapons[]=
		{
			"JLTS_IG88",
			"JLTS_B2",
			"JLTS_Magna",
			"DBA_B2_Weapon"
		};
	};

};
class CBA_Extended_EventHandlers_base;
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
	class Rifle_Base_F;
	class Rifle_Long_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	class DBA_B2_Weapon: Rifle_Long_Base_F
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
		author = "Dutch";
		scope = 2;
		scopeArsenal = 2;
		model = "101st_Aux_Mod\Addons\DBA_CIS\Assets\b2gun.p3d";
		muzzles[] = {"this","Secondary"};
		magazines[] = {"101st_B2_Mag"};
		reloadAction = "ReloadMagazine";
		Modeloptics = "\A3\weapons_f\reticle\Optics_Gunner_02_F";
		displayname = "B2 HandBlaster";
		descriptionShort = "Standard B2 Blaster";
		hiddenSelections[] = {""};
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
		useModelOptics = 1;
		drySound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG_02_Dry",0.177828,1,10};
		reloadMagazineSound[] = {"SW_CloneWarsWeapons\M134\reload2.ogg",1.5,1,20};
		soundBullet[] = {};
		modes[] = {"Single","FullAuto","close","short","medium"};
		recoil = "recoil_mmg_01";
		simulation = "Weapon";
		handAnim[] = {"OFP2_ManSkeleton","101st_Aux_Mod\Addons\DBA_CIS\Assets\b2.rtm"};
		fireLightDuration = 0.05;
		fireLightIntensity = 0.2;
		fireLightDiffuse[] = {0,1,0};
		fireLightAmbient[] = {0,0.5,0};
		class Secondary : Rifle_Long_Base_F {
			ACE_overheating_allowSwapBarrel = 1;
			ACE_Overheating_Dispersion = 0;
			ACE_Overheating_JamChance = 0;
			ACE_overheating_mrbs = 3e+09;
			ACE_overheating_slowdownFactor = 0;
			ace_overpressure_angle = 0;
			ace_overpressure_damage = 0;
			ace_overpressure_priority = 1;
			ace_overpressure_range = 0;
			author = "Dutch";
			scope = 2;
			scopeArsenal = 2;
			model = "101st_Aux_Mod\Addons\DBA_CIS\Assets\b2gun.p3d";
			muzzles[] = {"this"};
			magazines[] = {"101st_B2_Rocket"};
			reloadAction = "ReloadMagazine";
			Modeloptics = "\A3\weapons_f\reticle\Optics_Gunner_02_F";
			displayname = "B2 Rockets";
			descriptionShort = "Standard B2 Rockers";
			hiddenSelections[] = {""};
			changeFiremodeSound[] = {"",1,1};
			useModelOptics = 1;
			drySound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG_02_Dry",0.177828,1,10};
			reloadMagazineSound[] = {"SW_CloneWarsWeapons\M134\reload2.ogg",1.5,1,20};
			soundBullet[] = {};
			modes[] = {"Single"};
			recoil = "recoil_mmg_01";
			simulation = "Weapon";
			handAnim[] = {"OFP2_ManSkeleton","101st_Aux_Mod\Addons\DBA_CIS\Assets\b2.rtm"};
			fireLightDuration = 0.05;
			fireLightIntensity = 0.2;
			fireLightDiffuse[] = {0,1,0};
			fireLightAmbient[] = {0,0.5,0};
			class Single: Mode_SemiAuto
			{
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
					begin1[] = {"101st_Aux_Mod\Addons\DBA_CIS\Assets\Wrist.wss",1,1,1800};
					soundBegin[] = {"begin1",1};
					closure1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Closure_Mx_01",0.5,1,10};
					closure2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Closure_Mx_02",0.5,1,10};
					soundClosure[] = {"closure1",0.5,"closure2",0.5};
				};
				recoil = "recoil_auto_primary_3outof10";
				recoilProne = "recoil_single_prone_mx";
				reloadTime = 0.2;
				burst = 1;
				dispersion = 0.00073;
				minRange = 5;
				minRangeProbab = 0.1;
				midRange = 150;
				midRangeProbab = 0.6;
				maxRange = 300;
				maxRangeProbab = 0.3;
				aiRateOfFire = 1;
				aiRateOfFireDistance = 500;
			};
			inertia = 1.1;
			dexterity = 1.7;
			initSpeed = -1;
			maxRecoilSway = 0.008;
			swayDecaySpeed = 2;
			UIPicture = "\A3\weapons_f\data\UI\icon_mg_CA.paa";
			class WeaponSlotsInfo: WeaponSlotsInfo
			{
				mass = 150;
				holsterScale = 0.9;
				class MuzzleSlot: MuzzleSlot
				{
					compatibleItems[] = {};
				};
				class CowsSlot: CowsSlot
				{
					compatibleItems[] = {};
				};
				class UnderBarrelSlot: UnderBarrelSlot
				{
					compatibleItems[] = {};
				};
			};
		};
		class Single: Mode_SemiAuto
		{
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
				begin1[] = {"101st_Aux_Mod\Addons\DBA_CIS\Assets\b2.ogg",1,1,1800};
				soundBegin[] = {"begin1",1};
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Closure_Mx_01",0.5,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Closure_Mx_02",0.5,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			recoil = "recoil_auto_primary_3outof10";
			recoilProne = "recoil_single_prone_mx";
			reloadTime = 0.2;
			burst = 1;
			dispersion = 0.00073;
			minRange = 5;
			minRangeProbab = 0.1;
			midRange = 25;
			midRangeProbab = 0.6;
			maxRange = 50;
			maxRangeProbab = 0.3;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 500;
		};
		class close: Single
		{
			showToPlayer = 0;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			dispersion = 0.00073;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.2;
		};
		class short: close
		{
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 200;
			minRange = 50;
			minRangeProbab = 0.2;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.2;
		};
		class medium: close
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 600;
			minRange = 300;
			minRangeProbab = 0.2;
			midRange = 450;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.2;
		};
		class FullAuto: Mode_FullAuto
		{
			aiRateOfFireDistance = 900;
			aiRateOfFireDispersion = 1;
			autoFire = 1;
			dispersion = "2*0.00087";
			burst = "";
			maxRange = 50;
			maxRangeProbab = 0.1;
			midRange = 25;
			midRangeProbab = 0.6;
			minRange = 5;
			reloadTime = 0.25;
			minRangeProbab = 0.3;
			recoil = "recoil_auto_pdw";
			recoilProne = "recoil_auto_prone_pdw";
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
				begin1[] = {"101st_Aux_Mod\Addons\DBA_CIS\Assets\b2.ogg",1,1,1800};
				soundBegin[] = {"begin1",1};
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Closure_Mx_01",0.5,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Closure_Mx_02",0.5,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
		};
		inertia = 1.1;
		dexterity = 1.7;
		initSpeed = -1;
		maxRecoilSway = 0.008;
		swayDecaySpeed = 2;
		UIPicture = "\A3\weapons_f\data\UI\icon_mg_CA.paa";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 150;
			holsterScale = 0.9;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[] = {};
			};
			class CowsSlot: CowsSlot
			{
				compatibleItems[] = {};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[] = {};
			};
		};
	};
	class U_I_CombatUniform;
	class UniformItem;
	class JLTS_IG88: U_I_CombatUniform
	{
		JLTS_isDroid=1;
		JLTS_hasEMPProtection=0;
		JLTS_deathSounds="DeathDroid";
		author="MrClock + Dutch";
		scope=2;
		displayName="101st IG88";
		picture="\MRC\JLTS\characters\DroidArmor\data\ui\b1_uniform_ui_ca.paa";
		model="\101st_Aux_Mod\Addons\DBA_CIS\Assets\IG88.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\101st_Aux_Mod\Addons\DBA_CIS\Assets\IG88_CO.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="101st_IG88";
			containerClass="Supply150";
			mass=40;
		};
	};
	class JLTS_Magna: U_I_CombatUniform
	{
		JLTS_isDroid=1;
		JLTS_hasEMPProtection=0;
		JLTS_deathSounds="DeathDroid";
		author="MrClock + Dutch";
		scope=2;
		displayName="101st Magna";
		picture="\MRC\JLTS\characters\DroidArmor\data\ui\b1_uniform_ui_ca.paa";
		model="\101st_Aux_Mod\Addons\DBA_CIS\Assets\Magna.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {""};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="101st_Magna";
			containerClass="Supply150";
			mass=40;
		};
	};
	class JLTS_B2: U_I_CombatUniform
	{
		JLTS_isDroid=1;
		JLTS_hasEMPProtection=0;
		JLTS_deathSounds="DeathDroid";
		author="MrClock + Dutch";
		scope=2;
		displayName="101st B2";
		picture="\MRC\JLTS\characters\DroidArmor\data\ui\b1_uniform_ui_ca.paa";
		model="\101st_Aux_Mod\Addons\DBA_CIS\Assets\B2.p3d";
		hiddenSelections[] = {"camo1", "camo2", "camo3"};
		hiddenSelectionsTextures[] = {"", "", ""};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="101st_B2";
			containerClass="Supply150";
			mass=40;
		};
	};
};

class CfgVehicles
{
	class O_soldier_base_F;
	class O_Soldier_02_F;
	class O_Soldier_sniper_base_F;
	class O_Soldier_F: O_soldier_base_F
	{
		class HitPoints;
	};
	class O_Soldier_LAT_f: O_soldier_base_F
	{
		class HitPoints;
	};
	class O_Soldier_AT_F: O_soldier_base_F
	{
		class HitPoints;
	};
	class O_soldier_AR_F: O_soldier_base_F
	{
		class HitPoints;
	};
	class O_Crew_f: O_soldier_base_F
	{
		class HitPoints;
	};
	class O_Helipilot_F: O_Soldier_02_F
	{
		class HitPoints;
	};
	class O_Officer_f: O_soldier_base_F
	{
		class HitPoints;
	};
	class O_Sniper_f: O_Soldier_sniper_base_F
	{
		class HitPoints;
	};
	class O_soldier_UAV_F: O_soldier_base_F
	{
		class HitPoints;
	};
	class 101st_IG88: O_Soldier_F
	{
		author="MrClock + Dutch";
		scope=2;
		scopeCurator = 2;
		displayName="101st IG88";
		editorPreview="\MRC\JLTS\characters\DroidArmor\data\ui\editorPreviews\JLTS_Droid_B1_E5.jpg";
		genericNames="101st_CIS_IG88";
		faction="O_DBA_CIS_F";
		 editorSubcategory = "O_DBA_CIS_Spec_Ops";
        vehicleClass = "O_DBA_CIS_Spec_Ops";
		identityTypes[]=
		{
			"LanguageENG_F",
			"Head_NATO"
		};
		uniformClass="JLTS_IG88";
		backpack="";
		model="\101st_Aux_Mod\Addons\DBA_CIS\Assets\IG88.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\101st_Aux_Mod\Addons\DBA_CIS\Assets\IG88_CO.paa"};
		linkedItems[]=
		{
			"ItemMap",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"JLTS_E5",
			"JLTS_RG4D",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"JLTS_E5",
			"JLTS_RG4D",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_RG4D_mag",
			"JLTS_RG4D_mag",
			"JLTS_RG4D_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"101st_thermaldet_x1_mag", "101st_thermaldet_x1_mag", "101st_thermaldet_x1_mag" 
		};
		respawnMagazines[]=
		{
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_RG4D_mag",
			"JLTS_RG4D_mag",
			"JLTS_RG4D_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"101st_thermaldet_x1_mag", "101st_thermaldet_x1_mag", "101st_thermaldet_x1_mag" 
		};
		items[]={};
		respawnItems[]={};
		class HitPoints: HitPoints
		{
			class HitFace
			{
				armor=20;
				material=-1;
				name="face_hub";
				passThrough=0.1;
				radius=0.079999998;
				explosionShielding=0.1;
				minimalHit=0.0099999998;
			};
			class HitNeck: HitFace
			{
				armor=30;
				material=-1;
				name="neck";
				passThrough=0.1;
				radius=0.1;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
			};
			class HitHead: HitNeck
			{
				armor=20;
				material=-1;
				name="head";
				passThrough=0.1;
				radius=0.2;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
				depends="HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor=30;
				material=-1;
				name="pelvis";
				passThrough=0.1;
				radius=0.23999999;
				explosionShielding=3;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="";
			};
			class HitAbdomen: HitPelvis
			{
				armor=30;
				material=-1;
				name="spine1";
				passThrough=0.1;
				radius=0.16;
				explosionShielding=3;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor=50;
				material=-1;
				name="spine2";
				passThrough=01;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitChest: HitDiaphragm
			{
				armor=50;
				material=-1;
				name="spine3";
				passThrough=0.1;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitBody: HitChest
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=0.1;
				radius=0;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor=50;
				material=-1;
				name="arms";
				passThrough=0.5;
				radius=0.1;
				explosionShielding=3;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitHands: HitArms
			{
				armor=40;
				material=-1;
				name="hands";
				passThrough=0.5;
				radius=0.1;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="HitArms";
			};
			class HitLegs: HitHands
			{
				armor=40;
				material=-1;
				name="legs";
				passThrough=0.5;
				radius=0.14;
				explosionShielding=3;
				visual="injury_legs";
				minimalHit=0.0099999998;
				depends="0";
			};
			class Incapacitated: HitLegs
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=3;
				visual="";
				minimalHit=0;
				depends="(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor=15;
				material=-1;
				name="hand_l";
				passThrough=0.1;
				radius=0.079999998;
				explosionShielding=3;
				visual="injury_hands";
				minimalHit=0.0099999998;
			};
			class HitRightArm: HitLeftArm
			{
				name="hand_r";
			};
			class HitLeftLeg
			{
				armor=15;
				material=-1;
				name="leg_l";
				passThrough=0.1;
				radius=0.1;
				explosionShielding=3;
				visual="injury_legs";
				minimalHit=0.0099999998;
			};
			class HitRightLeg: HitLeftLeg
			{
				name="leg_r";
			};
		};
		armor=12;
		armorStructural=30;
		explosionShielding=0.40000001;
		minTotalDamageThreshold=0.001;
		impactDamageMultiplier=0.5;
	}

	class 101st_Magna: O_Soldier_F
	{
		author="MrClock + Dutch";
		scope=2;
		scopeCurator = 2;
		displayName="101st Magna";
		editorPreview="\MRC\JLTS\characters\DroidArmor\data\ui\editorPreviews\JLTS_Droid_B1_E5.jpg";
		genericNames="101st_CIS_Magna";
		faction="O_DBA_CIS_F";
		editorSubcategory = "O_DBA_CIS_Spec_Ops";
        vehicleClass = "O_DBA_CIS_Spec_Ops";
		identityTypes[]=
		{
			"LanguageENG_F",
			"Head_NATO"
		};
		uniformClass="JLTS_Magna";
		backpack="";
		model="\101st_Aux_Mod\Addons\DBA_CIS\Assets\Magna.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {""};
		linkedItems[]=
		{
			"ItemMap",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"JLTS_E5",
			"JLTS_RG4D",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"JLTS_E5",
			"JLTS_RG4D",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_RG4D_mag",
			"JLTS_RG4D_mag",
			"JLTS_RG4D_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"101st_thermaldet_x1_mag", "101st_thermaldet_x1_mag", "101st_thermaldet_x1_mag" 
		};
		respawnMagazines[]=
		{
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_RG4D_mag",
			"JLTS_RG4D_mag",
			"JLTS_RG4D_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"101st_thermaldet_x1_mag", "101st_thermaldet_x1_mag", "101st_thermaldet_x1_mag" 
		};
		items[]={};
		respawnItems[]={};
		class HitPoints: HitPoints
		{
			class HitFace
			{
				armor=20;
				material=-1;
				name="face_hub";
				passThrough=0.1;
				radius=0.079999998;
				explosionShielding=0.1;
				minimalHit=0.0099999998;
			};
			class HitNeck: HitFace
			{
				armor=30;
				material=-1;
				name="neck";
				passThrough=0.1;
				radius=0.1;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
			};
			class HitHead: HitNeck
			{
				armor=20;
				material=-1;
				name="head";
				passThrough=0.1;
				radius=0.2;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
				depends="HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor=25;
				material=-1;
				name="pelvis";
				passThrough=0.1;
				radius=0.23999999;
				explosionShielding=3;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="";
			};
			class HitAbdomen: HitPelvis
			{
				armor=25;
				material=-1;
				name="spine1";
				passThrough=0.1;
				radius=0.16;
				explosionShielding=3;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor=35;
				material=-1;
				name="spine2";
				passThrough=01;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitChest: HitDiaphragm
			{
				armor=50;
				material=-1;
				name="spine3";
				passThrough=0.1;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitBody: HitChest
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=0.1;
				radius=0;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor=25;
				material=-1;
				name="arms";
				passThrough=0.5;
				radius=0.1;
				explosionShielding=3;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitHands: HitArms
			{
				armor=25;
				material=-1;
				name="hands";
				passThrough=0.5;
				radius=0.1;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="HitArms";
			};
			class HitLegs: HitHands
			{
				armor=25;
				material=-1;
				name="legs";
				passThrough=0.5;
				radius=0.14;
				explosionShielding=3;
				visual="injury_legs";
				minimalHit=0.0099999998;
				depends="0";
			};
			class Incapacitated: HitLegs
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=3;
				visual="";
				minimalHit=0;
				depends="(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor=6;
				material=-1;
				name="hand_l";
				passThrough=0.1;
				radius=0.079999998;
				explosionShielding=3;
				visual="injury_hands";
				minimalHit=0.0099999998;
			};
			class HitRightArm: HitLeftArm
			{
				name="hand_r";
			};
			class HitLeftLeg
			{
				armor=6;
				material=-1;
				name="leg_l";
				passThrough=0.1;
				radius=0.1;
				explosionShielding=3;
				visual="injury_legs";
				minimalHit=0.0099999998;
			};
			class HitRightLeg: HitLeftLeg
			{
				name="leg_r";
			};
		};
		armor=12;
		armorStructural=30;
		explosionShielding=0.40000001;
		minTotalDamageThreshold=0.001;
		impactDamageMultiplier=0.5;
	}

	class 101st_B2: O_Soldier_F
	{
		author="MrClock + Dutch";
		scope=2;
		displayName="101st B2";
		editorPreview="\MRC\JLTS\characters\DroidArmor\data\ui\editorPreviews\JLTS_Droid_B1_E5.jpg";
		genericNames="101st_CIS_B2";
		faction="O_DBA_CIS_F";
		editorSubcategory="O_DBA_CIS_B1_Droids";
		vehicleClass = "O_DBA_CIS_B1_Droids";
		identityTypes[]=
		{
			"LanguageENG_F",
			"Head_NATO"
		};
		uniformClass="JLTS_B2";
		backpack="";
		model="\101st_Aux_Mod\Addons\DBA_CIS\Assets\B2.p3d";
		hiddenSelections[] = {"camo1", "camo2", "camo3"};
		hiddenSelectionsTextures[] = {"\101st_Aux_Mod\Addons\DBA_CIS\Assets\B2_Bust_CO.paa", "\101st_Aux_Mod\Addons\DBA_CIS\Assets\B2_Torso_CO.paa", "\101st_Aux_Mod\Addons\DBA_CIS\Assets\B2_Legs_CO.paa"};
		linkedItems[]=
		{
			"ItemMap",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"DBA_B2_Weapon",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"DBA_B2_Weapon",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"101st_B2_Rocket",
			"101st_B2_Rocket",
			"101st_B2_Rocket",
			"101st_B2_Mag",
			"101st_B2_Mag",
			"101st_B2_Mag",
			"101st_B2_Mag",
			"101st_B2_Mag",
			"101st_B2_Mag",
			"101st_B2_Mag",
			"101st_B2_Mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"101st_thermaldet_x1_mag", "101st_thermaldet_x1_mag", "101st_thermaldet_x1_mag" 
		};
		respawnMagazines[]=
		{
			"101st_B2_Rocket",
			"101st_B2_Rocket",
			"101st_B2_Rocket",
			"101st_B2_Mag",
			"101st_B2_Mag",
			"101st_B2_Mag",
			"101st_B2_Mag",
			"101st_B2_Mag",
			"101st_B2_Mag",
			"101st_B2_Mag",
			"101st_B2_Mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"101st_thermaldet_x1_mag", "101st_thermaldet_x1_mag", "101st_thermaldet_x1_mag" 
		};
		items[]={};
		respawnItems[]={};
		class HitPoints: HitPoints
		{
			class HitFace
			{
				armor=10;
				material=-1;
				name="face_hub";
				passThrough=0.1;
				radius=0.079999998;
				explosionShielding=0.1;
				minimalHit=0.0099999998;
			};
			class HitNeck: HitFace
			{
				armor=15;
				material=-1;
				name="neck";
				passThrough=0.1;
				radius=0.1;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
			};
			class HitHead: HitNeck
			{
				armor=10;
				material=-1;
				name="head";
				passThrough=0.1;
				radius=0.2;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
				depends="HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor=15;
				material=-1;
				name="pelvis";
				passThrough=0.1;
				radius=0.23999999;
				explosionShielding=3;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="";
			};
			class HitAbdomen: HitPelvis
			{
				armor=15;
				material=-1;
				name="spine1";
				passThrough=0.1;
				radius=0.16;
				explosionShielding=3;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor=20;
				material=-1;
				name="spine2";
				passThrough=01;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitChest: HitDiaphragm
			{
				armor=25;
				material=-1;
				name="spine3";
				passThrough=0.1;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitBody: HitChest
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=0.1;
				radius=0;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor=25;
				material=-1;
				name="arms";
				passThrough=0.5;
				radius=0.1;
				explosionShielding=3;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitHands: HitArms
			{
				armor=20;
				material=-1;
				name="hands";
				passThrough=0.5;
				radius=0.1;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="HitArms";
			};
			class HitLegs: HitHands
			{
				armor=20;
				material=-1;
				name="legs";
				passThrough=0.5;
				radius=0.14;
				explosionShielding=3;
				visual="injury_legs";
				minimalHit=0.0099999998;
				depends="0";
			};
			class Incapacitated: HitLegs
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=3;
				visual="";
				minimalHit=0;
				depends="(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor=6;
				material=-1;
				name="hand_l";
				passThrough=0.1;
				radius=0.079999998;
				explosionShielding=3;
				visual="injury_hands";
				minimalHit=0.0099999998;
			};
			class HitRightArm: HitLeftArm
			{
				name="hand_r";
			};
			class HitLeftLeg
			{
				armor=6;
				material=-1;
				name="leg_l";
				passThrough=0.1;
				radius=0.1;
				explosionShielding=3;
				visual="injury_legs";
				minimalHit=0.0099999998;
			};
			class HitRightLeg: HitLeftLeg
			{
				name="leg_r";
			};
		};
		armor=12;
		armorStructural=30;
		explosionShielding=0.40000001;
		minTotalDamageThreshold=0.001;
		impactDamageMultiplier=0.5;
	}

	class Weapon_Base_F;
	class DBA_VH_B2: Weapon_Base_F
	{
		author = "Dutch";
		displayName = "$STR_DBA_B2";
		scope = 2;
		class TransportWeapons
		{
			class DBA_B2_Weapon
			{
				count = 1;
				weapon = "DBA_B2_Weapon";
			};
		};
	};
};

class CfgAmmo
{
		class JLTS_bullet_carbine_red;
		class 101st_Wrist_Rocket_Ammo : JLTS_bullet_carbine_red {
			cost = 200;
			caliber = 3;
			dangerRadiusBulletClose = 16;
			dangerRadiusHit = 40;
			effectFly = "b2rockets_Effect";
			explosionAngle = 60;
			explosive = 0.8;
			hit = 100;
			effectFlare = "FlareShell";
			effectsFire = "CannonFire";
			explosionDir = "explosionDir";
			explosionEffects = "ATMissileExplosion";
			explosionEffectsDir = "explosionDir";
			explosionPos = "explosionPos";
			explosionType = "explosive";
			indirectHit = 5;
			indirectHitRange = 3;
			model = "\A3\Weapons_F\Ammo\ugl_slug";
			muzzleEffect = "BIS_fnc_effectFiredRocket";
			nameSound = "missiles";
			simulation = "shotBullet";
			soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_2",0.501187,1.3,400};
			soundSetBulletFly[] = {"bulletFlyBy_SoundSet"};
			soundSetSonicCrack[] = {"bulletSonicCrack_SoundSet","bulletSonicCrackTail_SoundSet"};
			supersonicCrackFar[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\scrack_middle",3.16228,1,500};
			supersonicCrackNear[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\scrack_close",3.16228,1,500};
			soundHit[] = {"",100,1};
			soundHit1[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_01",2.51189,1,2000};
			soundHit2[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_02",2.51189,1,2000};
			soundHit3[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_03",2.51189,1,2000};
			SoundSetExplosion[] = {"RocketsHeavy_Exp_SoundSet","RocketsHeavy_Tail_SoundSet","Explosion_Debris_SoundSet"};
			thrust = 210;
			thrustTime = 1.5;
			timeToLive = 6;
			tracerColor[] = {0.7,0.7,0.5,0.04};
			tracerColorR[] = {0.7,0.7,0.5,0.04};
			tracerEndTime = 2;
			tracerScale = 1;
			typicalSpeed = 30;
		};
		class 101st_B2_Ammo : JLTS_bullet_carbine_red {
			cost = 1;
			caliber = 3;
			dangerRadiusBulletClose = 16;
			dangerRadiusHit = 40;
			effectfly = "JLTS_plasma_red";
			explosionAngle = 60;
			explosive = 0;
			hit = 20;
			explosionEffects = "3AS_ImpactPlasma";
			effectsSmoke = "SmokeShellWhite";
			effectsFire = "CannonFire";
			indirectHit = 0.1;
			indirectHitRange = 0.2;
			model = "\MRC\JLTS\weapons\Core\effects\laser_red.p3d";
			muzzleEffect = "";
			simulation = "shotBullet";
			soundFly[] = {"",0.251189,0.7};
			soundSetBulletFly[] = {"bulletFlyBy_SoundSet"};
			soundSetSonicCrack[] = {"bulletSonicCrack_SoundSet","bulletSonicCrackTail_SoundSet"};
			supersonicCrackFar[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\scrack_middle",3.16228,1,500};
			supersonicCrackNear[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\scrack_close",3.16228,1,500};
			thrust = 210;
			thrustTime = 1.5;
			timeToLive = 2;
			tracerColor[] = {0.7,0.7,0.5,0.04};
			tracerColorR[] = {0.7,0.7,0.5,0.04};
			tracerEndTime = 2;
			tracerScale = 0.7;
			typicalSpeed = 60;
		};
};

class CfgMagazines {
	class CA_Magazine;
	class 101st_B2_Rocket : CA_Magazine {
		count = 5;
		descriptionShort = "5Rnd Wrist Rockets";
		displayName = "5Rnd B2 Wrist Rockets";
		initSpeed = 100;
		mass = 50;
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_2",0.501187,1.3,400};
		scope = 2;
		type = 16;
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
		ammo = "101st_Wrist_Rocket_Ammo";
	};
	class 101st_B2_Mag : CA_Magazine {
		count = 60;
		descriptionShort = "60Rnd B2 Droid Magazine";
		displayName = "60Rnd B2 Droid Magazine";
		initSpeed = 310;
		mass = 15;
		scope = 2;
		type = 16;
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
		ammo = "101st_B2_Ammo";
	};
};

