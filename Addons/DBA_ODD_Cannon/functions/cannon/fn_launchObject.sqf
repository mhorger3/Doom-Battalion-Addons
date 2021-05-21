params ["_destination", "_launchDelay", "_launchObject"];

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

// Just need one launcher for object
private _launcher = _launchers # 0;

_launcher setVariable ["DBA_launchObject", _launchObject];

_launcher addEventHandler [
	"Fired",
	{
		params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_gunner"];

		_unit removeEventHandler ["Fired", _thisEventHandler];

		private _launchObject = _unit getVariable "DBA_launchObject";

		[_projectile] remoteExec ["hideObjectGlobal", 2];
		
		[_launchObject, _projectile] spawn
		{
			params ["_launchObject", "_projectile"];

			// Give the projectile a second to leave the cannon
			sleep 1;

			private _object = _launchObject createVehicle (_projectile modelToWorld [0, -3, -3]);
			_object allowDamage false;

			while { alive _projectile && alive _object } do
			{
				private _velocity = velocity _projectile;
				_object setVelocity _velocity;

				if ((getPosATL _object) # 2 < 1000 && (_velocity # 2) < 0) exitWith {};
				sleep 0.01;
			};

			deleteVehicle _projectile;

			private _smoke = "SmokeShellYellow" createVehicle [0, 0, 0];
			_smoke attachTo [_object, [0, 0, 0]];

			waitUntil { ((getPosATL _object) # 2) < 1 };

			_object allowDamage true;
		};
	}
];

[
	{
		params ["_launcher", "_destination"];

		hint "ODD Cannon launching now";

		_launcher commandArtilleryFire [_destination, "32Rnd_155mm_Mo_shells", 1];
	},
	[_launcher, _destination],
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
