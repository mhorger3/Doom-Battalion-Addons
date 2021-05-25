params ["_destination", "_launchDelay"];

private _console = missionNamespace getVariable ["DBA_ODD_Cannon_console", objNull];

if (isNull _console) exitWith
{
	hint "Error: No console";
};

private _launchers = _console getVariable ["DBA_linkedLaunchers", []];

if (_launchers isEqualTo []) exitWith
{
	hint "Error: No launchers linked to console";
};

[
	{
		params ["_launchers", "_destination"];

		private ["_syncedVehicles", "_launchVehicles", "_launchCrew"];
		hint "ODD Cannon launching now";

		{
			_x call DBA_ODD_Cannon_fnc_initLauncher;

			_syncedVehicles = synchronizedObjects _x;
			_launchVehicles = _syncedVehicles select { !(isNull (_x turretUnit [0])) };
			_launchCrew = [];
			{
				_launchCrew pushBack (_x turretUnit [0]);
			} forEach _launchVehicles;

			_x setVariable ["DBA_launchCrew", _launchCrew, true];
			_x setVariable ["DBA_launchIndex", 0, true];

			if !(_launchCrew isEqualTo []) then
			{
				_x commandArtilleryFire [_destination, "32Rnd_155mm_Mo_shells", (count _launchCrew)];
			};
		} forEach _launchers;
	},
	[_launchers, _destination],
	_launchDelay
] call CBA_fnc_waitAndExecute;

// Show countdown for all players near launch console
private _launchTime = CBA_missionTime + _launchDelay;
private _nearPlayers = allPlayers inAreaArray [getPosATL _console, 100, 100];

[
	{
		params ["_args", "_handle"];
		_args params ["_launchTime", "_nearPlayers"];

		if (CBA_missionTime > _launchTime) exitWith
		{
			hintSilent "";
			_handle call CBA_fnc_removePerFrameHandler;
		};

		[format ["ODD Cannon launching in %1 seconds", ceil (_launchTime - CBA_missionTime)]] remoteExec ["hint", _nearPlayers];
	},
	1,
	[_launchTime, _nearPlayers]
] call CBA_fnc_addPerFrameHandler;
