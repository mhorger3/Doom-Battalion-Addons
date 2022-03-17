class Extended_PreInit_EventHandlers
{
    class DBA_CapitalShips_pre_init_event
	{
        init = "call compile preprocessFileLineNumbers 'DBA_Core\Addons\DBA_General\DBA_CapitalShips\XEH_preInit.sqf'";
    };
};
