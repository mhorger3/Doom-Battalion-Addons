// Remove existing actions in case we're changing the camo template
["CAManBase", 1, ["ACE_SelfActions", "DBA_ChangeCamo"]] call ace_interact_menu_fnc_removeActionFromClass;

private _rootAction = [
	"DBA_ChangeCamo",
	"Change Camo",
	"",
	{},
	{[_player] call DBA_Camo_Changer_fnc_hasCamoChanger}
] call ace_interact_menu_fnc_createAction;

["CAManBase", 1, ["ACE_SelfActions"], _rootAction, true] call ace_interact_menu_fnc_addActionToClass;

private _template = _entity call DBA_Camo_Changer_fnc_getCamoTemplate;
private ["_configName", "_displayName", "_action"];

{
	_configName = configName _x;
	_displayName = getText (_x >> "displayName");
	if (_displayName isEqualTo "") then
	{
		_displayName = _configName;
	};

	_action = [
		format ["DBA_ChangeCamo_%1", _configName],
		_configName,
		"",
		{[_player, _configName] call DBA_Camo_Changer_fnc_changeCamo;},
		{!([_player, _configName] call DBA_Camo_Changer_fnc_isCamoEquipped)}
	] call ace_interact_menu_fnc_createAction;

	["CAManBase", 1, ["ACE_SelfActions", "DBA_ChangeCamo"], _action, true] call ace_interact_menu_fnc_addActionToClass;
} forEach _template;
