private _category = "101st Aux Mod - Hyperspace";

[_category, "Jump Ship In",
{
	params ["_position", "_object"];

	private _dialogResult = [
		"Jump Ship In",
		[
 			["Ship", ["Acclamator", "Arquitens", "Quasar", "Venator",  "Munificent", "Providence", "Providence Dreadnought", "Recusant", "Recusant Dreadnought", "Subjugator", "Lucrehulk", "Baby Yoda"], 0],
			["Altitude", "", "500"],
			["Direction", ["N", "NE", "E", "SE", "S", "SW", "W", "NW"], 0],
			["Drift Distance", "", "500"],
			["Drift Time", "", "10"]
		]
	] call Ares_fnc_showChooseDialog;
	
	if (_dialogResult isEqualTo []) exitWith {};

	_dialogResult params ["_shipIndex", "_altitude", "_direction", "_driftDistance", "_driftTime"];

	private _ship = ["DBA_CapitalShips_Acclamator", "DBA_CapitalShips_Arquitens", "DBA_CapitalShips_Quasar", "Venator_MK2", "DBA_CapitalShips_Munificent", "DBA_CapitalShips_Providence", "DBA_CapitalShips_Providence_Dreadnought", "DBA_CapitalShips_Recusant", "DBA_CapitalShips_Recusant_Dreadnought", "DBA_CapitalShips_Subjugator", "DBA_CapitalShips_Lucrehulk", "101st_BabyYoda"] select _shipIndex;
	_altitude = [parseNumber(_altitude), 0, 2000] call BIS_fnc_clamp;
	_direction = [0, 45, 90, 135, 180, 225, 270, 315] select _direction;
	_driftDistance = [parseNumber(_driftDistance), 0, 5000] call BIS_fnc_clamp;
	_driftTime = [parseNumber(_driftTime), 0, 60] call BIS_fnc_clamp;

	[_ship, _position, _altitude, _direction, _driftDistance, _driftTime] remoteExecCall ["DB101_Hyperspace_fnc_moduleJumpShipIn", 2, false];
}] call Ares_fnc_RegisterCustomModule;

[_category, "Jump Ship Out",
{
	params ["_position", "_object"];

	_object remoteExecCall ["DB101_Hyperspace_fnc_moduleJumpShipOut", 2, false];
}] call Ares_fnc_RegisterCustomModule;
