class CfgPatches
{
    class DBA_Aux_Mod_VehicleFunctions
    {
        author = "Ragwolf";
        name = "101st Aux Mod Vehicle Functions";

        requiredAddons[] =
        {
        };
        requiredVersion = 0.1;
        units[] = {};
        weapons[] = {};
    };
};

class CfgFunctions
{
    class DBA_Vehicles
	{
		class functions
		{
			file = "DBA_Core\Addons\DBA_VehicleFunctions\functions";

            class disableInteriorLight {};
			class enableInteriorLight {};
		};
	};
};

class Extended_PreInit_EventHandlers
{
    class DBA_VehicleFunctions_pre_init_event
	{
        init = "call compile preprocessFileLineNumbers 'DBA_Core\Addons\DBA_VehicleFunctions\XEH_preInit.sqf'";
    };
};
