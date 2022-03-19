params ["_ship", "_position", "_duration", "_radius", "_rate", "_colorCorrection"];

_ship setVariable ["DBA_CS_busy", true, true];

// In case the nuke destroys the ship, we want it to stay where it crashes
_ship allowDamage false;

// Sink the ship halfway into the ground
private _box = boundingBox _ship;
_box params ["_min", "_max"];
_max params ["_xmax", "_ymax", "_zmax"];
_position set [2, (_position select 2) - (_zmax / 8)];

[_ship, _position, _duration, _duration, true, true, true, false] remoteExecCall ["DBA_Common_fnc_moveObject", 2, false];

[
	{
		params ["_position", "_radius", "_rate", "_colorCorrection"];
		[_position, _radius, _rate, _colorCorrection] remoteExec ["DBA_CapitalShips_fnc_crashShipLocal", 0, false];
	},
	[_position, _radius, _rate, _colorCorrection],
	_duration - 3
] call CBA_fnc_waitAndExecute;
