params ["_ship", "_position", "_destination", "_startPos", "_endPos", "_driftDistance", "_driftTime", "_spread", "_numberOfShots"];

private _alertSoundSource = createVehicle ["HeliHEmpty", _position, [], 0, "CAN_COLLIDE"];
_alertSoundSource say3D ["imperial_alert", 1000, 1, false, 0];

private _timeFrom = CBA_missionTime + (_driftTime / 3);
private _timeTo = CBA_missionTime + ((_driftTime / 3) * 2);
private _duration = _driftTime / 3;

[_ship, _endPos, _driftTime] remoteExecCall ["DBA_Common_fnc_moveObject", 2, false];

// Sleep for 100m
sleep _duration;

private _ammo = "DBA_CapitalShip_Ammo_Red";

private ["_curPos", "_velocity", "_projectile"];

for "_i" from 1 to _numberOfShots do
{
	_curPos = vectorLinearConversion [_timeFrom, _timeTo, CBA_missionTime, _startPos, _endPos, true];
	_velocity = [
		(random _spread) - (_spread / 2),
		(random _spread) - (_spread / 2),
		-(DBA_Hyperspace_Bombardment_Velocity)
	];

	_projectile = createVehicle [_ammo, _curPos, [], 0, "CAN_COLLIDE"];
	_projectile setPos _curPos;
	_projectile setVelocity _velocity;
	_projectile say3D ["bombardment_shot", 1000, 1, false, 0];

	sleep (_duration / _numberOfShots);
};

deleteVehicle _alertSoundSource;

sleep _duration;

_ship setVariable ["DBA_CS_busy", false, true];
