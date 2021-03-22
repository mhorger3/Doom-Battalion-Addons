class CfgPatches
{
    class DBA_Aux_Mod_Camo_Changer
    {
        author = "Ragwolf";
        name = "101st Aux Mod Camo Changer";

        requiredAddons[] =
        {
            "101st_Aux_Mod_Vehicles"
        };
        requiredVersion = 0.1;
        units[] = {};
        weapons[] =
        {
            "DBA_ARF_Multi_Tool"
        };
    };
};

class CfgFunctions
{
    class DBA_Camo_Changer
	{
		class functions
		{
			file = "101st_Aux_Mod\Addons\DBA_Camo_Changer\functions";

            class blend {};
            class changeCamo {};
            class zeus
            {
                postInit = 1;
            };
        };
    };
};

class CfgVehicles
{
    class Man;

    class CAManBase: Man
    {
        class ACE_SelfACtions
        {
            class DBA_Camo
			{
				displayName = "Change Camo";
				condition = "(uniform player) in [""101st_212_Longbow"", ""101st_212_Longbow_Arid"", ""101st_212_Longbow_Tropic"", ""101st_212_Longbow_Night"", ""101st_212_Longbow_Urban"", ""101st_212_Longbow_Winter""]";
                statement = "";

                class Base
                {
                    displayName = "Base";
                    condition = "player getVariable [""DBA_camo"", uniform player] != ""101st_212_Longbow""";
                    statement = "[_player, ""Base""] call DBA_Camo_Changer_fnc_changeCamo;";
                };

                class Arid
                {
                    displayName = "Arid";
                    condition = "player getVariable [""DBA_camo"", uniform player] != ""101st_212_Longbow_Arid""";
                    statement = "[_player, ""Arid""] call DBA_Camo_Changer_fnc_changeCamo;";
                };

                class Night
                {
                    displayName = "Night";
                    condition = "player getVariable [""DBA_camo"", uniform player] != ""101st_212_Longbow_Night""";
                    statement = "[_player, ""Night""] call DBA_Camo_Changer_fnc_changeCamo;";
                };

                class Tropic
                {
                    displayName = "Tropic";
                    condition = "player getVariable [""DBA_camo"", uniform player] != ""101st_212_Longbow_Tropic""";
                    statement = "[_player, ""Tropic""] call DBA_Camo_Changer_fnc_changeCamo;";
                };

                class Urban
                {
                    displayName = "Urban";
                    condition = "player getVariable [""DBA_camo"", uniform player] != ""101st_212_Longbow_Urban""";
                    statement = "[_player, ""Urban""] call DBA_Camo_Changer_fnc_changeCamo;";
                };

                class Winter
                {
                    displayName = "Winter";
                    condition = "player getVariable [""DBA_camo"", uniform player] != ""101st_212_Longbow_Winter""";
                    statement = "[_player, ""Winter""] call DBA_Camo_Changer_fnc_changeCamo;";
                };
			};

            class DBA_ARF_Multi_Tool
            {
                displayName = "ARF Multi-tool";
				condition = "[_player, ""DBA_ARF_Multi_Tool""] call ACE_common_fnc_hasItem";
                statement = "";

                class Blend
                {
                    displayName = "Blend";
                    condition = "(stance _player == ""PRONE"") && !(_player getVariable [""DBA_blend"", false])";
                    statement = "_player call DBA_Camo_Changer_fnc_blend;";
                };

                class Unblend
                {
                    displayName = "Unblend";
                    condition = "_player getVariable [""DBA_blend"", false]";
                    statement = "_player setVariable [""DBA_blend"", false, false];";
                };
            };
        };
    };
};

class CfgWeapons
{
    class ACE_DefusalKit;

    class DBA_ARF_Multi_Tool: ACE_DefusalKit
    {
        displayName = "ARF Multi-tool";
        descriptionShort = "Allows ARF to do ARF things";
    };
};

class Extended_PreInit_EventHandlers
{
    class DBA_Camo_Changer_pre_init_event
	{
        init = "call compile preprocessFileLineNumbers '101st_Aux_Mod\Addons\DBA_Camo_Changer\XEH_preInit.sqf'";
    };
};
