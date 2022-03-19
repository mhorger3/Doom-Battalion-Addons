class CfgPatches
{
	class 101st_Aux_Mod_Visors
	{
		author="Dutch";
		name="101st Visors";
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
		displayName="DBA CP Custom Visor";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"DBA_Republic\Addons\DBA_Armour\DBA_Visors\CP_CO.paa"
		};
	};
	class 101st_RTO_Visor : JLTS_CloneNVG
	{
		modelOptics = "";
		useModelOptics = 0;
		opticsDisablePeripherialVision = 0;
		visionMode[] =
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[] = {4};
		displayName = "DBA RTO Custom Visor";
		hiddenSelections[] =
		{
			"Camo1"
		};
		hiddenSelectionsTextures[] =
		{
			"DBA_Republic\Addons\DBA_Armour\DBA_Visors\RTO_Visor_CO.paa"
		};
	};
	class 101st_Medic_Visor : JLTS_CloneNVG
	{
		modelOptics = "";
		useModelOptics = 0;
		opticsDisablePeripherialVision = 0;
		visionMode[] =
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[] = {4};
		displayName = "DBA Medic Custom Visor";
		hiddenSelections[] =
		{
			"Camo1"
		};
		hiddenSelectionsTextures[] =
		{
			"DBA_Republic\Addons\DBA_Armour\DBA_Visors\Medic_Visor_CO.paa"
		};
	};
	class JLTS_CloneNVGCC;
	class 101st_Visor_CCVisor : JLTS_CloneNVGCC
	{
		displayName = "DBA Clone Commander Visor";
		modelOptics = "";
		useModelOptics = 0;
		opticsDisablePeripherialVision = 0;
		visionMode[] =
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[] = { 0,1 };
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
		displayName="DBA LCP Custom Visor";
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
		displayName="DBA Black Visor";
	};
	class JLTS_CloneNVGRange;
	class 101st_Visor_Range : JLTS_CloneNVGRange
	{
		displayName="DBA White Rangefinder";
		modelOptics="";
		useModelOptics=0;
		opticsDisablePeripherialVision=0;
	};
	class 101st_Visor_DoomRange : JLTS_CloneNVGRange
	{
		displayName="DBA Doom Rangefinder";
		modelOptics="";
		useModelOptics=0;
		opticsDisablePeripherialVision=0;
		hiddenSelectionsTextures[]=
		{
			"DBA_Republic\Addons\DBA_Armour\DBA_Visors\Doom_Range_CO.paa"
		};
	};
	class 101st_Visor_GreyRange : JLTS_CloneNVGRange
	{
		displayName="DBA Grey Rangefinder";
		modelOptics="";
		useModelOptics=0;
		opticsDisablePeripherialVision=0;
		hiddenSelectionsTextures[]=
		{
			"DBA_Republic\Addons\DBA_Armour\DBA_Visors\Doom_RTO_Range_CO.paa"
		};
	};
	class 101st_Visor_MedicRange : JLTS_CloneNVGRange
	{
		displayName="DBA Medic Rangefinder";
		modelOptics="";
		useModelOptics=0;
		opticsDisablePeripherialVision=0;
		hiddenSelectionsTextures[]=
		{
			"DBA_Republic\Addons\DBA_Armour\DBA_Visors\Doom_Medic_Range_CO.paa"
		};
	};
	class JLTS_CloneNVGRange_black;
	class 101st_Visor_Range_Black : JLTS_CloneNVGRange_black
	{
		modelOptics="";
		useModelOptics=0;
		opticsDisablePeripherialVision=0;
		displayName="DBA Black Rangefinder";
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
		displayName="DBA White Specialist Visor";
		hiddenSelectionsTextures[]=
		{
			"DBA_Republic\Addons\DBA_Armour\DBA_Visors\CP_CO.paa"
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
		displayName="DBA Black Specialist Visor";
	};


	// binoc
	class SWLB_clone_commander_binocular;
	class 101st_CloneBinocular_black : SWLB_clone_commander_binocular
	{
		displayName="DBA Clone Commander Binocular";
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[]={7};
	};

	class SWLB_clone_binocular;
	class 101st_CloneBinocular : SWLB_clone_binocular
	{
		displayName="DBA Clone Binocular";
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};

};