class CfgPatches
{
	class Tuskan
	{
		units[]={};
		weapons[]={};
		requiredVersion=0;
		requiredAddons[]=
		{
			"A3_Characters_F_Heads"
		};
		version="1.0";
		author="Vulgar";
	};
};
class CfgHeads
{
	class DefaultHead_A3;
	class DBA_Tuskan: DefaultHead_A3
	{
		model="101st_Aux_Mod\Addons\units\Tuskan\TuskanHead.p3d";
	};
};
class CfgFaces
{
	class Default;
	class Man_A3: Default
	{
		class DBA_Tuskan
		{
			author="Vulgar";
			head="DBA_Tuskan";
			identityTypes[]={};
			displayname="Tuskan Head";
			texture="101st_Aux_Mod\Addons\units\Tuskan\tuskenraider_head_co.paa";
			material="101st_Aux_Mod\Addons\units\Tuskan\head.rvmat";
			materialWounded1="";
			materialWounded2="";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_bald_1_co.paa";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_bald_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
			materialHL2 = "A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
			disabled=0;
		};
	};
};
