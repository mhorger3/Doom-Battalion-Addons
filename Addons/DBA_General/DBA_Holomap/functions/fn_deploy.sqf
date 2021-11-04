params [
	["_player", objNull, [objNull]]
];

[_player, "putDown"] remoteExec ["playAction", 0, false];
_player removeItem "101st_Portable_Holomap";
private _puck = createVehicle ["101st_GH_Portable_Holomap", (_player getRelPos [3, 0]), [], 0, "CAN_COLLIDE"];
_puck setDamage 1; // Make it so puck can't be picked up like a normal inventory item
[_puck, true, "101st_Portable_Holomap"] remoteExecCall ["DB101_Holomap_fnc_create", 0, false];
[_puck, 1, 500, 1000, position _puck, 0.5] remoteExecCall ["DB101_Holomap_fnc_spawn", 0, false];
