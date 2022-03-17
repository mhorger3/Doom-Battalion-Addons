#include "CfgPatches.hpp"
#include "CfgFunctions.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"

class Extended_PreInit_EventHandlers
{
    class DBA_Stims_pre_init_event
	{
        init = "call compile preprocessFileLineNumbers 'DBA_Core\Addons\DBA_General\DBA_Stims\XEH_preInit.sqf'";
    };
};
