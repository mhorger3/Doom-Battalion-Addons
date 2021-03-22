class CfgPatches
{
    class 101st_Aux_AircraftSpawner
    {
        author = "Ragwolf";
        name = "101st Aux Mod Aircraft Spawner";

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
    class DB101_AircraftSpawner
	{
		class functions
		{
			file = "101st_Aux_Mod\Addons\AircraftSpawner\functions";

			class achilles {};
            class create {};
            class setWaypoint {};
            class spawn {};
            class stop {};
			class zen {};
			class zeus {
				postInit = 1;
			};
		};
	};
};
