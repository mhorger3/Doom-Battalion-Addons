params ["_object", ["_jumpTime", 0.5], ["_sound", "hyperspace_enter"]];

_object setVariable ["DBA_CS_busy", true, true];

private _ship = _object call DBA_Common_fnc_cloneObjectToLocal;
deleteVehicle _object;

playSound _sound;

private _dirOffset = (typeOf _ship) call DB101_Hyperspace_fnc_getShipDirOffset;

[
	{
		params ["_ship", "_jumpTime", "_dirOffset"];

		private _posTo = _ship getRelPos [20000, (180 - _dirOffset)];
		private _position = getPosASL _ship;
		_posTo set [2, (_position # 2)];

		[_ship, [[_posTo, _jumpTime]]] call DBA_Common_fnc_move;
	},
	[_ship, _jumpTime, _dirOffset],
	3
] call CBA_fnc_waitAndExecute;

[
	{
		params ["_ship"];
		deleteVehicle _ship;
	},
	[_ship],
	_jumpTime + 3
] call CBA_fnc_waitAndExecute;
