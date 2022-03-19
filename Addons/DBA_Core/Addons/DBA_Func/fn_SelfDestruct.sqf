Params ["_position"];
private _bPos = getPosATL _position;
private _boom =  createVehicle ["DBA_ImploderBlock_Ammo", _bPos, [], 0, "CAN_COLLIDE"];
_boom setDamage 1;
deleteVehicle _position;