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

	private _ship = ["442_acclamator_2", "442_arquitens", "442_quasar", "Venator_MK2", "DBA_Munificent", "442_providence_zeus", "442_providence_d_zeus", "442_recusant_zeus", "442_recusant_zeus_d", "442_subjugator", "442_lucrehulk", "101st_BabyYoda"] select _shipIndex;
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
