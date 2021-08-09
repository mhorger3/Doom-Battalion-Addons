Params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile"];

private _ammoUsed = _ammo select 4;

if (getNumber(configFile >> "CfgAmmo" >> _ammoUsed >> "DBA_IsDesignator") != 1) exitWith {};

While {alive _projectile} do {

private _bPos = getPosATL _projectile;
sleep 1;

};

_target = createVehicle ["DBA_LaserTarget", _bPos, [], 0, "NONE"];