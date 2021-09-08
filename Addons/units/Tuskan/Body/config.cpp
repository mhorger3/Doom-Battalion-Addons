class CfgPatches
{
	class 101st_Aux_Mod_Tuskan
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
			"101st_Tuskan", "101st_Tuskan_Heavy", "101st_Tuskan_Firepuncher", "101st_Tuskan_Shotgun", "101st_Tuskan_Rifle", "101st_Tuskan_Marksman", "101st_Tuskan_Slug", "101st_Tuskan_Zillo"  
		};
		weapons[]=
		{
			"JLTS_Tuskan"
		};
	};

};
class CBA_Extended_EventHandlers_base;
class CfgWeapons
{
	class U_I_CombatUniform;
	class UniformItem;
	class JLTS_Tuskan: U_I_CombatUniform
	{
		JLTS_isDroid=1;
		JLTS_hasEMPProtection=0;
		JLTS_deathSounds="DeathDroid";
		author="MrClock + Dutch";
		scope=2;
		displayName="101st Tuskan Uniform";
		picture="\MRC\JLTS\characters\DroidArmor\data\ui\b1_uniform_ui_ca.paa";
		model="\101st_Aux_Mod\Addons\units\Tuskan\Body\Tuskan.p3d";
		hiddenSelections[] = {"head", "body"};
		hiddenSelectionsTextures[] = {"101st_Aux_Mod\Addons\units\Tuskan\tuskanraider_head_co.paa", "101st_Aux_Mod\Addons\units\Tuskan\Body\tuskanraider_body_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="101st_Tuskan";
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
	class 101st_Tuskan: O_Soldier_F
	{
		author="MrClock + Dutch";
		scope=2;
		side=2;
		displayName="101st Tuskan";
		editorPreview="\MRC\JLTS\characters\DroidArmor\data\ui\editorPreviews\JLTS_Droid_B1_E5.jpg";
		genericNames="101st_Tuskan";
		faction="O_DBA_IND_F";
		editorSubcategory="O_DBA_Tuskans";
		vehicleClass = "O_DBA_Tuskans";
		identityTypes[]=
		{
			"LanguageENG_F",
			"Head_NATO"
		};
		uniformClass="JLTS_Tuskan";
		backpack="";
		model="\101st_Aux_Mod\Addons\units\Tuskan\Body\Tuskan.p3d";
		hiddenSelections[] = {"head", "body"};
		hiddenSelectionsTextures[] = {"101st_Aux_Mod\Addons\units\Tuskan\tuskanraider_head_co.paa", "101st_Aux_Mod\Addons\units\Tuskan\Body\tuskanraider_body_co.paa"};
		weapons[]=
		{
			"JLTS_E5",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"JLTS_E5",
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
			"JLTS_E5_mag",
			"Chemlight_yellow",
			"Chemlight_yellow",
			"Chemlight_yellow",
			"Chemlight_yellow",
			"Chemlight_yellow",
			"Chemlight_yellow",
			"101st_thermaldet_x1_mag",
			"101st_thermaldet_x1_mag",
			"101st_thermaldet_x1_mag"
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
			"JLTS_E5_mag",
			"Chemlight_yellow",
			"Chemlight_yellow",
			"Chemlight_yellow",
			"Chemlight_yellow",
			"Chemlight_yellow",
			"Chemlight_yellow",
			"101st_thermaldet_x1_mag",
			"101st_thermaldet_x1_mag",
			"101st_thermaldet_x1_mag"
		};
		items[]=
		{
			"ACE_CableTie",
			"ACE_CableTie",
			"ACE_CableTie"
		};
		respawnItems[]=
		{
			"ACE_CableTie",
			"ACE_CableTie",
			"ACE_CableTie"
		};

		class HitPoints: HitPoints
		{
			class HitFace
			{
				armor=1;
				material=-1;
				name="face_hub";
				passThrough=0.80000001;
				radius=0.079999998;
				explosionShielding=0.1;
				minimalHit=0.0099999998;
			};
			class HitNeck: HitFace
			{
				armor=1;
				material=-1;
				name="neck";
				passThrough=0.80000001;
				radius=0.1;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
			};
			class HitHead: HitNeck
			{
				armor=1;
				material=-1;
				name="head";
				passThrough=0.80000001;
				radius=0.2;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
				depends="HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor=8;
				material=-1;
				name="pelvis";
				passThrough=0.80000001;
				radius=0.23999999;
				explosionShielding=3;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="";
			};
			class HitAbdomen: HitPelvis
			{
				armor=6;
				material=-1;
				name="spine1";
				passThrough=0.80000001;
				radius=0.16;
				explosionShielding=3;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor=6;
				material=-1;
				name="spine2";
				passThrough=0.33000001;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitChest: HitDiaphragm
			{
				armor=8;
				material=-1;
				name="spine3";
				passThrough=0.33000001;
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
				passThrough=1;
				radius=0;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor=6;
				material=-1;
				name="arms";
				passThrough=1;
				radius=0.1;
				explosionShielding=3;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitHands: HitArms
			{
				armor=6;
				material=-1;
				name="hands";
				passThrough=1;
				radius=0.1;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="HitArms";
			};
			class HitLegs: HitHands
			{
				armor=6;
				material=-1;
				name="legs";
				passThrough=1;
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
				passThrough=1;
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
				passThrough=1;
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
		armor=2;
		armorStructural=4;
		explosionShielding=0.40000001;
		minTotalDamageThreshold=0.001;
		impactDamageMultiplier=0.5;
	}

	class 101st_Tuskan_Heavy: 101st_Tuskan
	{
		displayName="101st Tuskan Heavy";
		weapons[]=
		{
			"DBA_ZakkegMG",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"DBA_ZakkegMG",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"DBA_762_x75_Green",
			"DBA_762_x75_Green",
			"DBA_762_x75_Green",
			"DBA_762_x75_Green",
			"DBA_762_x75_Green",
			"DBA_762_x75_Green",
			"Chemlight_yellow",
			"Chemlight_yellow",
			"Chemlight_yellow",
			"Chemlight_yellow",
			"Chemlight_yellow",
			"Chemlight_yellow",
			"101st_thermaldet_x1_mag",
			"101st_thermaldet_x1_mag",
			"101st_thermaldet_x1_mag"
		};
		respawnMagazines[]=
		{
			"DBA_762_x75_Green",
			"DBA_762_x75_Green",
			"DBA_762_x75_Green",
			"DBA_762_x75_Green",
			"DBA_762_x75_Green",
			"DBA_762_x75_Green",
			"Chemlight_yellow",
			"Chemlight_yellow",
			"Chemlight_yellow",
			"Chemlight_yellow",
			"Chemlight_yellow",
			"Chemlight_yellow",
			"101st_thermaldet_x1_mag",
			"101st_thermaldet_x1_mag",
			"101st_thermaldet_x1_mag"
		};
		items[]=
		{
			"ACE_CableTie",
			"ACE_CableTie",
			"ACE_CableTie"
		};
		respawnItems[]=
		{
			"ACE_CableTie",
			"ACE_CableTie",
			"ACE_CableTie"
		};
	};
	
	class 101st_Tuskan_Shotgun : 101st_Tuskan
	{
		displayName="101st Tuskan Shotgun";
		weapons[]=
		{
			"JLTS_DP23",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"JLTS_DP23",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"JLTS_DP23_MAG",
			"JLTS_DP23_MAG",
			"JLTS_DP23_MAG",
			"JLTS_DP23_MAG",
			"JLTS_DP23_MAG",
			"JLTS_DP23_MAG",
			"Chemlight_yellow",
			"Chemlight_yellow",
			"Chemlight_yellow",
			"Chemlight_yellow",
			"Chemlight_yellow",
			"Chemlight_yellow",
			"101st_thermaldet_x1_mag",
			"101st_thermaldet_x1_mag",
			"101st_thermaldet_x1_mag"
		};
		respawnMagazines[]=
		{
			"JLTS_DP23_MAG",
			"JLTS_DP23_MAG",
			"JLTS_DP23_MAG",
			"JLTS_DP23_MAG",
			"JLTS_DP23_MAG",
			"JLTS_DP23_MAG",
			"Chemlight_yellow",
			"Chemlight_yellow",
			"Chemlight_yellow",
			"Chemlight_yellow",
			"Chemlight_yellow",
			"Chemlight_yellow",
			"101st_thermaldet_x1_mag",
			"101st_thermaldet_x1_mag",
			"101st_thermaldet_x1_mag"
		};
		items[]=
		{
			"ACE_CableTie",
			"ACE_CableTie",
			"ACE_CableTie"
		};
		respawnItems[]=
		{
			"ACE_CableTie",
			"ACE_CableTie",
			"ACE_CableTie"
		};
	};
	class 101st_Tuskan_Rifle : 101st_Tuskan
	{
		displayName="101st Tuskan Musket";
		weapons[]=
		{
			"91st_musket",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"91st_musket",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"91st_musket_load",
			"91st_musket_load",
			"91st_musket_load",
			"91st_musket_load",
			"91st_musket_load",
			"91st_musket_load",
			"91st_musket_load",
			"91st_musket_load",
			"91st_musket_load",
			"91st_musket_load",
			"Chemlight_yellow",
			"Chemlight_yellow",
			"101st_thermaldet_x1_mag",
			"101st_thermaldet_x1_mag",
			"101st_thermaldet_x1_mag"
		};
		respawnMagazines[]=
		{
			"91st_musket_load",
			"91st_musket_load",
			"91st_musket_load",
			"91st_musket_load",
			"91st_musket_load",
			"91st_musket_load",
			"91st_musket_load",
			"91st_musket_load",
			"91st_musket_load",
			"91st_musket_load",
			"Chemlight_yellow",
			"Chemlight_yellow",
			"101st_thermaldet_x1_mag",
			"101st_thermaldet_x1_mag",
			"101st_thermaldet_x1_mag"
		};
		items[]=
		{
			"ACE_CableTie",
			"ACE_CableTie",
			"ACE_CableTie"
		};
		respawnItems[]=
		{
			"ACE_CableTie",
			"ACE_CableTie",
			"ACE_CableTie"
		};
	};
	class 101st_Tuskan_Marksman : 101st_Tuskan
	{
		displayName="101st Tuskan Sniper";
		weapons[]=
		{
			"DBA_Desert_DC15x",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"DBA_Desert_DC15x",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"DBA_408_Mag_Base",
			"DBA_408_Mag_Base",
			"DBA_408_Mag_Base",
			"DBA_408_Mag_Base",
			"DBA_408_Mag_Base",
			"DBA_408_Mag_Base",
			"DBA_408_Mag_Base",
			"DBA_408_Mag_Base",
			"DBA_408_Mag_Base",
			"DBA_408_Mag_Base",
			"Chemlight_yellow",
			"Chemlight_yellow",
			"101st_thermaldet_x1_mag",
			"101st_thermaldet_x1_mag",
			"101st_thermaldet_x1_mag"
		};
		respawnMagazines[]=
		{
			"DBA_408_Mag_Base",
			"DBA_408_Mag_Base",
			"DBA_408_Mag_Base",
			"DBA_408_Mag_Base",
			"DBA_408_Mag_Base",
			"DBA_408_Mag_Base",
			"DBA_408_Mag_Base",
			"DBA_408_Mag_Base",
			"DBA_408_Mag_Base",
			"DBA_408_Mag_Base",
			"Chemlight_yellow",
			"Chemlight_yellow",
			"101st_thermaldet_x1_mag",
			"101st_thermaldet_x1_mag",
			"101st_thermaldet_x1_mag"
		};
		items[]=
		{
			"ACE_CableTie",
			"ACE_CableTie",
			"ACE_CableTie"
		};
		respawnItems[]=
		{
			"ACE_CableTie",
			"ACE_CableTie",
			"ACE_CableTie"
		};
	};
	class 101st_Tuskan_Slug : 101st_Tuskan
	{
		displayName="101st Tuskan Slug";
		weapons[]=
		{
			"DBA_P7Slugthrower",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"DBA_P7Slugthrower",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"DBA_P7_Magazine",
			"DBA_P7_Magazine",
			"DBA_P7_Magazine",
			"DBA_P7_Magazine",
			"DBA_P7_Magazine",
			"DBA_P7_Magazine",
			"DBA_P7_Magazine",
			"DBA_P7_Magazine",
			"DBA_P7_Magazine",
			"DBA_P7_Magazine",
			"Chemlight_yellow",
			"Chemlight_yellow",
			"101st_thermaldet_x1_mag",
			"101st_thermaldet_x1_mag",
			"101st_thermaldet_x1_mag"
		};
		respawnMagazines[]=
		{
			"DBA_P7_Magazine",
			"DBA_P7_Magazine",
			"DBA_P7_Magazine",
			"DBA_P7_Magazine",
			"DBA_P7_Magazine",
			"DBA_P7_Magazine",
			"DBA_P7_Magazine",
			"DBA_P7_Magazine",
			"DBA_P7_Magazine",
			"DBA_P7_Magazine",
			"Chemlight_yellow",
			"Chemlight_yellow",
			"101st_thermaldet_x1_mag",
			"101st_thermaldet_x1_mag",
			"101st_thermaldet_x1_mag"
		};
		items[]=
		{
			"ACE_CableTie",
			"ACE_CableTie",
			"ACE_CableTie"
		};
		respawnItems[]=
		{
			"ACE_CableTie",
			"ACE_CableTie",
			"ACE_CableTie"
		};
	};
	class 101st_Tuskan_Zillo : 101st_Tuskan
	{
		displayName="101st Tuskan Zillo";
		weapons[]=
		{
			"DBA_Zillo",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"DBA_Zillo",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"DBA_20mm_x7_base",
			"DBA_20mm_x7_base",
			"DBA_20mm_x7_base",
			"DBA_20mm_x7_base",
			"DBA_20mm_x7_base",
			"DBA_20mm_x7_base",
			"Chemlight_yellow",
			"Chemlight_yellow",
			"101st_thermaldet_x1_mag",
			"101st_thermaldet_x1_mag",
			"101st_thermaldet_x1_mag"
		};
		respawnMagazines[]=
		{
			"DBA_20mm_x7_base",
			"DBA_20mm_x7_base",
			"DBA_20mm_x7_base",
			"DBA_20mm_x7_base",
			"DBA_20mm_x7_base",
			"DBA_20mm_x7_base",
			"Chemlight_yellow",
			"Chemlight_yellow",
			"101st_thermaldet_x1_mag",
			"101st_thermaldet_x1_mag",
			"101st_thermaldet_x1_mag"
		};
		items[]=
		{
			"ACE_CableTie",
			"ACE_CableTie",
			"ACE_CableTie"
		};
		respawnItems[]=
		{
			"ACE_CableTie",
			"ACE_CableTie",
			"ACE_CableTie"
		};
	};
	class 101st_Tuskan_Firepuncher : 101st_Tuskan
	{
		displayName="101st Tuskan Firepuncher";
		weapons[]=
		{
			"327th_firepuncher_rifle",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"327th_firepuncher_rifle",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"327th_FirepuncherCIS_mag",
			"327th_FirepuncherCIS_mag",
			"327th_FirepuncherCIS_mag",
			"327th_FirepuncherCIS_mag",
			"327th_FirepuncherCIS_mag",
			"327th_FirepuncherCIS_mag",
			"Chemlight_yellow",
			"Chemlight_yellow",
			"101st_thermaldet_x1_mag",
			"101st_thermaldet_x1_mag",
			"101st_thermaldet_x1_mag"
		};
		respawnMagazines[]=
		{
			"327th_FirepuncherCIS_mag",
			"327th_FirepuncherCIS_mag",
			"327th_FirepuncherCIS_mag",
			"327th_FirepuncherCIS_mag",
			"327th_FirepuncherCIS_mag",
			"327th_FirepuncherCIS_mag",
			"Chemlight_yellow",
			"Chemlight_yellow",
			"101st_thermaldet_x1_mag",
			"101st_thermaldet_x1_mag",
			"101st_thermaldet_x1_mag"
		};
		items[]=
		{
			"ACE_CableTie",
			"ACE_CableTie",
			"ACE_CableTie"
		};
		respawnItems[]=
		{
			"ACE_CableTie",
			"ACE_CableTie",
			"ACE_CableTie"
		};
	};
};


