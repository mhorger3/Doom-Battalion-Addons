// Example: ["Venator_MK2", 10, 120, 1000] execVM "ambientFleet.sqf";
params ["_type", "_count", ["_direction", 0], ["_duration", 120], ["_altitude", 1000]];

if !(hasInterface) exitWith {};

private _ships = [];

private ["_xStart", "_yStart", "_xEnd", "_yEnd", "_zOffset", "_startPos", "_endPos", "_ship"];

for "_i" from 0 to _count do
{
	switch (_direction) do
	{
		case 90: { // East
			_xStart = worldSize - (random 500);
			_xEnd = 0;
			_yStart = _i * (worldSize / _count);
			_yEnd = _yStart;
		};
		case 180: { // South
			_xStart = _i * (worldSize / _count);
			_xEnd = _xStart;
			_yStart = random 500;
			_yEnd = worldSize;
		};
		case 270: { // West
			_xStart = random 500;
			_xEnd = worldSize;
			_yStart = _i * (worldSize / _count);
			_yEnd = _yStart;
		};
		default { // North
			_xStart = _i * (worldSize / _count);
			_xEnd = _xStart;
			_yStart = worldSize - (random 500);
			_yEnd = 0;
		};
	};

	// Add a random height offset for variety
	_zOffset = random 500;

	_startPos = [_xStart, _yStart, _altitude + _zOffset];
	_endPos = [_xEnd, _yEnd, _altitude + _zOffset];

	_ship = _type createVehicleLocal _startPos;
	_ship setDir ((_type call DB101_Hyperspace_fnc_getShipDirOffset) + _direction);
	_ships pushBack [_ship, _startPos, _endPos];

	{
		_x addCuratorEditableObjects [[_ship], true];
	} forEach allCurators;
};

private ["_timeFrom", "_timeTo", "_curPos", "_loop", "_enabled"];
missionNamespace setVariable ["DBA_CS_ambientFleet_timeFrom", CBA_missionTime, false];
missionNamespace setVariable ["DBA_CS_ambientFleet_timeTo", CBA_missionTime + _duration, false];

[
	{
		params ["_args", "_handle"];
		_args params ["_ships", "_duration"];

		_timeFrom = missionNamespace getVariable "DBA_CS_ambientFleet_timeFrom";
		_timeTo = missionNamespace getVariable "DBA_CS_ambientFleet_timeTo";
		_loop = CBA_missionTime > _timeTo;

		_enabled = missionNamespace getVariable ["DBA_CS_ambientFleet", true];

		{
			_x params ["_ship", "_startPos", "_endPos"];

			if (_loop) then
			{
				if (_enabled) then
				{
					_ship setPosASL _startPos;
				}
				else
				{
					deleteVehicle _ship;
				};
			}
			else
			{
				_curPos = vectorLinearConversion [_timeFrom, _timeTo, CBA_missionTime, _startPos, _endPos, true];
				_ship setPosASL _curPos;
			};
		} forEach _ships;

		if (_loop) then
		{
			if !(_enabled) exitWith
			{
				_handle call CBA_fnc_removePerFrameHandler;
			};

			missionNamespace setVariable ["DBA_CS_ambientFleet_timeFrom", CBA_missionTime, false];
			missionNamespace setVariable ["DBA_CS_ambientFleet_timeTo", CBA_missionTime + _duration, false];
		};
	},
	0,
	[_ships, _duration]
] call CBA_fnc_addPerFrameHandler;
