params ["_ship", "_position", "_destination", "_startPos", "_endPos", "_driftDistance", "_driftTime", "_spread", "_numberOfShots"];

private _alertSoundSource = createVehicle ["HeliHEmpty", _position, [], 0, "CAN_COLLIDE"];
_alertSoundSource say3D ["imperial_alert", 1000, 1, false, 0];

private _duration = _driftTime / 3;
// Bombard during the middle third of the movement
private _timeFrom = CBA_missionTime + _duration;
private _timeTo = CBA_missionTime + (_duration * 2);

[_ship, _endPos, _driftTime] remoteExecCall ["DBA_Common_fnc_moveObject", 2, false];

// Sleep for 100m
waitUntil { CBA_missionTime >= _timeFrom };

private _zOffset = _ship call DBA_CapitalShips_fnc_getBombardmentOffset;

private _ammo = "DBA_CapitalShip_Ammo_Red";

private ["_curPos", "_velocity", "_projectile"];

for "_i" from 1 to _numberOfShots do
{
	_curPos = vectorLinearConversion [_timeFrom, _timeTo, CBA_missionTime, _startPos, _endPos, true];
	_curPos set [2, (_curPos # 2) + _zOffset];
	_velocity = [
		(random _spread) - (_spread / 2),
		(random _spread) - (_spread / 2),
		-(DBA_CapitalShips_Bombardment_Velocity)
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
