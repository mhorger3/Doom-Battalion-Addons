class CfgPatches
{
	class DBA_BX
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
	class DBA_BXHead: DefaultHead_A3
	{
		model="101st_Aux_Mod\Addons\DBA_CIS\DBA_Identity\DBA_Heads\DBA_BX\BXHead.p3d";
	};
	class DBA_BXCaptainHead : DefaultHead_A3
	{
		model = "101st_Aux_Mod\Addons\DBA_CIS\DBA_Identity\DBA_Heads\DBA_BX\BXHeadCaptain.p3d";
	};
	class DBA_BXCitadelHead : DefaultHead_A3
	{
		model = "101st_Aux_Mod\Addons\DBA_CIS\DBA_Identity\DBA_Heads\DBA_BX\BXHeadCitadel.p3d";
	};
	class DBA_BXFireHead : DefaultHead_A3
	{
		model = "101st_Aux_Mod\Addons\DBA_CIS\DBA_Identity\DBA_Heads\DBA_BX\BXHeadFire.p3d";
	};
	class DBA_BXSecurityHead : DefaultHead_A3
	{
		model = "101st_Aux_Mod\Addons\DBA_CIS\DBA_Identity\DBA_Heads\DBA_BX\BXHeadSecurity.p3d";
	};
};
class CfgFaces
{
	class Default;
	class Man_A3: Default
	{
		class DBA_BXHead
		{
			author="Vulgar";
			head="DBA_BXHead";
			identityTypes[]={};
			displayname="BX Commando Droid Head";
			texture="101st_Aux_Mod\Addons\DBA_CIS\DBA_Identity\DBA_Heads\DBA_BX\BX_Head_CO.paa";
			material="101st_Aux_Mod\Addons\DBA_CIS\DBA_Identity\DBA_Heads\DBA_BX\BXHEAD.rvmat";
			materialWounded1="";
			materialWounded2="";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_bald_1_co.paa";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_bald_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
			materialHL2 = "A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
			disabled=0;
		};
		class DBA_BXHead_Captain : DBA_BXHead
		{
			displayname = "BX Captain Head";
			head = "DBA_BXCaptainHead";
			texture = "101st_Aux_Mod\Addons\DBA_CIS\DBA_Identity\DBA_Heads\DBA_BX\BX_Captain_Head_CO.paa";
			material = "101st_Aux_Mod\Addons\DBA_Heads\DBA_BX\BXHeadCaptain.rvmat";
		};
		class DBA_BXHead_Citadel : DBA_BXHead
		{
			displayname = "BX Citadel Head";
			head = "DBA_BXCitadelHead";
			texture = "101st_Aux_Mod\Addons\DBA_CIS\DBA_Identity\DBA_Heads\DBA_BX\BX_Citadel_Head_CO.paa";
			material = "101st_Aux_Mod\Addons\DBA_Heads\DBA_BX\BXHeadCitadel.rvmat";
		};
		class DBA_BXHead_Fire : DBA_BXHead
		{
			displayname = "BX Fire Head";
			head = "DBA_BXFireHead";
			texture = "101st_Aux_Mod\Addons\DBA_CIS\DBA_Identity\DBA_Heads\DBA_BX\BX_Fire_Head_CO.paa";
			material = "101st_Aux_Mod\Addons\DBA_Heads\DBA_BX\BXHeadFire.rvmat";
		};
		class DBA_BXHead_Security : DBA_BXHead
		{
			displayname = "BX Security Head";
			head = "DBA_BXSecurityHead";
			texture = "101st_Aux_Mod\Addons\DBA_CIS\DBA_Identity\DBA_Heads\DBA_BX\BX_Security_Head_CO.paa";
			material = "101st_Aux_Mod\Addons\DBA_Heads\DBA_BX\BXHeadSecurity.rvmat";
		};
	};
};
