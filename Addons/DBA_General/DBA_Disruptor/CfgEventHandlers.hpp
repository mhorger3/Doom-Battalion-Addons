class Extended_PreInit_EventHandlers
{
    class DBA_Disruptor_pre_init_event
	{
        init = "call compile preprocessFileLineNumbers '101st_Aux_Mod\Addons\DBA_General\DBA_Disruptor\XEH_preInit.sqf'";
    };
};

class Extended_HitPart_EventHandlers
{
	class Car
	{
		DBA_hitPart = "(_this select 0) call DBA_Disruptor_fnc_onHit";
	};

	class Helicopter
	{
		DBA_hitPart = "(_this select 0) call DBA_Disruptor_fnc_onHit";
	};

	class Tank
	{
		DBA_hitPart = "(_this select 0) call DBA_Disruptor_fnc_onHit";
	};
};
