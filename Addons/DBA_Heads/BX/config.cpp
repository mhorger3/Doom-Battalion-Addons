class CfgPatches
{
	class Ryanzombiesfaces
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
	class BXHead: DefaultHead_A3
	{
		model="101st_Aux_Mod\Addons\DBA_Heads\BX\BXHead.p3d";
	};
};
class CfgFaces
{
	class Default;
	class Man_A3: Default
	{
		class BXHEAD_FACE
		{
			author="Vulgar";
			head="BXHead";
			identityTypes[]={};
			displayname="BXHead 1";
			texture="101st_Aux_Mod\Addons\DBA_Heads\BX\BX_HEAD_CO.paa";
			material="101st_Aux_Mod\Addons\DBA_Heads\BX\BXHEAD.rvmat";
			materialWounded1="\ryanzombies\faces\face1.rvmat";
			materialWounded2="\ryanzombies\faces\face1.rvmat";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_bald_1_co.paa";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_bald_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
			materialHL2 = "A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
			disabled=0;
		};
	};
};
