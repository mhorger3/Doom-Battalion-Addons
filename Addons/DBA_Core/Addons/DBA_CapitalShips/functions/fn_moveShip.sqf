params ["_ship", "_position", "_moveDuration", "_turnDuration", ["_altitude", 500]];

_position set [2, _altitude];

private _box = boundingBox _ship;
_box params ["_min", "_max"];
_max params ["_xmax", "_ymax", "_zmax"];

private _triggerPos = getPosASL _ship;
_triggerPos set [2, (_triggerPos select 2) + (_zmax / 2)];
private _trigger = createTrigger ["EmptyDetector", _triggerPos];
_trigger setPosASL _triggerPos;
_trigger setTriggerArea [_xmax, _ymax, getDir _ship, true, _zmax];

private _shipParts = allMissionObjects "" inAreaArray _trigger;
private _players = allPlayers inAreaArray _trigger;

private _attachPoint = createVehicle ["HeliHEmpty", getPosATL _ship, [], 0, "CAN_COLLIDE"];
_attachPoint setDir (getDir _ship);

private _dirOffset = (typeOf _ship) call DB101_Hyperspace_fnc_getShipDirOffset;
private _endDir = (_attachPoint getDir _position) + _dirOffset + 180;

{
	[_x, _attachPoint] call BIS_fnc_attachToRelative;
	hideObjectGlobal _x;
} forEach _shipParts;

{
	[_x, _attachPoint] call BIS_fnc_attachToRelative;
	hideObjectGlobal _x;
} forEach _players;

[typeOf _ship, getPosASL _ship, getDir _ship, _position, _moveDuration, _turnDuration, _trigger, DBA_CapitalShips_MoveShip_ExternalCamera] remoteExecCall ["DBA_CapitalShips_fnc_moveShipLocal", 0, false];

// Move the server ship
_attachPoint setPosASL _position;
_attachPoint setDir _endDir;

[
	{
		params ["_shipParts", "_players", "_attachPoint", "_trigger"];

		// Unhide ship
		{
			detach _x;
			_x hideObjectGlobal false;
		} forEach _shipParts;

		// Unhide players in ship
		{
			detach _x;
			_x hideObjectGlobal false;
		} forEach _players;

		deleteVehicle _attachPoint;
		deleteVehicle _trigger;

		deleteMarker "DBA_CS_destination";
	},
	[_shipParts, _players, _attachPoint, _trigger],
	(_moveDuration + _turnDuration)
] call CBA_fnc_waitAndExecute;
