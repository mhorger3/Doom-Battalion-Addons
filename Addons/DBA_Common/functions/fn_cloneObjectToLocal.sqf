params ["_object"];

if (DBA_Common_Debug) then
{
	diag_log format ["DEBUG_fn_cloneObjectToLocal: [%1]", _object];
};

private _localObject = (typeOf _object) createVehicleLocal (getPosASL _object);
_localObject setPosASL (getPosASL _object);
_localObject setDir (getDir _object);
(_object call DBA_Common_fnc_getPitchBank) params ["_pitch", "_bank"];
[_localObject, _pitch, _bank] call DBA_Common_fnc_setPitchBank;

_localObject
