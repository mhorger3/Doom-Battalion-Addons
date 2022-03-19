Params ["_projectile", "_ammo"];

private _bPos = [-50001, 500001, 500001];

if (getNumber(configFile >> "CfgAmmo" >> _ammo >> "DBA_isNuke") != 1) exitWith {};

While {alive _projectile} do {

_bPos = getPosATL _projectile;

};

[_bPos, 500, 300, false] call zen_modules_fnc_moduleNukeLocal;