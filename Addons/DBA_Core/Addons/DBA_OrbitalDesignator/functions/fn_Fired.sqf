Params ["_projectile"];

private _bPos = [-50001, 500001, 500001];

While {alive _projectile} do {

_bPos = getPosATL _projectile;

};

private _laser = createVehicle ["DBA_LaserTarget", _bPos, [], 0, "CAN_COLLIDE"];
sleep 5;
deleteVehicle _laser;