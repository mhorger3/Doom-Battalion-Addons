class CfgPatches
{
    class DBA_Aux_Mod_CapitalShips
    {
        author = "Ragwolf";
        name = "101st Aux Mod Capital Ships";

        requiredAddons[] =
        {
            "DBA_Aux_Mod_Common"
        };
        requiredVersion = 0.1;
        units[] = {};
        weapons[] = {};
    };
};

class CfgFunctions
{
    class DBA_CapitalShips
	{
		class functions
		{
			file = "101st_Aux_Mod\Addons\DBA_CapitalShips\functions";

            class achilles {};
            class ambientFleet {};
            class crashShip {};
            class crashShipLocal {};
            class createShipControls {};
            class moveShip {};
            class moveShipLocal {};
            class moveTo {};
            class selectShip {};
			class zen {};
			class zeus
			{
				postInit = 1;
			};

            // GUI
            class cancelButton {};
            class controlSettingsOnLoad {};
            class moveButton {};
            class selectDestination {};
            class sliderChanged {};
		};
	};
};

class Extended_PreInit_EventHandlers
{
    class DBA_CapitalShips_pre_init_event
	{
        init = "call compile preprocessFileLineNumbers '101st_Aux_Mod\Addons\DBA_CapitalShips\XEH_preInit.sqf'";
    };
};

#include "dialogs.hpp"
