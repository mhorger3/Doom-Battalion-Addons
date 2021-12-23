class CfgPatches
{
	class 101st_Aux_Mod_Vests
	{
		author="Mutt / Dutch";
		name="101st Aux Mod Custom Vests";
		requiredaddons[] = 
		{
			"A3_Weapons_F",
			"A3_Functions_F"
		};
		requiredversion = 0.1;
		units[]={};
		weapons[]={};
	};
};
class CfgWeapons {
	class UniformItem;
	class VestItem;
	class ItemCore;
	class InventoryItem_Base_F;
	class Uniform_Base;
	class JLTS_CloneArmor;
	class JLTS_CloneArmorMC;
	class JLTS_CloneArmorRecon;

	class JLTS_CloneVestCommander;
	class JLTS_CloneVestReconOfficer;
	class JLTS_CloneVestReconNCO;
	class JLTS_CloneVestRecon;
	class JLTS_CloneVestAirborne;
	class JLTS_CloneVestAirborneNCO;
	class JLTS_CloneVestOfficer2;
	class JLTS_CloneVestSuspender;
	class JLTS_CloneVestOfficer;
	class JLTS_CloneVestSuspender_41_Gree;
	class V_RebreatherB;
		
	class DBA_Holster_Green : V_RebreatherB
	{
		author="Trip";
		dlc = "101st_Aux_Mod";
		scope=1;
		scopeArsenal=2;
		displayName="101st Green Holster (JLTS)";
		picture="\MRC\JLTS\characters\CloneArmor2\data\ui\CloneVestHolster_ui_ca.paa";
		hiddenSelectionsTextures[] = {"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Vests\OfficerAccessories_co.paa"};
		class ItemInfo: VestItem
		{
			containerClass="Supply150";
			uniformType="Default";
			mass=80;
			hiddenSelections[] = {"camo1"};
			uniformModel = "\MRC\JLTS\characters\CloneArmor2\CloneVestHolster.p3d";
			vestType = "Rebreather";
		};
	};
	// custom pauldrons and vests
	class 101st_Suspender_Black : V_RebreatherB
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=1;
		scopeArsenal=2;
		displayName="101st Black Suspenders (JLTS)";
		hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\CloneArmor\data\Clone_vest_suspender_co.paa"};
		class ItemInfo: VestItem
		{
			containerClass="Supply100";
			uniformType="Default";
			mass=80;
			hiddenSelections[] = {"camo1"};
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestSuspender.p3d";
			vestType = "Rebreather";
		};
	};
	class 101st_Suspender_Green : V_RebreatherB
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=1;
		scopeArsenal=2;
		displayName="101st Green Suspenders (JLTS)";
		hiddenSelectionsTextures[] = {"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Vests\clone_vest_suspender_green_co.paa"};
		class ItemInfo: VestItem
		{
			containerClass="Supply100";
			uniformType="Default";
			mass=80;
			hiddenSelections[] = {"camo1"};
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestSuspender.p3d";
			vestType = "Rebreather";
		};
	};
	class 101st_Suspender_Grey : V_RebreatherB
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=1;
		scopeArsenal=2;
		displayName="101st Grey Suspenders (JLTS)";
		hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\CloneLegions\data\Clone_41stGree_vest_co.paa"};
		class ItemInfo: VestItem
		{
			containerClass="Supply100";
			uniformType="Default";
			mass=80;
			hiddenSelections[] = {"camo1"};
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestSuspender.p3d";
			vestType = "Rebreather";
		};
	};

	class 101st_Custom_Sgt_Pauldron: JLTS_CloneVestReconOfficer
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=1;
		scopeArsenal=2;
		displayName="101st Sgt Pauldron (JLTS)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestPauldron_ui_ca.paa";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] = {"MRC\JLTS\characters\CloneArmor\data\Clone_vest_officer_co.paa","\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Vests\101st_Sgt_Pauldron_CO.paa"};
		class ItemInfo: VestItem
		{
			containerClass="Supply100";
			uniformType="Default";
			mass=80;
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestReconOfficer.p3d";
			vestType = "Rebreather";
		};
	};
	class 101st_Custom_traitor_Pauldron : JLTS_CloneVestReconOfficer
	{
		author = "Dutch";
		dlc = "101st_Aux_Mod";
		scope = 1;
		scopeArsenal = 2;
		displayName = "101st Traitor Officer (JLTS)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestPauldron_ui_ca.paa";
		hiddenSelections[] =
		{
			"camo1"
		};
		hiddenSelectionsTextures[] = { "\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Vests\Traitor_Pauldron_CO.paa" };
		hiddenSelectionsMaterials[] = { "\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Vests\TaitorPauldron.RVMAT" };
		class ItemInfo : VestItem
		{
			containerClass = "Supply100";
			uniformType = "Default";
			mass = 80;
			hiddenSelections[] =
			{
				"camo1"
			};
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestOfficer.p3d";
			vestType = "Rebreather";
		};
	};
	class 101st_Custom_traitor_NCO : JLTS_CloneVestReconOfficer
	{
		author = "Dutch";
		dlc = "101st_Aux_Mod";
		scope = 1;
		scopeArsenal = 2;
		displayName = "101st Traitor NCO (JLTS)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestPauldron_ui_ca.paa";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] = { "\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Vests\Traitor_Pauldron_CO.paa","\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Vests\Traitor_Officer_CO.paa", };
		hiddenSelectionsMaterials[] = { "\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Vests\TaitorPauldron.RVMAT","\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Vests\TaitorOfficer.RVMAT" };
		class ItemInfo : VestItem
		{
			containerClass = "Supply100";
			uniformType = "Default";
			mass = 80;
			hiddenSelections[] =
			{
				"camo1",
				"camo2"
			};
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestReconOfficer.p3d";
			vestType = "Rebreather";
		};
	};
	class 101st_Custom_SSgt_Pauldron: JLTS_CloneVestReconOfficer
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=1;
		scopeArsenal=2;
		displayName="101st S. Sgt Pauldron (JLTS)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestPauldron_ui_ca.paa";
		hiddenSelectionsTextures[] = {"MRC\JLTS\characters\CloneArmor\data\Clone_vest_officer_co.paa","\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Vests\101st_SSGT_Pauldron_CO.paa"};
		ballisticsComputer = 0;
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		class ItemInfo: VestItem
		{
			containerClass="Supply100";
			uniformType="Default";
			mass=80;
			hiddenSelections[] = {"camo1","camo2"};
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestReconOfficer.p3d";
			vestType = "Rebreather";
		};
	};
	class 101st_Custom_MedCP_Pauldron: JLTS_CloneVestReconNCO
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=1;
		scopeArsenal=2;
		displayName="101st Medical CP Pauldron (JLTS)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestPauldron_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Vests\101st_Medical_Pauldron_CP_CO.paa"
		};
		class ItemInfo: VestItem
		{
			containerClass="Supply100";
			uniformType="Default";
			mass=80;
			vestType = "Rebreather";
			hiddenSelections[] = {"camo2"};
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestReconNCO.p3d";
		};
	};
	class 101st_Custom_RTOCP_Pauldron: JLTS_CloneVestReconNCO
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=1;
		scopeArsenal=2;
		displayName="101st RTO CP Pauldron (JLTS)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestPauldron_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Vests\101st_RTO_Pauldron_CP_CO.paa"
		};
		class ItemInfo: VestItem
		{
			containerClass="Supply100";
			uniformType="Default";
			mass=80;
			vestType = "Rebreather";
			hiddenSelections[] = {"camo2"};
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestReconNCO.p3d";
		};
	};
	class 101st_Custom_MedCS_Pauldron: JLTS_CloneVestReconOfficer
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=1;
		scopeArsenal=2;
		displayName="101st Medical CS Pauldron (JLTS)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestPauldron_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Vests\101st_Medical_Kama_CP_CO.paa",
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Vests\101st_Medical_Pauldron_CP_CO.paa"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		class ItemInfo: VestItem
		{
			containerClass="Supply100";
			uniformType="Default";
			mass=80;
			hiddenSelections[] = {"camo1","camo2"};
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestReconOfficer.p3d";
			vestType = "Rebreather";
		};
	};
	class 101st_Custom_RTOCS_Pauldron: JLTS_CloneVestReconOfficer
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=1;
		scopeArsenal=2;
		displayName="101st RTO CS Pauldron (JLTS)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestPauldron_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Vests\101st_RTO_Kama_CP_CO.paa",
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Vests\101st_RTO_Pauldron_CP_CO.paa"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		class ItemInfo: VestItem
		{
			containerClass="Supply100";
			uniformType="Default";
			mass=80;
			hiddenSelections[] = {"camo1","camo2"};
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestReconOfficer.p3d";
			vestType = "Rebreather";
		};
	};
	class 101st_Custom_Cpl_Pauldron: JLTS_CloneVestReconNCO
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=1;
		scopeArsenal=2;
		displayName="101st Cpl Pauldron (JLTS)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestPauldron_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Vests\101st_Cpl_Pauldron_CO.paa"
		};
		class ItemInfo: VestItem
		{
			containerClass="Supply100";
			uniformType="Default";
			mass=80;
			vestType = "Rebreather";
			hiddenSelections[] = {"camo1"};
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestReconNCO.p3d";
		};
	};
	class 101st_Custom_SrCpl_Pauldron: JLTS_CloneVestReconNCO
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=1;
		scopeArsenal=2;
		displayName="101st Sr. Cpl Pauldron (JLTS)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestPauldron_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Vests\101st_SrCPL_Pauldron_CO.paa"
		};
		class ItemInfo: VestItem
		{
			containerClass="Supply100";
			uniformType="Default";
			mass=80;
			vestType = "Rebreather";
			hiddenSelections[] = {"camo1"};
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestReconNCO.p3d";
		};
	};
	class 101st_Custom_Airborne_Vest: JLTS_CloneVestAirborne
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=1;
		scopeArsenal=2;
		displayName="101st Airborne Vest (JLTS)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestPauldron_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Vests\101st_Airborne_Kama_CO.paa",
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Vests\101st_Airborne_Rigging_CO.paa"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		class ItemInfo: VestItem
		{
			containerClass="Supply100";
			uniformType="Default";
			mass=80;
			vestType = "Rebreather";
			hiddenSelections[] = {"camo1","camo2"};
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestAirborne.p3d";
		};
	};
	class 101st_Custom_Airborne_Medic_Vest: JLTS_CloneVestAirborne
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=1;
		scopeArsenal=2;
		displayName="101st Airborne Medical Vest (JLTS)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestPauldron_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Vests\101st_Airborne_Medic_Kama_CO.paa",
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Vests\101st_Airborne_Rigging_Medical_CO.paa"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		class ItemInfo: VestItem
		{
			containerClass="Supply100";
			uniformType="Default";
			mass=80;
			vestType = "Rebreather";
			hiddenSelections[] = {"camo1","camo2"};
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestAirborne.p3d";
		};
	};
	class 101st_Custom_Airborne_Base_Vest: JLTS_CloneVestAirborne
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=1;
		scopeArsenal=2;
		displayName="101st Airborne Base Vest (JLTS)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestPauldron_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Vests\101st_Airborne_Base_Kama_CO.paa",
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Vests\101st_Airborne_Rigging_Base_CO.paa"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		class ItemInfo: VestItem
		{
			containerClass="Supply100";
			uniformType="Default";
			mass=80;
			vestType = "Rebreather";
			hiddenSelections[] = {"camo1","camo2"};
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestAirborne.p3d";
		};
	};
	class 101st_Custom_Airborne_RTO_Vest: JLTS_CloneVestAirborne
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=1;
		scopeArsenal=2;
		displayName="101st Airborne RTO Vest (JLTS)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestPauldron_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Vests\101st_Airborne_RTO_Kama_CO.paa",
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Vests\101st_Airborne_Rigging_RTO_CO.paa"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		class ItemInfo: VestItem
		{
			containerClass="Supply100";
			uniformType="Default";
			mass=80;
			vestType = "Rebreather";
			hiddenSelections[] = {"camo1","camo2"};
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestAirborne.p3d";
		};
	};
	class 101st_Custom_CC_Pauldron: V_RebreatherB
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=1;
		scopeArsenal=2;
		displayName="101st CC Pauldron (JLTS)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestPauldron_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Vests\101st_CC_Pauldron_CO.paa"
		};
		class ItemInfo: VestItem
		{
			containerClass="Supply100";
			uniformType="Default";
			mass=80;
			vestType = "Rebreather";
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestCommander.p3d";
			hiddenSelections[] = {"camo1"};
		};
	};
	class 101st_Blind_Pauldron: V_RebreatherB
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=1;
		scopeArsenal=2;
		displayName="101st Blind Pauldron (JLTS)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestPauldron_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Vests\101st_Blind_Pauldron_CO.paa"
		};
		class ItemInfo: VestItem
		{
			containerClass="Supply100";
			uniformType="Default";
			mass=80;
			vestType = "Rebreather";
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestCommander.p3d";
			hiddenSelections[] = {"camo1"};
		};
	};
	class 101st_Jerec_Pauldron: V_RebreatherB
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=1;
		scopeArsenal=2;
		displayName="101st Jerec Pauldron (JLTS)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestPauldron_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Vests\101st_Jerec_Pauldron_CO.paa"
		};
		class ItemInfo: VestItem
		{
			containerClass="Supply100";
			uniformType="Default";
			mass=80;
			vestType = "Rebreather";
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestCommander.p3d";
			hiddenSelections[] = {"camo1"};
		};
	};
	class 101st_Spark_Pauldron: V_RebreatherB
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=1;
		scopeArsenal=2;
		displayName="101st Spark Pauldron (JLTS)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestPauldron_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Vests\101st_Spark_Pauldron_CO.paa"
		};
		class ItemInfo: VestItem
		{
			containerClass="Supply100";
			uniformType="Default";
			mass=80;
			vestType = "Rebreather";
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestCommander.p3d";
			hiddenSelections[] = {"camo1"};
		};
	};
	class 101st_Hambino_Pauldron: V_RebreatherB
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=1;
		scopeArsenal=2;
		displayName="101st Hambino Pauldron (JLTS)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestPauldron_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Vests\101st_Hambino_Pauldron_CO.paa"
		};
		class ItemInfo: VestItem
		{
			containerClass="Supply100";
			uniformType="Default";
			mass=80;
			vestType = "Rebreather";
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestOfficer2.p3d";
			hiddenSelections[] = {"camo1"};
		};
	};
	class 101st_Kel_Pauldron: V_RebreatherB
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=1;
		scopeArsenal=2;
		displayName="101st Kel Pauldron (JLTS)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestPauldron_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Vests\101st_Kel_Pauldron_CO.paa"
		};
		class ItemInfo: VestItem
		{
			containerClass="Supply100";
			uniformType="Default";
			mass=80;
			vestType = "Rebreather";
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestCommander.p3d";
			hiddenSelections[] = {"camo1"};
		};
	};
	class 101st_Seatie_Pauldron: V_RebreatherB
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=1;
		scopeArsenal=2;
		displayName="101st Seatie Pauldron (JLTS)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestPauldron_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Vests\101st_Seatie_Pauldron_CO.paa"
		};
		class ItemInfo: VestItem
		{
			containerClass="Supply100";
			uniformType="Default";
			mass=80;
			vestType = "Rebreather";
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestKama.p3d";
			hiddenSelections[] = {"camo1"};
		};
	};
	class 101st_Heretic_Pauldron: V_RebreatherB
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=1;
		scopeArsenal=2;
		displayName="101st Heretic Pauldron (JLTS)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestPauldron_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Vests\101st_Heretic_Pauldron_CO.paa"
		};
		class ItemInfo: VestItem
		{
			containerClass="Supply100";
			uniformType="Default";
			mass=80;
			vestType = "Rebreather";
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestCommander.p3d";
			hiddenSelections[] = {"camo1"};
		};
	};
	class 101st_Hark_Pauldron: V_RebreatherB
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=1;
		scopeArsenal=2;
		displayName="101st Hark Pauldron (JLTS)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestPauldron_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Vests\101st_Hark_Pauldron_CO.paa"
		};
		class ItemInfo: VestItem
		{
			containerClass="Supply100";
			uniformType="Default";
			mass=80;
			vestType = "Rebreather";
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestCommander.p3d";
			hiddenSelections[] = {"camo1"};
		};
	};
	class 101st_Custom_CompanyCSM_Pauldron: V_RebreatherB
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=1;
		scopeArsenal=2;
		displayName="101st Company CSM Pauldron (JLTS)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestPauldron_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Vests\101st_Company_CSM_Pauldron_CO.paa"
		};
		class ItemInfo: VestItem
		{
			containerClass="Supply100";
			uniformType="Default";
			mass=80;
			vestType = "Rebreather";
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestOfficer2.p3d";
			hiddenSelections[] = {"camo1"};
		};
	};
	class 101st_Custom_CSM_Pauldron: V_RebreatherB
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=1;
		scopeArsenal=2;
		displayName="101st CSM Pauldron (JLTS)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestPauldron_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Vests\101st_Platoon_CSM_Pauldron_CO.paa"
		};
		class ItemInfo: VestItem
		{
			containerClass="Supply100";
			uniformType="Default";
			mass=80;
			vestType = "Rebreather";
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestOfficer2.p3d";
			hiddenSelections[] = {"camo1"};
		};
	};
	class 101st_Custom_Medical_CSM_Pauldron: V_RebreatherB
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=1;
		scopeArsenal=2;
		displayName="101st Medical CSM Pauldron (JLTS)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestPauldron_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Vests\Medical_CSM_Pauldron_CO.paa"
		};
		class ItemInfo: VestItem
		{
			containerClass="Supply100";
			uniformType="Default";
			mass=80;
			vestType = "Rebreather";
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestOfficer2.p3d";
			hiddenSelections[] = {"camo1"};
		};
	};
	class 101st_Custom_Radio_CSM_Pauldron: V_RebreatherB
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=1;
		scopeArsenal=2;
		displayName="101st Radio CSM Pauldron (JLTS)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestPauldron_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Vests\RTO_CSM_Pauldron_CO.paa"
		};
		class ItemInfo: VestItem
		{
			containerClass="Supply100";
			uniformType="Default";
			mass=80;
			vestType = "Rebreather";
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestOfficer2.p3d";
			hiddenSelections[] = {"camo1"};
		};
	};
	class 101st_Custom_CXO_Pauldron: V_RebreatherB
	{
		author="Trip";
		dlc = "101st_Aux_Mod";
		scope=1;
		scopeArsenal=2;
		displayName="101st CX-O Pauldron (JLTS)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestPauldron_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Vests\101st_2ndLT_Pauldron_CO.paa"
		};
		class ItemInfo: VestItem
		{
			containerClass="Supply100";
			uniformType="Default";
			mass=80;
			vestType = "Rebreather";
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestOfficer.p3d";
			hiddenSelections[] = {"camo1"};
		};
	};
	class 101st_Custom_1LT_Pauldron: V_RebreatherB
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=1;
		scopeArsenal=2;
		displayName="101st 1st LT Pauldron (JLTS)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestPauldron_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Vests\101st_1stLT_Pauldron_CO.paa"
		};
		class ItemInfo: VestItem
		{
			containerClass="Supply100";
			uniformType="Default";
			mass=80;
			vestType = "Rebreather";
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestCommander.p3d";
			hiddenSelections[] = {"camo1"};
		};
	};
	class 101st_Custom_2LT_Pauldron: V_RebreatherB
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=1;
		scopeArsenal=2;
		displayName="101st 2nd LT Pauldron (JLTS)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestPauldron_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Vests\101st_2ndLT_Pauldron_CO.paa"
		};
		class ItemInfo: VestItem
		{
			containerClass="Supply100";
			uniformType="Default";
			mass=80;
			vestType = "Rebreather";
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestCommander.p3d";
			hiddenSelections[] = {"camo1"};
		};
	};
	class 101st_AirborneNCO_Pauldron: JLTS_CloneVestAirborneNCO
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=1;
		scopeArsenal=2;
		displayName="101st Airborne NCO (JLTS)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestPauldron_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Vests\101st_Airborne_Kama_CO.paa",
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Vests\101st_Airborne_Rigging_CO.paa"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		class ItemInfo: VestItem
		{
			containerClass="Supply100";
			uniformType="Default";
			mass=80;
			vestType = "Rebreather";
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestAirborneNCO.p3d";
			hiddenSelections[] = {"camo1", "camo2"};
		};
	};
	class 101st_TraitorAirborneNCO_Pauldron: JLTS_CloneVestAirborneNCO
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=1;
		scopeArsenal=2;
		displayName="101st Traitor Airborne NCO (JLTS)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestPauldron_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Vests\DaggerTraitorOfficer_Custom_Pauldron_CO.paa",
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Vests\DaggerTraitorNCO_Custom_Pauldron_CO.paa"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		class ItemInfo: VestItem
		{
			containerClass="Supply100";
			uniformType="Default";
			mass=80;
			vestType = "Rebreather";
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestAirborneNCO.p3d";
			hiddenSelections[] = {"camo1", "camo2"};
		};
	};
	class 101st_Custom_NCO_Pauldron: V_RebreatherB
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=1;
		scopeArsenal=2;
		displayName="101st NCO Pauldron (JLTS)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestPauldron_ui_ca.paa";
		hiddenSelectionsTextures[] = {"MRC\JLTS\characters\CloneArmor\data\Clone_vest_heavy_co.paa"};
		class ItemInfo: VestItem
		{
			containerClass="Supply100";
			uniformType="Default";
			mass=80;
			hiddenSelections[] = {"camo1"};
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestRecon.p3d";
			vestType = "Rebreather";
		};
	};
	
	class 101st_212_Rebreather: V_RebreatherB
	{
		author="Dutch";
		dlc = "101st_Aux_Mod";
		scope=2;
		scopeArsenal=2;
		displayName="101st Rebreather (JLTS)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestPauldron_ui_ca.paa";
		model="-";
		class ItemInfo: VestItem
		{
			containerClass="Supply100";
			uniformType="Default";
			mass=40;
			hiddenSelections[] = {"camo1"};
			uniformModel = "-";
			vestType = "Rebreather";
		};
	}
}