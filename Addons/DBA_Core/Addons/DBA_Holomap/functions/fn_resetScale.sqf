params ["_target"];

hint format [localize "str_101st_Holomap_Scale", 1];

[_target, "DB101_mapScale", 1] call DB101_Holomap_fnc_setVariable;
