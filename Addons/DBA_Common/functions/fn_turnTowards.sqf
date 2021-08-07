params ["_object", "_target", "_duration", ["_easeIn", true], ["_easeOut", true], ["_pitch", false], ["_bank", false]];

private _dirOffset = (typeOf _object) call DB101_Hyperspace_fnc_getShipDirOffset;

private _startDir = getDir _object;
private _endDir = (_object getDir _target) + _dirOffset + 180;
private _diffTurn = _endDir - _startDir;

(_object call BIS_fnc_getPitchBank) params ["_startPitch", "_startBank"];
_pitch = if (_pitch isEqualTo false) then { _startPitch } else { _pitch };
_bank = if (_bank isEqualTo false) then { _startBank } else { _bank };
private _diffPitch = _pitch - _startPitch;
private _diffBank = _bank - _startBank;

(_object call BIS_fnc_getPitchBank) params ["_startPitch", "_startBank"];

if (MEU_Common_Debug) then
{
	diag_log format ["DBA_Common_fnc_turnTowards: [%1, %2, %3]", _startDir, _endDir, _diffTurn];
};

// If we're turning more than 180 degrees, it's faster to go the other way
if (_diffTurn > 180) then
{
	_diffTurn = _diffTurn - 360;
};

private _timeFrom = CBA_missionTime;
private _timeTo = _timeFrom + _duration;

private ["_t", "_easedDir", "_easedPitch", "_easedBank", "_curDir", "_curPitch", "_curBank"];

private _handle = [{
	params ["_args"];
	_args params ["_object", "_dirOffset", "_startDir", "_endDir", "_timeFrom", "_timeTo", "_diffTurn", "_duration", "_easeIn", "_easeOut", "_startPitch", "_pitch", "_diffPitch", "_startBank", "_bank", "_diffBank"];

	private _t = CBA_missionTime - _timeFrom;
	
	if (_easeIn and _easeOut) exitWith
	{
		_easedDir = [_t, _startDir, _diffTurn, _duration] call DBA_Common_fnc_easeInOut;
		_object setDir _easedDir;

		_easedPitch = [_t, _startPitch, _diffPitch, _duration] call DBA_Common_fnc_easeInOut;
		_easedBank = [_t, _startBank, _diffBank, _duration] call DBA_Common_fnc_easeInOut;
		[_object, _easedPitch, _easedBank] call BIS_fnc_setPitchBank;
	};
	
	if (_easeIn) exitWith
	{
		_easedDir = [_t, _startDir, _diffTurn, _duration] call DBA_Common_fnc_easeIn;
		_object setDir _easedDir;

		_easedPitch = [_t, _startPitch, _diffPitch, _duration] call DBA_Common_fnc_easeIn;
		_easedBank = [_t, _startBank, _diffBank, _duration] call DBA_Common_fnc_easeIn;
		[_object, _easedPitch, _easedBank] call BIS_fnc_setPitchBank;
	};
	
	if (_easeOut) exitWith
	{
		_easedDir = [_t, _startDir, _diffTurn, _duration] call DBA_Common_fnc_easeOut;
		_object setDir _easedDir;

		_easedPitch = [_t, _startPitch, _diffPitch, _duration] call DBA_Common_fnc_easeOut;
		_easedBank = [_t, _startBank, _diffBank, _duration] call DBA_Common_fnc_easeOut;
		[_object, _easedPitch, _easedBank] call BIS_fnc_setPitchBank;
	};

	_curDir = linearConversion [_timeFrom, _timeTo, CBA_missionTime, _startDir, _endDir, true];
	_object setDir _curDir;

	_curPitch = linearConversion [_startTime, _endTime, CBA_missionTime, _startPitch, _pitch, true];
	_curBank = linearConversion [_startTime, _endTime, CBA_missionTime, _startBank, _bank, true];
	[_object, _curPitch, _curBank] call BIS_fnc_setPitchBank;
}, 0, [_object, _dirOffset, _startDir, _endDir, _timeFrom, _timeTo, _diffTurn, _duration, _easeIn, _easeOut, _startPitch, _pitch, _diffPitch, _startBank, _bank, _diffBank]] call CBA_fnc_addPerFrameHandler;

[
	{
		params ["_handle", "_object", "_endDir"];
		_handle call CBA_fnc_removePerFrameHandler;
		_object setDir _endDir;
	},
	[_handle, _object, _endDir],
	_duration
] call CBA_fnc_waitAndExecute;
