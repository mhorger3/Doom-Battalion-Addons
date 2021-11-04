class CfgPatches
{
    class DBA_Aux_Mod_ODD_Cannon
    {
        author = "Ragwolf";
        name = "101st Aux Mod ODD Cannon";

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
    class DBA_ODD_Cannon
	{
		class cannon
		{
			file = "101st_Aux_Mod\Addons\DBA_General\DBA_ODD_Cannon\functions\cannon";

            class createControls {};
            class initLauncher {};
            class launch {};
            class launchInfantry {};
            class launchObject {};
		};

        class gui
        {
			file = "101st_Aux_Mod\Addons\DBA_General\DBA_ODD_Cannon\functions\gui";

            class cancelButton {};
            class controlSettingsOnLoad {};
            class launchButton {};
            class selectDestination {};
            class sliderChanged {};
        };
	};
};

#include "dialogs.hpp"
