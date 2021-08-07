params ["_ship", "_position", "_turnDuration", "_moveDuration", "_altitude", "_spread", "_numberOfShots"];

_ship setVariable ["DBA_CS_busy", true, true];

private _destination = [(_position # 0), (_position # 1), _altitude];

private _driftDistance = 300;
private _driftTime = 60;

private _logic = createGroup [sideLogic, true] createUnit ["Logic", _destination, [], 0, "CAN_COLLIDE"];
private _direction = _ship getDir _destination;

private _barrageStartPosition = _logic getRelPos [(_driftDistance / 2), (_direction - 180)];
_barrageStartPosition set [2, _altitude];
private _barrageEndPosition = _logic getRelPos [(_driftDistance / 2), _direction];
_barrageEndPosition set [2, _altitude];

deleteVehicle _logic;

[_ship, _barrageStartPosition, _moveDuration, _turnDuration, true, true, true, true] remoteExecCall ["DBA_Common_fnc_moveObject", 2, false];

sleep (_turnDuration + _moveDuration);
// Wait until position is updated in case of lag
waitUntil { ((getPosASL _ship) isEqualTo _barrageStartPosition) };

[_ship, _position, _destination, _barrageStartPosition, _barrageEndPosition, _driftDistance, _driftTime, _spread, _numberOfShots] remoteExec ["DBA_CapitalShips_fnc_barrage", 2, false];
