/**
 * Author: Ragwolf
 * Adds ACE interactions for changing camouflage.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * call DBA_Camo_Changer_fnc_addInteractions
 *
 * Public: No
 */

// Remove existing actions in case we're changing the camo template
[player, 1, ["ACE_SelfActions", "DBA_ChangeCamo"]] call ace_interact_menu_fnc_removeActionFromObject;

private _rootAction = [
	"DBA_ChangeCamo",
	"Change Camo",
	"",
	{},
	{
		params ["_target", "_player", "_params"];
		diag_log format ["_condition [%1, %2, %3]", _target, _player, _params];
		_player call DBA_Camo_Changer_fnc_hasCamoChanger
	},
	{
		params ["_target", "_player", "_params"];
		diag_log format ["_insertChildren [%1, %2, %3]", _target, _player, _params];

		private _template = _player call DBA_Camo_Changer_fnc_getCamoTemplate;
		private _actions = [];
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
				_displayName,
				"",
				{
					params ["_target", "_player", "_params"];
					diag_log format ["_childStatement [%1, %2, %3]", _target, _player, _params];
					_params params ["_configName"];
					[_player, _configName] call DBA_Camo_Changer_fnc_changeCamo;
				},
				{
					params ["_target", "_player", "_params"];
					_params params ["_configName"];
					!([_player, _configName] call DBA_Camo_Changer_fnc_isCamoEquipped)
				},
				{},
				[_configName]
			] call ace_interact_menu_fnc_createAction;

			_actions pushBack [_action, [], _target];
		} forEach _template;

		_actions
	}
] call ace_interact_menu_fnc_createAction;

[player, 1, ["ACE_SelfActions"], _rootAction] call ace_interact_menu_fnc_addActionToObject;
