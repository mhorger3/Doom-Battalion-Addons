params ["_object", "_position", "_duration", ["_eventID", ""], ["_easeOut", false], ["_easeIn", false]];

if (DBA_Common_Debug) then
{
	diag_log format ["DEBUG_fn_moveTowards: [%1, %2, %3]", _object, _position, _duration];
};

private _startPos = getPosASL _object;
private _endPos = if (_position isEqualType []) then { _position } else { getPosASL _position };
private _timeFrom = time;
private _timeTo = _timeFrom + _duration;

private _diffX = (_endPos select 0) - (_startPos select 0);
private _diffY = (_endPos select 1) - (_startPos select 1);
private _diffZ = (_endPos select 2) - (_startPos select 2);

private ["_t", "_easedX", "_easedY", "_easedZ", "_curPos"];

private _handle = [{
	params ["_args"];
	_args params ["_object", "_startPos", "_endPos", "_timeFrom", "_timeTo", "_easeOut", "_easeIn", "_diffX", "_diffY", "_diffZ", "_duration"];

	private _t = time - _timeFrom;

	if (_easeIn and _easeOut) exitWith
	{
		_easedX = [_t, (_startPos select 0), _diffX, _duration] call DBA_Common_fnc_easeInOut;
		_easedY = [_t, (_startPos select 1), _diffY, _duration] call DBA_Common_fnc_easeInOut;
		_easedZ = [_t, (_startPos select 2), _diffZ, _duration] call DBA_Common_fnc_easeInOut;
		_object setPosASL [_easedX, _easedY, _easedZ];
	};

	if (_easeIn) exitWith
	{
		_easedX = [_t, (_startPos select 0), _diffX, _duration] call DBA_Common_fnc_easeIn;
		_easedY = [_t, (_startPos select 1), _diffY, _duration] call DBA_Common_fnc_easeIn;
		_easedZ = [_t, (_startPos select 2), _diffZ, _duration] call DBA_Common_fnc_easeIn;
		_object setPosASL [_easedX, _easedY, _easedZ];
	};

	if (_easeOut) exitWith
	{
		_easedX = [_t, (_startPos select 0), _diffX, _duration] call DBA_Common_fnc_easeOut;
		_easedY = [_t, (_startPos select 1), _diffY, _duration] call DBA_Common_fnc_easeOut;
		_easedZ = [_t, (_startPos select 2), _diffZ, _duration] call DBA_Common_fnc_easeOut;
		_object setPosASL [_easedX, _easedY, _easedZ];
	};

	_curPos = vectorLinearConversion [_timeFrom, _timeTo, time, _startPos, _endPos, true];
	_object setPosASL _curPos;
}, 0, [_object, _startPos, _endPos, _timeFrom, _timeTo, _easeOut, _easeIn, _diffX, _diffY, _diffZ, _duration]] call CBA_fnc_addPerFrameHandler;

[
	{
		params ["_timeTo", "_handle", "_object", "_endPos", "_eventID"];

		_handle call CBA_fnc_removePerFrameHandler;
		_object setPosASL _endPos;
		
		if !(_eventID isEqualTo "") then
		{
			_eventID call CBA_fnc_localEvent;
		};
	},
	[_timeTo, _handle, _object, _endPos, _eventID],
	_duration
] call CBA_fnc_waitAndExecute;
