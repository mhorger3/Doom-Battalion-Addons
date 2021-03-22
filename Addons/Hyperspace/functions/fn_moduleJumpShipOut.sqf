params ["_object"];

// Don't execute on server
if !(hasInterface) exitWith {};

if (isNull _object) exitWith
{
	[objNull, "place on a ship"] call BIS_fnc_showCuratorFeedbackMessage;
};

[_object] remoteExecCall ["DB101_Hyperspace_fnc_jumpShipOut", 0, false];
