Params ["_projectile"];

private _bPos = [-50001, 500001, 500001];

While {alive _projectile} do {

_bPos = getPosATL _projectile;

};

[_bPos, 500, 300, false] call zen_modules_fnc_moduleNukeLocal;