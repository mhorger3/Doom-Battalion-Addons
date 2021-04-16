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

// custom pauldrons and vests

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
	hiddenSelectionsTextures[] = {"\101st_Aux_Mod\Addons\Armor\Suspenders\Clone_vest_suspender_green_co.paa"};
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
	hiddenSelectionsTextures[] = {"MRC\JLTS\characters\CloneArmor\data\Clone_vest_officer_co.paa","\101st_Aux_Mod\Addons\textures\101st\armor\pauldrons\101st_Sgt_Pauldron_CO.paa"};
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
class 101st_Custom_SSgt_Pauldron: JLTS_CloneVestReconOfficer
{
	author="Dutch";
	dlc = "101st_Aux_Mod";
	scope=1;
	scopeArsenal=2;
	displayName="101st S. Sgt Pauldron (JLTS)";
	picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestPauldron_ui_ca.paa";
	hiddenSelectionsTextures[] = {"MRC\JLTS\characters\CloneArmor\data\Clone_vest_officer_co.paa","\101st_Aux_Mod\Addons\textures\101st\armor\pauldrons\101st_SSGT_Pauldron_CO.paa"};
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
class 101st_Custom_MedCP_Pauldron: V_RebreatherB
{
	author="Dutch";
	dlc = "101st_Aux_Mod";
	scope=1;
	scopeArsenal=2;
	displayName="101st Medical CP Pauldron (JLTS)";
	picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestPauldron_ui_ca.paa";
	hiddenSelectionsTextures[]=
	{
		"\101st_Aux_Mod\Addons\textures\101st\armor\pauldrons\101st_Medical_Pauldron_CP_CO.paa"
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
class 101st_Custom_RTOCP_Pauldron: V_RebreatherB
{
	author="Dutch";
	dlc = "101st_Aux_Mod";
	scope=1;
	scopeArsenal=2;
	displayName="101st RTO CP Pauldron (JLTS)";
	picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestPauldron_ui_ca.paa";
	hiddenSelectionsTextures[]=
	{
		"\101st_Aux_Mod\Addons\textures\101st\armor\pauldrons\101st_RTO_Pauldron_CP_CO.paa"
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
		"\101st_Aux_Mod\Addons\textures\101st\armor\pauldrons\101st_Medical_Kama_CP_CO.paa",
		"\101st_Aux_Mod\Addons\textures\101st\armor\pauldrons\101st_Medical_Pauldron_CP_CO.paa"
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
		"\101st_Aux_Mod\Addons\textures\101st\armor\pauldrons\101st_RTO_Kama_CP_CO.paa",
		"\101st_Aux_Mod\Addons\textures\101st\armor\pauldrons\101st_RTO_Pauldron_CP_CO.paa"
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
class 101st_Custom_Cpl_Pauldron: V_RebreatherB
{
	author="Dutch";
	dlc = "101st_Aux_Mod";
	scope=1;
	scopeArsenal=2;
	displayName="101st Cpl Pauldron (JLTS)";
	picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestPauldron_ui_ca.paa";
	hiddenSelectionsTextures[]=
	{
		"\101st_Aux_Mod\Addons\textures\101st\armor\pauldrons\101st_Cpl_Pauldron_CO.paa"
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
class 101st_Custom_SrCpl_Pauldron: V_RebreatherB
{
	author="Dutch";
	dlc = "101st_Aux_Mod";
	scope=1;
	scopeArsenal=2;
	displayName="101st Sr. Cpl Pauldron (JLTS)";
	picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestPauldron_ui_ca.paa";
	hiddenSelectionsTextures[]=
	{
		"\101st_Aux_Mod\Addons\textures\101st\armor\pauldrons\101st_SrCPL_Pauldron_CO.paa"
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
		"\101st_Aux_Mod\Addons\textures\101st\armor\pauldrons\101st_Airborne_Kama_CO.paa",
		"\101st_Aux_Mod\Addons\textures\101st\armor\pauldrons\101st_Airborne_Rigging_CO.paa"
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
		"\101st_Aux_Mod\Addons\textures\101st\armor\pauldrons\101st_Airborne_Medic_Kama_CO.paa",
		"\101st_Aux_Mod\Addons\textures\101st\armor\pauldrons\101st_Airborne_Rigging_Medical_CO.paa"
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
		"\101st_Aux_Mod\Addons\textures\101st\armor\pauldrons\101st_Airborne_Base_Kama_CO.paa",
		"\101st_Aux_Mod\Addons\textures\101st\armor\pauldrons\101st_Airborne_Rigging_Base_CO.paa"
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
		"\101st_Aux_Mod\Addons\textures\101st\armor\pauldrons\101st_Airborne_RTO_Kama_CO.paa",
		"\101st_Aux_Mod\Addons\textures\101st\armor\pauldrons\101st_Airborne_Rigging_RTO_CO.paa"
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
		"\101st_Aux_Mod\Addons\textures\101st\armor\pauldrons\101st_CC_Pauldron_CO.paa"
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
		"\101st_Aux_Mod\Addons\textures\101st\armor\pauldrons\101st_Blind_Pauldron_CO.paa"
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
		"\101st_Aux_Mod\Addons\textures\101st\armor\pauldrons\101st_Jerec_Pauldron_CO.paa"
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
		"\101st_Aux_Mod\Addons\textures\101st\armor\pauldrons\101st_Company_CSM_Pauldron_CO.paa"
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
		"\101st_Aux_Mod\Addons\textures\101st\armor\pauldrons\101st_Platoon_CSM_Pauldron_CO.paa"
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
		"\101st_Aux_Mod\Addons\textures\101st\armor\pauldrons\101st_1stLT_Pauldron_CO.paa"
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
		"\101st_Aux_Mod\Addons\textures\101st\armor\pauldrons\101st_2ndLT_Pauldron_CO.paa"
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
		"\101st_Aux_Mod\Addons\textures\101st\armor\pauldrons\101st_Airborne_Kama_CO.paa",
		"\101st_Aux_Mod\Addons\textures\101st\armor\pauldrons\101st_Airborne_Rigging_CO.paa"
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
class JLTS_CloneNVG;
class 101st_Visor: JLTS_CloneNVG
{
	modelOptics="";
	useModelOptics=0;
	opticsDisablePeripherialVision=0;
	visionMode[]=
	{
		"Normal",
		"NVG",
		"TI"
	};
	thermalMode[]={4};
	displayName="[101st] CP Custom Visor";
	hiddenSelections[]=
	{
		"Camo1"
	};
	hiddenSelectionsTextures[]=
	{
		"\101st_Aux_Mod\Addons\textures\Bino\CP_CO.paa"
	};
};
class 101st_LCP_Visor: JLTS_CloneNVG
{
	modelOptics="";
	useModelOptics=0;
	opticsDisablePeripherialVision=0;
	visionMode[]=
	{
		"Normal",
		"NVG",
		"TI"
	};
	thermalMode[]={4};
	displayName="[101st] LCP Custom Visor";
	hiddenSelections[]=
	{
		"Camo1"
	};
};
class JLTS_CloneNVG_black;
class 101st_Visor_Black : JLTS_CloneNVG_black
{
	modelOptics="";
	useModelOptics=0;
	opticsDisablePeripherialVision=0;
	visionMode[]=
	{
		"Normal",
		"NVG",
		"TI"
	};
	thermalMode[]={4};
	displayName="[101st] Black Visor";
};
class JLTS_CloneNVGRange;
class 101st_Visor_Range : JLTS_CloneNVGRange
{
	displayName="[101st] White Rangefinder";
	modelOptics="";
	useModelOptics=0;
	opticsDisablePeripherialVision=0;
};
class 101st_Visor_DoomRange : JLTS_CloneNVGRange
{
	displayName="[101st] Doom Rangefinder";
	modelOptics="";
	useModelOptics=0;
	opticsDisablePeripherialVision=0;
	hiddenSelectionsTextures[]=
	{
		"\101st_Aux_Mod\Addons\textures\Bino\Doom_Range_CO.paa"
	};
};
class 101st_Visor_GreyRange : JLTS_CloneNVGRange
{
	displayName="[101st] Grey Rangefinder";
	modelOptics="";
	useModelOptics=0;
	opticsDisablePeripherialVision=0;
	hiddenSelectionsTextures[]=
	{
		"\101st_Aux_Mod\Addons\textures\Bino\Doom_RTO_Range_CO.paa"
	};
};
class 101st_Visor_MedicRange : JLTS_CloneNVGRange
{
	displayName="[101st] Medic Rangefinder";
	modelOptics="";
	useModelOptics=0;
	opticsDisablePeripherialVision=0;
	hiddenSelectionsTextures[]=
	{
		"\101st_Aux_Mod\Addons\textures\Bino\Doom_Medic_Range_CO.paa"
	};
};
class JLTS_CloneNVGRange_black;
class 101st_Visor_Range_Black : JLTS_CloneNVGRange_black
{
	modelOptics="";
	useModelOptics=0;
	opticsDisablePeripherialVision=0;
	displayName="[101st] Black Rangefinder";
};

class JLTS_CloneNVG_spec;
class 101st_Spec_NVG : JLTS_CloneNVG_spec
{
	modelOptics="";
	useModelOptics=0;
	opticsDisablePeripherialVision=0;
	visionMode[]=
	{
		"Normal",
		"NVG",
		"TI"
	};
	thermalMode[]={4};
	displayName="[101st] White Specialist Visor";
	hiddenSelectionsTextures[]=
	{
		"\101st_Aux_Mod\Addons\textures\Bino\CP_CO.paa"
	};
};

class JLTS_CloneNVG_spec_black;
class 101st_Spec_Black_NVG : JLTS_CloneNVG_spec_black
{
	modelOptics="";
	useModelOptics=0;
	opticsDisablePeripherialVision=0;
	visionMode[]=
	{
		"Normal",
		"NVG",
		"TI"
	};
	thermalMode[]={4};
	displayName="[101st] Black Specialist Visor";
};


// binoc
class JLTS_CloneBinocular_black;
class 101st_CloneBinocular_black : JLTS_CloneBinocular_black
{
	displayName="[101st] Clone Binocular Black";
};

class JLTS_CloneBinocular;
class 101st_CloneBinocular : JLTS_CloneBinocular
{
	displayName="[101st] Clone Binocular";
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

// uniform comment
class 101st_212_Recruit: Uniform_Base
{
	dlc = "101st_Aux_Mod";
	scope=2;
	displayName="101st Recruit (JLTS)";
	picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	hiddenSelections[]=
	{
		"camo1", "camo2"
	};
	hiddenSelectionsTextures[]=
	{
		"101st_Aux_Mod\Addons\textures\101st\armor\101st_Recruit_Chest_CO.paa",
		"101st_Aux_Mod\Addons\textures\101st\armor\101st_Recruit_Legs_CO.paa"
	};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="101st_CloneRecruit_212th";
		containerClass="supply150";
		uniformType="Neopren";
		hiddenSelections[]=
		{
			"camo"
		};
		mass=40;
	};
};
class 101st_Scuba: Uniform_Base
{
	dlc = "101st_Aux_Mod";
	scope=2;
	displayName="101st Scuba (JLTS)";
	picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	hiddenSelections[]=
	{
		"camo1", "camo2"
	};
	hiddenSelectionsTextures[]=
	{
		"101st_Aux_Mod\Addons\textures\101st\armor\Trooper_Chest_CO.paa",
		"101st_Aux_Mod\Addons\Armor\Scuba\textures\Scuba_Legs_CO.paa"
	};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="101st_Scuba_212th";
		containerClass="supply150";
		uniformType="Neopren";
		hiddenSelections[]=
		{
			"camo"
		};
		mass=40;
	};
};
class 101st_212_Cadet: Uniform_Base
{
	dlc = "101st_Aux_Mod";
	scope=2;
	displayName="101st Cadet (JLTS)";
	picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	hiddenSelections[]=
	{
		"camo1", "camo2"
	};
	hiddenSelectionsTextures[]=
	{
		"\101st_Aux_Mod\Addons\textures\101st\armor\Cadet_Chest_CO.paa",
		"\101st_Aux_Mod\Addons\textures\101st\armor\Cadet_Legs_CO.paa"
	};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="101st_CloneCadet_212th";
		containerClass="supply150";
		uniformType="Neopren";
		hiddenSelections[]=
		{
			"camo"
		};
		mass=40;
	};
};
class 101st_212_Trooper: Uniform_Base
{
	dlc = "101st_Aux_Mod";
	scope=2;
	displayName="101st Trooper (JLTS)";
	picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	hiddenSelections[]=
	{
		"camo1", "camo2"
	};
	hiddenSelectionsTextures[]=
	{
		"101st_Aux_Mod\Addons\textures\101st\armor\Trooper_Chest_CO.paa",
		"101st_Aux_Mod\Addons\textures\101st\armor\Trooper_Legs_CO.paa"
	};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="101st_CloneTrooper_212th";
		containerClass="supply150";
		uniformType="Neopren";
		hiddenSelections[]=
		{
			"camo"
		};
		mass=40;
	};
};
class 101st_212_Medic_Cadet: Uniform_Base
{
	dlc = "101st_Aux_Mod";
	scope=2;
	displayName="101st Medic Cadet (JLTS)";
	picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	hiddenSelections[]=
	{
		"camo1", "camo2"
	};
	hiddenSelectionsTextures[]=
	{
		"\101st_Aux_Mod\Addons\textures\101st\armor\Medical_Cadet_Chest_CO.paa",
		"\101st_Aux_Mod\Addons\textures\101st\armor\Medical_Cadet_Legs_CO.paa"
	};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="101st_CloneMedicCadet_212th";
		containerClass="supply150";
		uniformType="Neopren";
		hiddenSelections[]=
		{
			"camo"
		};
		mass=40;
	};
};
class 101st_212_CLS: Uniform_Base
{
	dlc = "101st_Aux_Mod";
	scope=2;
	displayName="101st CLS Medic (JLTS)";
	picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	hiddenSelections[]=
	{
		"camo1", "camo2"
	};
	hiddenSelectionsTextures[]=
	{
		"\101st_Aux_Mod\Addons\textures\101st\armor\CLS_Chest_CO.paa",
		"\101st_Aux_Mod\Addons\textures\101st\armor\Trooper_Legs_CO.paa"
	};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="101st_CLS_212th";
		containerClass="supply150";
		uniformType="Neopren";
		hiddenSelections[]=
		{
			"camo"
		};
		mass=40;
	};
};
class 101st_212_Lcp: Uniform_Base
{
	dlc = "101st_Aux_Mod";
	scope=2;
	displayName="101st Lance Corporal (JLTS)";
	picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	hiddenSelections[]=
	{
		"camo1", "camo2"
	};
	hiddenSelectionsTextures[]=
	{
		"\101st_Aux_Mod\Addons\textures\101st\armor\101st_Lcp_Chest_CO.paa",
		"\101st_Aux_Mod\Addons\textures\101st\armor\101st_Lcp_Legs_CO.paa"
	};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="101st_Lcp_212th";
		containerClass="supply150";
		uniformType="Neopren";
		hiddenSelections[]=
		{
			"camo"
		};
		mass=40;
	};
};
class 101st_212_CP: Uniform_Base
{
	dlc = "101st_Aux_Mod";
	scope=2;
	displayName="101st Corporal (JLTS)";
	picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	hiddenSelections[]=
	{
		"camo1", "camo2"
	};
	hiddenSelectionsTextures[]=
	{
		"\101st_Aux_Mod\Addons\textures\101st\armor\101st_Cpl_Chest_CO.paa",
		"\101st_Aux_Mod\Addons\textures\101st\armor\101st_Cpl_Legs_CO.paa"
	};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="101st_Cp_212th";
		containerClass="supply150";
		uniformType="Neopren";
		hiddenSelections[]=
		{
			"camo"
		};
		mass=40;
	};
};
class 101st_212_Medic: Uniform_Base
{
	dlc = "101st_Aux_Mod";
	scope=2;
	displayName="101st Medic (JLTS)";
	picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	hiddenSelections[]=
	{
		"camo1", "camo2"
	};
	hiddenSelectionsTextures[]=
	{
		"\101st_Aux_Mod\Addons\textures\101st\armor\Medic_Chest_CO.paa",
		"\101st_Aux_Mod\Addons\textures\101st\armor\Medic_Legs_CO.paa"
	};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="101st_Medic_212th";
		containerClass="supply150";
		uniformType="Neopren";
		hiddenSelections[]=
		{
			"camo"
		};
		mass=40;
	};
};
class 101st_212_RTO_Cadet: Uniform_Base
{
	dlc = "101st_Aux_Mod";
	scope=2;
	displayName="101st RTO Cadet (JLTS)";
	picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	hiddenSelections[]=
	{
		"camo1", "camo2"
	};
	hiddenSelectionsTextures[]=
	{
		"\101st_Aux_Mod\Addons\textures\101st\armor\RTO_Cadet_Chest_CO.paa",
		"\101st_Aux_Mod\Addons\textures\101st\armor\RTO_Cadet_Legs_CO.paa"
	};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="101st_RTO_Cadet_212th";
		containerClass="supply150";
		uniformType="Neopren";
		hiddenSelections[]=
		{
			"camo"
		};
		mass=40;
	};
};
class 101st_212_RTO: Uniform_Base
{
	dlc = "101st_Aux_Mod";
	scope=2;
	displayName="101st RTO (JLTS)";
	picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	hiddenSelections[]=
	{
		"camo1", "camo2"
	};
	hiddenSelectionsTextures[]=
	{
		"\101st_Aux_Mod\Addons\textures\101st\armor\RTO_Chest_CO.paa",
		"\101st_Aux_Mod\Addons\textures\101st\armor\RTO_Legs_CO.paa"
	};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="101st_RTO_212th";
		containerClass="supply150";
		uniformType="Neopren";
		hiddenSelections[]=
		{
			"camo"
		};
		mass=40;
	};
};
class 101st_212_Dagger: Uniform_Base
{
	dlc = "101st_Aux_Mod";
	scope=2;
	displayName="101st Dagger (JLTS)";
	picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	hiddenSelections[]=
	{
		"camo",
		"camo1"
	};
	hiddenSelectionsTextures[]=
	{
		"\101st_Aux_Mod\Addons\textures\101st\armor\Dagger_Trooper_Chest_CO.paa",
		"\101st_Aux_Mod\Addons\textures\101st\armor\Dagger_Trooper_Legs_CO.paa"
	};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="101st_Dagger_212th";
		containerClass="supply150";
		uniformType="Neopren";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		mass=40;
	};
};
class 101st_212_Dagger_Corporal: Uniform_Base
{
	dlc = "101st_Aux_Mod";
	scope=2;
	displayName="101st Dagger CP (JLTS)";
	picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	hiddenSelections[]=
	{
		"camo",
		"camo1"
	};
	hiddenSelectionsTextures[]=
	{
		"\101st_Aux_Mod\Addons\textures\101st\armor\Dagger_Corporal_Chest_CO.paa",
		"\101st_Aux_Mod\Addons\textures\101st\armor\Dagger_Corporal_Legs_CO.paa"
	};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="101st_Dagger_Corporal_212th";
		containerClass="supply150";
		uniformType="Neopren";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		mass=40;
	};
};
class 101st_212_Dagger_Sergeant: Uniform_Base
{
	dlc = "101st_Aux_Mod";
	scope=2;
	displayName="101st Dagger CS (JLTS)";
	picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	hiddenSelections[]=
	{
		"camo",
		"camo1"
	};
	hiddenSelectionsTextures[]=
	{
		"\101st_Aux_Mod\Addons\textures\101st\armor\Dagger_Sergeant_Chest_CO.paa",
		"\101st_Aux_Mod\Addons\textures\101st\armor\Dagger_Sergeant_Legs_CO.paa"
	};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="101st_Dagger_Sergeant_212th";
		containerClass="supply150";
		uniformType="Neopren";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		mass=40;
	};
};
class 101st_212_Dagger_Medic: Uniform_Base
{
	dlc = "101st_Aux_Mod";
	scope=2;
	displayName="101st Dagger Medic (JLTS)";
	picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	hiddenSelections[]=
	{
		"camo",
		"camo1"
	};
	hiddenSelectionsTextures[]=
	{
		"\101st_Aux_Mod\Addons\textures\101st\armor\Dagger_Medic_Chest_CO.paa",
		"\101st_Aux_Mod\Addons\textures\101st\armor\Dagger_Medic_Legs_CO.paa"
	};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="101st_Dagger_Medic_212th";
		containerClass="supply150";
		uniformType="Neopren";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		mass=40;
	};
};
class 101st_212_Dagger_RTO: Uniform_Base
{
	dlc = "101st_Aux_Mod";
	scope=2;
	displayName="101st Dagger RTO (JLTS)";
	picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	hiddenSelections[]=
	{
		"camo",
		"camo1"
	};
	hiddenSelectionsTextures[]=
	{
		"\101st_Aux_Mod\Addons\textures\101st\armor\Dagger_RTO_Chest_CO.paa",
		"\101st_Aux_Mod\Addons\textures\101st\armor\Dagger_RTO_Legs_CO.paa"
	};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="101st_Dagger_RTO_212th";
		containerClass="supply150";
		uniformType="Neopren";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		mass=40;
	};
};
class 101st_212_Pilot: Uniform_Base
{
	dlc = "101st_Aux_Mod";
	scope=2;
	displayName="101st Pilot (JLTS)";
	picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	hiddenSelections[]=
	{
		"camo",
		"camo1"
	};
	hiddenSelectionsTextures[]=
	{
		"\101st_Aux_Mod\Addons\textures\101st\armor\101st_Pilot_Basic_Chest_CO.paa",
		"\101st_Aux_Mod\Addons\textures\101st\armor\101st_Pilot_Basic_Legs_CO.paa"
	};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="101st_Pilot_212th";
		containerClass="supply150";
		uniformType="Neopren";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		mass=40;
	};
};
class 101st_212_Peanut: Uniform_Base
{
	dlc = "101st_Aux_Mod";
	scope=2;
	displayName="101st Peanut (JLTS)";
	picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	hiddenSelections[]=
	{
		"camo",
		"camo1"
	};
	hiddenSelectionsTextures[]=
	{
		"\101st_Aux_Mod\Addons\textures\101st\armor\Peanut_Armor_Chest_CO.paa",
		"\101st_Aux_Mod\Addons\textures\101st\armor\Peanut_Armor_Legs_CO.paa"
	};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="101st_Peanut_212th";
		containerClass="supply150";
		uniformType="Neopren";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		mass=40;
	};
};
class 101st_212_Ronin: Uniform_Base
{
	dlc = "101st_Aux_Mod";
	scope=2;
	displayName="101st Ronin (JLTS)";
	picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	hiddenSelections[]=
	{
		"camo",
		"camo1"
	};
	hiddenSelectionsTextures[]=
	{
		"\101st_Aux_Mod\Addons\textures\101st\armor\Ronin_Chest_CO.paa",
		"\101st_Aux_Mod\Addons\textures\101st\armor\Ronin_Legs_CO.paa"
	};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="101st_Ronin_212th";
		containerClass="supply150";
		uniformType="Neopren";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		mass=40;
	};
};
class 101st_212_StealthPilot: Uniform_Base
{
	dlc = "101st_Aux_Mod";
	scope=2;
	displayName="101st Stealth Pilot (JLTS)";
	picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	hiddenSelections[]=
	{
		"camo",
		"camo1"
	};
	hiddenSelectionsTextures[]=
	{
		"\101st_Aux_Mod\Addons\textures\101st\armor\StealthPilot_Chest_CO.paa",
		"\101st_Aux_Mod\Addons\textures\101st\armor\StealthPilot_Legs_CO.paa"
	};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="101st_StealthPilot_212th";
		containerClass="supply150";
		uniformType="Neopren";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		mass=40;
	};
};
class 101st_212_Sergeant: Uniform_Base
{
	dlc = "101st_Aux_Mod";
	scope=2;
	displayName="101st Sergeant (JLTS)";
	picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	hiddenSelections[]=
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[]=
	{
		"\101st_Aux_Mod\Addons\textures\101st\armor\Sergeant_Chest_CO.paa",
		"\101st_Aux_Mod\Addons\textures\101st\armor\Sergeant_Legs_CO.paa"
	};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="101st_Sergeant_212th";
		containerClass="supply150";
		uniformType="Neopren";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		mass=40;
	};
};
class 101st_212_NCO: Uniform_Base
{
	dlc = "101st_Aux_Mod";
	scope=2;
	displayName="101st NCO (JLTS)";
	picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	hiddenSelections[]=
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[]=
	{
		"\101st_Aux_Mod\Addons\textures\101st\armor\NCO_Chest_CO.paa",
		"\101st_Aux_Mod\Addons\textures\101st\armor\NCO_Legs_CO.paa"
	};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="101st_NCO_212th";
		containerClass="supply150";
		uniformType="Neopren";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		mass=40;
	};
};
class 101st_212_CXC: Uniform_Base
{
	dlc = "101st_Aux_Mod";
	scope=2;
	displayName="101st Pilot CX-C (JLTS)";
	picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	hiddenSelections[]=
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[]=
	{
		"\101st_Aux_Mod\Addons\textures\101st\armor\CX-C_Armor_CO.paa",
		"\101st_Aux_Mod\Addons\textures\101st\armor\CX-C_Legs_CO.paa"
	};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="101st_CXC_212th";
		containerClass="supply150";
		uniformType="Neopren";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		mass=40;
	};
};
class 101st_212_CX: Uniform_Base
{
	dlc = "101st_Aux_Mod";
	scope=2;
	displayName="101st Pilot CX (JLTS)";
	picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	hiddenSelections[]=
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[]=
	{
		"\101st_Aux_Mod\Addons\textures\101st\armor\CX_Armor_CO.paa",
		"\101st_Aux_Mod\Addons\textures\101st\armor\CX_Legs_CO.paa"
	};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="101st_CX_212th";
		containerClass="supply150";
		uniformType="Neopren";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		mass=40;
	};
};
class 101st_212_CXT: Uniform_Base
{
	dlc = "101st_Aux_Mod";
	scope=2;
	displayName="101st Pilot CX-T (JLTS)";
	picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	hiddenSelections[]=
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[]=
	{
		"\101st_Aux_Mod\Addons\textures\101st\armor\CX-T_Armor_CO.paa",
		"\101st_Aux_Mod\Addons\textures\101st\armor\CX-T_Legs_CO.paa"
	};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="101st_CXT_212th";
		containerClass="supply150";
		uniformType="Neopren";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		mass=40;
	};
};
class 101st_212_CXP: Uniform_Base
{
	dlc = "101st_Aux_Mod";
	scope=2;
	displayName="101st Pilot CX-P (JLTS)";
	picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	hiddenSelections[]=
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[]=
	{
		"\101st_Aux_Mod\Addons\textures\101st\armor\CX-P_Armor_CO.paa",
		"\101st_Aux_Mod\Addons\textures\101st\armor\CX-P_Legs_CO.paa"
	};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="101st_CXP_212th";
		containerClass="supply150";
		uniformType="Neopren";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		mass=40;
	};
};
class 101st_212_CXS: Uniform_Base
{
	dlc = "101st_Aux_Mod";
	scope=2;
	displayName="101st Pilot CX-S (JLTS)";
	picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	hiddenSelections[]=
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[]=
	{
		"\101st_Aux_Mod\Addons\textures\101st\armor\CX-S_Armor_CO.paa",
		"\101st_Aux_Mod\Addons\textures\101st\armor\CX-S_Legs_CO.paa"
	};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="101st_CXS_212th";
		containerClass="supply150";
		uniformType="Neopren";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		mass=40;
	};
};
class 101st_212_CXO: Uniform_Base
{
	dlc = "101st_Aux_Mod";
	scope=2;
	displayName="101st Pilot CX-O (JLTS)";
	picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	hiddenSelections[]=
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[]=
	{
		"\101st_Aux_Mod\Addons\textures\101st\armor\CX-O_Armor_CO.paa",
		"\101st_Aux_Mod\Addons\textures\101st\armor\CX-O_Legs_CO.paa"
	};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="101st_CXO_212th";
		containerClass="supply150";
		uniformType="Neopren";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		mass=40;
	};
};
class 101st_212_Longbow: Uniform_Base
{
	dlc = "101st_Aux_Mod";
	scope=2;
	displayName="101st Longbow (JLTS)";
	picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	hiddenSelections[]=
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[]=
	{
		"\101st_Aux_Mod\Addons\textures\101st\armor\Longbow_Basic_Chest_CO.paa",
		"\101st_Aux_Mod\Addons\textures\101st\armor\Longbow_Basic_Legs_CO.paa"
	};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="101st_Longbow_212th";
		containerClass="supply150";
		uniformType="Neopren";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		mass=40;
	};
};
class 101st_212_Longbow_Arid: Uniform_Base
{
	dlc = "101st_Aux_Mod";
	scope=2;
	displayName="101st Longbow Arid (JLTS)";
	picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	hiddenSelections[]=
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[]=
	{
		"\101st_Aux_Mod\Addons\textures\101st\armor\ARF_Arid_Chest_CO.paa",
		"\101st_Aux_Mod\Addons\textures\101st\armor\ARF_Arid_Legs_CO.paa"
	};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="101st_Longbow_Arid_212th";
		containerClass="supply150";
		uniformType="Neopren";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		mass=40;
	};
};
class 101st_212_Longbow_Tropic: Uniform_Base
{
	dlc = "101st_Aux_Mod";
	scope=2;
	displayName="101st Longbow Tropic (JLTS)";
	picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	hiddenSelections[]=
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[]=
	{
		"\101st_Aux_Mod\Addons\textures\101st\armor\ARF_Tropic_Chest_CO.paa",
		"\101st_Aux_Mod\Addons\textures\101st\armor\ARF_Tropic_Legs_CO.paa"
	};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="101st_Longbow_Tropic_212th";
		containerClass="supply150";
		uniformType="Neopren";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		mass=40;
	};
};
class 101st_212_Longbow_Night: Uniform_Base
{
	dlc = "101st_Aux_Mod";
	scope=2;
	displayName="101st Longbow Night (JLTS)";
	picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	hiddenSelections[]=
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[]=
	{
		"\101st_Aux_Mod\Addons\textures\101st\armor\ARF_Night_Chest_CO.paa",
		"\101st_Aux_Mod\Addons\textures\101st\armor\ARF_Night_Legs_CO.paa"
	};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="101st_Longbow_Night_212th";
		containerClass="supply150";
		uniformType="Neopren";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		mass=40;
	};
};
class 101st_212_Longbow_Urban: Uniform_Base
{
	dlc = "101st_Aux_Mod";
	scope=2;
	displayName="101st Longbow Urban (JLTS)";
	picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	hiddenSelections[]=
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[]=
	{
		"\101st_Aux_Mod\Addons\textures\101st\armor\ARF_Urban_Chest_CO.paa",
		"\101st_Aux_Mod\Addons\textures\101st\armor\ARF_Urban_Legs_CO.paa"
	};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="101st_Longbow_Urban_212th";
		containerClass="supply150";
		uniformType="Neopren";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		mass=40;
	};
};
class 101st_212_Longbow_Winter: Uniform_Base
{
	dlc = "101st_Aux_Mod";
	scope=2;
	displayName="101st Longbow Winter (JLTS)";
	picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	hiddenSelections[]=
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[]=
	{
		"\101st_Aux_Mod\Addons\textures\101st\armor\ARF_Winter_Chest_CO.paa",
		"\101st_Aux_Mod\Addons\textures\101st\armor\ARF_Winter_Legs_CO.paa"
	};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="101st_Longbow_Winter_212th";
		containerClass="supply150";
		uniformType="Neopren";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		mass=40;
	};
};



class 101st_212_Blind: Uniform_Base
{
	dlc = "101st_Aux_Mod";
	scope=2;
	displayName="101st Blind (JLTS)";
	picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	hiddenSelections[]=
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[]=
	{
		"\101st_Aux_Mod\Addons\textures\101st\armor\Blind_Chest_CO.paa",
		"\101st_Aux_Mod\Addons\textures\101st\armor\Blind_Legs_CO.paa"
	};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="101st_Blind_212th";
		containerClass="supply150";
		uniformType="Neopren";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		mass=40;
	};
};
class 101st_212_Blackwater: Uniform_Base
{
	dlc = "101st_Aux_Mod";
	scope=2;
	displayName="101st Blackwater (JLTS)";
	picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	hiddenSelections[]=
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[]=
	{
		"\101st_Aux_Mod\Addons\textures\101st\armor\Blackwater_Chest_CO.paa",
		"\101st_Aux_Mod\Addons\textures\101st\armor\Blackwater_Legs_CO.paa"
	};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="101st_Blackwater_212th";
		containerClass="supply150";
		uniformType="Neopren";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		mass=40;
	};
};
class 101st_212_Blackwater_TEST: Uniform_Base
{
	dlc = "101st_Aux_Mod";
	scope=2;
	displayName="101st Blackwater TEST (JLTS)";
	picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	hiddenSelections[]=
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[]=
	{
		"\101st_Aux_Mod\Addons\textures\101st\armor\Blackwater_Test_Chest_CO.paa",
		"\101st_Aux_Mod\Addons\textures\101st\armor\Blackwater_Test_Legs_CO.paa"
	};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="101st_Blackwater_Test_212th";
		containerClass="supply150";
		uniformType="Neopren";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		mass=40;
	};
};
class 101st_212_Courage: Uniform_Base
{
	dlc = "101st_Aux_Mod";
	scope=2;
	displayName="101st Courage (JLTS)";
	picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	hiddenSelections[]=
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[]=
	{
		"\101st_Aux_Mod\Addons\textures\101st\armor\Courage_Chest_CO.paa",
		"\101st_Aux_Mod\Addons\textures\101st\armor\Courage_Legs_CO.paa"
	};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="101st_Courage_212th";
		containerClass="supply150";
		uniformType="Neopren";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		mass=40;
	};
};
class 101st_212_Jerec: Uniform_Base
{
	dlc = "101st_Aux_Mod";
	scope=2;
	displayName="101st Jerec (JLTS)";
	picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	hiddenSelections[]=
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[]=
	{
		"\101st_Aux_Mod\Addons\textures\101st\armor\Jerec_AltChest_CO.paa",
		"\101st_Aux_Mod\Addons\textures\101st\armor\Jerec_Legs_CO.paa"
	};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="101st_Jerec_212th";
		containerClass="supply150";
		uniformType="Neopren";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		mass=40;
	};
};
class 101st_212_Hines: Uniform_Base
{
	dlc = "101st_Aux_Mod";
	scope=2;
	displayName="101st Hines (JLTS)";
	picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	hiddenSelections[]=
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[]=
	{
		"\101st_Aux_Mod\Addons\textures\101st\armor\Hines_Chest_CO.paa",
		"\101st_Aux_Mod\Addons\textures\101st\armor\Hines_Legs_CO.paa"
	};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="101st_Hines_212th";
		containerClass="supply150";
		uniformType="Neopren";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		mass=40;
	};
};
class 101st_212_Blood: Uniform_Base
{
	dlc = "101st_Aux_Mod";
	scope=2;
	displayName="101st Blood (JLTS)";
	picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	hiddenSelections[]=
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[]=
	{
		"\101st_Aux_Mod\Addons\textures\101st\armor\Blood_Chest_CO.paa",
		"\101st_Aux_Mod\Addons\textures\101st\armor\Blood_Legs_CO.paa"
	};
	hiddenSelectionsMaterials[] = {"\101st_Aux_Mod\Addons\textures\101st\armor\data\Blood_Chest.rvmat","\101st_Aux_Mod\Addons\textures\101st\armor\data\Blood_Legs.rvmat"};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="101st_Blood_212th";
		containerClass="supply150";
		uniformType="Neopren";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		mass=40;
	};
};
class 101st_212_Kel: Uniform_Base
{
	dlc = "101st_Aux_Mod";
	scope=2;
	displayName="101st Kel (JLTS)";
	picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	hiddenSelections[]=
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[]=
	{
		"\101st_Aux_Mod\Addons\textures\101st\armor\Kel_Chest_CO.paa",
		"\101st_Aux_Mod\Addons\textures\101st\armor\Kel_Legs_CO.paa"
	};
	hiddenSelectionsMaterials[] = {"\101st_Aux_Mod\Addons\textures\101st\armor\data\Kel_Chest.rvmat","\101st_Aux_Mod\Addons\textures\101st\armor\data\Kel_Legs.rvmat"};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="101st_Kel_212th";
		containerClass="supply150";
		uniformType="Neopren";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		mass=40;
	};
};

class 101st_212_Kai: Uniform_Base
{
	dlc = "101st_Aux_Mod";
	scope=2;
	displayName="101st Kai (JLTS)";
	picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	hiddenSelections[]=
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[]=
	{
		"\101st_Aux_Mod\Addons\textures\101st\armor\Kai_Chest_CO.paa",
		"\101st_Aux_Mod\Addons\textures\101st\armor\Kai_Legs_CO.paa"
	};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="101st_Kai_212th";
		containerClass="supply150";
		uniformType="Neopren";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		mass=40;
	};
};
class 101st_212_Hambino: Uniform_Base
{
	dlc = "101st_Aux_Mod";
	scope=2;
	displayName="101st Hambino (JLTS)";
	picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	hiddenSelections[]=
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[]=
	{
		"\101st_Aux_Mod\Addons\textures\101st\armor\Hambino_Chest_CO.paa",
		"\101st_Aux_Mod\Addons\textures\101st\armor\Hambino_Legs_CO.paa"
	};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="101st_Hambino_212th";
		containerClass="supply150";
		uniformType="Neopren";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		mass=40;
	};
};
class 101st_212_Quill: Uniform_Base
{
	dlc = "101st_Aux_Mod";
	scope=2;
	displayName="101st Quill (JLTS)";
	picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	hiddenSelections[]=
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[]=
	{
		"\101st_Aux_Mod\Addons\textures\101st\armor\Quill_Chest_CO.paa",
		"\101st_Aux_Mod\Addons\textures\101st\armor\Quill_Legs_CO.paa"
	};
	hiddenSelectionsMaterials[] = {"\101st_Aux_Mod\Addons\textures\101st\armor\data\Quill_Chest.rvmat","\101st_Aux_Mod\Addons\textures\101st\armor\data\Quill_Legs.rvmat"};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="101st_Quill_212th";
		containerClass="supply150";
		uniformType="Neopren";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		mass=40;
	};
};
class 101st_212_Seatie: Uniform_Base
{
	dlc = "101st_Aux_Mod";
	scope=2;
	displayName="101st Seatie (JLTS)";
	picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	hiddenSelections[]=
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[]=
	{
		"\101st_Aux_Mod\Addons\textures\101st\armor\Seatie_Chest_CO.paa",
		"\101st_Aux_Mod\Addons\textures\101st\armor\Seatie_Legs_CO.paa"
	};
	hiddenSelectionsMaterials[] = {"\101st_Aux_Mod\Addons\textures\101st\armor\data\Seatie_Chest.rvmat","\101st_Aux_Mod\Addons\textures\101st\armor\data\Seatie_Legs.rvmat"};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="101st_Seatie_212th";
		containerClass="supply150";
		uniformType="Neopren";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		mass=40;
	};
};
class 101st_212_JerecAlt: Uniform_Base
{
	dlc = "101st_Aux_Mod";
	scope=2;
	displayName="101st Jerec ALT (JLTS)";
	picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	hiddenSelections[]=
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[]=
	{
		"\101st_Aux_Mod\Addons\textures\101st\armor\Jerec_AltChest_CO.paa",
		"\101st_Aux_Mod\Addons\textures\101st\armor\Jerec_AltLegs_CO.paa"
	};
	hiddenSelectionsMaterials[] = {"101st_Aux_Mod\Addons\textures\101st\armor\data\Jerec_Chest.rvmat","101st_Aux_Mod\Addons\textures\101st\armor\data\Jerec_Legs.rvmat"};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="101st_JerecAlt_212th";
		containerClass="supply150";
		uniformType="Neopren";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		mass=40;
	};
};
class 101st_212_Data: Uniform_Base
{
	dlc = "101st_Aux_Mod";
	scope=2;
	displayName="101st Data (JLTS)";
	picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	hiddenSelections[]=
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[]=
	{
		"\101st_Aux_Mod\Addons\textures\101st\armor\Data_Chest_CO.paa",
		"\101st_Aux_Mod\Addons\textures\101st\armor\Data_Legs_CO.paa"
	};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="101st_Data_212th";
		containerClass="supply150";
		uniformType="Neopren";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		mass=40;
	};
};
class 101st_212_Demo: Uniform_Base
{
	dlc = "101st_Aux_Mod";
	scope=2;
	displayName="101st Demolitions (JLTS)";
	picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	hiddenSelections[]=
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[]=
	{
		"\101st_Aux_Mod\Addons\textures\101st\armor\Demo_Chest_CO.paa",
		"\101st_Aux_Mod\Addons\textures\101st\armor\Demo_Legs_CO.paa"
	};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="101st_Demo_212th";
		containerClass="supply150";
		uniformType="Neopren";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		mass=40;
	};
};
class 101st_212_Vin: Uniform_Base
{
	dlc = "101st_Aux_Mod";
	scope=2;
	displayName="101st Vin (JLTS)";
	picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	hiddenSelections[]=
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[]=
	{
		"\101st_Aux_Mod\Addons\textures\101st\armor\Vin_Chest_CO.paa",
		"\101st_Aux_Mod\Addons\textures\101st\armor\Vin_Legs_CO.paa"
	};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="101st_Vin_212th";
		containerClass="supply150";
		uniformType="Neopren";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		mass=40;
	};
};
class 101st_212_Gustavo: Uniform_Base
{
	dlc = "101st_Aux_Mod";
	scope=2;
	displayName="101st Gustavo (JLTS)";
	picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	hiddenSelections[]=
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[]=
	{
		"\101st_Aux_Mod\Addons\textures\101st\armor\Gustavo_Chest_CO.paa",
		"\101st_Aux_Mod\Addons\textures\101st\armor\Gustavo_Legs_CO.paa"
	};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="101st_Gustavo_212th";
		containerClass="supply150";
		uniformType="Neopren";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		mass=40;
	};
};
class 101st_212_Dutch: Uniform_Base
{
	dlc = "101st_Aux_Mod";
	scope=2;
	displayName="101st Dutch (JLTS)";
	picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	hiddenSelections[]=
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[]=
	{
		"\101st_Aux_Mod\Addons\textures\101st\armor\Dutch_Chest_CO.paa",
		"\101st_Aux_Mod\Addons\textures\101st\armor\Dutch_Legs_CO.paa"
	};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="101st_Dutch_212th";
		containerClass="supply150";
		uniformType="Neopren";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		mass=40;
	};
};
class 101st_212_Mutt: Uniform_Base
{
	dlc = "101st_Aux_Mod";
	scope=2;
	displayName="101st Mutt (JLTS)";
	picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	hiddenSelections[]=
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[]=
	{
		"\101st_Aux_Mod\Addons\textures\101st\armor\Mutt_Chest_CO.paa",
		"\101st_Aux_Mod\Addons\textures\101st\armor\Mutt_Legs_CO.paa"
	};
	hiddenSelectionsMaterials[] = {"\101st_Aux_Mod\Addons\textures\101st\armor\data\Mutt_Chest.rvmat","\101st_Aux_Mod\Addons\textures\101st\armor\data\Mutt_Legs.rvmat"};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="101st_Mutt_212th";
		containerClass="supply150";
		uniformType="Neopren";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		mass=40;
	};
};
class 101st_212_Prodigy: Uniform_Base
{
	dlc = "101st_Aux_Mod";
	scope=2;
	displayName="101st Prodigy (JLTS)";
	picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	hiddenSelections[]=
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[]=
	{
		"\101st_Aux_Mod\Addons\textures\101st\armor\Prodigy_Chest_CO.paa",
		"\101st_Aux_Mod\Addons\textures\101st\armor\Prodigy_Legs_CO.paa"
	};
	hiddenSelectionsMaterials[] = {"\101st_Aux_Mod\Addons\textures\101st\armor\data\Prodigy_Chest.rvmat","\101st_Aux_Mod\Addons\textures\101st\armor\data\Prodigy_Legs.rvmat"};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="101st_Prodigy_212th";
		containerClass="supply150";
		uniformType="Neopren";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		mass=40;
	};
};
class 101st_212_Bacon: Uniform_Base
{
	dlc = "101st_Aux_Mod";
	scope=2;
	displayName="101st Bacon (JLTS)";
	picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	hiddenSelections[]=
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[]=
	{
		"\101st_Aux_Mod\Addons\textures\101st\armor\Bacon_Chest_CO.paa",
		"\101st_Aux_Mod\Addons\textures\101st\armor\Bacon_Legs_CO.paa"
	};
	hiddenSelectionsMaterials[] = {"\101st_Aux_Mod\Addons\textures\101st\armor\data\Bacon_Chest.rvmat","\101st_Aux_Mod\Addons\textures\101st\armor\data\Bacon_Legs.rvmat"};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="101st_Bacon_212th";
		containerClass="supply150";
		uniformType="Neopren";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		mass=40;
	};
};