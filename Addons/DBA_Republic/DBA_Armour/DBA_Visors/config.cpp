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
		displayName="[101st] CP Custom Visor";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Visors\CP_CO.paa"
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
		displayName = "[101st] RTO Custom Visor";
		hiddenSelections[] =
		{
			"Camo1"
		};
		hiddenSelectionsTextures[] =
		{
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Visors\RTO_Visor_CO.paa"
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
		displayName = "[101st] Medic Custom Visor";
		hiddenSelections[] =
		{
			"Camo1"
		};
		hiddenSelectionsTextures[] =
		{
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Visors\Medic_Visor_CO.paa"
		};
	};
	class JLTS_CloneNVGCC;
	class 101st_Visor_CCVisor : JLTS_CloneNVGCC
	{
		displayName = "[101st] Clone Commander Visor";
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
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Visors\Doom_Range_CO.paa"
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
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Visors\Doom_RTO_Range_CO.paa"
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
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Visors\Doom_Medic_Range_CO.paa"
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
			"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Visors\CP_CO.paa"
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

};