Params ["_projectile", "_ammo"];

private _bPos = [-50001, 500001, 500001];

While {alive _projectile} do {

_bPos = getPosATL _projectile;

};

private _AmmoResupply = createVehicle ["DBA_AmmoBox_Handgun_F", _bPos, [], 0, "CAN_COLLIDE"];