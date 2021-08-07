params ["_object", "_pitch", "_bank"];

[_object, _pitch, _bank] call BIS_fnc_setPitchBank;

_object setVariable ["DBA_pitchBank", [_pitch, _bank], true];
