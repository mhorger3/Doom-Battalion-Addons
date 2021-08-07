private _category = "101st Aux Mod - Hyperspace";

[_category, "Jump Ship In",
{
	params ["_position", "_object"];

	[
		"Jump Ship In",
		[
 			["COMBO", "Ship", [
				 ["DBA_CapitalShips_Acclamator", "DBA_CapitalShips_Arquitens", "DBA_CapitalShips_Quasar", "DBA_CapitalShips_Venator", "DBA_CapitalShips_Munificent", "DBA_CapitalShips_Providence", "DBA_CapitalShips_Providence_Dreadnought", "DBA_CapitalShips_Recusant", "DBA_CapitalShips_Recusant_Dreadnought", "DBA_CapitalShips_Subjugator", "DBA_CapitalShips_Lucrehulk", "101st_BabyYoda"],
				 [["Acclamator"], ["Arquitens"], ["Quasar"], ["Venator"], ["Munificent"], ["Providence"], ["Providence Dreadnought"], ["Recusant"], ["Recusant Dreadnought"], ["Subjugator"], ["Lucrehulk"], ["Baby Yoda"]], 0]
			],
			["SLIDER", "Altitude", [0, 2000, 500, 0]],
			["TOOLBOX", "Direction", [0, 1, 8, ["N", "NE", "E", "SE", "S", "SW", "W", "NW"]]],
			["SLIDER", ["Drift Distance", "How far the ship moves before coming to a stop"], [0, 5000, 500, 0]],
			["SLIDER", ["Drift Time", "The time the ship moves before coming to a stop"], [0, 60, 10, 1]]
		],
		{
			params ["_result", "_position"];
			_result params ["_ship", "_altitude", "_direction", "_driftDistance", "_driftTime"];
			_direction = [0, 45, 90, 135, 180, 225, 270, 315] select _direction;

			[_ship, _position, _altitude, _direction, _driftDistance, _driftTime] remoteExecCall ["DB101_Hyperspace_fnc_moduleJumpShipIn", 2, false];
		},
		{},
		_position
	] call zen_dialog_fnc_create;
}] call zen_custom_modules_fnc_register;

[_category, "Jump Ship Out",
{
	params ["_position", "_object"];

	if (_object getVariable ["DBA_CS_busy", false]) exitWith
    {
        [objNull, "ship is busy"] call BIS_fnc_showCuratorFeedbackMessage;
    };

	_object remoteExecCall ["DB101_Hyperspace_fnc_moduleJumpShipOut", 2, false];
}] call zen_custom_modules_fnc_register;
