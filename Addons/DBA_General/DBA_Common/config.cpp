class CfgPatches
{
    class DBA_Aux_Mod_Common
    {
        author = "Ragwolf";
        name = "101st Aux Mod Common";

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
    class DBA_Common
	{
		class functions
		{
			file = "101st_Aux_Mod\Addons\DBA_General\DBA_Common\functions";

            class animatePitchBank {};
            class cloneObjectToLocal {};
			class easeIn {};
			class easeInOut {};
			class easeOut {};
            class getPitchBank {};
            class isDeveloper {};
			class move {};
            class moveObject {};
            class moveObjectLocal {};
			class moveTowards {};
            class pitchBank {};
            class pitchBankLocal {};
            class setPitchBank {};
            class turnTowards {};
            class zen
            {
                postInit = 1;
            };
		};
	};
};

class Extended_PreInit_EventHandlers
{
    class DBA_Common_pre_init_event
	{
        init = "call compile preprocessFileLineNumbers '101st_Aux_Mod\Addons\DBA_General\DBA_Common\XEH_preInit.sqf'";
    };
};

class CfgEditorCategories
{
	class Category101stAux
	{
		displayName="101st Assets";
	};
};
class CfgEditorSubcategories
{
	#include "CfgEditorSubcategories.hpp"
};
