class CfgPatches
{
	class 101st_Aux_Mod_Flags
	{
		author = "Seatie / Dutch";
		name = "101st Aux Mod Custom Flags";
		requiredaddons[] =
		{
			"A3_Weapons_F",
			"A3_Functions_F"
		};
		requiredversion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};
class CfgVehicles {
	class ACE_Flag_Black;
	class 101st_Flag_CIS1 : ACE_Flag_Black
	{
		dlc = "101st_Aux_Mod";
		faction = "O_DBA_CIS_F";
		displayname = "101st CIS Flag 1";
		editorSubcategory = "101st_Flags";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\101st_Aux_Mod\Addons\textures\101st\flags\CIS1.paa""";
		};
	};
	class 101st_Flag_CIS2 : ACE_Flag_Black
	{
		dlc = "101st_Aux_Mod";
		faction = "O_DBA_CIS_F";
		displayname = "101st CIS Flag 2";
		editorSubcategory = "101st_Flags";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\101st_Aux_Mod\Addons\textures\101st\flags\CIS2.paa""";
		};
	};
};