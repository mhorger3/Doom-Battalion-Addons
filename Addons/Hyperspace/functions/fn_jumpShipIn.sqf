params ["_ship", "_position", "_direction", ["_driftDistance", 100], ["_driftTime", 10], ["_easeOut", true], ["_sound", "hyperspace_exit"]];

// Don't execute on server
if (!hasInterface) exitWith {};

([_position, _direction, _driftDistance] call DB101_Hyperspace_fnc_getJumpPositions) params ["_startPos", "_jumpPos"];

// TODO: Remove duplication with createShip
private _dirOffset = _ship call DB101_Hyperspace_fnc_getShipDirOffset;
private _object = [_ship, _startPos] call DB101_Hyperspace_fnc_createShip;
_object setDir (_direction + _dirOffset);

[
	_object,
	[
		[_jumpPos, 0.5],
		[_position, _driftTime, _easeOut]
	]
] call DBA_Common_fnc_move;

[
	{
		params ["_sound"];
		playSound _sound;
	},
	[_sound],
	0.5
] call CBA_fnc_waitAndExecute;

[
	{
		params ["_object"];
		deleteVehicle _object;
	},
	[_object],
	0.5 + _driftTime
] call CBA_fnc_waitAndExecute;

_object
