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
		model="\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Engineer\Engineer_Helm.p3d";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelections[]=
		{
			"Camo",
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Engineer\textures\Engineer_Helm_co.paa",
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Engineer\textures\Engineer_Helm_co.paa"
		};
		subItems[]=
		{
			"Integrated_NVG_F"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Engineer\Engineer_Helm.p3d";
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
		model="\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Pilot\pilotHelm.p3d";
		picture = "3AS\3AS_Characters\Clones\Headgear\ui\p2pilot_ui_ca.paa";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Pilot\textures\Pilot_co.paa",
		};
		subItems[]=
		{
			"Integrated_NVG_TI_0_F"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Pilot\pilotHelm.p3d";
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
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\BARC\Barc_CO.paa",
		};
		subItems[]=
		{
			"Integrated_NVG_F"
		};
	};
	class 101st_JLTS_StealthPilot_Helmet: H_HelmetSpecB
	{
		scope=2;
		displayName="101st Stealth Pilot Helmet";
		model="\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Stealth\stealthHelmet.p3d";
		picture = "3AS\3AS_Characters\Clones\Headgear\ui\p2pilot_ui_ca.paa";
		hiddenSelections[]=
		{
			"camo1",
		};
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Stealth\textures\stealthpilot_helmet_CO.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Stealth\stealthHelmet.p3d";
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
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Engineer\textures\ForgeCaptain_Helm_co.paa",
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Engineer\textures\ForgeCaptain_Helm_co.paa"
		};
	};
	class 101st_Phase1_helm: H_HelmetSpecB
	{
		scope=2;
		displayName="101st Phase 1 Helmet (Base)";
		model="\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\P1\P1.p3d";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelections[]=
		{
			"camo1",
		};
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\P1\textures\P1_helm.paa",
		};
		subItems[]=
		{
			"Integrated_NVG_F"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\P1\P1.p3d";
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
		model="\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\P1\P1.p3d";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelections[]=
		{
			"camo1",
		};
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\P1\textures\P1_NCO_helm.paa",
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
		model="\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\P1\P1.p3d";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelections[]=
		{
			"camo1",
		};
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\P1\textures\P1_Command_helm.paa",
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
		model="\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\P1\P1.p3d";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelections[]=
		{
			"camo1",
		};
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\P1\textures\P1_Medic_helm.paa",
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
		model="\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\P1\P1.p3d";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelections[]=
		{
			"camo1",
		};
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\P1\textures\P1_RTO_helm.paa",
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\ARF_Arid_Phase2_Helm_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\ARF_Tropic_Phase2_Helm_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\ARF_Urban_Phase2_Helm_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\ARF_Winter_Phase2_Helm_CO.paa"
		};
	};
	class 101st_ARF_Base : JLTS_CloneHelmetP2 {
		author="Dutch";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st ARF Base Helmet (JLTS)";
		picture = "3AS\3AS_Characters\Clones\Headgear\ui\ARF_UI_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Longbow\textures\ARF_Helm_CO.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Longbow\textures\Plates_CO.paa"
		};
		hiddenSelections[]= {"camo1", "camo2"};
		model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Longbow\Longbow.p3d";
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Longbow\Longbow.p3d";
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Longbow\textures\ARF_Helm_CO.paa",
			"",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Longbow\textures\Plates_CO.paa"
		};
		hiddenSelections[]= {"camo1", "camo2", "camo3"};
		model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\ATRT\ARF.p3d";
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\ATRT\ARF.p3d";
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Longbow\textures\Winter_CO.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\ARFV2\textures\Winter_Flaps_CO.paa", "101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Longbow\textures\Winter_Plates_CO.paa"
		};
		hiddenSelections[]= {"camo1", "camo2", "camo3"};
		model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\ARFV2\ARF.p3d";
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Longbow\textures\Winter_CO.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Longbow\textures\Winter_Plates_CO.paa"
		};
		hiddenSelections[]= {"camo1", "camo2"};
		model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Longbow\Longbow.p3d";
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\ARF_Helmet_Recruit_CO.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Longbow\textures\Plates_CO.paa"
		};
		hiddenSelections[] = {"camo1", "camo2"};
		model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Longbow\Longbow.p3d";
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Longbow\textures\Hark_Helmet_ARF_CO.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Longbow\textures\Plates_CO.paa"
		};
		hiddenSelections[]= {"camo1", "camo2"};
		model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Longbow\Longbow.p3d";
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Longbow\textures\Dune_Helmet_CO.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Longbow\textures\Plates_CO.paa"
		};
		hiddenSelections[]= {"camo1", "camo2"};
		model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Longbow\Longbow.p3d";
	};
	class 101st_Joey_ARF: 101st_ARF_Base
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Joey ARF Helmet (JLTS)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Longbow\textures\Joey_ARF_Helmet_CO.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Longbow\textures\Plates_CO.paa"
		};
		hiddenSelections[]= {"camo1", "camo2"};
		model = "\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Longbow\Longbow.p3d";
	};
	class 101st_Alfredo_ARF: 101st_ARF_Base
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Alfredo ARF Helmet (JLTS)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Longbow\textures\Alfredo_ARF_Helmet_CO.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Longbow\textures\Plates_CO.paa"
		};
		hiddenSelections[]= {"camo1", "camo2"};
		model = "\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Longbow\Longbow.p3d";
	};
	class 101st_Warlord_ARF: 101st_ARF_Base
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Warlord ARF Helmet (JLTS)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Longbow\textures\Warlord_ARF_Helmet_CO.paa",
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Longbow\textures\Plates_CO.paa"
		};
		hiddenSelections[]= {"camo1", "camo2"};
		model = "\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Longbow\Longbow.p3d";
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Longbow\textures\Satch_ARF_Helmet_CO.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Longbow\textures\Plates_CO.paa"
		};
		hiddenSelections[]= {"camo1", "camo2"};
		model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Longbow\Longbow.p3d";
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Longbow\textures\Nova_ARF_Helmet_CO.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Longbow\textures\Plates_CO.paa"
		};
		hiddenSelections[]= {"camo1", "camo2"};
		model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Longbow\Longbow.p3d";
	};
	class 101st_Recon_ARF: 101st_ARF_Base {
		author="Spark";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Recon ARF Helmet (JLTS)";
		picture = "3AS\3AS_Characters\Clones\Headgear\ui\ARF_UI_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Longbow\textures\Recon_ARF_Helmet_CO.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Longbow\textures\Plates_CO.paa"
		};
		hiddenSelections[]= {"camo1", "camo2"};
		model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Longbow\Longbow.p3d";
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Longbow\textures\Quill_ARF_Helmet_CO.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Longbow\textures\Plates_CO.paa"
		};
		hiddenSelections[]= {"camo1", "camo2"};
		model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Longbow\Longbow.p3d";
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Longbow\textures\Zareth_ARF_Helmet_CO.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Longbow\textures\Plates_CO.paa"
		};
		hiddenSelections[]= {"camo1", "camo2"};
		model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Longbow\Longbow.p3d";
	};
	class 101st_Deadeye_ARF: 101st_ARF_Base {
		author="Spark";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Deadeye ARF Helmet (JLTS)";
		picture = "3AS\3AS_Characters\Clones\Headgear\ui\ARF_UI_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Longbow\textures\Deadeye_ARF_Helmet_CO.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Longbow\textures\Plates_CO.paa"
		};
		hiddenSelections[]= {"camo1", "camo2"};
		model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Longbow\Longbow.p3d";
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Longbow\textures\Marshmallow_ARF_Helmet_CO.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Longbow\textures\Plates_CO.paa"
		};
		hiddenSelections[]= {"camo1", "camo2"};
		model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Longbow\Longbow.p3d";
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Longbow\textures\Urban_CO.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\ARFV2\textures\Urban_Flaps_CO.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Longbow\textures\Urban_Plates_CO.paa"
		};
		hiddenSelections[]= {"camo1", "camo2", "camo3"};
		model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\ARFV2\ARF.p3d";
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Longbow\textures\Urban_CO.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Longbow\textures\Urban_Plates_CO.paa"
		};
		hiddenSelections[]= {"camo1", "camo2"};
		model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Longbow\Longbow.p3d";
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Longbow\textures\Jungle_CO.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\ARFV2\textures\Jungle_Flaps_CO.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Longbow\textures\Jungle_Plates_CO.paa"
		};
		hiddenSelections[]= {"camo1", "camo2", "camo3"};
		model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\ARFV2\ARF.p3d";
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Longbow\textures\Jungle_CO.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Longbow\textures\Jungle_Plates_CO.paa"
		};
		hiddenSelections[]= {"camo1", "camo2"};
		model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Longbow\Longbow.p3d";
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Longbow\textures\Arid_CO.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\ARFV2\textures\Arid_Flaps_CO.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Longbow\textures\Arid_Plates_CO.paa"
		};
		hiddenSelections[]= {"camo1", "camo2", "camo3"};
		model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\ARFV2\ARF.p3d";
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Longbow\textures\Arid_CO.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Longbow\textures\Arid_Plates_CO.paa"
		};
		hiddenSelections[]= {"camo1", "camo2"};
		model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Longbow\Longbow.p3d";
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Longbow\textures\Night_CO.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\ARFV2\textures\Night_Flaps_CO.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Longbow\textures\Night_Plates_CO.paa"
		};
		hiddenSelections[]= {"camo1", "camo2", "camo3"};
		model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\ARFV2\ARF.p3d";
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Longbow\textures\Night_CO.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Longbow\textures\Night_Plates_CO.paa"
		};
		hiddenSelections[]= {"camo1", "camo2"};
		model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Longbow\Longbow.p3d";
	};

	class 101st_Scuba_New : H_HelmetSpecB
	{
		author="Dutch";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Scuba Helmet (Trooper)";
		model="\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Scuba\scuba.p3d";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Scuba\textures\101st_Scuba_CO.paa"
		};
		CBRN_protection=1;
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Scuba\scuba.p3d";
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
		model="\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Scuba\scuba.p3d";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Scuba\textures\101st_NCO_Scuba_CO.paa"
		};
		CBRN_protection=1;
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Scuba\scuba.p3d";
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
		model="\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Scuba\scuba.p3d";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Scuba\textures\Scuba_CO.paa"
		};
		CBRN_protection=1;
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Scuba\scuba.p3d";
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
		model="\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Scuba\scuba.p3d";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Scuba\textures\GARC_Scuba_CO.paa"
		};
		CBRN_protection=1;
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Scuba\scuba.p3d";
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
		model="\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Tech\Tech_Helm.p3d";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Tech\textures\Tech_CO.paa"
		};
		CBRN_protection=1;
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Tech\Tech_Helm.p3d";
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
		model="\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Snow\Snow_Helm.p3d";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Snow\textures\Snow_Trooper_Helmet_CO.paa"
		};
		CBRN_protection=1;
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Snow\Snow_Helm.p3d";
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Base_Airborne_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Airborne_Helm_CO.paa"
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
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Airborne_AlternativeHelm_CO.paa", "\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Airborne_AlternativeHelm_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Furn_Helm_CO.paa"
		};
	};
	/*
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Gill_Helm_CO.paa"
		};
		subItems[] = {"JLTS_CloneNVG_spec"};
	};
	*/
	class 101st_Fresh_Helmet: 101st_Dagger_Helmet
	{
		author="Spark";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Clone helmet (Fresh)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Fresh_Helmet_AB_CO.paa"
		};
	}
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Nickel_Helmet_AB_CO.paa"
		};
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
		subItems[] = {"JLTS_CloneNVG_spec"};
	};
	class 101st_Griddle_Helm: 101st_Dagger_Helmet
	{
			author="Gorman";
			dlc = "101st_Aux_Mod";
			scope=2;
			scopeArsenal=2;
			displayName="101st Clone helmet (Griddle)";
			hiddenSelections[]=
			{
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Griddle_Helmet_AB_CO.paa"
			};
			picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
			subItems[] = {"JLTS_CloneNVG_spec"};
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Gustavo_Helmet_AB_CO.paa"
		};
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
		subItems[] = {"JLTS_CloneNVG_spec"};
	};
	/*
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Techno_Helm_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Dragon_Helm_CO.paa"
		};
		subItems[] = {"JLTS_CloneNVG_spec"};
	};
	*/
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Heretic_Helm_CO.paa"
		};
		subItems[] = {"JLTS_CloneNVG_spec"};
	};
	class 101st_Sykes_Helmet: 101st_Dagger_Helmet
	{
		author="Gorman";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Clone helmet (Sykes)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Sykes_Helmet_AB_CO.paa"
		};
	}
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Ryker_Helm_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Vulcan_Helmet_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Frohman_Helmet_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Elk_Helmet_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Shotty_Helmet_AB_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Remnant_Helm_CO.paa"
		};
	};
	/*
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Itachi_Helm_CO.paa"
		};
		subItems[] = {"JLTS_CloneNVG_spec"};
	};
	*/
	class 101st_Mutt_Helm: 101st_Dagger_Helmet
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Mutt)";
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Mutt_Helm_CO.paa"
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
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Mutt_AlternativeHelm_CO.paa", "\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Mutt_AlternativeHelm_CO.paa"
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
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Prodigy_Helm_CO.paa"
		};
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
		subItems[] = {"JLTS_CloneNVG_spec"};
	};
	class 101st_DaggerTraitor_Helm: 101st_Dagger_Helmet
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Dagger Traitor)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\DaggerTraitor_AB_Helmet_CO.paa"
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
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Athley_Helmet_AB_CO.paa"
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
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Dog_Helmet_AB_CO.paa"
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
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Glitch_Helmet_AB_CO.paa"
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
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Wildfire_Helmet_AB_CO.paa"
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
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Turtle_Helmet_AB_CO.paa"
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
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Phillips_Helmet_AB_CO.paa"
		};
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
		subItems[] = {"JLTS_CloneNVG_spec"};
	};
	/*
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
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Krusader_Helmet_AB_CO.paa"
		};
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
		subItems[] = {"JLTS_CloneNVG_spec"};
	};
	*/
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
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Quicksilver_Helmet_AB_CO.paa"
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
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Winters_Helmet_AB_CO.paa"
		};
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
		subItems[] = {"JLTS_CloneNVG_spec"};
	};
	/*
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
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Mute_Helmet_AB_CO.paa"
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
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Recruit_Helmet_CO.paa"
		};
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
		subItems[] = {"JLTS_CloneNVG_spec"};
	};
	*
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
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Navo_Helmet_AB_CO.paa"
		};
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
		subItems[] = {"JLTS_CloneNVG_spec"};
	};
	*/
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
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Rez_Helmet_AB_CO.paa"
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
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Crooked_Helmet_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Recruit_Helm_CO.paa"
		};
	};
	class 101st_RecruitPerson_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Clone helmet (CM Recruit)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\CM_Recruit_Helmet_CO.paa"
		};
	};
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Milk_Helm_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Seefor_Helmet_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Shake_Helmet_RTO_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Alter_Helmet_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Hero_Helmet_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Robo_Helmet_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Flames_Helmet_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Flame_Helmet_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Morn_Helmet_CO.paa"
		};
		hiddenSelectionsMaterials[] = { "101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\data\Morn_Helmet.rvmat" };
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Servo_Helmet_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\CLS_Trooper_Helmet_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Pigs_Helm_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Solace_Helmet_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Post_Helmet_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Bark_Helm_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\RTO_Cadet_Helm_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Boss_Helm_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Bright_Helmet_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Rig_Helmet_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Spark_Helm_CO.paa"
		};
			hiddenSelectionsMaterials[] = { "101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\data\Spark_Helmet.rvmat" };
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Baca_Helmet_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Cooker_Helmet_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Grumpy_Helmet_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Noc_Helmet_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Scythe_Helmet_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Trap_Helmet_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\SixTen_Helmet_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Sorensic_Helmet_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Fodder_Helmet_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Ty_Helmet_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Hound_Helmet_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Buzzer_Helmet_CO.paa"
		};
	};
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Rick_Helmet_CO.paa"
		};
	};
	/*
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Des_Helmet_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Slapshot_Helmet_CO.paa"
		};
	}
	*/
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Frosty_Helm_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Slav_Helmet_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Duskrider_Helm_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Cola_Helmet_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Misfit_Helmet_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Nahrkin_Helm_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Dojo_Helm_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Edge_Helm_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Euget_ARF_Helmet_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Grif_Helm_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Nelson_Helm_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Walker_Helm_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Blood_Helm_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Hastings_Helmet_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Kei_Helmet_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Leon_ARF_Helmet_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Lorax_Helmet_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Maple_Helmet_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Noble_Helmet_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Mortal_Helmet_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Sponge_Helmet_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Shocked_Helmet_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Twig_Helmet_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Twisted_Helmet_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Firestarter_Helmet_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Sanshi_Helm_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Sharp_Helm_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Shatterstorm_Helmet_CO.paa"
		};
	};
	class 101st_Stadlen_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Clone helmet (Stadlen)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Stadlen_Helm_CO.paa"
		};
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Kel_Helmet_CO.paa"
		};
		hiddenSelectionsMaterials[] = { "101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\data\Kel_Helmet.rvmat" };
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Kennedy_Helmet_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Dolittle_Helmet_CO.paa"
		};
		hiddenSelectionsMaterials[] = { "101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\data\Dolittle_Helmet.rvmat"};
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Trooper_Helm_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Trooper_AlternativeHelm_CO.paa", "101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Trooper_AlternativeHelm_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Coffee_Helm_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Monkey_Helm_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Benny_Helm_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Bus_Helmet_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Cobalt_Helmet_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Cobra_Helm_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Dova_Helmet_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Overlord_Helmet_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Crimson_Helmet_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Prof_Helm_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Ragwolf_Helm_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Joey_Helmet_CO.paa"
		};
	};
	/*
	class 101st_Waterfall_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Waterfall)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Waterfall_Helmet_CO.paa"
		};
	};
	*/
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Veerio_Helm_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Vath_Helm_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Wiskjr_Helm_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Oaksy_Helmet_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Grim_Helm_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Medic_Helm_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Medic_AlternativeHelm_CO.paa", "101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Medic_AlternativeHelm_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\RTO_Helm_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\RTO_AlternativeHelm_CO.paa", "101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\RTO_AlternativeHelm_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Allo_Helm_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Applejack_Helm_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\AJ_Helm_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Allen_Helm_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Kazer_Helmet_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Bacon_Helm_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Demo_Helm_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Demo_Helmet_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Blackwater_Helm_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Blackwater_Test_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Binns_Helm_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Blind_Helm_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Bourkey_Helm_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Courage_Helm_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Crawdad_Helm_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Dutch_Helm_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Fett_Helm_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Falcon_Helm_CO.paa"
		};
		hiddenSelectionsMaterials[] = { "101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\data\Falcon_Helmet.rvmat" };
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Viralz_Helm_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Reject_Helm_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Achilles_Helm_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Hog_Helmet_AB_CO.paa"
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
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Allendyne_Helmet_AB_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Grae_JLTS_P2_Helmet_CO.paa"
		};
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Whale_Helm_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Hark_Helm_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Hydro AB_Helmet_CO.paa"
		};
		subItems[] = {"JLTS_CloneNVG_spec"};
	};
	/*
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Ironrose_Helm_CO.paa"
		};
	}; */
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Jaster_Helm_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Jerec_Helm_CO.paa"
		};
	};
	class 101st_Wild_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Wild)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Wild_Helmet_CO.paa"
		};
	};
	class 101st_Monitor_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Monitor)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Monitor_Helmet_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Roma_Helmet_CO.paa"
		};
	};
	class 101st_Nomad_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Wild)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Nomad_Helmet_CO.paa"
		};
	};
	class 101st_Legatorre_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Wild)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Legatorre_Helmet_CO.paa"
		};
	};
	class 101st_Merril_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Merril)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Merril_Helmet_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Goat_Helm_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Punisher_Helmet_CO.paa"
		};
	};
	class 101st_Kodiak_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Kodiak)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Pilot\Zelph_Pilot_Helmet_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Deadeye_ARF_Helm_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Hambino_Helm_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Quiet_Helm_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Jerec_AlternativeHelm_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Kai_Helm_CO.paa"
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
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Late_Helmet_AB_CO.paa"
		};
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
		subItems[] = {"JLTS_CloneNVG_spec"};
	};
	class 101st_Flenaly_Helm: 101st_Dagger_Helmet
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Flenaly)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Flenaly_Helm_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Lambert_Helm_CO.paa"
		};
		subItems[] = {"JLTS_CloneNVG_spec"};
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Phalanx_Helm_CO.paa"
		};
	};
	class 101st_Lane_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Lane)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Lane_Helmet_CO.paa"
		};
	};
	class 101st_Raiden_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Raiden)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Raiden_Helmet_CO.paa"
		};
	};
	class 101st_Neo_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Neo)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Neo_Helmet_CO.paa"
		};
	};
	class 101st_Roaming_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Roaming)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Roaming_Helmet_CO.paa"
		};
	};
	class 101st_Reed_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Reed)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Reed_Helmet_CO.paa"
		};
	};
	class 101st_Vassk_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Vassk)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Vassk_Helmet_CO.paa"
		};
	};
	class 101st_Bearded_Helmet: JLTS_CloneHelmetP2
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Clone helmet (Bearded)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Bearded_Helmet_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Quill_Helm_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Nautilus_Helm_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Longbow\textures\Asylum_ARF_Helmet_CO.paa", "101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Longbow\textures\Plates_CO.paa"
		};
		hiddenSelections[]= {"camo1", "camo2"};
		model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Longbow\Longbow.p3d";
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Longbow\textures\Euget_ARF_Helmet_CO.paa", "101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Longbow\textures\Plates_CO.paa"
		};
		hiddenSelections[]= {"camo1", "camo2"};
		model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Longbow\Longbow.p3d";
	};
	class 101st_Leon_ARF: 101st_ARF_Base {
		author = "Secutor";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName="101st Leon ARF Helmet (JLTS)";
		picture = "3AS\3AS_Characters\Clones\Headgear\ui\ARF_UI_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Longbow\textures\Leon_ARF_Helmet_CO.paa", "101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Longbow\textures\Plates_CO.paa"
		};
		hiddenSelections[]= {"camo1", "camo2"};
		model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Longbow\Longbow.p3d";
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Longbow\textures\Walker_ARF_Helmet_CO.paa", "101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Longbow\textures\Plates_CO.paa"
		};
		hiddenSelections[]= {"camo1", "camo2"};
		model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Longbow\Longbow.p3d";
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Izzu_Helmet_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Ronin_Helm_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Synn_Helmet_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Republican_Helmet_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Seatie_Helmet_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Sentinel_Helm_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Tito_Helm_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Vin_Helm_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Warlord_ARF_Helm_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Zera_Helmet_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Alfredo_ARF_Helm_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Draco_Helmet_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Scythe_Helmet_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Deputy_Helmet_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\York_Helmet_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Mixer_Helmet_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Customs\Vale_P2_Helmet_CO.paa"
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

//Pilot Helmets. Place in Alphabetical Order. PAAs go in DBA_Phase2\Helmet\Pilot
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Pilot\Pilot_Pilot_Helmet_CO.paa"
		};
		subItems[]=
		{
			"Integrated_NVG_TI_0_F"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Pilot\Cadet_Pilot_Helmet_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Pilot\Clean_Pilot_Helmet_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Pilot\Arcturus_Pilot_Helmet_CO.paa"
		};
	};
	class DBA_Athely_Pilot_Helm: DBA_P2_Pilot_Helm
	{
		scope=2;
		weaponPoolAvailable=1;
		displayName="101st Pilot Helmet (Athely)";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Pilot\Athely_Pilot_Helmet_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Pilot\Craft_Pilot_Helmet_CO.paa"
		};
	};
	class 101st_Denial_Helmet : DBA_P2_Pilot_Helm
	{
		author = "Gorman";
		dlc = "101st_Aux_Mod";
		scope = 2;
		scopeArsenal = 2;
		weaponPoolAvailable = 1;
		displayName = "101st Pilot Helmet (Denial)";
		hiddenSelections[] =
		{
			"Camo"
		};
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Pilot\Denial_Pilot_Helmet_CO.paa"
		};
	};
	class DBA_Double_Pilot_Helm: DBA_P2_Pilot_Helm
	{
		scope=2;
		weaponPoolAvailable=1;
		displayName="101st Pilot Helmet (Double)";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Pilot\Double_Pilot_Helmet_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Pilot\Flanker_Pilot_Helmet_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Pilot\Gorman_Pilot_Helmet_CO.paa"
		};
	};
	class DBA_Javelin_Pilot_Helm: DBA_P2_Pilot_Helm
	{
		scope=2;
		weaponPoolAvailable=1;
		displayName="101st Pilot Helmet (Javelin)";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Pilot\Javelin_Pilot_Helmet_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Pilot\Kuzy_Pilot_Helmet_CO.paa"
		};
	};
	class 101st_Mechanic_Helmet: DBA_P2_Pilot_Helm
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Pilot Helmet (Mechanic)";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Pilot\Mechanic_Pilot_Helmet_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Pilot\Mockingjay_Pilot_Helmet_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Pilot\Snake_Pilot_Helmet_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Pilot\Squirtle_Pilot_Helmet_CO.paa"
		};
	};
	class 101st_Stryker_Helmet: DBA_P2_Pilot_Helm
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Pilot Helmet (Stryker)";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Pilot\Stryker_Pilot_Helmet_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Pilot\Stultus_Pilot_Helmet_CO.paa"
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Pilot\Vance_Pilot_Helmet_CO.paa"
		};
	};
	class DBA_Zelph_Pilot_Helm: DBA_P2_Pilot_Helm
	{
		scope=2;
		weaponPoolAvailable=1;
		displayName="101st Pilot Helmet (Zelph)";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Pilot\Zelph_Pilot_Helmet_CO.paa"
		};
	};
};
