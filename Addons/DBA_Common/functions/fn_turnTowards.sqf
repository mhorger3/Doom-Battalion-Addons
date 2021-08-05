params ["_object", "_target", "_duration", ["_easeIn", true], ["_easeOut", true]];

private _dirOffset = (typeOf _object) call DB101_Hyperspace_fnc_getShipDirOffset;

private _startDir = (getDir _object) + _dirOffset;
private _endDir = (_object getDir _target) + _dirOffset + 180;
private _turnAmount = _endDir - _startDir;

// If we're turning more than 180 degrees, it's faster to go the other way
if (_turnAmount > 180) then
{
	_turnAmount = _turnAmount - 360;
};

private _timeFrom = CBA_missionTime;
private _timeTo = _timeFrom + _duration;

private _handle = [{
	params ["_args"];
	_args params ["_object", "_dirOffset", "_startDir", "_endDir", "_timeFrom", "_timeTo", "_turnAmount", "_duration", "_easeIn", "_easeOut"];

	private _t = CBA_missionTime - _timeFrom;
	
	if (_easeIn and _easeOut) exitWith
	{
		private _easedDir = [_t, _startDir, _turnAmount, _duration] call DBA_Common_fnc_easeInOut;
		_object setDir _easedDir;
	};
	
	if (_easeIn) exitWith
	{
		private _easedDir = [_t, _startDir, _turnAmount, _duration] call DBA_Common_fnc_easeIn;
		_object setDir _easedDir;
	};
	
	if (_easeOut) exitWith
	{
		private _easedDir = [_t, _startDir, _turnAmount, _duration] call DBA_Common_fnc_easeOut;
		_object setDir _easedDir;
	};

	private _curDir = linearConversion [_timeFrom, _timeTo, CBA_missionTime, _startDir, _endDir, true];
	_object setDir _curDir;
}, 0, [_object, _dirOffset, _startDir, _endDir, _timeFrom, _timeTo, _turnAmount, _duration, _easeIn, _easeOut]] call CBA_fnc_addPerFrameHandler;

[
	{
		params ["_handle", "_object", "_endDir"];
		_handle call CBA_fnc_removePerFrameHandler;
		_object setDir _endDir;
	},
	[_handle, _object, _endDir],
	_duration
] call CBA_fnc_waitAndExecute;
