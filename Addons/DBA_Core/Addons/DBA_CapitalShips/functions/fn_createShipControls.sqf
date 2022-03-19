// Example: [this] call DBA_CapitalShips_fnc_createShipControls;
params ["_object"];

private _controlShipAction = [
	"ControlShip",
	"Control Ship",
	"",
	{
		createDialog "DBA_CS_Control_Dialog";
	},
	{ true },
	{},
	[]
] call ACE_interact_menu_fnc_createAction;

[_object, 0, ["ACE_MainActions"], _controlShipAction] call ACE_interact_menu_fnc_addActionToObject;
