class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class JLTS_Clone_P2_AB;
class B_soldier_base_F;
class RD501_opfor_unit_B1_spec_op;
class DefaultVehicleSystemsDisplayManagerLeft
{
    class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
    class components;
};
class VehicleSystemsTemplateLeftDriver: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightDriver: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftCommander: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightCommander: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class DefaultEventHandlers;
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class RCWSOptics;
class Optics_Armored;
class Optics_Commander_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class Optics_Gunner_AAA_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class RCWSOptics;
class CfgVehicles
{
	class ACE_Flag_Black;
	class B_Soldier_f;
	class JLTS_Clone_P2_DC15A: B_Soldier_f
	{
		class HitPoints;
	};
	class 101st_JLTS_Clone_P2 : JLTS_Clone_P2_DC15A {
		author="MrClock & 101st Aux Mod Team";
		scope=0;
		identityTypes[]=
		{
			"LanguageENG_F",
			"Head_NATO"
		};
		displayName="101st Clone (JLTS)";
		uniformClass="101st_Trooper_Uniform";
		hiddenSelections[]=
		{
			"camo1", "camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\armor\Trooper_Chest_CO.paa",
			"101st_Aux_Mod\Addons\textures\101st\armor\Trooper_Legs_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"212th\Armor\212th_JLTSArmor\Data\Textures\Armor\P2_Armor_Upper.rvmat",
			"\212th\Armor\212th_JLTSArmor\Data\Textures\Armor\P2_Armor_Lower.rvmat"
		};
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put"
		};
		magazines[]=
		{
			""
		};
		respawnMagazines[]=
		{
			""
		};
		items[]=
		{
			"FirstAidKit"
		};
		respawnItems[]=
		{
			"FirstAidKit"
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
				passThrough="0.33000001radius = 0.18";
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
		model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
	};
	#include "cloneUnits.hpp"
	#include "vehicles.hpp"
	#include "weaponVehicles.hpp"
	#include "backpacks.hpp"
	
	// custom sounds
	class SW_Command_Room_Ambient;
	class Orbital_Strike_Sound : SW_Command_Room_Ambient
	{
		displayName = "101st Orbital Strike";
		sound = "orbital";
	}
	class Ion_Cannon_Sound : SW_Command_Room_Ambient
	{
		displayName = "101st Ion Cannon";
		sound = "ion";
	}
	
	class Droid_factory_Sound : SW_Command_Room_Ambient
	{
		displayName = "101st Droid Factory";
		sound = "droid";
	};
	
	class ATC_Sound : SW_Command_Room_Ambient
	{
		displayName = "ATC Conversation 30min";
		sound = "atc";
	};
	
	class Chatter_Sound : SW_Command_Room_Ambient
	{
		displayName = "130 Radio Chatter 10min";
		sound = "radiochatter";
	};
	
		
	// custom AA
	class B_SAM_System_02_F;
	class B_SAM_System_01_F;	
	class 101st_Tyrant : B_SAM_System_02_F
	{
		displayName = "OPFOR Tyrant";
		side = 0;
		editorSubcategory = "O_DBA_CIS_AAs";
        vehicleClass = "O_DBA_CIS_AAs";
        faction = "O_DBA_CIS_F";
		scopeCurator=2;
	};
	class 101st_Overlord : B_SAM_System_01_F
	{
		displayName = "OPFOR Overlord";
		side = 0;
		editorSubcategory = "O_DBA_CIS_AAs";
        vehicleClass = "O_DBA_CIS_AAs";
        faction = "O_DBA_CIS_F";
		scopeCurator=2;
	};

	//Flags
	
	class 101st_Flag_Green : ACE_Flag_Black
	{
		dlc = "101st_Aux_Mod";
		faction="Republic_101st";
		displayname="101st Green Flag";
		editorSubcategory = "101st_Flags";
		class EventHandlers 
		{
			init = "(_this select 0) setFlagTexture ""\101st_Aux_Mod\Addons\textures\101st\flags\FlagGreenOnGreen.paa""";
		};
	};
	
	class 101st_Flag_Black : ACE_Flag_Black
	{
		dlc = "101st_Aux_Mod";
		faction="Republic_101st";
		displayname="101st Black Flag";
		editorSubcategory = "101st_Flags";
		class EventHandlers 
		{
			init = "(_this select 0) setFlagTexture ""\101st_Aux_Mod\Addons\textures\101st\flags\FlagGreenOnBlack.paa""";
		};
	};
	
	class 101st_Flag_White : ACE_Flag_Black
	{
		dlc = "101st_Aux_Mod";
		displayname="101st White Flag";
		faction="Republic_101st";
		editorSubcategory = "101st_Flags";
		class EventHandlers 
		{
			init = "(_this select 0) setFlagTexture ""\101st_Aux_Mod\Addons\textures\101st\flags\FlagGreenOnWhite.paa""";
		};
	};
	class 101st_Flag_Jerec : ACE_Flag_Black
	{
		dlc = "101st_Aux_Mod";
		displayname="101st Jerec's Banner";
		faction="Republic_101st";
		editorSubcategory = "101st_Flags";
		class EventHandlers 
		{
			init = "(_this select 0) setFlagTexture ""\101st_Aux_Mod\Addons\textures\101st\flags\FlagJerec.paa""";
		};
	};
	
	class 101st_Flag_Logo : ACE_Flag_Black
	{
		dlc = "101st_Aux_Mod";
		faction="Republic_101st";
		displayname="101st Logo Flag";
		editorSubcategory = "101st_Flags";
		class EventHandlers 
		{
			init = "(_this select 0) setFlagTexture ""\101st_Aux_Mod\Addons\textures\101st\flags\Logo.paa""";
		};
	};
	
	class 101st_Flag_Formal : ACE_Flag_Black
	{
		dlc = "101st_Aux_Mod";
		faction="Republic_101st";
		displayname="101st Formal Flag";
		editorSubcategory = "101st_Flags";
		class EventHandlers 
		{
			init = "(_this select 0) setFlagTexture ""\101st_Aux_Mod\Addons\textures\101st\flags\101st.paa""";
		};
	};
	
	class 101st_Flag_Senate: ACE_Flag_Black
	{
		dlc = "101st_Aux_Mod";
		faction="Republic_101st";
		displayname="101st Senate Flag";
		editorSubcategory = "101st_Flags";
		class EventHandlers 
		{
			init = "(_this select 0) setFlagTexture ""\101st_Aux_Mod\Addons\textures\101st\flags\Senate.paa""";
		};
	};

	// Resupply Crates
	
	class Box_212_Standard_Ammo;
	class Box_212_PLX;
	class Box_212_Medical;
	class 101st_AmmoBox_F : Box_212_Standard_Ammo
	{
		ACE_maxWeightCarry = 100000;
		ACE_maxWeightDrag = 100000;
		author="Dutch";
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"ammo_hide",
					0
				},
				
				{
					"ammoord_hide",
					1
				},
				
				{
					"grenades_hide",
					1
				},
				
				{
					"support_hide",
					1
				}
			};
			hide[]={};
			verticalOffset=0.28400001;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Box_NATO_Ammo_F.jpg";
		Scope=2;
		scopecurator=2;
		displayName="Doom Company Ammo Supplies Crate";
		icon="iconCrateAmmo";
		editorCategory="Category101stAux";
		editorSubcategory="101st_Resupply";
		maximumLoad=10000;
		class TransportMagazines
		{
			class xx_101st_City_Killer_Slug
			{
				magazine="101st_City_Killer_Slug";
				count=2;
			};
			class xx_101st_City_Killer_Buff
			{
				magazine="101st_City_Killer_Buff";
				count=5;
			};
			class xx_DBA_AT_GL_x2_mag
			{
				magazine="DBA_AT_GL_x2_mag";
				count=3;
			};
			class xx_DBA_HE_GL_3x_mag
			{
				magazine="DBA_HE_GL_x3_mag";
				count=3;
			};
			class xx_101st_flash_GL_x3_mag
			{
				magazine="101st_flash_GL_x3_mag";
				count=3;
			};
			class xx_3Rnd_Smoke_Grenade_shell
			{
				magazine="3Rnd_Smoke_Grenade_shell";
				count=3;
			};
			class xx_ACE_HuntIR_M203
			{
				magazine="ACE_HuntIR_M203";
				count=1;
			};
			class xx_101st_Stun_Long
			{
				magazine="101st_Stun_Long";
				count=5;
			};
			class xx_101st_Stun_Short
			{
				magazine="101st_Stun_Short";
				count=5;
			};
			class xx_DBA_DC15a_Low_x60_mag
			{
				magazine="DBA_DC15a_Low_x60_mag";
				count=15;
			};
			class xx_DBA_DC15a_Med_x30_mag
			{
				magazine="DBA_DC15a_Med_x30_mag";
				count=15;
			};
			class xx_DBA_DC15a_High_x15_mag
			{
				magazine="DBA_DC15a_High_x15_mag";
				count=10;
			};
			class xx_DBA_DC15a_LE_x15_mag
			{
				magazine="DBA_DC15a_LE_x15_mag";
				count=5;
			};
			class xx_DBA_DC15a_box_mag_x240_mag
			{
				magazine="DBA_DC15a_box_mag_x240_mag";
				count=5;
			};
			class xx_DBA_DC15s_x60_mag
			{
				magazine="DBA_DC15s_x60_mag";
				count=15;
			};
			class xx_101st_Ion_Mag
			{
				magazine="101st_Ion_Mag_Green";
				count=10;
			};
			class xx_101st_MG_Mag
			{
				magazine="101st_MG_Mag_Green";
				count=10;
			};
			class xx_101st_PDW_Enforcer_Mag
			{
				magazine="101st_PDW_Enforcer_Mag_Green";
				count=10;
			};
			class xx_101st_Maalras_Ext_Mag
			{
				magazine="101st_Maalras_Ext_Mag_Green";
				count=10;
			};
			class xx_DBA_z6_x400_mag
			{
				magazine="DBA_z6_x400_mag";
				count=3;
			};
			class xx_101st_Valken_Mag
			{
				magazine="101st_Valken_Mag";
				count=5;
			};
			
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
		class AnimationSources
		{
			class Ammo_source
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class AmmoOrd_source
			{
				source="user";
				animPeriod=1;
				initPhase=1;
			};
			class Grenades_source
			{
				source="user";
				animPeriod=1;
				initPhase=1;
			};
			class Support_source
			{
				source="user";
				animPeriod=1;
				initPhase=1;
			};
		};
	};
	class 101st_Handgun_F : Box_212_Standard_Ammo
	{
		ACE_maxWeightCarry = 100000;
		ACE_maxWeightDrag = 100000;
		author="Dutch";
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"ammo_hide",
					0
				},
				
				{
					"ammoord_hide",
					1
				},
				
				{
					"grenades_hide",
					1
				},
				
				{
					"support_hide",
					1
				}
			};
			hide[]={};
			verticalOffset=0.28400001;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Box_NATO_Ammo_F.jpg";
		Scope=2;
		scopecurator=2;
		displayName="Doom Company Handgun Crate";
		icon="iconCrateAmmo";
		editorCategory="Category101stAux";
		editorSubcategory="101st_Resupply";
		maximumLoad=10000;
		class TransportMagazines
		{
			class xx_101st_Revolver_Mag
			{
				magazine="101st_Revolver_Mag_Green";
				count=10;
			};
			class xx_DBA_DC17_x20_mag
			{
				magazine="DBA_DC17_x20_mag";
				count=10;
			};
			class xx_101st_PDW_Butcher_Mag
			{
				magazine="101st_PDW_Butcher_Mag_Green";
				count=10;
			};
			class xx_DBA_DC15_Hammerhead_x9_mag
			{
				magazine="DBA_DC15_Hammerhead_x9_mag";
				count=10;
			};
		};
		class TransportWeapons
		{
			class _xx_101st_Westar35
			{
				weapon="DBA_Westar35_Mod_0";
				count=2;
			};
			class _xx_101st_DC_17
			{
				weapon="DBA_DC17";
				count=2;
			};
			class _xx_RevolverShot
			{
				weapon="DBA_Cannok";
				count=2;
			};
			class _xx_PDW_Defender
			{
				weapon="DBA_Defender";
				count=2;
			};
		};
		class TransportItems
		{
		};
		class AnimationSources
		{
			class Ammo_source
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class AmmoOrd_source
			{
				source="user";
				animPeriod=1;
				initPhase=1;
			};
			class Grenades_source
			{
				source="user";
				animPeriod=1;
				initPhase=1;
			};
			class Support_source
			{
				source="user";
				animPeriod=1;
				initPhase=1;
			};
		};
	};
	class 101st_Launcher_F : Box_212_Standard_Ammo
	{
		ACE_maxWeightCarry = 100000;
		ACE_maxWeightDrag = 100000;
		author="Dutch";
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"ammo_hide",
					0
				},
				
				{
					"ammoord_hide",
					1
				},
				
				{
					"grenades_hide",
					1
				},
				
				{
					"support_hide",
					1
				}
			};
			hide[]={};
			verticalOffset=0.28400001;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Box_NATO_Ammo_F.jpg";
		Scope=2;
		scopecurator=2;
		displayName="Doom Company Launcher Crate";
		icon="iconCrateAmmo";
		editorCategory="Category101stAux";
		editorSubcategory="101st_Resupply";
		maximumLoad=10000;
		class TransportMagazines
		{
			class xx_101st_Chaingun_Mag
			{
				magazine="101st_Chaingun_Mag";
				count=2;
			};
			class xx_101st_AA_Mag
			{
				magazine="101st_AA_Mag";
				count=2;
			};
			class xx_101st_AP_Mag
			{
				magazine="101st_AP_Mag";
				count=2;
			};
			class xx_101st_AT_Mag
			{
				magazine="101st_AT_Mag";
				count=2;
			};
			class xx_101st_RPS6_HEAA
			{
				magazine="101st_RPS6_HEAA";
				count=7;
			};
			class xx_101st_AA_Mag
			{
				magazine="101st_RPS6_HEDP";
				count=3;
			};
			class xx_DBA_RPS_AT_x1_mag
			{
				magazine="DBA_RPS_AT_x1_mag";
				count=3;
			};
			class xx_DBA_RPS_AA_x1_mag
			{
				magazine="DBA_RPS_AA_x1_mag";
				count=3;
			};
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
		class AnimationSources
		{
			class Ammo_source
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class AmmoOrd_source
			{
				source="user";
				animPeriod=1;
				initPhase=1;
			};
			class Grenades_source
			{
				source="user";
				animPeriod=1;
				initPhase=1;
			};
			class Support_source
			{
				source="user";
				animPeriod=1;
				initPhase=1;
			};
		};
	};
	class 101st_Medical_F : Box_212_Medical
	{
		ACE_maxWeightCarry = 100000;
		ACE_maxWeightDrag = 100000;
		author="Dutch";
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"ammo_hide",
					0
				},
				
				{
					"ammoord_hide",
					1
				},
				
				{
					"grenades_hide",
					1
				},
				
				{
					"support_hide",
					1
				}
			};
			hide[]={};
			verticalOffset=0.28400001;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Box_NATO_Ammo_F.jpg";
		Scope=2;
		scopecurator=2;
		displayName="Doom Company Medical Crate";
		icon="iconCrateAmmo";
		editorCategory="Category101stAux";
		editorSubcategory="101st_Resupply";
		maximumLoad=10000;
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
			class _xx_ACE_packingBandage
			{
				name="ACE_packingBandage";
				count=100;
			};
			class _xx_ACE_elasticBandage
			{
				name="ACE_elasticBandage";
				count=100;
			};
			class _xx_ACE_quickclot
			{
				name="ACE_quickclot";
				count=50;
			};
			class _xx_ACE_morphine
			{
				name="ACE_morphine";
				count=30;
			};
			class _xx_ACE_epinephrine
			{
				name="ACE_epinephrine";
				count=30;
			};
			class _xx_ACE_plasmaIV_500
			{
				name="ACE_plasmaIV_500";
				count=30;
			};
			class _xx_ACE_surgicalKit
			{
				name="ACE_surgicalKit";
				count=3;
			};
		};
		class AnimationSources
		{
			class Ammo_source
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class AmmoOrd_source
			{
				source="user";
				animPeriod=1;
				initPhase=1;
			};
			class Grenades_source
			{
				source="user";
				animPeriod=1;
				initPhase=1;
			};
			class Support_source
			{
				source="user";
				animPeriod=1;
				initPhase=1;
			};
		};
	};
	class 101st_Explosive_F : Box_212_Standard_Ammo
	{
		ACE_maxWeightCarry = 100000;
		ACE_maxWeightDrag = 100000;
		author="Dutch";
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"ammo_hide",
					0
				},
				
				{
					"ammoord_hide",
					1
				},
				
				{
					"grenades_hide",
					1
				},
				
				{
					"support_hide",
					1
				}
			};
			hide[]={};
			verticalOffset=0.28400001;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Box_NATO_Ammo_F.jpg";
		Scope=2;
		scopecurator=2;
		displayName="Doom Company Explosives Crate";
		icon="iconCrateAmmo";
		editorCategory="Category101stAux";
		editorSubcategory="101st_Resupply";
		maximumLoad=10000;
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
			class _xx_SmokeShell
			{
				name="SmokeShell";
				count=10;
			};
			class _xx_SmokeShellOrange
			{
				name="SmokeShellOrange";
				count=5;
			};
			class _xx_SmokeShellGreen
			{
				name="SmokeShellGreen";
				count=5;
			};
			class _xx_SmokeShellBlue
			{
				name="SmokeShellBlue";
				count=5;
			};
			class _xx_SmokeShellPurple
			{
				name="SmokeShellPurple";
				count=3;
			};
			class _xx_APERSMine_Range_Mag
			{
				name="APERSMine_Range_Mag";
				count=2;
			};
			class _xx_APERSTripMine_Wire_Mag
			{
				name="APERSTripMine_Wire_Mag";
				count=2;
			};
			class _xx_C12_Remote_Mag
			{
				name="C12_Remote_Mag";
				count=1;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				name="DemoCharge_Remote_Mag";
				count=4;
			};
			class _xx_APERSMineDispenser_Mag
			{
				name="APERSMineDispenser_Mag";
				count=2;
			};
			class _xx_TermMineC_Mag
			{
				name="TermMineC_Mag";
				count=2;
			};
			class _xx_TermMineB_Mag
			{
				name="TermMineB_Mag";
				count=2;
			};
		};
		class AnimationSources
		{
			class Ammo_source
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class AmmoOrd_source
			{
				source="user";
				animPeriod=1;
				initPhase=1;
			};
			class Grenades_source
			{
				source="user";
				animPeriod=1;
				initPhase=1;
			};
			class Support_source
			{
				source="user";
				animPeriod=1;
				initPhase=1;
			};
		};
	};

	// Props
	class House_F;
	class 101st_BabyYoda : House_F 
	{
		placement="vertical";
		mapSize=1;
		destrType="DestructNo";
		displayName = "Baby Yoda (Static)";
		editorCategory="Category101stAux";
		editorSubcategory="101st_Props";
		model =  "101st_Aux_Mod\Addons\Objects\BabyYoda.p3d";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\objects\greenyweeny_co.paa",
		};
		hiddenSelections[] = 
		{
			"camo1"
		};
		armor=999999;
		armorStructural=999;
		scope=2;		
		scopeCurator = 2;
	};
	class 101st_GunganCarbo : House_F
	{
		displayName = "Carbonite Gungan (Static)";
		editorCategory="Category101stAux";
		editorSubcategory="101st_Props";
		model =  "101st_Aux_Mod\Addons\Objects\GunganCarbo.p3d";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\objects\GunganCarbonite_co.paa",
		};
		hiddenSelections[] = 
		{
			"camo1"
		};
		armor=999999;
		armorStructural=999;
		scope=2;
		scopeCurator = 2;
	};
	class 101st_TrandoCarbo : House_F
	{
		displayName = "Carbonite Trandoshan (Static)";
		editorCategory="Category101stAux";
		editorSubcategory="101st_Props";
		model =  "101st_Aux_Mod\Addons\Objects\TrandoCarbo.p3d";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\objects\TrandoCarbonite_co.paa",
		};
		hiddenSelections[] = 
		{
			"camo1"
		};
		armor=999999;
		armorStructural=999;
		scope=2;
		scopeCurator = 2;
	};
	class 101st_Acklay : House_F
	{
		displayName = "Acklay (Static)";
		editorCategory="Category101stAux";
		editorSubcategory="101st_Props";
		model =  "101st_Aux_Mod\Addons\Objects\Acklay.p3d";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\objects\Acklay_Body_CO.paa", "101st_Aux_Mod\Addons\objects\Acklay_Legs_CO.paa"
		};
		hiddenSelections[] = 
		{
			"camo1", "camo2"
		};
		armor=999999;
		armorStructural=999;
		scope=2;
		scopeCurator = 2;
	};
	class 101st_Jabba : House_F
	{
		displayName = "Jabba (Static)";
		editorCategory="Category101stAux";
		editorSubcategory="101st_Props";
		model =  "101st_Aux_Mod\Addons\Objects\Jabba.p3d";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\objects\head_co.paa", "101st_Aux_Mod\Addons\objects\body_CO.paa"
		};
		hiddenSelections[] = 
		{
			"camo1", "camo2"
		};
		armor=999999;
		armorStructural=999;
		scope=2;
		scopeCurator = 2;
	};
	class 101st_Rancor : House_F
	{
		displayName = "Rancor (Static)";
		editorCategory="Category101stAux";
		editorSubcategory="101st_Props";
		model =  "101st_Aux_Mod\Addons\Objects\Rancor.p3d";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\objects\Rancor_Body_CO.paa", "101st_Aux_Mod\Addons\objects\Rancor_Head_CO.paa"
		};
		hiddenSelections[] = 
		{
			"body", "head"
		};
		armor=999999;
		armorStructural=999;
		scope=2;
		scopeCurator = 2;
	};
};