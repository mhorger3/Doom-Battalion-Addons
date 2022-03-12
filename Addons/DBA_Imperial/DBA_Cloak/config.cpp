class CfgPatches
{
    class DBA_Cloak
    {
        author = "Ragwolf";
        name = "DBA Stealth";

        requiredAddons[] =
        {
        };
        requiredVersion = 0.1;
        units[] = {};
        weapons[] =
        {
        };
    };
};
class CfgFunctions
{
    class DBA_StealthTech
    {
        class functions
        {
            file = "101st_Aux_Mod\Addons\DBA_Imperial\DBA_Cloak\functions";

            class cloak {};
            class cloakDisable {};
            class cloakDisableDeath {};
            class shield {};
        };
    };
};
class CfgVehicles
{
    class Plane_Base_F;
    class VTOL_Base_F : Plane_Base_F
    {
    };
    class DBA_TIEPhantom_VTOL_Base_F : VTOL_Base_F
    {
        class ACE_SelfActions
        {
            class DBA_Cloak
            {
                displayName = "DBA Cloak";
                condition = "";
                statement = "";

                class Cloak
                {
                    displayName = "Cloak";
                    condition = "((_this select 0) getvariable [""cloakStatus"",false]) == false";
                    statement = "_this call DBA_StealthTech_fnc_cloak;";
                };
                
                class Uncloak
                {
                    displayName = "UnCloak";
                    condition = "((_this select 0) getvariable [""cloakStatus"",false]) == true";
                    statement = "_this call DBA_StealthTech_fnc_cloakDisable;";
                };
            };
        };
    };
};
class Extended_Killed_EventHandlers {
    class DBA_TIEPhantom_VTOL_Base_F {
        class DBA_Stealth_Dead
        {
            killed = "(_this select 0) call DBA_StealthTech_fnc_cloakDisableDeath;"
        };
    };
};
class Extended_Fired_EventHandlers {
    class DBA_TIEPhantom_VTOL_Base_F {
        class DBA_Stealth_Fired {
            fired = "(_this select 0) call DBA_StealthTech_fnc_cloakDisable;"
        };
    };
};