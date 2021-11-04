class CfgPatches
{
    class 101st_Aux_AI
    {
        author = "Ragwolf";
        name = "101st Aux Mod AI";

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
    class DB101_AI
	{
		class functions
		{
			file = "101st_Aux_Mod\Addons\DBA_General\DBA_AI\functions";

			class achilles {};
			class garrison {};
            class ungarrison {};
			class zen {};
			class zeus {
                // TODO: Fix performance issues
				// postInit = 1;
			};
		};
	};
};
