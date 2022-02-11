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
	class 101st_Flag_Green : ACE_Flag_Black
	{
		dlc = "101st_Aux_Mod";
		faction = "B_DBA_Republic_F";
		displayname = "101st Green Flag";
		editorSubcategory = "101st_Flags";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\101st_Aux_Mod\Addons\DBA_Republic\DBA_Flags\FlagGreenOnGreen.paa""";
		};
	};
	class 101st_Flag_Republic : ACE_Flag_Black
	{
		dlc = "101st_Aux_Mod";
		faction = "B_DBA_Republic_F";
		displayname = "101st Republic Flag";
		editorSubcategory = "101st_Flags";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\101st_Aux_Mod\Addons\DBA_Republic\DBA_Flags\Republic.paa""";
		};
	};
	class 101st_Flag_Seatie : ACE_Flag_Black
	{
		dlc = "101st_Aux_Mod";
		faction = "B_DBA_Republic_F";
		displayname = "101st Seatie Flag";
		editorSubcategory = "101st_Flags";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\101st_Aux_Mod\Addons\DBA_Republic\DBA_Flags\Seatie.paa""";
		};
	};

	class 101st_Flag_Black : ACE_Flag_Black
	{
		dlc = "101st_Aux_Mod";
		faction = "B_DBA_Republic_F";
		displayname = "101st Black Flag";
		editorSubcategory = "101st_Flags";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\101st_Aux_Mod\Addons\DBA_Republic\DBA_Flags\FlagGreenOnBlack.paa""";
		};
	};

	class 101st_Flag_White : ACE_Flag_Black
	{
		dlc = "101st_Aux_Mod";
		displayname = "101st White Flag";
		faction = "B_DBA_Republic_F";
		editorSubcategory = "101st_Flags";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\101st_Aux_Mod\Addons\DBA_Republic\DBA_Flags\FlagGreenOnWhite.paa""";
		};
	};
	class 101st_Flag_Jerec : ACE_Flag_Black
	{
		dlc = "101st_Aux_Mod";
		displayname = "101st Jerec's Banner";
		faction = "B_DBA_Republic_F";
		editorSubcategory = "101st_Flags";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\101st_Aux_Mod\Addons\DBA_Republic\DBA_Flags\FlagJerec.paa""";
		};
	};

	class 101st_Flag_Logo : ACE_Flag_Black
	{
		dlc = "101st_Aux_Mod";
		faction = "B_DBA_Republic_F";
		displayname = "101st Logo Flag";
		editorSubcategory = "101st_Flags";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\101st_Aux_Mod\Addons\DBA_Republic\DBA_Flags\Logo.paa""";
		};
	};

	class 101st_Flag_Formal : ACE_Flag_Black
	{
		dlc = "101st_Aux_Mod";
		faction = "B_DBA_Republic_F";
		displayname = "101st Formal Flag";
		editorSubcategory = "101st_Flags";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\101st_Aux_Mod\Addons\DBA_Republic\DBA_Flags\101st.paa""";
		};
	};

	class 101st_Flag_Senate : ACE_Flag_Black
	{
		dlc = "101st_Aux_Mod";
		faction = "B_DBA_Republic_F";
		displayname = "101st Senate Flag";
		editorSubcategory = "101st_Flags";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\101st_Aux_Mod\Addons\DBA_Republic\DBA_Flags\Senate.paa""";
		};
	};
};