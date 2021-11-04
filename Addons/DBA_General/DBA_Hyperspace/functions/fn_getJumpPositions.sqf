params ["_position", "_direction", "_driftDistance"];

private _logic = createGroup [sideLogic, true] createUnit ["Logic", _position, [], 0, "CAN_COLLIDE"];

private _startPos = _logic getRelPos [20000, _direction];
private _jumpPos = _logic getRelPos [_driftDistance, _direction];

deleteVehicle _logic;

_startPos set [2, (_position select 2)];
_jumpPos set [2, (_position select 2)];

[_startPos, _jumpPos]
