#include "CfgPatches.hpp"
#include "CfgFunctions.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"

class Extended_PreInit_EventHandlers
{
    class DBA_Stims_pre_init_event
	{
        init = "call compile preprocessFileLineNumbers '101st_Aux_Mod\Addons\DBA_Stims\XEH_preInit.sqf'";
    };
};
