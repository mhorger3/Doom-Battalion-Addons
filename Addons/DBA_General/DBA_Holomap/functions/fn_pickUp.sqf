params ["_target", "_player"];

_target call DB101_Holomap_fnc_disable;
[_player, "putDown"] remoteExec ["playAction", 0, false];
private _portableObject = _target getVariable "DB101_portableObject";
_player addItem _portableObject;

// Wait until event handlers etc have been cleaned up before deleting object
[
	{
		params ["_target"];

		deleteVehicle _target;
	},
	[_target],
	DBA_Holomap_RefreshTime
] call CBA_fnc_waitAndExecute;
