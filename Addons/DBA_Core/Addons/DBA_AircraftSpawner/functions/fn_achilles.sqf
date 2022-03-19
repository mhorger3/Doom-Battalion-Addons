private _category = "101st Aux Mod - Aircraft Spawner";

[_category, "Create",
{
	params ["_position", "_object"];

	if (isNull _object) exitWith {
		[objNull, "must be placed on an object"] call BIS_fnc_showCuratorFeedbackMessage;
	};

	private _aircraftClasses = ["NONE", "3as_Vulture_dynamicLoadout", "O_OKalani_Vulture_Droid_01", "RD501_vulture_MKII", "O_OKalani_Hyena_Bomber_Droid_01", "RD501_hyena_Mk2", "O_OKalani_HMP_Gunship_01"];
	private _aircraftNames = ["None", "Vulture (3AS)", "Vulture (Kalani)", "Vulture (RD501)", "Hyena Bomber (Kalani)", "Heyna Bomber (RD501)", "HMP Gunship (Kalani)"];

	private _dialogResult = [
		"Create Aircraft Spawner",
		[
			["Aircraft 1", _aircraftNames, 0],
			["Aircraft 2", _aircraftNames, 0],
			["Aircraft 3", _aircraftNames, 0],
			["Aircraft 4", _aircraftNames, 0],
			["Respawn Delay (seconds)", "", "0"]
		]
	] call Ares_fnc_showChooseDialog;

	if (_dialogResult isEqualTo []) exitWith {};

	_dialogResult params ["_aircraft1", "_aircraft2", "_aircraft3", "_aircraft4", "_respawnDelay"];
	_aircraft1 = _aircraftClasses select _aircraft1;
	_aircraft2 = _aircraftClasses select _aircraft2;
	_aircraft3 = _aircraftClasses select _aircraft3;
	_aircraft4 = _aircraftClasses select _aircraft4;
	_respawnDelay = parseNumber(_respawnDelay);

	[_object, [_aircraft1, _aircraft2, _aircraft3, _aircraft4], _respawnDelay] call DB101_AircraftSpawner_fnc_create;
}] call Ares_fnc_RegisterCustomModule;

[_category, "Stop",
{
	params ["_position", "_object"];

	_object call DB101_AircraftSpawner_fnc_stop;
}] call Ares_fnc_RegisterCustomModule;

[_category, "Set Waypoint",
{
	params ["_position", "_object"];

	[_position] call DB101_AircraftSpawner_fnc_setWaypoint;
}] call Ares_fnc_RegisterCustomModule;
