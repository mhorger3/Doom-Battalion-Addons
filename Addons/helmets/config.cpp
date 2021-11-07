class CfgPatches
{
	class 101st_Aux_Mod_Helmets
	{
		author="Mutt / Dutch";
		name="101st Aux Mod Custom Armor";
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
		units[]={};
		weapons[]={};
	};
};
class CfgWeapons
{
	class UniformItem;
	class SCI_B_Clone_F;
	class ItemCore;
	class InventoryItem_Base_F;
	class Uniform_Base;
	class H_HelmetSpecB;
	class JLTS_CloneHelmetP2_illum;
	class JLTS_CloneHelmetP2;
	class JLTS_CloneHelmetAB;
	class JLTS_CloneHelmetAB_illum;
	class JLTS_CloneHelmetBARC;
	class HeadgearItem: InventoryItem_Base_F
	{
		allowedSlots[]={901,605};
		type=605;
		hiddenSelections[]={};
		hitpointName="HitHead";
	};
	class 101st_Engineer_helm: H_HelmetSpecB
	{
		scope=2;
		displayName="101st Engineer Helmet";
		model="\101st_Aux_Mod\Addons\helmets\Engineer\Engineer_Helm.p3d";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelections[]=
		{
			"Camo",
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\helmets\Engineer\textures\Engineer_Helm_co.paa",
			"\101st_Aux_Mod\Addons\helmets\Engineer\textures\Engineer_Helm_co.paa"
		};
		subItems[]=
		{
			"Integrated_NVG_F"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\101st_Aux_Mod\Addons\helmets\Engineer\Engineer_Helm.p3d";
			allowedSlots[]={801,901,701,605};
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=50;
					passThrough=0.5;
				};
			};
		};
	};
	class 101st_Pilot_Helm: H_HelmetSpecB
	{
		scope=1;
		displayName="101st Pilot Helmet";
		model="\101st_Aux_Mod\Addons\helmets\Pilot\pilotHelm.p3d";
		picture = "3AS\3AS_Characters\Clones\Headgear\ui\p2pilot_ui_ca.paa";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\helmets\Pilot\textures\Pilot_co.paa",
		};
		subItems[]=
		{
			"Integrated_NVG_TI_0_F"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\101st_Aux_Mod\Addons\helmets\Pilot\pilotHelm.p3d";
			allowedSlots[]={801,901,701,605};
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo1"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=50;
					passThrough=0.5;
				};
			};
		};
	};
	class 101st_BARC_Helm: JLTS_CloneHelmetBARC
	{
		scope=2;
		displayName="101st BARC Helmet";
		picture = "\MRC\JLTS\characters\CloneArmor2\data\ui\CloneHelmetBARC_ui_ca.paa";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\helmets\BARC\Barc_CO.paa",
		};
		subItems[]=
		{
			"Integrated_NVG_F"
		};
	};
	class 101st_Mando_Helm: H_HelmetSpecB
	{
		scope=2;
		displayName="Bo Katan Mandalorian Helmet";
		model="\101st_Aux_Mod\Addons\helmets\Mandalorian\Mando_Helm.p3d";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\helmets\Mandalorian\textures\bokatan_CO.paa",
		};
		subItems[]=
		{
			"Integrated_NVG_F"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\101st_Aux_Mod\Addons\helmets\Mandalorian\Mando_Helm.p3d";
			allowedSlots[]={801,901,701,605};
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo1"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=50;
					passThrough=0.5;
				};
			};
		};
	};
	class 101st_JLTS_StealthPilot_Helmet: H_HelmetSpecB
	{
		scope=2;
		displayName="101st Stealth Pilot Helmet";
		model="\101st_Aux_Mod\Addons\helmets\Stealth\stealthHelmet.p3d";
		picture = "3AS\3AS_Characters\Clones\Headgear\ui\p2pilot_ui_ca.paa";
		hiddenSelections[]=
		{
			"camo1",
		};
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\helmets\Stealth\textures\stealthpilot_helmet_CO.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\101st_Aux_Mod\Addons\helmets\Stealth\stealthHelmet.p3d";
			allowedSlots[]={801,901,701,605};
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=50;
					passThrough=0.5;
				};
			};
		};
	};
	class 101st_Forge_Captain : 101st_Engineer_helm
	{
		displayName="101st Lead Engineer Helmet";
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\helmets\Engineer\textures\ForgeCaptain_Helm_co.paa",
			"\101st_Aux_Mod\Addons\helmets\Engineer\textures\ForgeCaptain_Helm_co.paa"
		};
	};
	class 101st_Phase1_helm: H_HelmetSpecB
	{
		scope=2;
		displayName="101st Phase 1 Helmet (Base)";
		model="\101st_Aux_Mod\Addons\helmets\P1\P1.p3d";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelections[]=
		{
			"camo1",
		};
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\helmets\P1\textures\P1_helm.paa",
		};
		subItems[]=
		{
			"Integrated_NVG_F"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\101st_Aux_Mod\Addons\helmets\P1\P1.p3d";
			allowedSlots[]={801,901,701,605};
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo1"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=50;
					passThrough=0.5;
				};
			};
		};
	};

	class 101st_NCO_Phase1 : 101st_Phase1_helm
	{
		scope=2;
		displayName="101st Phase 1 Helmet (NCO)";
		model="\101st_Aux_Mod\Addons\helmets\P1\P1.p3d";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelections[]=
		{
			"camo1",
		};
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\helmets\P1\textures\P1_NCO_helm.paa",
		};
		subItems[]=
		{
			"Integrated_NVG_F"
		};
	};

	class 101st_Command_Phase1 : 101st_Phase1_helm
	{
		scope=2;
		displayName="101st Phase 1 Helmet (Command)";
		model="\101st_Aux_Mod\Addons\helmets\P1\P1.p3d";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelections[]=
		{
			"camo1",
		};
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\helmets\P1\textures\P1_Command_helm.paa",
		};
		subItems[]=
		{
			"Integrated_NVG_F"
		};
	};

	class 101st_Medic_Phase1 : 101st_Phase1_helm
	{
		scope=2;
		displayName="101st Phase 1 Helmet (Medic)";
		model="\101st_Aux_Mod\Addons\helmets\P1\P1.p3d";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelections[]=
		{
			"camo1",
		};
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\helmets\P1\textures\P1_Medic_helm.paa",
		};
		subItems[]=
		{
			"Integrated_NVG_F"
		};
	};

	class 101st_RTO_Phase1 : 101st_Phase1_helm
	{
		scope=2;
		displayName="101st Phase 1 Helmet (RTO)";
		model="\101st_Aux_Mod\Addons\helmets\P1\P1.p3d";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelections[]=
		{
			"camo1",
		};
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\helmets\P1\textures\P1_RTO_helm.paa",
		};
		subItems[]=
		{
			"Integrated_NVG_F"
		};
	};


	class 101st_P2_Arid: JLTS_CloneHelmetP2
	{
		author="Dutch";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Arid P2 Helmet (JLTS)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\ARF_Arid_Phase2_Helm_CO.paa"
		};
	};
	class 101st_P2_Tropic: JLTS_CloneHelmetP2
	{
		author="Dutch";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Tropic P2 Helmet (JLTS)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\ARF_Tropic_Phase2_Helm_CO.paa"
		};
	};
	class 101st_P2_Urban: JLTS_CloneHelmetP2
	{
		author="Dutch";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Urban P2 Helmet (JLTS)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\ARF_Urban_Phase2_Helm_CO.paa"
		};
	};
	class 101st_P2_Winter: JLTS_CloneHelmetP2
	{
		author="Dutch";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Winter P2 Helmet (JLTS)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\ARF_Winter_Phase2_Helm_CO.paa"
		};
	};
	class JLTS_CloneHelmetP2;
	class 101st_ARF_Base : JLTS_CloneHelmetP2 {
		author="Dutch";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st ARF Base Helmet (JLTS)";
		picture = "3AS\3AS_Characters\Clones\Headgear\ui\ARF_UI_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\helmets\Longbow\textures\ARF_Helm_CO.paa", "101st_Aux_Mod\Addons\helmets\Longbow\textures\Plates_CO.paa"
		};
		hiddenSelections[]= {"camo1", "camo2"};
		model = "101st_Aux_Mod\Addons\helmets\Longbow\Longbow.p3d";
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel = "101st_Aux_Mod\Addons\helmets\Longbow\Longbow.p3d";
			allowedSlots[]={801,901,701,605};
			modelSides[]={6};
			hiddenSelections[]= {"camo1", "camo2"};
		};
	};
	class 101st_ATRT_Base : JLTS_CloneHelmetP2 {
		author="Dutch";
		scope=0;
		scopeArsenal=0;
		dlc = "101st_Aux_Mod";
		displayName="101st ATRT Base Helmet (JLTS)";
		picture = "3AS\3AS_Characters\Clones\Headgear\ui\ARF_UI_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\helmets\Longbow\textures\ARF_Helm_CO.paa", "", "101st_Aux_Mod\Addons\helmets\Longbow\textures\Plates_CO.paa"
		};
		hiddenSelections[]= {"camo1", "camo2", "camo3"};
		model = "101st_Aux_Mod\Addons\helmets\ARFV2\ARF.p3d";
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel = "101st_Aux_Mod\Addons\helmets\ARFV2\ARF.p3d";
			allowedSlots[]={801,901,701,605};
			modelSides[]={6};
			hiddenSelections[]= {"camo1", "camo2", "camo3"};
		};
	};
	class 101st_ATRT_Winter : 101st_ATRT_Base {
		author="Dutch";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st ATRT Winter Helmet (JLTS)";
		picture = "3AS\3AS_Characters\Clones\Headgear\ui\ARF_UI_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\helmets\Longbow\textures\Winter_CO.paa", "101st_Aux_Mod\Addons\helmets\ARFV2\textures\Winter_Flaps_CO.paa", "101st_Aux_Mod\Addons\helmets\Longbow\textures\Winter_Plates_CO.paa"
		};
		hiddenSelections[]= {"camo1", "camo2", "camo3"};
		model = "101st_Aux_Mod\Addons\helmets\ARFV2\ARF.p3d";
	};

	class 101st_ARF_Winter : 101st_ARF_Base {
		author="Dutch";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st ARF Winter Helmet (JLTS)";
		picture = "3AS\3AS_Characters\Clones\Headgear\ui\ARF_UI_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\helmets\Longbow\textures\Winter_CO.paa", "101st_Aux_Mod\Addons\helmets\Longbow\textures\Winter_Plates_CO.paa"
		};
		hiddenSelections[]= {"camo1", "camo2"};
		model = "101st_Aux_Mod\Addons\helmets\Longbow\Longbow.p3d";
	};

	class 101st_ARF_Recruit : 101st_ARF_Base{
		author = "Vulgar";
		scope = 2;
		scopeArsenal = 2;
		dlc = "101st_Aux_Mod";
		displayName = "101st ARF Recruit Helmet (JLTS)";
		picture = "3AS\3AS_Characters\Clones\Headgear\ui\ARF_UI_CA.paa";
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\ARF_Helmet_Recruit_CO.paa", "101st_Aux_Mod\Addons\helmets\Longbow\textures\Plates_CO.paa"
		};
		hiddenSelections[] = {"camo1", "camo2"};
		model = "101st_Aux_Mod\Addons\helmets\Longbow\Longbow.p3d";
	};

	class 101st_Hark_ARF: 101st_ARF_Base {
		author="Spark";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Hark ARF Helmet (JLTS)";
		picture = "3AS\3AS_Characters\Clones\Headgear\ui\ARF_UI_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\helmets\Longbow\textures\Hark_Helmet_ARF_CO.paa", "101st_Aux_Mod\Addons\helmets\Longbow\textures\Plates_CO.paa"
		};
		hiddenSelections[]= {"camo1", "camo2"};
		model = "101st_Aux_Mod\Addons\helmets\Longbow\Longbow.p3d";
	};
	class 101st_Dune_ARF: 101st_ARF_Base {
		author="Spark";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Dune ARF Helmet (JLTS)";
		picture = "3AS\3AS_Characters\Clones\Headgear\ui\ARF_UI_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\helmets\Longbow\textures\Dune_Helmet_CO.paa", "101st_Aux_Mod\Addons\helmets\Longbow\textures\Plates_CO.paa"
		};
		hiddenSelections[]= {"camo1", "camo2"};
		model = "101st_Aux_Mod\Addons\helmets\Longbow\Longbow.p3d";
	};
	class 101st_Satch_ARF: 101st_ARF_Base {
		author="Spark";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Satch ARF Helmet (JLTS)";
		picture = "3AS\3AS_Characters\Clones\Headgear\ui\ARF_UI_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\helmets\Longbow\textures\Satch_ARF_Helmet_CO.paa", "101st_Aux_Mod\Addons\helmets\Longbow\textures\Plates_CO.paa"
		};
		hiddenSelections[]= {"camo1", "camo2"};
		model = "101st_Aux_Mod\Addons\helmets\Longbow\Longbow.p3d";
	};
	class 101st_Secutor_ARF: 101st_ARF_Base {
		author="Spark";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Secutor ARF Helmet (JLTS)";
		picture = "3AS\3AS_Characters\Clones\Headgear\ui\ARF_UI_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\helmets\Longbow\textures\Secutor_ARF_Helmet_CO.paa", "101st_Aux_Mod\Addons\helmets\Longbow\textures\Plates_CO.paa"
		};
		hiddenSelections[]= {"camo1", "camo2"};
		model = "101st_Aux_Mod\Addons\helmets\Longbow\Longbow.p3d";
	};
	class 101st_Nova_ARF: 101st_ARF_Base {
		author="Dutch";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Nova ARF Helmet (JLTS)";
		picture = "3AS\3AS_Characters\Clones\Headgear\ui\ARF_UI_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\helmets\Longbow\textures\Nova_ARF_Helmet_CO.paa", "101st_Aux_Mod\Addons\helmets\Longbow\textures\Plates_CO.paa"
		};
		hiddenSelections[]= {"camo1", "camo2"};
		model = "101st_Aux_Mod\Addons\helmets\Longbow\Longbow.p3d";
	};
	class 101st_Quill_ARF: 101st_ARF_Base {
		author="Spark";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Quill ARF Helmet (JLTS)";
		picture = "3AS\3AS_Characters\Clones\Headgear\ui\ARF_UI_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\helmets\Longbow\textures\Quill_ARF_Helmet_CO.paa", "101st_Aux_Mod\Addons\helmets\Longbow\textures\Plates_CO.paa"
		};
		hiddenSelections[]= {"camo1", "camo2"};
		model = "101st_Aux_Mod\Addons\helmets\Longbow\Longbow.p3d";
	};
	class 101st_Zareth_ARF: 101st_ARF_Base {
		author="Spark";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Zareth ARF Helmet (JLTS)";
		picture = "3AS\3AS_Characters\Clones\Headgear\ui\ARF_UI_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\helmets\Longbow\textures\Zareth_ARF_Helmet_CO.paa", "101st_Aux_Mod\Addons\helmets\Longbow\textures\Plates_CO.paa"
		};
		hiddenSelections[]= {"camo1", "camo2"};
		model = "101st_Aux_Mod\Addons\helmets\Longbow\Longbow.p3d";
	};
	class 101st_Marsh_ARF: 101st_ARF_Base {
		author="Dutch";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Marshmallow ARF Helmet (JLTS)";
		picture = "3AS\3AS_Characters\Clones\Headgear\ui\ARF_UI_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\helmets\Longbow\textures\Marshmallow_ARF_Helmet_CO.paa", "101st_Aux_Mod\Addons\helmets\Longbow\textures\Plates_CO.paa"
		};
		hiddenSelections[]= {"camo1", "camo2"};
		model = "101st_Aux_Mod\Addons\helmets\Longbow\Longbow.p3d";
	};

	class 101st_ATRT_Urban : 101st_ATRT_Base {
		author="Dutch";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st ATRT Urban Helmet (JLTS)";
		picture = "3AS\3AS_Characters\Clones\Headgear\ui\ARF_UI_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\helmets\Longbow\textures\Urban_CO.paa", "101st_Aux_Mod\Addons\helmets\ARFV2\textures\Urban_Flaps_CO.paa", "101st_Aux_Mod\Addons\helmets\Longbow\textures\Urban_Plates_CO.paa"
		};
		hiddenSelections[]= {"camo1", "camo2", "camo3"};
		model = "101st_Aux_Mod\Addons\helmets\ARFV2\ARF.p3d";
	};
	class 101st_ARF_Urban : 101st_ARF_Base {
		author="Dutch";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st ARF Urban Helmet (JLTS)";
		picture = "3AS\3AS_Characters\Clones\Headgear\ui\ARF_UI_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\helmets\Longbow\textures\Urban_CO.paa", "101st_Aux_Mod\Addons\helmets\Longbow\textures\Urban_Plates_CO.paa"
		};
		hiddenSelections[]= {"camo1", "camo2"};
		model = "101st_Aux_Mod\Addons\helmets\Longbow\Longbow.p3d";
	};
	class 101st_ATRT_Tropic : 101st_ATRT_Base {
		author="Dutch";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st ATRT Tropic Helmet (JLTS)";
		picture = "3AS\3AS_Characters\Clones\Headgear\ui\ARF_UI_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\helmets\Longbow\textures\Jungle_CO.paa", "101st_Aux_Mod\Addons\helmets\ARFV2\textures\Jungle_Flaps_CO.paa", "101st_Aux_Mod\Addons\helmets\Longbow\textures\Jungle_Plates_CO.paa"
		};
		hiddenSelections[]= {"camo1", "camo2", "camo3"};
		model = "101st_Aux_Mod\Addons\helmets\ARFV2\ARF.p3d";
	};
	class 101st_ARF_Tropic : 101st_ARF_Base {
		author="Dutch";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st ARF Tropic Helmet (JLTS)";
		picture = "3AS\3AS_Characters\Clones\Headgear\ui\ARF_UI_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\helmets\Longbow\textures\Jungle_CO.paa", "101st_Aux_Mod\Addons\helmets\Longbow\textures\Jungle_Plates_CO.paa"
		};
		hiddenSelections[]= {"camo1", "camo2"};
		model = "101st_Aux_Mod\Addons\helmets\Longbow\Longbow.p3d";
	};
	class 101st_ATRT_Arid : 101st_ATRT_Base {
		author="Dutch";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st ATRT Arid Helmet (JLTS)";
		picture = "3AS\3AS_Characters\Clones\Headgear\ui\ARF_UI_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\helmets\Longbow\textures\Arid_CO.paa", "101st_Aux_Mod\Addons\helmets\ARFV2\textures\Arid_Flaps_CO.paa", "101st_Aux_Mod\Addons\helmets\Longbow\textures\Arid_Plates_CO.paa"
		};
		hiddenSelections[]= {"camo1", "camo2", "camo3"};
		model = "101st_Aux_Mod\Addons\helmets\ARFV2\ARF.p3d";
	};
	class 101st_ARF_Arid : 101st_ARF_Base {
		author="Dutch";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st ARF Arid Helmet (JLTS)";
		picture = "3AS\3AS_Characters\Clones\Headgear\ui\ARF_UI_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\helmets\Longbow\textures\Arid_CO.paa", "101st_Aux_Mod\Addons\helmets\Longbow\textures\Arid_Plates_CO.paa"
		};
		hiddenSelections[]= {"camo1", "camo2"};
		model = "101st_Aux_Mod\Addons\helmets\Longbow\Longbow.p3d";
	};
	class 101st_ATRT_Night : 101st_ATRT_Base {
		author="Dutch";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st ATRT Night Helmet (JLTS)";
		picture = "3AS\3AS_Characters\Clones\Headgear\ui\ARF_UI_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\helmets\Longbow\textures\Night_CO.paa", "101st_Aux_Mod\Addons\helmets\ARFV2\textures\Night_Flaps_CO.paa", "101st_Aux_Mod\Addons\helmets\Longbow\textures\Night_Plates_CO.paa"
		};
		hiddenSelections[]= {"camo1", "camo2", "camo3"};
		model = "101st_Aux_Mod\Addons\helmets\ARFV2\ARF.p3d";
	};
	class 101st_ARF_Night : 101st_ARF_Base {
		author="Dutch";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st ARF Night Helmet (JLTS)";
		picture = "3AS\3AS_Characters\Clones\Headgear\ui\ARF_UI_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\helmets\Longbow\textures\Night_CO.paa", "101st_Aux_Mod\Addons\helmets\Longbow\textures\Night_Plates_CO.paa"
		};
		hiddenSelections[]= {"camo1", "camo2"};
		model = "101st_Aux_Mod\Addons\helmets\Longbow\Longbow.p3d";
	};

	class 101st_Scuba_New : H_HelmetSpecB
	{
		author="Dutch";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Scuba Helmet (Trooper)";
		model="\101st_Aux_Mod\Addons\helmets\Scuba\scuba.p3d";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\helmets\Scuba\textures\101st_Scuba_CO.paa"
		};
		CBRN_protection=1;
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\101st_Aux_Mod\Addons\helmets\Scuba\scuba.p3d";
			allowedSlots[]={801,901,701,605};
			modelSides[]={6};
			hiddenSelections[]=
			{
				"Camo1"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=50;
					passThrough=0.5;
				};
			};
		};
	};
	class 101st_Scuba_NCO : H_HelmetSpecB
	{
		author="Dutch";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Scuba Helmet (NCO)";
		model="\101st_Aux_Mod\Addons\helmets\Scuba\scuba.p3d";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\helmets\Scuba\textures\101st_NCO_Scuba_CO.paa"
		};
		CBRN_protection=1;
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\101st_Aux_Mod\Addons\helmets\Scuba\scuba.p3d";
			allowedSlots[]={801,901,701,605};
			modelSides[]={6};
			hiddenSelections[]=
			{
				"Camo1"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=50;
					passThrough=0.5;
				};
			};
		};
	};
	class 101st_Scuba_Base : H_HelmetSpecB
	{
		author="Dutch";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Scuba Helmet (Base)";
		model="\101st_Aux_Mod\Addons\helmets\Scuba\scuba.p3d";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\helmets\Scuba\textures\Scuba_CO.paa"
		};
		CBRN_protection=1;
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\101st_Aux_Mod\Addons\helmets\Scuba\scuba.p3d";
			allowedSlots[]={801,901,701,605};
			modelSides[]={6};
			hiddenSelections[]=
			{
				"Camo1"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=50;
					passThrough=0.5;
				};
			};
		};
	};

	class GARC_Scuba_Base : H_HelmetSpecB
	{
		author="Dutch";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="GARC Scuba Helmet (Base)";
		model="\101st_Aux_Mod\Addons\helmets\Scuba\scuba.p3d";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\helmets\Scuba\textures\GARC_Scuba_CO.paa"
		};
		CBRN_protection=1;
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\101st_Aux_Mod\Addons\helmets\Scuba\scuba.p3d";
			allowedSlots[]={801,901,701,605};
			modelSides[]={6};
			hiddenSelections[]=
			{
				"Camo1"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=50;
					passThrough=0.5;
				};
			};
		};
	};
	class 101st_Tech_Helmet : JLTS_CloneHelmetP2
	{
		author="Dutch";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Tech Helmet (Base)";
		model="\101st_Aux_Mod\Addons\helmets\Tech\Tech_Helm.p3d";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\helmets\Tech\textures\Tech_CO.paa"
		};
		CBRN_protection=1;
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\101st_Aux_Mod\Addons\helmets\Tech\Tech_Helm.p3d";
			allowedSlots[]={801,901,701,605};
			modelSides[]={6};
			hiddenSelections[]=
			{
				"Camo1"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=50;
					passThrough=0.5;
				};
			};
		};
	};
	class 101st_Snow_Helmet : JLTS_CloneHelmetP2
	{
		author="Dutch";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Snow Helmet (Base)";
		model="\101st_Aux_Mod\Addons\helmets\Snow\Snow_Helm.p3d";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\helmets\Snow\textures\Snow_Trooper_Helmet_CO.paa"
		};
		CBRN_protection=1;
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\101st_Aux_Mod\Addons\helmets\Snow\Snow_Helm.p3d";
			allowedSlots[]={801,901,701,605};
			modelSides[]={6};
			hiddenSelections[]=
			{
				"Camo1"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=8;
					passThrough=0.5;
				};
			};
		};
	};
	class 101st_BaseDagger_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		scope=2;
		dlc = "101st_Aux_Mod";
		scopeArsenal=2;
		subItems[] = {"JLTS_CloneNVG_spec"};
		displayName="101st Airborne helmet (Cadet)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Base_Airborne_CO.paa"
		};
		model = "\MRC\JLTS\characters\CloneArmor\CloneHelmetAB.p3d";
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\MRC\JLTS\characters\CloneArmor\CloneHelmetAB.p3d";
			allowedSlots[]={801,901,701,605};
			modelSides[]={6};
			hiddenSelections[]=
			{
				"Camo1"
			};
			class hitpointsprotectioninfo
			{
				class head
				{
					hitPointName = "HitHead";
					armor = 8;
					passThrough = 0.5;
				};
			};
		};
		
	};
	class 101st_Dagger_Helmet: 101st_BaseDagger_Helmet
	{
		author="Dutch";
		scope=2;
		dlc = "101st_Aux_Mod";
		scopeArsenal=2;
		subItems[] = {"JLTS_CloneNVG_spec"};
		displayName="101st Airborne helmet (Base)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Airborne_Helm_CO.paa"
		};
		model = "\MRC\JLTS\characters\CloneArmor\CloneHelmetAB.p3d";
		
	};
	class 101st_Dagger_AltHelm: JLTS_CloneHelmetAB_illum
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Airborne helmet ALT (Base)";
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\textures\101st\helmets\Airborne_AlternativeHelm_CO.paa", "\101st_Aux_Mod\Addons\textures\101st\helmets\Airborne_AlternativeHelm_CO.paa"
		};
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
		subItems[] = {"JLTS_CloneNVG_spec"};
	};
	class 101st_Furn_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Furn)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Furn_Helm_CO.paa"
		};
	};
	class 101st_Gill_Helmet: 101st_Dagger_Helmet
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Gill)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Gill_Helm_CO.paa"
		};
		subItems[] = {"JLTS_CloneNVG_spec"};
	};
	class 101st_Techno_Helmet: 101st_Dagger_Helmet
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Techno)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Techno_Helm_CO.paa"
		};
		subItems[] = {"JLTS_CloneNVG_spec"};
	};
	class 101st_Dragon_Helmet: 101st_Dagger_Helmet
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Dragon)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Dragon_Helm_CO.paa"
		};
		subItems[] = {"JLTS_CloneNVG_spec"};
	};
	class 101st_Heretic_Helmet: 101st_Dagger_Helmet
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Heretic)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Heretic_Helm_CO.paa"
		};
		subItems[] = {"JLTS_CloneNVG_spec"};
	};
	class 101st_Ryker_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Ryker)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Ryker_Helm_CO.paa"
		};
	};
	class 101st_Mechanic_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Mechanic)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Mechanic_Helmet_CO.paa"
		};
	};
	class 101st_Vulcan_Helmet : JLTS_CloneHelmetP2
	{
		author = "Vulgar";
		dlc = "101st_Aux_Mod";
		scope = 2;
		scopeArsenal = 2;
		displayName = "101st Clone helmet (Vulcan)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Vulcan_Helmet_CO.paa"
		};
	};
	class 101st_Frohman_Helmet : JLTS_CloneHelmetP2
	{
		author = "Vulgar";
		dlc = "101st_Aux_Mod";
		scope = 2;
		scopeArsenal = 2;
		displayName = "101st Clone helmet (Frohman)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Frohman_Helmet_CO.paa"
		};
	};
	class 101st_Elk_Helmet : JLTS_CloneHelmetP2
	{
		author = "Vulgar";
		dlc = "101st_Aux_Mod";
		scope = 2;
		scopeArsenal = 2;
		displayName = "101st Clone helmet (Elk)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Elk_Helmet_CO.paa"
		};
	};
	class 101st_Shotty_Helmet: 101st_Dagger_Helmet
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Shotty)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Shotty_Helmet_AB_CO.paa"
		};
		subItems[] = {"JLTS_CloneNVG_spec"};
	};
	class 101st_Astolfo_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Astolfo)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Remnant_Helm_CO.paa"
		};
	};
	class 101st_Itachi_Helmet: 101st_Dagger_Helmet
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Itachi)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Itachi_Helm_CO.paa"
		};
		subItems[] = {"JLTS_CloneNVG_spec"};
	};
	class 101st_Mutt_Helm: 101st_Dagger_Helmet
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Mutt)";
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\textures\101st\helmets\Mutt_Helm_CO.paa"
		};
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
		subItems[] = {"JLTS_CloneNVG_spec"};
	};
	class 101st_Mutt_AltHelm: JLTS_CloneHelmetAB_illum
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet ALT (Mutt)";
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\textures\101st\helmets\Mutt_AlternativeHelm_CO.paa", "\101st_Aux_Mod\Addons\textures\101st\helmets\Mutt_AlternativeHelm_CO.paa"
		};
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		subItems[] = {"JLTS_CloneNVG_spec"};
	};
	class 101st_Prodigy_Helm: 101st_Dagger_Helmet
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Prodigy)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\textures\101st\helmets\Prodigy_Helm_CO.paa"
		};
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
		subItems[] = {"JLTS_CloneNVG_spec"};
	};
	class 101st_Athley_Helm: 101st_Dagger_Helmet
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Athley)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\textures\101st\helmets\Athley_Helmet_AB_CO.paa"
		};
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
		subItems[] = {"JLTS_CloneNVG_spec"};
	};
	class 101st_Dog_Helm: 101st_Dagger_Helmet
	{
		author="Spark";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Dog)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\textures\101st\helmets\Dog_Helmet_AB_CO.paa"
		};
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
		subItems[] = {"JLTS_CloneNVG_spec"};
	};
	class 101st_Nickel_Helm: 101st_Dagger_Helmet
	{
		author="Spark";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Nickel)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\textures\101st\helmets\Nickle_Helmet_AB_CO.paa"
		};
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
		subItems[] = {"JLTS_CloneNVG_spec"};
	};
	class 101st_Glitch_Helm: 101st_Dagger_Helmet
	{
		author="Spark";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Glitch)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\textures\101st\helmets\Glitch_Helmet_AB_CO.paa"
		};
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
		subItems[] = {"JLTS_CloneNVG_spec"};
	};
	class 101st_Wildfire_Helm: 101st_Dagger_Helmet
	{
		author="Spark";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Wildfire)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\textures\101st\helmets\Wildfire_Helmet_AB_CO.paa"
		};
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
		subItems[] = {"JLTS_CloneNVG_spec"};
	};
	class 101st_Turtle_Helm: 101st_Dagger_Helmet
	{
		author="Spark";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Turtle)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\textures\101st\helmets\Turtle_Helmet_AB_CO.paa"
		};
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
		subItems[] = {"JLTS_CloneNVG_spec"};
	};
	class 101st_Phillips_Helm: 101st_Dagger_Helmet
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Phillips)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\textures\101st\helmets\Phillips_Helmet_AB_CO.paa"
		};
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
		subItems[] = {"JLTS_CloneNVG_spec"};
	};
	class 101st_Krusader_Helm: 101st_Dagger_Helmet
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Krusader)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\textures\101st\helmets\Krusader_Helmet_AB_CO.paa"
		};
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
		subItems[] = {"JLTS_CloneNVG_spec"};
	};
	class 101st_Quicksilver_Helm: 101st_Dagger_Helmet
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Quicksilver)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\textures\101st\helmets\Quicksilver_Helmet_AB_CO.paa"
		};
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
		subItems[] = {"JLTS_CloneNVG_spec"};
	};
	class 101st_Winters_Helm: 101st_Dagger_Helmet
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Winters)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\textures\101st\helmets\Winters_Helmet_AB_CO.paa"
		};
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
		subItems[] = {"JLTS_CloneNVG_spec"};
	};
	class 101st_Mute_Helm: 101st_Dagger_Helmet
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Mute)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\textures\101st\helmets\Mute_Helmet_AB_CO.paa"
		};
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
		subItems[] = {"JLTS_CloneNVG_spec"};
	};
	class 101st_Recruit_Helm: 101st_Dagger_Helmet
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone AB helmet (Recruit)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\textures\101st\helmets\Recruit_Helmet_CO.paa"
		};
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
		subItems[] = {"JLTS_CloneNVG_spec"};
	};
	class 101st_Navo_Helm: 101st_Dagger_Helmet
	{
		author="Spark";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone AB helmet (Navo)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\textures\101st\helmets\Navo_Helmet_AB_CO.paa"
		};
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
		subItems[] = {"JLTS_CloneNVG_spec"};
	};
	class 101st_Rez_Helm: 101st_Dagger_Helmet
	{
		author="Spark";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone AB helmet (Rez)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\textures\101st\helmets\Rez_Helmet_AB_CO.paa"
		};
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
		subItems[] = {"JLTS_CloneNVG_spec"};
	};
	class 101st_Zelph_Helm: 101st_Dagger_Helmet
	{
		author="Spark";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone AB helmet (Zelph)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\textures\101st\helmets\Zelph_Helmet_CO.paa"
		};
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
		subItems[] = {"JLTS_CloneNVG_spec"};
	};
	class 101st_Biscuit_Helm: 101st_Dagger_Helmet
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Biscuit)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\textures\101st\helmets\Biscuit_Helmet_CO.paa"
		};
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
		subItems[] = {"JLTS_CloneNVG_spec"};
	};
	class 101st_Pizza_Helm: 101st_Dagger_Helmet
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Pizza)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\textures\101st\helmets\Pizza_Helmet_CO.paa"
		};
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
		subItems[] = {"JLTS_CloneNVG_spec"};
	};
		
	class RD501_pilot_helmet_cxc;
	class 101st_Crooked_Helmet: JLTS_CloneHelmetP2
	{
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Clone Helmet (Crooked)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\textures\101st\helmets\Crooked_Helmet_CO.paa"
		};
	};
	
	class 101st_Recruit_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Clone helmet (Recruit)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Recruit_Helm_CO.paa"
		};
	};
	/*
	class 101st_Medkit_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Clone helmet (Medkit)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Medkit_Helm_CO.paa"
		};
	};*/
	class 101st_Milk_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Clone helmet (Milk)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Milk_Helm_CO.paa"
		};
	};
	class 101st_Seefor_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Clone helmet (Seefor)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Seefor_Helmet_CO.paa"
		};
	};
	class 101st_Shake_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Clone helmet (Shake)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Shake_Helmet_RTO_CO.paa"
		};
	};
	class 101st_Secutor_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Clone helmet (Secutor)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Secutor_Helmet_CO.paa"
		};
	};
	class 101st_Alter_Helmet: JLTS_CloneHelmetP2
	{
		author="Spark";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Clone helmet (Alter)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Alter_Helmet_CO.paa"
		};
	};
	class 101st_Hero_Helmet: JLTS_CloneHelmetP2
	{
		author="Spark";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Clone helmet (Hero)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Hero_Helmet_CO.paa"
		};
	};
	class 101st_Robo_Helmet: JLTS_CloneHelmetP2
	{
		author="Spark";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Clone helmet (Robo)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Robo_Helmet_CO.paa"
		};
	};
	class 101st_Flames_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Clone helmet (Flames)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Flames_Helmet_CO.paa"
		};
	};
	class 101st_Flame_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Clone helmet (Flame)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Flame_Helmet_CO.paa"
		};
	};
	class 101st_Morn_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Clone helmet (Morn)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Morn_Helmet_CO.paa"
		};
		hiddenSelectionsMaterials[] = { "101st_Aux_Mod\Addons\textures\101st\helmets\data\Morn_Helmet.rvmat" };
	};
	class 101st_Servo_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Clone helmet (Servo)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Servo_Helmet_CO.paa"
		};
	};
	class 101st_CLS_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Clone helmet (Combat Life Saver)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\CLS_Trooper_Helmet_CO.paa"
		};
	};
	class 101st_Pigs_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Clone helmet (Pigs)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Pigs_Helm_CO.paa"
		};
	};
	class 101st_Solace_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Clone helmet (Solace)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Solace_Helmet_CO.paa"
		};
	};
	class 101st_Post_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Clone helmet (Post)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Post_Helmet_CO.paa"
		};
	};
	class 101st_Bark_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Clone helmet (Bark)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Bark_Helm_CO.paa"
		};
	};
	class 101st_RTOWhite_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Clone helmet (RTO Recruit)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\RTO_Cadet_Helm_CO.paa"
		};
	};
	class 101st_Boss_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Clone helmet (Boss)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Boss_Helm_CO.paa"
		};
	};
	class 101st_Bright_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Clone helmet (Bright)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Bright_Helmet_CO.paa"
		};
	};
	class 101st_Rig_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Clone helmet (Rig)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Rig_Helmet_CO.paa"
		};
	};
	class 101st_Spark_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Clone helmet (Spark)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Spark_Helm_CO.paa"
		};
			hiddenSelectionsMaterials[] = { "101st_Aux_Mod\Addons\textures\101st\helmets\data\Spark_Helmet.rvmat" };
	};
	class 101st_Baca_Helmet: JLTS_CloneHelmetP2
	{
		author="Spark";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Clone helmet (Baca)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Baca_Helmet_CO.paa"
		};
	};
	class 101st_Cooker_Helmet: JLTS_CloneHelmetP2
	{
		author="Spark";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Clone helmet (Cooker)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Cooker_Helmet_CO.paa"
		};
	};
	class 101st_Grumpy_Helmet: JLTS_CloneHelmetP2
	{
		author="Spark";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Clone helmet (Grumpy)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Grumpy_Helmet_CO.paa"
		};
	};
	class 101st_Noc_Helmet: JLTS_CloneHelmetP2
	{
		author="Spark";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Clone helmet (Noc)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Noc_Helmet_CO.paa"
		};
	};
	class 101st_Scythe_Helmet: JLTS_CloneHelmetP2
	{
		author="Spark";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Clone helmet (Scythe)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Scythe_Helmet_CO.paa"
		};
	};
	class 101st_Trap_Helmet: JLTS_CloneHelmetP2
	{
		author="Spark";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Clone helmet (Trap)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Trap_Helmet_CO.paa"
		};
	};
	class 101st_Sixten_Helmet: JLTS_CloneHelmetP2
	{
		author="Vulgar";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Clone helmet (Sixten)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\SixTen_Helmet_CO.paa"
		};
	};
	class 101st_Wild_Helmet: JLTS_CloneHelmetP2
	{
		author="Vulgar";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Clone helmet (Wild)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Wild_Helmet_CO.paa"
		};
	};
	class 101st_CMRecruit_Helmet: JLTS_CloneHelmetP2
	{
		author="Vulgar";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Clone helmet (CM Recruit)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\CM_Recruit_Helmet_CO.paa"
		};
	};
	class 101st_Sorensic_Helmet: JLTS_CloneHelmetP2
	{
		author="Spark";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Clone helmet (Sorensic)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Sorensic_Helmet_CO.paa"
		};
	};
	class 101st_Nomad_Helmet: JLTS_CloneHelmetP2
	{
		author="Spark";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Clone helmet (Nomad)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Nomad_Helmet_CO.paa"
		};
	};
	class 101st_Legatorre_Helmet: JLTS_CloneHelmetP2
	{
		author="Spark";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Clone helmet (Legatorre)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Legatorre_Helmet_CO.paa"
		};
	};
	class 101st_Merril_Helmet: JLTS_CloneHelmetP2
	{
		author="Spark";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Clone helmet (Merril)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Merril_Helmet_CO.paa"
		};
	};
	class 101st_Monitor_Helmet: JLTS_CloneHelmetP2
	{
		author="Spark";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Clone helmet (Monitor)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Monitor_Helmet_CO.paa"
		};
	};
	class 101st_Fodder_Helmet: JLTS_CloneHelmetP2
	{
		author="Spark";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Clone helmet (Fodder)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Fodder_Helmet_CO.paa"
		};
	};
	class 101st_Hound_Helmet: JLTS_CloneHelmetP2
	{
		author="Spark";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Clone helmet (Hound)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Hound_Helmet_CO.paa"
		};
	};
	class 101st_Ty_Helmet: JLTS_CloneHelmetP2
	{
		author="Spark";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Clone helmet (Ty)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Ty_Helmet_CO.paa"
		};
	};
	class 101st_Buzzer_Helmet: JLTS_CloneHelmetP2
	{
		author="Spark";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Clone helmet (Buzzer)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Buzzer_Helmet_CO.paa"
		};
	}
	class 101st_Allen_Helmet: JLTS_CloneHelmetP2
	{
		author="Spark";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Clone helmet (Allen)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Allen_Helmet_CO.paa"
		};
	}
	class 101st_Shatterstorm_Helmet: JLTS_CloneHelmetP2
	{
		author="Spark";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Clone helmet (Shatterstorm)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Shatterstorm_Helmet_CO.paa"
		};
	}
	class 101st_Rick_Helmet: 101st_Dagger_Helmet
	{
		author="Spark";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Clone helmet (Rick)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Rick_Helmet_CO.paa"
		};
	}
	class 101st_Fresh_Helmet: 101st_Dagger_Helmet
	{
		author="Spark";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Clone helmet (Fresh)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Fresh_Helmet_AB_CO.paa"
		};
	}
	class 101st_Fuze_Helmet: 101st_Dagger_Helmet
	{
		author="Spark";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Clone helmet (Fuze)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Fuze_Helmet_AB_CO.paa"
		};
	}
	class 101st_Griddle_Helmet: 101st_Dagger_Helmet
	{
		author="Spark";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Clone helmet (Griddle)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Griddle_Helmet_AB_CO.paa"
		};
	}
	class 101st_Des_Helmet: 101st_Dagger_Helmet
	{
		author="Spark";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Clone helmet (Des)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Des_Helmet_CO.paa"
		};
	}
	class 101st_Slapshot_Helmet: 101st_Dagger_Helmet
	{
		author="Spark";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Clone helmet (Slapshot)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Slapshot_Helmet_CO.paa"
		};
	}
	class 101st_Frosty_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Clone helmet (Frosty)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Frosty_Helm_CO.paa"
		};
	};
	class 101st_Slav_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Clone helmet (Slav)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Slav_Helmet_CO.paa"
		};
	};
	class 101st_Duskrider_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Clone helmet (Duskrider)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Duskrider_Helm_CO.paa"
		};
	};
	class 101st_Cola_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Clone helmet (Cola)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Cola_Helmet_CO.paa"
		};
	};

	class 101st_Misfit_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Clone helmet (Misfit)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Misfit_Helmet_CO.paa"
		};
	};
	class 101st_Nahrkin_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Clone helmet (Nahrkin)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Nahrkin_Helm_CO.paa"
		};
	};
	class 101st_Dojo_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Clone helmet (Dojo)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Dojo_Helm_CO.paa"
		};
	};
	class 101st_Edge_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Clone helmet (Edge)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Edge_Helm_CO.paa"
		};
	};
	class 101st_Euget_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Clone helmet (Euget)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Euget_Helmet_CO.paa"
		};
	};
	class 101st_Grif_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Clone helmet (Grif)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Grif_Helm_CO.paa"
		};
	};
	class 101st_Nelson_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Clone helmet (Nelson)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Nelson_Helm_CO.paa"
		};
	};
	class 101st_Walker_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Clone helmet (Walker)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Walker_Helm_CO.paa"
		};
	};
	class 101st_Blood_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Clone helmet (Blood)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Blood_Helm_CO.paa"
		};
	};
	class 101st_Hastings_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Clone helmet (Hastings)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Hastings_Helmet_CO.paa"
		};
	};
	class 101st_Kei_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Clone helmet (Kei)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Kei_Helmet_CO.paa"
		};
	};
	class 101st_Limit_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Clone helmet (Limit)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Limit_Helmet_CO.paa"
		};
	};
	class 101st_Leon_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Clone helmet (Leon)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Leon_Helmet_CO.paa"
		};
	};
	class 101st_Lorax_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Clone helmet (Lorax)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Lorax_Helmet_CO.paa"
		};
	};
	class 101st_Maple_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Clone helmet (Maple)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Maple_Helmet_CO.paa"
		};
	};
	class 101st_Nobel_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Clone helmet (Noble)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Noble_Helmet_CO.paa"
		};
	};
	class 101st_Mortal_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Clone helmet (Mortal)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Mortal_Helmet_CO.paa"
		};
	};
	class 101st_Sponge_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Clone helmet (Sponge)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Sponge_Helmet_CO.paa"
		};
	};
	class 101st_Shocked_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Clone helmet (Shocked)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Shocked_Helmet_CO.paa"
		};
	};
	class 101st_Twig_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Clone helmet (Twig)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Twig_Helmet_CO.paa"
		};
	};
	class 101st_Twisted_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Clone helmet (Twisted)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Twisted_Helmet_CO.paa"
		};
	};
	class 101st_Firestarter_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Clone helmet (Firestarter)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Firestarter_Helmet_CO.paa"
		};
	};
	class 101st_Sanshi_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Clone helmet (Sanshi)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Sanshi_Helm_CO.paa"
		};
	};
	class 101st_Sharp_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Clone helmet (Sharp)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Sharp_Helm_CO.paa"
		};
	};
	class 101st_Shatterstorm_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Clone helmet (Shatterstorm)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Shatterstorm_Helm_CO.paa"
		};
	};
	class 101st_Stadlen_Helmet: 101st_Dagger_Helmet
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Stadlen)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Stadlen_Helmet_AB_CO.paa"
		};
		subItems[] = {"JLTS_CloneNVG_spec"};
	};
	class 101st_Kel_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Clone helmet (Kel)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Kel_Helmet_CO.paa"
		};
	};
	class 101st_Kennedy_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Clone helmet (Kennedy)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Kennedy_Helmet_CO.paa"
		};
	};
	class 101st_Dolittle_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Clone helmet (Dolittle)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Dolittle_Helmet_CO.paa"
		};
		hiddenSelectionsMaterials[] = { "101st_Aux_Mod\Addons\textures\101st\helmets\data\Dolittle_Helmet.rvmat"};
	};
	class 101st_Trooper_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Trooper)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Trooper_Helm_CO.paa"
		};
	};
	class 101st_Trooper_AltHelmet: JLTS_CloneHelmetP2_illum
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet ALT (Trooper)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Trooper_AlternativeHelm_CO.paa", "101st_Aux_Mod\Addons\textures\101st\helmets\Trooper_AlternativeHelm_CO.paa"
		};
		hiddenSelectionsMaterials[] = {"\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat",""};
		hiddenSelections[] = {"camo2","camo1"};
	};
	class 101st_Coffee_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Coffee)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Coffee_Helm_CO.paa"
		};
	};
	class 101st_Monkey_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Monkey)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Monkey_Helm_CO.paa"
		};
	};

	class 101st_Benny_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Benny)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Benny_Helm_CO.paa"
		};
	}; 
	class 101st_Bus_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Bus)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Bus_Helmet_CO.paa"
		};
	};
	class 101st_Cobalt_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Cobalt)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Cobalt_Helmet_CO.paa"
		};
	};
	class 101st_Cobra_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Cobra)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Cobra_Helm_CO.paa"
		};
	};
	class 101st_Dova_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Dova)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Dova_Helmet_CO.paa"
		};
	};
	class 101st_Overlord_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Overlord)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Overlord_Helmet_CO.paa"
		};
	};
	class 101st_Crimson_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Crimson)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Crimson_Helmet_CO.paa"
		};
	};
	class 101st_Prof_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Prof)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Prof_Helm_CO.paa"
		};
	};
	class 101st_Ragwolf_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Ragwolf)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Ragwolf_Helm_CO.paa"
		};
	};
	
	class 101st_Phantom_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Phantom)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Phantom_Helmet_CO.paa"
		};
	};
	class 101st_Joey_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Joey)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Joey_Helmet_CO.paa"
		};
	};
	class 101st_Waterfall_Helmet: 101st_Dagger_Helmet
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Waterfall)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Waterfall_Helmet_AB_CO.paa"
		};
		subItems[] = {"JLTS_CloneNVG_spec"};
	};

	class 101st_Veerio_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Veerio)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Veerio_Helm_CO.paa"
		};
	};
	class 101st_Vath_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Vath)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Vath_Helm_CO.paa"
		};
	};

	class 101st_Wiskjr_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Wiskjr)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Wiskjr_Helm_CO.paa"
		};
	};
	class 101st_Stryker_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Stryker)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Stryker_Helmet_CO.paa"
		};
	};
	class 101st_Oaksy_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Oaksy)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Oaksy_Helmet_CO.paa"
		};
	};
	class 101st_Grim_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Grim)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Grim_Helm_CO.paa"
		};
	};
	class 101st_Medic_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Medic)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Medic_Helm_CO.paa"
		};
	};
	class 101st_Medic_AltHelmet: JLTS_CloneHelmetP2_illum
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet ALT (Medic)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Medic_AlternativeHelm_CO.paa", "101st_Aux_Mod\Addons\textures\101st\helmets\Medic_AlternativeHelm_CO.paa"
		};
		hiddenSelectionsMaterials[] = {"\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat",""};
		hiddenSelections[] = {"camo2","camo1"};
	};
	class 101st_RTO_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (RTO)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\RTO_Helm_CO.paa"
		};
	};
	class 101st_RTO_AltHelmet: JLTS_CloneHelmetP2_illum
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet ALT (RTO)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\RTO_AlternativeHelm_CO.paa", "101st_Aux_Mod\Addons\textures\101st\helmets\RTO_AlternativeHelm_CO.paa"
		};
		hiddenSelectionsMaterials[] = {"\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat",""};
		hiddenSelections[] = {"camo2","camo1"};
	};
	class 101st_Allo_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Allo)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Allo_Helm_CO.paa"
		};
	};
	/*
	class 101st_Apple_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Applejack)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Applejack_Helm_CO.paa"
		};
	};
	*/
	class 101st_AJ_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (AJ)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\AJ_Helm_CO.paa"
		};
	};
	class 101st_Allen_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Allen)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Allen_Helm_CO.paa"
		};
	};
	class 101st_Kazer_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Kazer)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Kazer_Helmet_CO.paa"
		};
	};
	class 101st_Bacon_Helmet: 101st_Dagger_Helmet
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Bacon)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Bacon_Helm_CO.paa"
		};
		subItems[] = {"JLTS_CloneNVG_spec"};
	};
	class 101st_Tom_Helmet: 101st_Dagger_Helmet
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Tom)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Tom_Helmet_AB_CO.paa"
		};
		subItems[] = {"JLTS_CloneNVG_spec"};
	};


	class 101st_Demo_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Demo)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Demo_Helm_CO.paa"
		};
	};
	class 101st_Demolitions_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Demolitions)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Demo_Helmet_CO.paa"
		};
	};
	class 101st_Blackwater_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Blackwater)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Blackwater_Helm_CO.paa"
		};
	};
	class 101st_BlackwaterTest_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet TEST (Blackwater)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Blackwater_Test_CO.paa"
		};
	};
	class 101st_Binns_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Binns)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Binns_Helm_CO.paa"
		};
	};
	class 101st_Blind_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Blind)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Blind_Helm_CO.paa"
		};
	};
	class 101st_Bourkey_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Bourkey)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Bourkey_Helm_CO.paa"
		};
	};
	class 101st_Courage_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Courage)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Courage_Helm_CO.paa"
		};
	};
	class 101st_Crawdad_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Crawdad)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Crawdad_Helm_CO.paa"
		};
	};
	class 101st_Dutch_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Dutch)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Dutch_Helm_CO.paa"
		};
	};
	class 101st_Fett_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Fett)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Fett_Helm_CO.paa"
		};
	};
	class 101st_Falcon_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Falcon)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Falcon_Helm_CO.paa"
		};
		hiddenSelectionsMaterials[] = { "101st_Aux_Mod\Addons\textures\101st\helmets\data\Falcon_Helmet.rvmat" };
	};
	class 101st_Viralz_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Viralz)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Viralz_Helm_CO.paa"
		};
	};
	class 101st_Reject_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Reject)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Reject_Helm_CO.paa"
		};
	};
	class 101st_Achilles_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Achilles)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Achilles_Helm_CO.paa"
		};
	};
	class 101st_Gustavo_Helm: 101st_Dagger_Helmet
	{
		author="Spark";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Gustavo)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\textures\101st\helmets\Gustavo_Helmet_AB_CO.paa"
		};
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
		subItems[] = {"JLTS_CloneNVG_spec"};
	};
	class 101st_Allendyne_Helm: 101st_Dagger_Helmet
	{
		author="Spark";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Allendyne)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\textures\101st\helmets\Allendyne_Helmet_AB_CO.paa"
		};
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
		subItems[] = {"JLTS_CloneNVG_spec"};
	};
	class 101st_Grae_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Grae)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Grae_Helmet_CO.paa"
		};
	};
	class 101st_Steelshot_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Steelshot)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Steelshot_Helmet_CO.paa"
		};
	};
	class 101st_Hog_Helm: 101st_Dagger_Helmet
	{
		author="Spark";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Hog)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\textures\101st\helmets\Hog_Helmet_AB_CO.paa"
		};
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
		subItems[] = {"JLTS_CloneNVG_spec"};
	};
	class 101st_Whale_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Whale)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Whale_Helm_CO.paa"
		};
	};
	/*class 101st_Hark_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Hark)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Hark_Helm_CO.paa"
		};
	}; */
	class 101st_Hydro_Helmet: 101st_Dagger_Helmet
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Hydro)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Hydro_Helm_CO.paa"
		};
		subItems[] = {"JLTS_CloneNVG_spec"};
	};
	
	class 101st_Ironrose_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Ironrose)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Ironrose_Helm_CO.paa"
		};
	}; 
	class 101st_Jaster_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Jaster)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Jaster_Helm_CO.paa"
		};
	};
	class 101st_Jerec_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Jerec)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Jerec_Helm_CO.paa"
		};
	};
	class 101st_Roma_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Roma)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Roma_Helmet_CO.paa"
		};
	};
	class 101st_Goat_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Goat)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Goat_Helm_CO.paa"
		};
	};
	class 101st_Punisher_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Punisher)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Punisher_Helm_CO.paa"
		};
	};
	class 101st_Deadeye_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Deadeye)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Deadeye_Helm_CO.paa"
		};
	};
	class 101st_Hambino_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Hambino)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Hambino_Helm_CO.paa"
		};
	};
	class 101st_Quiet_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Quiet)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Quiet_Helm_CO.paa"
		};
	}; 
	class 101st_Jerec_AltHelmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet ALT (Jerec)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Jerec_AlternativeHelm_CO.paa"
		};
		hiddenSelectionsMaterials[] = { "101st_Aux_Mod\Addons\textures\101st\armor\data\Jerec_Helm.rvmat" };
	};
	class 101st_Kai_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Kai)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Kai_Helm_CO.paa"
		};
	};
	class 101st_Late_Helm: 101st_Dagger_Helmet
	{
		author="Spark";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Late)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\textures\101st\helmets\Late_Helmet_AB_CO.paa"
		};
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
		subItems[] = {"JLTS_CloneNVG_spec"};
	};
	class 101st_Lambert_Helmet: 101st_Dagger_Helmet
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Lambert)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Lambert_Helm_CO.paa"
		};
		subItems[] = {"JLTS_CloneNVG_spec"};
	};
	class 101st_Lane_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Lane)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Lane_Helmet_CO.paa"
		};
	};
	class 101st_Raiden_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Raiden)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Raiden_Helmet_CO.paa"
		};
	};
	class 101st_Neo_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Neo)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Neo_Helmet_CO.paa"
		};
	};
	class 101st_Roaming_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Roaming)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Roaming_Helmet_CO.paa"
		};
	};
	class 101st_Reed_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Reed)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Reed_Helmet_CO.paa"
		};
	};
	class 101st_Vassk_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Vassk)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Vassk_Helmet_CO.paa"
		};
	};
	class 101st_Bearded_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Beareded)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Bearded_Helmet_CO.paa"
		};
	};
	class 101st_Phlananx_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Phalanx)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Phalanx_Helm_CO.paa"
		};
	};
	class 101st_Quill_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Quill)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Quill_Helm_CO.paa"
		};
	};
	class 101st_Nautilus_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Rasputin)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Nautilus_Helm_CO.paa"
		};
	};
	class 101st_Asylum_ARF: 101st_ARF_Base {
		author = "Spark";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Asylum ARF Helmet (JLTS)";
		picture = "3AS\3AS_Characters\Clones\Headgear\ui\ARF_UI_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\helmets\Longbow\textures\Asylum_ARF_Helmet_CO.paa", "101st_Aux_Mod\Addons\helmets\Longbow\textures\Plates_CO.paa"
		};
		hiddenSelections[]= {"camo1", "camo2"};
		model = "101st_Aux_Mod\Addons\helmets\Longbow\Longbow.p3d";
	};
	class 101st_Euget_ARF: 101st_ARF_Base {
		author = "Spark";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Euget ARF Helmet (JLTS)";
		picture = "3AS\3AS_Characters\Clones\Headgear\ui\ARF_UI_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\helmets\Longbow\textures\Euget_ARF_Helmet_CO.paa", "101st_Aux_Mod\Addons\helmets\Longbow\textures\Plates_CO.paa"
		};
		hiddenSelections[]= {"camo1", "camo2"};
		model = "101st_Aux_Mod\Addons\helmets\Longbow\Longbow.p3d";
	};
	class 101st_Walker_ARF: 101st_ARF_Base {
		author = "Spark";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Walker ARF Helmet (JLTS)";
		picture = "3AS\3AS_Characters\Clones\Headgear\ui\ARF_UI_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\helmets\Longbow\textures\Walker_ARF_Helmet_CO.paa", "101st_Aux_Mod\Addons\helmets\Longbow\textures\Plates_CO.paa"
		};
		hiddenSelections[]= {"camo1", "camo2"};
		model = "101st_Aux_Mod\Addons\helmets\Longbow\Longbow.p3d";
	};
	
	class 101st_Zareth_ARF: 101st_ARF_Base {
		author = "Spark";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Zareth ARF Helmet (JLTS)";
		picture = "3AS\3AS_Characters\Clones\Headgear\ui\ARF_UI_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\helmets\Longbow\textures\Zareth_ARF_Helmet_CO.paa", "101st_Aux_Mod\Addons\helmets\Longbow\textures\Plates_CO.paa"
		};
		hiddenSelections[]= {"camo1", "camo2"};
		model = "101st_Aux_Mod\Addons\helmets\Longbow\Longbow.p3d";
	};
	
	class 101st_Izuu_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Izuu)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Izzu_Helmet_CO.paa"
		};
	};
	class 101st_Ronin_Helmet: 101st_Dagger_Helmet
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Ronin)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Ronin_Helm_CO.paa"
		};
		subItems[] = {"JLTS_CloneNVG_spec"};
	};
	class 101st_Synn_Helmet: 101st_Dagger_Helmet
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Synn)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Synn_Helmet_CO.paa"
		};
		subItems[] = {"JLTS_CloneNVG_spec"};
	};
	class 101st_Republican_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Republican)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Republican_Helmet_CO.paa"
		};
	};
	class 101st_Seatie_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Seatie)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Seatie_Helmet_CO.paa"
		};
	};
	class 101st_Sentinel_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Sentinel)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Sentinel_Helm_CO.paa"
		};
	};

	class 101st_Tito_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Tito)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Tito_Helm_CO.paa"
		};
	};
	class 101st_Vin_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Vin)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Vin_Helm_CO.paa"
		};
	};
	class 101st_Warlord_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Warlord)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Warlord_Helm_CO.paa"
		};
	};
	class 101st_Zera_Helmet: JLTS_CloneHelmetP2
	{
		author="Trip";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Zera)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Zera_Helmet_CO.paa"
		};
	};
	class 101st_Alfredo_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Alfredo)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Alfredo_Helm_CO.paa"
		};
	};
	class 101st_Draco_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Draco)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Draco_Helmet_CO.paa"
		};
	};
	class 101st_Sythe_Helmet : JLTS_CloneHelmetP2
	{
		author = "Vulgar";
		dlc = "101st_Aux_Mod";
		scope = 2;
		scopeArsenal = 2;
		displayName = "101st Clone helmet (Sythe)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Scythe_Helmet_CO.paa"
		};
	};
	class 101st_Deputy_Helmet : JLTS_CloneHelmetP2
	{
		author = "Vulgar";
		dlc = "101st_Aux_Mod";
		scope = 2;
		scopeArsenal = 2;
		displayName = "101st Clone helmet (Deputy)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Deputy_Helmet_CO.paa"
		};
	};
	class 101st_York_Helmet : JLTS_CloneHelmetP2
	{
		author = "Vulgar";
		dlc = "101st_Aux_Mod";
		scope = 2;
		scopeArsenal = 2;
		displayName = "101st Clone helmet (York)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\York_Helmet_CO.paa"
		};
	};
	class 101st_Mixer_Helmet : JLTS_CloneHelmetP2
	{
		author = "Vulgar";
		dlc = "101st_Aux_Mod";
		scope = 2;
		scopeArsenal = 2;
		displayName = "101st Clone helmet (Mixer)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Mixer_Helmet_CO.paa"
		};
	};
	class 101st_Vale_Helmet : JLTS_CloneHelmetP2
	{
		author = "Vulgar";
		dlc = "101st_Aux_Mod";
		scope = 2;
		scopeArsenal = 2;
		displayName = "101st Clone helmet (Vale)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Vale_P2_Helmet_CO.paa"
		};
	};

	// Clone Traitors


	class 101st_Traitor_Helmet : JLTS_CloneHelmetP2
	{
		author = "Vulgar";
		dlc = "101st_Aux_Mod";
		scope = 2;
		scopeArsenal = 2;
		displayName = "101st Clone helmet (Traitor)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\textures\CISClones\Traitor_Helmet_CO.paa"
		};
		hiddenSelectionsMaterials[] = { "101st_Aux_Mod\Addons\textures\CISClones\TraitorHelmet.rvmat" };
	};
//Pilot Helmets
	class 3as_P2_Pilot_helmet;
	class DBA_P2_Pilot_Helm: 3as_P2_Pilot_helmet
	{
		scope=2;
		weaponPoolAvailable=1;
		displayName="101st Pilot Helmet (Hammer)";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\helmets\NewPilot\Pilot_CO.paa"
		};
		subItems[]=
		{
			"Integrated_NVG_TI_0_F"
		};
	};
	class DBA_Arcturus_Pilot_Helm: DBA_P2_Pilot_Helm
	{
		scope=2;
		weaponPoolAvailable=1;
		displayName="101st Pilot Helmet (Arcturus)";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\helmets\NewPilot\Arcturus_CO.paa"
		};
	};
	class DBA_Blue_Pilot_Helm: DBA_P2_Pilot_Helm
	{
		scope=2;
		weaponPoolAvailable=1;
		displayName="101st Pilot Helmet (Blue)";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\helmets\NewPilot\Blue_CO.paa"
		};
	};
	class DBA_Cadet_Pilot_Helm: DBA_P2_Pilot_Helm
	{
		scope=2;
		weaponPoolAvailable=1;
		displayName="101st Pilot Helmet (Cadet)";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\helmets\NewPilot\Cadet_CO.paa"
		};
	};
	class DBA_Clean_Pilot_Helm: DBA_P2_Pilot_Helm
	{
		scope=2;
		weaponPoolAvailable=1;
		displayName="101st Pilot Helmet (Clean)";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\helmets\NewPilot\Clean_CO.paa"
		};
	};
	class DBA_Craft_Pilot_Helmet: DBA_P2_Pilot_Helm
	{
		scope=2;
		weaponPoolAvailable=1;
		displayName="101st Pilot Helmet (Craft)";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\helmets\NewPilot\Craft_CO.paa"
		};
	};
	class DBA_Dune_Pilot_Helm: DBA_P2_Pilot_Helm
	{
		scope=2;
		weaponPoolAvailable=1;
		displayName="101st Pilot Helmet (Dune)";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\helmets\NewPilot\Dune_CO.paa"
		};
	};
	class DBA_Mockingjay_Pilot_Helm: DBA_P2_Pilot_Helm
	{
		scope=2;
		weaponPoolAvailable=1;
		displayName="101st Pilot Helmet (Mockingjay)";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\helmets\NewPilot\Mockingjay_CO.paa"
		};
	};
	class DBA_Nyom_Pilot_Helm: DBA_P2_Pilot_Helm
	{
		scope=2;
		weaponPoolAvailable=1;
		displayName="101st Pilot Helmet (Nyom)";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\helmets\NewPilot\Nyom_CO.paa"
		};
	};
	class DBA_Trip_Pilot_Helm: DBA_P2_Pilot_Helm
	{
		scope=2;
		weaponPoolAvailable=1;
		displayName="101st Pilot Helmet (Trip)";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\helmets\NewPilot\Trip_CO.paa"
		};
	};
	class DBA_Vance_Pilot_Helm: DBA_P2_Pilot_Helm
	{
		scope=2;
		weaponPoolAvailable=1;
		displayName="101st Pilot Helmet (Vance)";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\helmets\NewPilot\Vance_Helmet_CO.paa"
		};
	};
	class DBA_Kaldor_Pilot_Helm: DBA_P2_Pilot_Helm
	{
		scope=2;
		weaponPoolAvailable=1;
		displayName="101st Pilot Helmet (Kaldor)";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\helmets\NewPilot\Kaldor_CO.paa"
		};
	};
	class 101st_Kuzy_Helmet : DBA_P2_Pilot_Helm
	{
		author = "Vulgar";
		dlc = "101st_Aux_Mod";
		scope = 2;
		scopeArsenal = 2;
		weaponPoolAvailable = 1;
		displayName = "101st Pilot Helmet (Kuzy)";
		hiddenSelections[] =
		{
			"Camo"
		};
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\helmets\NewPilot\Kuzy_Helmet_CO.paa"
		};
	};
	class 101st_Atlas_Helmet : DBA_P2_Pilot_Helm
	{
		author = "Vulgar";
		dlc = "101st_Aux_Mod";
		scope = 2;
		scopeArsenal = 2;
		weaponPoolAvailable = 1;
		displayName = "101st Pilot Helmet (Atlas)";
		hiddenSelections[] =
		{
			"Camo"
		};
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\helmets\NewPilot\Atlas_Helmet_CO.paa"
		};
	};
	class 101st_Snake_Helmet : DBA_P2_Pilot_Helm
	{
		author = "Vulgar";
		dlc = "101st_Aux_Mod";
		scope = 2;
		scopeArsenal = 2;
		weaponPoolAvailable = 1;
		displayName = "101st Pilot Helmet (Snake)";
		hiddenSelections[] =
		{
			"Camo"
		};
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\helmets\NewPilot\Snake_Helmet_CO.paa"
		};
	};
	class 101st_Flanker_Helmet : DBA_P2_Pilot_Helm
	{
		author = "Vulgar";
		dlc = "101st_Aux_Mod";
		scope = 2;
		scopeArsenal = 2;
		weaponPoolAvailable = 1;
		displayName = "101st Pilot Helmet (Flanker)";
		hiddenSelections[] =
		{
			"Camo"
		};
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\helmets\NewPilot\Flanker_Helmet_CO.paa"
		};
	};
	class 101st_Stultus_Helmet : DBA_P2_Pilot_Helm
	{
		author = "Seatie";
		dlc = "101st_Aux_Mod";
		scope = 2;
		scopeArsenal = 2;
		weaponPoolAvailable = 1;
		displayName = "101st Pilot Helmet (Stultus)";
		hiddenSelections[] =
		{
			"Camo"
		};
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\helmets\NewPilot\Stultus_Helmet_CO.paa"
		};
	};
	class 101st_Gorman_Helmet : DBA_P2_Pilot_Helm
	{
		author = "Vulgar";
		dlc = "101st_Aux_Mod";
		scope = 2;
		scopeArsenal = 2;
		weaponPoolAvailable = 1;
		displayName = "101st Pilot Helmet (Gorman)";
		hiddenSelections[] =
		{
			"Camo"
		};
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\helmets\NewPilot\Gorman_Helmet_CO.paa"
		};
	};
	class 101st_Finch_Helmet : DBA_P2_Pilot_Helm
	{
		author = "Spark";
		dlc = "101st_Aux_Mod";
		scope = 2;
		scopeArsenal = 2;
		weaponPoolAvailable = 1;
		displayName = "101st Pilot Helmet (Finch)";
		hiddenSelections[] =
		{
			"Camo"
		};
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Finch_Helmet_CO.paa"
		};
	};
	class 101st_Squirtle_Helmet : DBA_P2_Pilot_Helm
	{
		author = "Spark";
		dlc = "101st_Aux_Mod";
		scope = 2;
		scopeArsenal = 2;
		weaponPoolAvailable = 1;
		displayName = "101st Pilot Helmet (Squirtle)";
		hiddenSelections[] =
		{
			"Camo"
		};
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\textures\101st\helmets\Squirtle_Helmet_CO.paa"
		};
	};
};