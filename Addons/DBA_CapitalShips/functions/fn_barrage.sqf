params ["_ship", "_position", "_destination", "_startPos", "_endPos", "_driftDistance", "_driftTime", "_spread", "_numberOfShots"];

private _alertSoundSource = createVehicle ["HeliHEmpty", _position, [], 0, "CAN_COLLIDE"];
_alertSoundSource say3D ["imperial_alert", 1000, 1, false, 0];

private _duration = _driftTime / 3;
// Barrage during the middle third of the movement
private _timeFrom = CBA_missionTime + _duration;
private _timeTo = CBA_missionTime + (_duration * 2);

private _shipVariableName = call DB101_Hyperspace_fnc_generateID;

[_ship, _endPos, _driftTime, 0, false, false, false, false, _shipVariableName] remoteExecCall ["DBA_Common_fnc_moveObject", 2, false];

// Sleep for 100m
waitUntil { CBA_missionTime >= _timeFrom };

private ["_curPos", "_velocity", "_projectile"];

private _localShip = localNamespace getVariable _shipVariableName;
private _ammo = _localShip call DBA_CapitalShips_fnc_getBarrageAmmo;

for "_i" from 1 to _numberOfShots do
{
	_curPos = _localShip call DBA_CapitalShips_fnc_getBarrageSpawnPosition;
	_velocity = [
		(random _spread) - (_spread / 2),
		(random _spread) - (_spread / 2),
		-(DBA_CapitalShips_Barrage_Velocity)
	];

	_projectile = createVehicle [_ammo, _curPos, [], 0, "CAN_COLLIDE"];
	_projectile setPos _curPos;
	_projectile setVelocity _velocity;
	_projectile say3D ["barrage_shot", 1000, 1, false, 0];

	sleep (_duration / _numberOfShots);
};

deleteVehicle _alertSoundSource;

sleep _duration;

_ship setVariable ["DBA_CS_busy", false, true];
