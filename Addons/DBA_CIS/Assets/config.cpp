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
		};
		weapons[]=
		{
			"JLTS_IG88",
			"JLTS_B2",
			"JLTS_Magna"
		};
	};

};
class CBA_Extended_EventHandlers_base;
class CfgWeapons
{
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
		hiddenSelections[] = {"head", "body", "arms"};
		hiddenSelectionsTextures[] = {"", "", ""};
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
		hiddenSelections[] = {"head", "body", "arms"};
		hiddenSelectionsTextures[] = {"", "", ""};
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
		hiddenSelections[] = {"head", "body", "arms"};
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
		displayName="101st IG88";
		editorPreview="\MRC\JLTS\characters\DroidArmor\data\ui\editorPreviews\JLTS_Droid_B1_E5.jpg";
		genericNames="101st_CIS_IG88";
		faction="O_DBA_CIS_F";
		editorSubcategory="O_DBA_CIS_B1_Droids";
		vehicleClass = "O_DBA_CIS_B1_Droids";
		identityTypes[]=
		{
			"LanguageENG_F",
			"Head_NATO"
		};
		uniformClass="JLTS_IG88";
		backpack="";
		model="\101st_Aux_Mod\Addons\DBA_CIS\Assets\IG88.p3d";
		hiddenSelections[]=
		{
			"head", "body", "arms"
		};
		hiddenSelectionsTextures[]=
		{
			"", "", ""
		};
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
			"HandGrenade",
			"HandGrenade"
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
			"HandGrenade",
			"HandGrenade"
		};
		items[]={};
		respawnItems[]={};
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

	class 101st_Magna: O_Soldier_F
	{
		author="MrClock + Dutch";
		scope=2;
		displayName="101st Magna";
		editorPreview="\MRC\JLTS\characters\DroidArmor\data\ui\editorPreviews\JLTS_Droid_B1_E5.jpg";
		genericNames="101st_CIS_Magna";
		faction="O_DBA_CIS_F";
		editorSubcategory="O_DBA_CIS_B1_Droids";
		vehicleClass = "O_DBA_CIS_B1_Droids";
		identityTypes[]=
		{
			"LanguageENG_F",
			"Head_NATO"
		};
		uniformClass="JLTS_Magna";
		backpack="";
		model="\101st_Aux_Mod\Addons\DBA_CIS\Assets\Magna.p3d";
		hiddenSelections[]=
		{
			"head", "body", "arms"
		};
		hiddenSelectionsTextures[]=
		{
			"", "", ""
		};
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
			"HandGrenade",
			"HandGrenade"
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
			"HandGrenade",
			"HandGrenade"
		};
		items[]={};
		respawnItems[]={};
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
		hiddenSelections[]=
		{
			"head", "body", "arms"
		};
		hiddenSelectionsTextures[]=
		{
			"", "", ""
		};
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
			"HandGrenade",
			"HandGrenade"
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
			"HandGrenade",
			"HandGrenade"
		};
		items[]={};
		respawnItems[]={};
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
};


