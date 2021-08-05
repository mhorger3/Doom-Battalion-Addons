params ["_ship", "_position", "_altitude", "_direction", "_numberOfShots"];

private _driftDistance = 300;
private _driftTime = 60;

// Adjust drift to start 150 meters before position and end 150 meters after
private _logic = createGroup [sideLogic, true] createUnit ["Logic", _position, [], 0, "CAN_COLLIDE"];
private _driftStartPos = _logic getRelPos [150, _direction];
_driftStartPos set [2, (_position # 2) + _altitude];
private _driftEndPos = _logic getRelPos [150, (_direction - 180)];
_driftEndPos set [2, (_position # 2) + _altitude];

deleteVehicle _logic;

[_ship, _driftEndPos, _direction, _driftDistance, _driftTime] spawn
{
	params ["_ship", "_posWithAltitude", "_direction", "_driftDistance", "_driftTime"];
	[_ship, _posWithAltitude, _direction, _driftDistance, _driftTime, false] remoteExecCall ["DB101_Hyperspace_fnc_jumpShipIn", 0, false];
};

private _timeFrom = CBA_missionTime + (_driftTime / 3);
private _timeTo = CBA_missionTime + ((_driftTime / 3) * 2);

private _alertSoundSource = createVehicle ["HeliHEmpty", _position, [], 0, "CAN_COLLIDE"];
_alertSoundSource say3D ["imperial_alert", 1000, 1, false, 0];

[
	{
		params ["_ship", "_position", "_direction", "_numberOfShots", "_timeFrom", "_timeTo", "_startPos", "_duration"];

		[_ship, _position, _direction, _numberOfShots, _timeFrom, _timeTo, _startPos, _duration] spawn
		{
			params ["_ship", "_position", "_direction", "_numberOfShots", "_timeFrom", "_timeTo", "_startPos", "_duration"];

			private _ammo = "DBA_CapitalShip_Ammo_Red";

			private ["_curPos", "_shellPos", "_velocity", "_projectile"];

			for "_i" from 1 to _numberOfShots do
			{
				_curPos = vectorLinearConversion [_timeFrom, _timeTo, CBA_missionTime, _startPos, _position, true];
				_velocity = [
					(random DBA_Hyperspace_Bombardment_Spread) - (DBA_Hyperspace_Bombardment_Spread / 2),
					(random DBA_Hyperspace_Bombardment_Spread) - (DBA_Hyperspace_Bombardment_Spread / 2),
					-(DBA_Hyperspace_Bombardment_Velocity)
				];

				_projectile = createVehicle ["DBA_CapitalShip_Ammo_Red", _curPos, [], 0, "CAN_COLLIDE"];
				_projectile setDir (_direction - 180);
				_projectile setPos _curPos;
				_projectile setVelocityModelSpace _velocity;
				_projectile say3D ["bombardment_shot", 1000, 1, false, 0];

				sleep (_duration / _numberOfShots);
			};
		};
	},
	[_ship, _driftEndPos, _direction, _numberOfShots, _timeFrom, _timeTo, _driftStartPos, _driftTime / 3],
	_driftTime / 3
] call CBA_fnc_waitAndExecute;

[
	{
		params ["_ship", "_position", "_direction", "_alertSoundSource"];

		deleteVehicle _alertSoundSource;

		private _object = [_ship, _position, _direction, false] call DB101_Hyperspace_fnc_createShip;

		[_object] remoteExecCall ["DB101_Hyperspace_fnc_jumpShipOut", 0, false];
	},
	[_ship, _driftEndPos, _direction, _alertSoundSource],
	0.5 + _driftTime
] call CBA_fnc_waitAndExecute;
