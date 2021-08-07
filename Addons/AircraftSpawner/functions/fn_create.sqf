params ["_object", "_aircraft", ["_respawnDelay", 0]];

_object setVariable ["DB101_spawn", true, false];
_object setVariable ["DB101_spawnIndex", 0, false];

private _spawnPoints = _object getVariable ["DB101_spawnPoints", []];

// Calculate the spawn positions for the object we're turning into an aircraft spawner.
//
// If there's not a specific configuration, then 4 spawn points are generated from the middle
// of the object.
private _spawnOffsets = switch (typeOf _object) do {
	case "DBA_Munificent": {
		[[[-25, 35, 10], 0], [[-45, 35, 10], 0], [[-65, 35, 10], 0], [[-85, 35, 10], 0]]
	};
	case "442_providence": {
		[[[0, 50, 110], 90], [[0, 90, 110], 90], [[0, 130, 110], 90], [[0, 170, 110], 90]]
	};
	case "442_providence_zeus": {
		[[[0, 50, 110], 90], [[0, 90, 110], 90], [[0, 130, 110], 90], [[0, 170, 110], 90]]
	};
	case "442_providence_d": {
		[[[0, 130, 220], 90], [[0, 170, 220], 90], [[0, 210, 220], 90], [[0, 250, 220], 90]]
	};
	case "442_providence_d_zeus": {
		[[[0, 130, 220], 90], [[0, 170, 220], 90], [[0, 210, 220], 90], [[0, 250, 220], 90]]
	};
	default {
		[[[0, 0, 0], 90], [[0, 40, 0], 90], [[0, 80, 0], 90], [[0, 120, 0], 90]]
	};
};

if (count _spawnPoints isEqualTo 0) then
{
	{
		_x params ["_position", "_rotation"];
		private _helipad = createVehicle ["HeliHEmpty", position _object, [], 0, "CAN_COLLIDE"];
		_helipad attachTo [_object, _position];
		_helipad setDir _rotation;
		_spawnPoints pushBack _helipad;
	} forEach _spawnOffsets;

	_object setVariable ["DB101_spawnPoints", _spawnPoints, false];
};

private _spawnCount = count _spawnPoints;

// TODO: Make generateID common
private _id = call DB101_Hyperspace_fnc_generateID;
private _eventID = format ["SpawnedAircraftKilled_%1", _id];

[
	_eventID,
	{
		_this params ["_unit"];
		_thisArgs params ["_eventID", "_object", "_spawnPoints", "_spawnCount", "_respawnDelay"];

		if !(_object getVariable "DB101_spawn") then
		{
			[_thisType, _thisId] call CBA_fnc_removeEventHandler;
		}
		else
		{
			[
				{
					params ["_object", "_spawnPoints", "_unit", "_eventID", "_spawnCount"];
					
					private _spawnIndex = _object getVariable "DB101_spawnIndex";
					private _spawnPoint = _spawnPoints select _spawnIndex;
					private _spawned = [(typeOf _unit), _spawnPoint] call DB101_AircraftSpawner_fnc_spawn;
					_spawned setVariable ["DB101_eventID", _eventID];

					_spawned addEventHandler ["Killed", {
						params ["_unit"];
						[(_unit getVariable "DB101_eventID"), [_unit]] call CBA_fnc_localEvent;
					}];

					private _nextSpawnIndex = if (_spawnIndex isEqualTo _spawnCount - 1) then { 0 } else { _spawnIndex + 1 };
					_object setVariable ["DB101_spawnIndex", _nextSpawnIndex, false];
				},
				[_object, _spawnPoints, _unit, _eventID, _spawnCount],
				_respawnDelay
			] call CBA_fnc_waitAndExecute;
		};
	},
	[_eventID, _object, _spawnPoints, _spawnCount, _respawnDelay]
] call CBA_fnc_addEventHandlerArgs;

[
	{
		params ["_eventID", "_object", "_spawnPoints", "_spawnCount", "_aircraft"];

		{
			private _spawnIndex = _object getVariable "DB101_spawnIndex";
			private _spawnPoint = _spawnPoints select _spawnIndex;
			private _spawned = [_x, _spawnPoint] call DB101_AircraftSpawner_fnc_spawn;
			_spawned setVariable ["DB101_eventID", _eventID];

			_spawned addEventHandler ["Killed", {
				params ["_unit"];
				[(_unit getVariable "DB101_eventID"), [_unit]] call CBA_fnc_localEvent;
			}];

			private _nextSpawnIndex = if (_spawnIndex isEqualTo _spawnCount - 1) then { 0 } else { _spawnIndex + 1 };
			_object setVariable ["DB101_spawnIndex", _nextSpawnIndex, false];
		} forEach (_aircraft select { !(_x isEqualTo "NONE") });
	},
	[_eventID, _object, _spawnPoints, _spawnCount, _aircraft],
	2
] call CBA_fnc_waitAndExecute;
