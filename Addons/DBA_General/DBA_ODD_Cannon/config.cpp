class CfgPatches
{
    class DBA_Aux_Mod_ODD_Cannon
    {
        author = "Ragwolf";
        name = "DBA Aux Mod ODD Cannon";

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
    class DBA_ODD_Cannon
	{
		class cannon
		{
			file = "DBA_Core\Addons\DBA_ODD_Cannon\functions\cannon";

            class createControls {};
            class initLauncher {};
            class launch {};
            class launchInfantry {};
            class launchObject {};
		};

        class gui
        {
			file = "DBA_Core\Addons\DBA_ODD_Cannon\functions\gui";

            class cancelButton {};
            class controlSettingsOnLoad {};
            class launchButton {};
            class selectDestination {};
            class sliderChanged {};
        };
	};
};

#include "dialogs.hpp"
