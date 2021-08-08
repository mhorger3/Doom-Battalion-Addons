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
            class hasCamoChanger {};
            class isWearingCamo {};
            class zeus
            {
                postInit = 1;
            };
        };
    };
};

class DBA_Camo
{
    class 101st
    {
        class Base
        {
            chestTexture = "\101st_Aux_Mod\Addons\textures\101st\armor\Longbow_Basic_Chest_CO.paa";
            legsTexture = "\101st_Aux_Mod\Addons\textures\101st\armor\Longbow_Basic_Legs_CO.paa";
            backpackTexture = "101st_Aux_Mod\Addons\textures\101st\backpacks\GAR_Backpack_CO.paa";
            helmetClass = "101st_ARF_Base";
        };

        class Arid
        {
            chestTexture = "\101st_Aux_Mod\Addons\textures\101st\armor\ARF_Arid_Chest_CO.paa";
            legsTexture = "\101st_Aux_Mod\Addons\textures\101st\armor\ARF_Arid_Legs_CO.paa";
            backpackTexture = "101st_Aux_Mod\Addons\textures\101st\backpacks\ARF_Arid_Backpack_CO.paa";
            helmetClass = "101st_ARF_Arid";
        };

        class Night
        {
            chestTexture = "\101st_Aux_Mod\Addons\textures\101st\armor\ARF_Night_Chest_CO.paa";
            legsTexture = "\101st_Aux_Mod\Addons\textures\101st\armor\ARF_Night_Legs_CO.paa";
            backpackTexture = "101st_Aux_Mod\Addons\textures\101st\backpacks\ARF_Night_Backpack_CO.paa";
            helmetClass = "101st_ARF_Night";
        };

        class Tropic
        {
            chestTexture = "\101st_Aux_Mod\Addons\textures\101st\armor\ARF_Tropic_Chest_CO.paa";
            legsTexture = "\101st_Aux_Mod\Addons\textures\101st\armor\ARF_Tropic_Legs_CO.paa";
            backpackTexture = "101st_Aux_Mod\Addons\textures\101st\backpacks\ARF_Tropic_Backpack_CO.paa";
            helmetClass = "101st_ARF_Tropic";
        };

        class Urban
        {
            chestTexture = "\101st_Aux_Mod\Addons\textures\101st\armor\ARF_Urban_Chest_CO.paa";
            legsTexture = "\101st_Aux_Mod\Addons\textures\101st\armor\ARF_Urban_Legs_CO.paa";
            backpackTexture = "101st_Aux_Mod\Addons\textures\101st\backpacks\ARF_Urban_Backpack_CO.paa";
            helmetClass = "101st_ARF_Urban";
        };

        class Winter
        {
            chestTexture = "\101st_Aux_Mod\Addons\textures\101st\armor\ARF_Winter_Chest_CO.paa";
            legsTexture = "\101st_Aux_Mod\Addons\textures\101st\armor\ARF_Winter_Legs_CO.paa";
            backpackTexture = "101st_Aux_Mod\Addons\textures\101st\backpacks\ARF_Winter_Backpack_CO.paa";
            helmetClass = "101st_ARF_Winter";
        };
    };
};

class CfgVehicles
{
    class Man;

    class CAManBase: Man
    {
        class ACE_SelfActions
        {
            class DBA_Camo
			{
				displayName = "Change Camo";
				condition = "[player, ""101st""] call DBA_Camo_Changer_fnc_hasCamoChanger";
                statement = "";

                class Base
                {
                    displayName = "Base";
                    condition = "!([player, ""Base""] call DBA_Camo_Changer_fnc_isWearingCamo)";
                    statement = "[_player, ""Base""] call DBA_Camo_Changer_fnc_changeCamo;";
                };

                class Arid
                {
                    displayName = "Arid";
                    condition = "!([player, ""Arid""] call DBA_Camo_Changer_fnc_isWearingCamo)";
                    statement = "[_player, ""Arid""] call DBA_Camo_Changer_fnc_changeCamo;";
                };

                class Night
                {
                    displayName = "Night";
                    condition = "!([player, ""Night""] call DBA_Camo_Changer_fnc_isWearingCamo)";
                    statement = "[_player, ""Night""] call DBA_Camo_Changer_fnc_changeCamo;";
                };

                class Tropic
                {
                    displayName = "Tropic";
                    condition = "!([player, ""Tropic""] call DBA_Camo_Changer_fnc_isWearingCamo)";
                    statement = "[_player, ""Tropic""] call DBA_Camo_Changer_fnc_changeCamo;";
                };

                class Urban
                {
                    displayName = "Urban";
                    condition = "!([player, ""Urban""] call DBA_Camo_Changer_fnc_isWearingCamo)";
                    statement = "[_player, ""Urban""] call DBA_Camo_Changer_fnc_changeCamo;";
                };

                class Winter
                {
                    displayName = "Winter";
                    condition = "!([player, ""Winter""] call DBA_Camo_Changer_fnc_isWearingCamo)";
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
