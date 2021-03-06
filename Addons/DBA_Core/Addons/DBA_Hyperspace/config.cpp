class CfgPatches
{
    class 101st_Aux_Hyperspace
    {
        author = "Ragwolf";
        name = "101st Aux Mod Hyperspace";

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
    class DB101_Hyperspace
	{
		class functions
		{
			file = "DBA_Core\Addons\DBA_Hyperspace\functions";

			class achilles {};
			class createShip {};
			class generateID {};
            class getJumpPositions {};
			class getShipDirOffset {};
			class jumpShipIn {};
			class jumpShipOut {};
			class moduleJumpShipIn {};
			class zen {};
			class zeus
			{
				postInit = 1;
			};
		};
	};
};

class CfgSounds
{
	sounds[] = {};

	class hyperspace_enter
	{
		name = "hyperspace_enter";
		sound[] = {
			"\DBA_Core\Addons\DBA_Hyperspace\sounds\hyperspace_enter.ogg", 1, 1
		};
	};

	class hyperspace_exit
	{
		name = "hyperspace_exit";
		sound[] = {
			"\DBA_Core\Addons\DBA_Hyperspace\sounds\hyperspace_exit.ogg", 1, 1
		};
	};
};

class Extended_PreInit_EventHandlers
{
    class DBA_Hyperspace_pre_init_event
	{
        init = "call compile preprocessFileLineNumbers 'DBA_Core\Addons\DBA_Hyperspace\XEH_preInit.sqf'";
    };
};
