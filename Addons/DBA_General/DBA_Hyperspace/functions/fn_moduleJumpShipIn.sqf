params ["_ship", "_position", "_altitude", "_direction", "_driftDistance", "_driftTime"];

private _posWithAltitude = [(_position select 0), (_position select 1), (_position select 2) + _altitude];

[_ship, _posWithAltitude, _direction, _driftDistance, _driftTime] spawn
{
	params ["_ship", "_posWithAltitude", "_direction", "_driftDistance", "_driftTime"];
	[_ship, _posWithAltitude, _direction, _driftDistance, _driftTime] remoteExecCall ["DB101_Hyperspace_fnc_jumpShipIn", 0, false];
};

[
	{
		params ["_ship", "_position", "_direction"];

		private _object = [_ship, _position, _direction, false] call DB101_Hyperspace_fnc_createShip;
		{
			_x addCuratorEditableObjects [[_object], false];
		} forEach allCurators;
	},
	[_ship, _posWithAltitude, _direction],
	0.5 + _driftTime
] call CBA_fnc_waitAndExecute;
