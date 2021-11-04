class CfgPatches
{
	class 101st_Aux_Mod_Flags
	{
		author="Seatie / Dutch";
		name="101st Aux Mod Custom Flags";
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
class CfgVehicles {
	class ACE_Flag_Black;
	class 101st_Flag_Green : ACE_Flag_Black
	{
		dlc = "101st_Aux_Mod";
		faction="Republic_101st";
		displayname="101st Green Flag";
		editorSubcategory = "101st_Flags";
		class EventHandlers 
		{
			init = "(_this select 0) setFlagTexture ""\101st_Aux_Mod\Addons\textures\101st\flags\FlagGreenOnGreen.paa""";
		};
	};
	class 101st_Flag_CIS1 : ACE_Flag_Black
	{
		dlc = "101st_Aux_Mod";
		faction="Republic_101st";
		displayname="101st CIS Flag 1";
		editorSubcategory = "101st_Flags";
		class EventHandlers 
		{
			init = "(_this select 0) setFlagTexture ""\101st_Aux_Mod\Addons\textures\101st\flags\CIS1.paa""";
		};
	};
	class 101st_Flag_CIS2 : ACE_Flag_Black
	{
		dlc = "101st_Aux_Mod";
		faction="Republic_101st";
		displayname="101st CIS Flag 2";
		editorSubcategory = "101st_Flags";
		class EventHandlers 
		{
			init = "(_this select 0) setFlagTexture ""\101st_Aux_Mod\Addons\textures\101st\flags\CIS2.paa""";
		};
	};
	class 101st_Flag_Republic : ACE_Flag_Black
	{
		dlc = "101st_Aux_Mod";
		faction="Republic_101st";
		displayname="101st Republic Flag";
		editorSubcategory = "101st_Flags";
		class EventHandlers 
		{
			init = "(_this select 0) setFlagTexture ""\101st_Aux_Mod\Addons\textures\101st\flags\Republic.paa""";
		};
	};
	class 101st_Flag_Seatie : ACE_Flag_Black
	{
		dlc = "101st_Aux_Mod";
		faction="Republic_101st";
		displayname="101st Seatie Flag";
		editorSubcategory = "101st_Flags";
		class EventHandlers 
		{
			init = "(_this select 0) setFlagTexture ""\101st_Aux_Mod\Addons\textures\101st\flags\Seatie.paa""";
		};
	};
	
	class 101st_Flag_Black : ACE_Flag_Black
	{
		dlc = "101st_Aux_Mod";
		faction="Republic_101st";
		displayname="101st Black Flag";
		editorSubcategory = "101st_Flags";
		class EventHandlers 
		{
			init = "(_this select 0) setFlagTexture ""\101st_Aux_Mod\Addons\textures\101st\flags\FlagGreenOnBlack.paa""";
		};
	};
	
	class 101st_Flag_White : ACE_Flag_Black
	{
		dlc = "101st_Aux_Mod";
		displayname="101st White Flag";
		faction="Republic_101st";
		editorSubcategory = "101st_Flags";
		class EventHandlers 
		{
			init = "(_this select 0) setFlagTexture ""\101st_Aux_Mod\Addons\textures\101st\flags\FlagGreenOnWhite.paa""";
		};
	};
	class 101st_Flag_Jerec : ACE_Flag_Black
	{
		dlc = "101st_Aux_Mod";
		displayname="101st Jerec's Banner";
		faction="Republic_101st";
		editorSubcategory = "101st_Flags";
		class EventHandlers 
		{
			init = "(_this select 0) setFlagTexture ""\101st_Aux_Mod\Addons\textures\101st\flags\FlagJerec.paa""";
		};
	};
	
	class 101st_Flag_Logo : ACE_Flag_Black
	{
		dlc = "101st_Aux_Mod";
		faction="Republic_101st";
		displayname="101st Logo Flag";
		editorSubcategory = "101st_Flags";
		class EventHandlers 
		{
			init = "(_this select 0) setFlagTexture ""\101st_Aux_Mod\Addons\textures\101st\flags\Logo.paa""";
		};
	};
	
	class 101st_Flag_Formal : ACE_Flag_Black
	{
		dlc = "101st_Aux_Mod";
		faction="Republic_101st";
		displayname="101st Formal Flag";
		editorSubcategory = "101st_Flags";
		class EventHandlers 
		{
			init = "(_this select 0) setFlagTexture ""\101st_Aux_Mod\Addons\textures\101st\flags\101st.paa""";
		};
	};
	
	class 101st_Flag_Senate: ACE_Flag_Black
	{
		dlc = "101st_Aux_Mod";
		faction="Republic_101st";
		displayname="101st Senate Flag";
		editorSubcategory = "101st_Flags";
		class EventHandlers 
		{
			init = "(_this select 0) setFlagTexture ""\101st_Aux_Mod\Addons\textures\101st\flags\Senate.paa""";
		};
	};
};