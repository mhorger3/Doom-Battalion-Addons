/*
 * Author: Ragwolf
 * Calls the despawn particle function with appropriate color
 * Sound edits made by Crimzonkat
 *
 * NOTES: Please provide proper credits to those who participate in development. This script was developed for 101st Doom Battalion Aux. 
 * 
 * Arguments:
 * 0: <OBJECT>: 	Object "projecting" holomap
 * 1: <ARRAY>:   	Array of Arrays; dynamic terrain height samples
 * 2: <INTEGER>		Scaling factor
 *
 * Example:
 * [Billy, _arrayOfArrays, 2] call ls_holomap_fnc_despawn;
 *
 * Return Value:
 * None
 *
 */
params [
	["_object", objNull, [objNull]],
	["_particlePositionArray", [[]]],
	["_upscaleFactor", 1, [0]]
];

// Disabled in CBA settings
if !(DBA_Holomap_Enabled) exitWith {};

[_particlePositionArray, _upscaleFactor, _object] spawn
{
	params ["_particlePositionArray", "_upscaleFactor", "_object"];

	private _terrainMode = _object getVariable ["DB101_terrainMode", 1];
	private _particleSize = _object getVariable "DB101_particleSize";
	{
		[_x, _upscaleFactor, _object, _terrainMode, _particleSize] call DB101_Holomap_fnc_despawnParticle;
	} forEach _particlePositionArray;
};
