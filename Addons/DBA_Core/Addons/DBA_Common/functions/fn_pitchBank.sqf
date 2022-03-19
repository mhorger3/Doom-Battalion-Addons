params ["_object", "_pitch", "_bank", "_duration", ["_easeIn", false], ["_easeOut", false]];

if (DBA_Common_Debug) then
{
	diag_log format ["DEBUG_fn_pitchBank: %1", this];
};

hideObjectGlobal _object;

[_object, _pitch, _bank, _duration, _easeIn, _easeOut] remoteExecCall ["DBA_Common_fnc_pitchBankLocal", 0, false];

[
	{
		params ["_object", "_pitch", "_bank"];
		[_object, _pitch, _bank] call DBA_Common_fnc_setPitchBank;
		_object hideObjectGlobal false;
	},
	[_object, _pitch, _bank],
	_duration
] call CBA_fnc_waitAndExecute;
