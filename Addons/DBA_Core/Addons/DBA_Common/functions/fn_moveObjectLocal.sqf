params ["_object", "_position", "_moveDuration", "_turnDuration", ["_easeIn", false], ["_easeOut", false], ["_turnTowards", false], ["_turnFirst", false], ["_variableName", ""]];

if (DBA_Common_Debug) then
{
	diag_log format ["DEBUG_fn_moveObjectLocal: [%1, %2, %3]", _object, _position, _moveDuration];
};

// Don't run on dedicate server (only for clients)
// if !(hasInterface) exitWith {};

private _localObject = _object call DBA_Common_fnc_cloneObjectToLocal;

if !(_variableName isEqualTo "") then
{
	localNamespace setVariable [_variableName, _localObject];
};

if (DBA_Common_Debug) then
{
	diag_log format ["DEBUG_fn_moveObjectLocal: _localObject = %1", _localObject];
};

if (_turnTowards) then
{
	[_localObject, _position, _turnDuration, _easeIn, _easeOut] call DBA_Common_fnc_turnTowards;
};

private _moveDelay = if (_turnFirst) then { _turnDuration } else { 0 };

[
	{
		params ["_localObject", "_position", "_moveDuration", "_easeOut", "_easeIn"];
		[_localObject, _position, _moveDuration, "", _easeOut, _easeIn] call DBA_Common_fnc_moveTowards;
	},
	[_localObject, _position, _moveDuration, _easeOut, _easeIn],
	_moveDelay
] call CBA_fnc_waitAndExecute;

[
	{
		params ["_object", "_localObject"];
		deleteVehicle _localObject;
	},
	[_object, _localObject],
	_moveDuration + _moveDelay
] call CBA_fnc_waitAndExecute;
