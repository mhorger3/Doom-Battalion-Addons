params ["_ship", "_position", "_turnDuration", "_moveDuration", "_altitude"];

_ship setVariable ["DBA_CS_busy", true, true];

_position set [2, _altitude];

[_ship, _position, _moveDuration, _turnDuration, true, true, true, true] remoteExecCall ["DBA_Common_fnc_moveObject", 2, false];

sleep (_turnDuration + _moveDuration);
waitUntil { ((getPosASL _ship) isEqualTo _position) };

_ship setVariable ["DBA_CS_busy", false, true];
