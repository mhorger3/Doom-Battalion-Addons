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
			file = "101st_Aux_Mod\Addons\DBA_Common\functions";

            class cloneObjectToLocal {};
			class easeIn {};
			class easeInOut {};
			class easeOut {};
            class isDeveloper {};
			class move {};
            class moveObject {};
            class moveObjectLocal {};
			class moveTowards {};
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
        init = "call compile preprocessFileLineNumbers '101st_Aux_Mod\Addons\DBA_Common\XEH_preInit.sqf'";
    };
};
