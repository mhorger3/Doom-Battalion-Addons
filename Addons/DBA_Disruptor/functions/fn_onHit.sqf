params ["_target", "_shooter", "_projectile", "_position", "_velocity", "_selection", "_ammo", "_vector", "_radius", "_surfaceType", "_isDirect"];

if (!alive _target) exitWith {};

private _ammoUsed = _ammo select 4;

if (getNumber(configFile >> "CfgAmmo" >> _ammoUsed >> "DBA_isDisruptorRound") != 1) exitWith {};
if (getNumber(configFile >> "CfgVehicles" >> (typeOf _target) >> "DBA_isDisruptorImmune") == 1) exitWith {};

[_target, _ammoUsed] call DBA_Disruptor_fnc_onHitDisruptorRound;
