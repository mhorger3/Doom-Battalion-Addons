private _category = "101st Aux Mod - Aircraft Spawner";

[_category, "Create",
{
	params ["_position", "_object"];

	if (isNull _object) exitWith {
		[objNull, "must be placed on an object"] call BIS_fnc_showCuratorFeedbackMessage;
	};

	private _aircraftClasses = ["NONE", "3as_Vulture_dynamicLoadout", "O_OKalani_Vulture_Droid_01", "RD501_vulture_MKII", "O_OKalani_Hyena_Bomber_Droid_01", "RD501_hyena_Mk2", "O_OKalani_HMP_Gunship_01"];
	private _aircraftNames = [["None"], ["Vulture (3AS)"], ["Vulture (Kalani)"], ["Vulture (RD501)"], ["Hyena Bomber (Kalani)"], ["Heyna Bomber (RD501)"], ["HMP Gunship (Kalani)"]];

	[
		"Create Aircraft Spawner",
		[
			["COMBO", "Aircraft 1", [_aircraftClasses, _aircraftNames, 0]],
			["COMBO", "Aircraft 2", [_aircraftClasses, _aircraftNames, 0]],
			["COMBO", "Aircraft 3", [_aircraftClasses, _aircraftNames, 0]],
			["COMBO", "Aircraft 4", [_aircraftClasses, _aircraftNames, 0]],
			["SLIDER", "Respawn Delay (seconds)", [0, 30, 0, 0]]
		],
		{
			params ["_result", "_object"];
			_result params ["_aircraft1", "_aircraft2", "_aircraft3", "_aircraft4", "_respawnDelay"];

			[_object, [_aircraft1, _aircraft2, _aircraft3, _aircraft4], _respawnDelay] call DB101_AircraftSpawner_fnc_create;
		},
		{},
		_object
	] call zen_dialog_fnc_create;
}] call zen_custom_modules_fnc_register;

[_category, "Stop",
{
	params ["_position", "_object"];

	_object call DB101_AircraftSpawner_fnc_stop;
}] call zen_custom_modules_fnc_register;

[_category, "Set Waypoint",
{
	params ["_position", "_object"];

	_position call DB101_AircraftSpawner_fnc_setWaypoint;
}] call zen_custom_modules_fnc_register;
