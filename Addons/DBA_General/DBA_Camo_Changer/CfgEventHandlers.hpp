class Extended_PreInit_EventHandlers
{
    class DBA_Camo_Changer_pre_init_event
	{
        init = "call compile preprocessFileLineNumbers '101st_Aux_Mod\Addons\DBA_General\DBA_Camo_Changer\XEH_preInit.sqf'";
    };
};

class Extended_PostInit_EventHandlers
{
    class DBA_Camo_Changer_post_init_event
	{
        init = "call compile preprocessFileLineNumbers '101st_Aux_Mod\Addons\DBA_General\DBA_Camo_Changer\XEH_postInit.sqf'";
    };
};
