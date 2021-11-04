params ["_launcher"];

_launcher addEventHandler [
	"Fired",
	{
		params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_gunner"];

		private _crew = _unit getVariable ["DBA_launchCrew", []];

		if (_crew isEqualTo []) exitWith
		{
			hint "No units to launch.";
		};

		private _launchIndex = _unit getVariable ["DBA_launchIndex", -1];
		private _launchUnit = _crew select _launchIndex;

		if (isNil "_launchUnit") exitWith
		{
			hint "Invalid unit to launch.";
		};

		_unit setVariable ["DBA_launchIndex", _launchIndex + 1];

		[_projectile] remoteExec ["hideObjectGlobal", 2];

		[_launchUnit, _projectile] spawn
		{
			params ["_launchUnit", "_projectile"];

			// Give the projectile a second to leave the cannon
			sleep 1;

			_launchUnit allowDamage false;
			moveOut _launchUnit;
			_launchUnit switchMove "HaloFreeFall_non";

			_launchUnit setPosATL (_projectile modelToWorld [0, -3, -3]);
			
			while { alive _projectile && alive _launchUnit } do
			{
				private _velocity = velocity _projectile;
				_launchUnit setVelocity _velocity;

				if ((getPosATL _launchUnit) # 2 < 1000 && (_velocity # 2) < 0) exitWith {};
				sleep 0.01;
			};

			deleteVehicle _projectile;
			_launchUnit allowDamage true;

			// Make unit stand up on landing, currently ruined by jump pack script
			// waitUntil { ((getPosATL _launchUnit) # 2) < 1 };

			// _launchUnit switchMove "";
		};
	}
];
