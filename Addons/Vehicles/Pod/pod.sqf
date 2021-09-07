params ["_this"]; 

if (local _this) then {[_this, "", [], false] call bis_fnc_initVehicle;};
["GetInMan", {(_this select 0) allowDamage false;}];
["GetOutMan", {(_this select 0) allowDamage true;}];