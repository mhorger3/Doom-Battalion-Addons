params ["_ship", "_position", "_direction", ["_driftDistance", 100], ["_driftTime", 10], ["_sound", "hyperspace_exit"]];

// Don't execute on server
if (!hasInterface) exitWith {};

private _logic = createGroup [sideLogic, true] createUnit ["Logic", _position, [], 0, "CAN_COLLIDE"];

private _startPos = _logic getRelPos [20000, _direction];
private _jumpPos = _logic getRelPos [_driftDistance, _direction];

_startPos set [2, (_position select 2)];
_jumpPos set [2, (_position select 2)];

deleteVehicle _logic;

// TODO: Remove duplication with createShip
private _dirOffset = _ship call DB101_Hyperspace_fnc_getShipDirOffset;
private _object = [_ship, _startPos] call DB101_Hyperspace_fnc_createShip;
_object setDir (_direction + _dirOffset);

[
	_object,
	[
		[_jumpPos, 0.5],
		[_position, _driftTime, true]
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
