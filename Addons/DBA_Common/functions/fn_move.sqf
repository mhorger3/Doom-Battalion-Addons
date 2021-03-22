params ["_object", "_waypoints"];

private _eventID = call DB101_Hyperspace_fnc_generateID;

[
	_eventID,
	{
		_thisArgs params ["_object", "_waypoints", "_eventID"];

		private _lastWaypoint = _waypoints deleteAt 0;
		_lastWaypoint params ["_position", "_duration", ["_easeOut", false]];

		if (count _waypoints == 0) then {
			[_thisType, _thisId] call CBA_fnc_removeEventHandler;
		}
		else
		{
			private _next = _waypoints select 0;
			_next params ["_position", "_duration", ["_easeOut", false], ["_easeIn", false]];

			if (_duration == 0) exitWith {};

			[_object, _position, _duration, _eventID, _easeOut, _easeIn] call DBA_Common_fnc_moveTowards;
		};
	},
	[_object, _waypoints, _eventID]
] call CBA_fnc_addEventHandlerArgs;

private _next = _waypoints select 0;
_next params ["_position", "_duration", ["_easeOut", false]];
[_object, _position, _duration, _eventID, _easeOut] call DBA_Common_fnc_moveTowards;
