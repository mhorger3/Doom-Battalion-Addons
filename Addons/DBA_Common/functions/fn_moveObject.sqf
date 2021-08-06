params ["_object", "_position", "_moveDuration", ["_turnDuration", 0], ["_easeIn", false], ["_easeOut", false], ["_turnTowards", false], ["_turnFirst", false], ["_variableName", ""]];

if (DBA_Common_Debug) then
{
	diag_log format ["DEBUG_fn_moveObject: [%1, %2, %3]", _object, _position, _moveDuration];
};

hideObjectGlobal _object;

[_object, _position, _moveDuration, _turnDuration, _easeIn, _easeOut, _turnTowards, _turnFirst, _variableName] remoteExecCall ["DBA_Common_fnc_moveObjectLocal", 0, false];

private _delay = if (_turnFirst) then { _moveDuration + _turnDuration } else { _moveDuration };

[
	{
		params ["_object", "_position", "_turnTowards"];
		if (_turnTowards) then
		{
			private _dirOffset = (typeOf _object) call DB101_Hyperspace_fnc_getShipDirOffset;
			_object setDir (_object getDir _position) + _dirOffset + 180;
		};
		_object setPosASL _position;
		_object hideObjectGlobal false;
	},
	[_object, _position, _turnTowards],
	_delay
] call CBA_fnc_waitAndExecute;
