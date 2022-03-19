/*
 * Author: Ragwolf
 * Lets the holomap know a variable has changed, used for option selection actions for scroll wheel or ACE actions
 * Sound edits made by Crimzonkat
 *
 * NOTES: Please provide proper credits to those who participate in development. This script was developed for 101st Doom Battalion Aux. 
 * Used w/ permission from Ragwolf
 * 
 * Arguments:
 * 0: <OBJECT>: 	Object "projecting" holomap
 * 1: <STRING>:   	Object variable name
 * 2: <ANY>			Object variable value
 * 3: <STRING>		String reference to config of particluar sound
 *
 * Example:
 * [Billy, _arrayOfArrays, 2] call ls_holomap_fnc_despawn;
 *
 * Return Value:
 * None
 *
 */
params [
	["_holoMap", objNull, [objNull]],
	["_variable", "", [""]],
	"_value",
	["_sound", "beep", [""]]
];

_holoMap setVariable [_variable, _value, true];
_holoMap setVariable ["DB101_mapChanged", true, true];
[_holomap, _sound] remoteExec ["say3D", 0, false];
