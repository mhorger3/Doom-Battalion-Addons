params ["_object", "_pitch", "_bank", "_duration", ["_easeIn", false], ["_easeOut", false]];

private _startTime = CBA_missionTime;
private _endTime = CBA_missionTIme + _duration;

(_object call DBA_Common_fnc_getPitchBank) params ["_startPitch", "_startBank"];
private _diffPitch = _pitch - _startPitch;
private _diffBank = _bank - _startBank;

private ["_t", "_easedPitch", "_easedBank", "_curPitch", "_curBank"];

private _handle = [{
	params ["_args"];
	_args params ["_object", "_startPitch", "_pitch", "_startBank", "_bank", "_startTime", "_endTime", "_easeIn", "_easeOut", "_diffPitch", "_diffBank", "_duration"];

	private _t = CBA_missionTime - _startTime;

	if (_easeIn and _easeOut) exitWith
	{
		_easedPitch = [_t, _startPitch, _diffPitch, _duration] call DBA_Common_fnc_easeInOut;
		_easedBank = [_t, _startBank, _diffBank, _duration] call DBA_Common_fnc_easeInOut;
		[_object, _easedPitch, _easedBank] call DBA_Common_fnc_setPitchBank;
	};

	if (_easeIn) exitWith
	{
		_easedPitch = [_t, _startPitch, _diffPitch, _duration] call DBA_Common_fnc_easeIn;
		_easedBank = [_t, _startBank, _diffBank, _duration] call DBA_Common_fnc_easeIn;
		[_object, _easedPitch, _easedBank] call DBA_Common_fnc_setPitchBank;
	};

	if (_easeOut) exitWith
	{
		_easedPitch = [_t, _startPitch, _diffPitch, _duration] call DBA_Common_fnc_easeOut;
		_easedBank = [_t, _startBank, _diffBank, _duration] call DBA_Common_fnc_easeOut;
		[_object, _easedPitch, _easedBank] call DBA_Common_fnc_setPitchBank;
	};

	_curPitch = linearConversion [_startTime, _endTime, CBA_missionTime, _startPitch, _pitch, true];
	_curBank = linearConversion [_startTime, _endTime, CBA_missionTime, _startBank, _bank, true];
	[_object, _curPitch, _curBank] call DBA_Common_fnc_setPitchBank;
}, 0, [_object, _startPitch, _pitch, _startBank, _bank, _startTime, _endTime, _easeIn, _easeOut, _diffPitch, _diffBank, _duration]] call CBA_fnc_addPerFrameHandler;

[
	{
		params ["_endTime", "_handle", "_object", "_pitch", "_bank"];

		_handle call CBA_fnc_removePerFrameHandler;
		[_object, _pitch, _bank] call DBA_Common_fnc_setPitchBank;
	},
	[_endTime, _handle, _object, _pitch, _bank],
	_duration
] call CBA_fnc_waitAndExecute;
