params ["_target"];

[_target, "Beep_Target"] remoteExec ["say3D", 0, false];

_target remoteExecCall ["DB101_Holomap_fnc_spawn", 0, false];
