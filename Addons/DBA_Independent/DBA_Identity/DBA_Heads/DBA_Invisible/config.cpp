class CfgPatches
{
	class DBA_Invisible
	{
		units[]={};
		weapons[]={};
		requiredVersion=0;
		requiredAddons[]=
		{
			"A3_Characters_F_Heads"
		};
		version="1.0";
		author="Morn";
	};
};
class CfgHeads
{
	class DefaultHead_A3;
	class DBA_Invisible: DefaultHead_A3
	{
		model=""
	};
};
class CfgFaces
{
	class Default;
	class Man_A3: Default
	{
		class DBA_Invisible
		{
			author="Morn";
			head="DBA_Invisible";
			identityTypes[]={};
			displayname="DBA Invisible Head";
			texture=""
			material = "";
			disabled=0;
		};
	};
};