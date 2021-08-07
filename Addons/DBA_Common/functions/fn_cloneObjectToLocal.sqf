params ["_object"];

if (DBA_Common_Debug) then
{
	diag_log format ["DEBUG_fn_cloneObjectToLocal: [%1]", _object];
};

private _localObject = (typeOf _object) createVehicleLocal (getPosASL _object);
_localObject setPosASL (getPosASL _object);
_localObject setVectorDirAndUp [(vectorDir _object), (vectorUp _object)];
(_object call BIS_fnc_getPitchBank) params ["_pitch", "_bank"];
[_localObject, _pitch, _bank] call BIS_fnc_setPitchBank;

_localObject
