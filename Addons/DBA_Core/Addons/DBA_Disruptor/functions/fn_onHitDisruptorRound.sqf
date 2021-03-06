params["_target", "_ammo"];

private _lastStunTime = _target getVariable ["DBA_lastStunTime", -1000];
if (CBA_missionTime < _lastStunTime + DBA_Disruptor_Cooldown) exitWith {};
_target setVariable ["DBA_lastStunTime", CBA_missionTime];

private _stunDuration = getNumber(configFile >> "CfgAmmo" >> _ammo >> "DBA_disruptDuration");

{
	_x disableAI "all";
} forEach (crew _target);

private _hitGunDamage = _target getHitPointDamage "hitGun";
_target setHitPointDamage ["hitGun", 1];
_target engineOn false;

[
	{
		params ["_target", "_hitGunDamage"];

		{
			_x enableAI "all";
		} forEach (crew _target);

		_target setHitPointDamage ["hitGun", _hitGunDamage];
	},
	[_target, _hitGunDamage],
	_stunDuration
] call CBA_fnc_waitAndExecute;
