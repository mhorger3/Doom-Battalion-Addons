private _category = "101st Aux Mod - Capital Ships";

[_category, "Select Ship",
{
	params ["_position", "_object"];

	_object call DBA_CapitalShips_fnc_selectShip;
}] call Ares_fnc_RegisterCustomModule;

[_category, "Crash Ship",
{
	params ["_position", "_object"];

	private _ship = missionNamespace getVariable "DBA_selectedShip";
	if (isNil "_ship") exitWith
	{
		[objNull, "must select a ship"] call BIS_fnc_showCuratorFeedbackMessage;
	};

	private _dialogResult = [
		"Crash Ship",
		[
			["Duration", "", "10"],
			["Radius [m]", "", "300"],
			["Destroyed objects per second", "", "200"],
			["Color correction", ["No", "Yes"]]
		]
	] call Ares_fnc_showChooseDialog;
	
	if (_dialogResult isEqualTo []) exitWith {};

	_dialogResult params ["_duration", "_radius", "_rate", "_colorCorrection"];
	_duration = [parseNumber(_duration), 0, 600] call BIS_fnc_clamp;
	_radius = [parseNumber(_radius), 0, 5000] call BIS_fnc_clamp;
	_rate = [parseNumber(_rate), 0, 500] call BIS_fnc_clamp;
	_colorCorrection = _colorCorrection isEqualTo 1;

	[_ship, (AGLToASL _position), _duration, _radius, _rate, _colorCorrection] call DBA_CapitalShips_fnc_crashShip;

	if (DBA_Common_Debug) then
	{
		diag_log format ["DEBUG_fn_achilles: [%1]", _position];
	};
}] call Ares_fnc_RegisterCustomModule;

[_category, "Move Ship",
{
	params ["_position", "_object"];

	private _ship = missionNamespace getVariable "DBA_selectedShip";
	if (isNil "_ship") exitWith
	{
		[objNull, "must select a ship"] call BIS_fnc_showCuratorFeedbackMessage;
	};

	private _currentAltitude = (getPosASL _ship) select 2;

	private _dialogResult = [
		"Move Ship",
		[
			["Turn Duration", "", "5"],
			["Move Duration", "", "10"],
			["Altitude", "", str _currentAltitude]
		]
	] call Ares_fnc_showChooseDialog;
	
	if (_dialogResult isEqualTo []) exitWith {};

	_dialogResult params ["_turnDuration", "_moveDuration", "_altitude"];
	_turnDuration = [parseNumber(_turnDuration), 0, 600] call BIS_fnc_clamp;
	_moveDuration = [parseNumber(_moveDuration), 0, 600] call BIS_fnc_clamp;
	_altitude = [parseNumber(_altitude), 0, 5000] call BIS_fnc_clamp;

	[_ship, _position, _turnDuration, _moveDuration, _altitude] call DBA_CapitalShips_fnc_moveTo;
}] call Ares_fnc_RegisterCustomModule;

[_category, "Ambient Fleet",
{
	params ["_position", "_object"];

	private _dialogResult = [
		"Ambient Fleet",
		[
 			["Ship", ["Acclamator", "Arquitens","Quasar", "Venator", "Munificent", "Providence", "Providence Dreadnought", "Recusant", "Recusant Dreadnought", "Subjugator", "Lucrehulk", "Baby Yoda"], 0],
			["Direction", ["N", "E", "S", "W"], 0],
			["Count", "", "10"],
			["Duration", "", "120"],
			["Altitude", "", "1000"]
		]
	] call Ares_fnc_showChooseDialog;

	_dialogResult params ["_shipIndex", "_direction", "_count", "_duration", "_altitude"];

	private _ship = ["442_acclamator_2", "442_arquitens", "442_quasar", "Venator_MK2", "442_munificent", "442_providence_zeus", "442_providence_d_zeus", "442_recusant_zeus", "442_recusant_zeus_d", "442_subjugator", "442_lucrehulk", "101st_BabyYoda"] select _shipIndex;
	_direction = [0, 90, 180, 270] select _direction;
	_count = [parseNumber(_count), 1, 300] call BIS_fnc_clamp;
	_duration = [parseNumber(_duration), 1, 6000] call BIS_fnc_clamp;
	_altitude = [parseNumber(_altitude), 0, 5000] call BIS_fnc_clamp;
	
	missionNamespace setVariable ["DBA_CS_ambientFleet", true, true];
	[_ship, _count, _direction, _duration, _altitude] remoteExecCall ["DBA_CapitalShips_fnc_ambientFleet", 0, true];
}] call Ares_fnc_RegisterCustomModule;

[_category, "Stop Ambient Fleet",
{
	params ["_position", "_object"];

	missionNamespace setVariable ["DBA_CS_ambientFleet", false, true];
}] call Ares_fnc_RegisterCustomModule;
