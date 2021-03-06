class CfgPatches
{
	class DBA_Skull
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
	class DBA_SkullHead: DefaultHead_A3
	{
		model="DBA_Independent\Addons\DBA_Independent\DBA_Identity\DBA_Heads\DBA_Skull\Skull.p3d";
	};
};
class CfgFaces
{
	class Default;
	class Man_A3: Default
	{
		class DBA_SkullHead
		{
			author="Vulgar";
			head="DBA_SkullHead";
			identityTypes[]={};
			displayname="Skull";
			texture="DBA_Independent\Addons\DBA_Independent\DBA_Identity\DBA_Heads\DBA_Skull\Data\Skull_CO.paa";
			material = "";
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
