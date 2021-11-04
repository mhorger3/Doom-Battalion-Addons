params ["_object", "_pitch", "_bank", "_duration", ["_easeIn", false], ["_easeOut", false]];

if (DBA_Common_Debug) then
{
	diag_log format ["DEBUG_fn_pitchBankLocal: %1", this];
};

private _localObject = _object call DBA_Common_fnc_cloneObjectToLocal;

[_localObject, _pitch, _bank, _duration, _easeIn, _easeOut] call DBA_Common_fnc_animatePitchBank;

[
	{
		params ["_object", "_localObject"];
		deleteVehicle _localObject;
	},
	[_object, _localObject],
	_duration
] call CBA_fnc_waitAndExecute;
