/*
 * Author: Ragwolf
 * Adapted from Crimzonkat's edits which allowed the script to be applied to any terrain/map of Tennesse Timmy's "Holomap" script (https://gist.github.com/Tennessee-Timmy/c205ae5f25c1fd6f14b953721ecf548e)
 * 
 * NOTES: Please provide proper credits to those who participate in development. This framework was developed for Legion Studios Core. 
 * Do not place in any other mod without permission.
 * 
 * Arguments:
 * 0: <OBJECT>: 	object that will be "projecting" the holomap
 * 1: <INTEGER>:   	[Optional] - Controls map particle colors and functions
 * 2: <NUMBER>: 	[Optional] - Scaling factor which controls "zoom" of the map
 * 3: <INTEGER>: 	[Optional] - 
 * 4: <NUMBER>:		[Optional] -
 *
 * Example:
 * [Bob] call ls_holomap_fnc_spawn;
 * [Bob, 0, 500, 1000, position Bob, 0.5] call ls_holomap_fnc_spawn; NOTE: This only creates actions for ONE client
 *
 * Return Value:
 * None
 *
 */
params [
	["_object", objNull, [objNull]],
	["_terrainMode", 1, [0]],
	["_heightScale", 5000, [0]],
	["_mapSize", worldSize, [0]],
	["_center", [worldSize / 2, worldSize / 2, 0], [[]], [3]]
];

// Don't need to spawn particles on server
if !(hasInterface) exitWith {};

private _projectedMapLength = 75;

private _holoHeight = [configFile >> "CfgVehicles" >> typeOf _object, "DB101_holoHeight", 0.5] call BIS_fnc_returnConfigEntry;

_object setVariable ["DB101_holoHeight", _holoHeight, true];
_object setVariable ["DB101_projectedMapLength", _projectedMapLength, true];
_object setVariable ["DB101_heightScale", _heightScale, true];
_object setVariable ["DB101_mapSize", _mapSize, true];
_object setVariable ["DB101_center", _center, true];
_object setVariable ["DB101_mapChanged", true, true];
_object setVariable ["DB101_particleSize", 0.03, true];
_object setVariable ["DB101_mapScale", 1, true];

// Already projecting, let the updated variables take effect
if (_object getVariable ["DB101_isProjecting", false]) exitWith {};

private _upscaleFactor = (_mapSize / _projectedMapLength);
private _particlePositionArray = [];
[_particlePositionArray, _object] call DB101_Holomap_fnc_calculateParticlePositions;

[
	{
		params ["_args", "_handle"];
		_args params ["_particlePositionArray","_upscaleFactor", "_object"];

		_object setVariable ["DB101_isProjecting", true, true];

		if (_object getVariable ["DB101_canProject", true]) then
		{
			// Disabled in CBA settings
			if !(DBA_Holomap_Enabled) exitWith {};

			if (_object getVariable ["DB101_mapMarkersEnabled", false]) then
			{
				_object call DB101_Holomap_fnc_updateMapMarkers;
			};

			if (_object getVariable "DB101_mapChanged") then
			{
				[_particlePositionArray, _object] call DB101_Holomap_fnc_calculateParticlePositions;
				
				if (_object getVariable ["DB101_mapMarkersEnabled", false]) then
				{
					_object call DB101_Holomap_fnc_drawMapMarkers;
				}
				else
				{
					_object call DB101_Holomap_fnc_hideMapMarkers;
				};

				_object setVariable ["DB101_mapChanged", false, true];
			};

			// Only create particles if closer than view distance
			if ((player distance _object < DBA_Holomap_ViewDistance) or (curatorCamera distance _object < DBA_Holomap_ViewDistance)) then
			{
				[_particlePositionArray, _upscaleFactor, _object] spawn
				{
					params ["_particlePositionArray", "_upscaleFactor", "_object"];

					private _terrainMode = _object getVariable ["DB101_terrainMode", 1];
					private _particleSize = _object getVariable "DB101_particleSize";
					private _mapScale = _object getVariable "DB101_mapScale";
					{
						[_x, _upscaleFactor, _object, _terrainMode, _particleSize, _mapScale] call DB101_Holomap_fnc_spawnParticle;
					} forEach _particlePositionArray;
				};

				if !(_object getVariable ["DBA_mapMarkersDrawn", false]) then
				{
					_object call DB101_Holomap_fnc_drawMapMarkers;
				};
			}
			else
			{
				call DB101_Holomap_fnc_hideMapMarkers;
			};
		}
		else
		{
			_handle call CBA_fnc_removePerFrameHandler;
			[_object, _particlePositionArray, _upscaleFactor] remoteExecCall ["DB101_Holomap_fnc_despawn", 0, false];
			[
				{
					params ["_object"];
					_object setVariable ["DB101_canProject", true, true];
					_object setVariable ["DB101_isProjecting", false, true];
				},
				[_object],
				5
			] call CBA_fnc_waitAndExecute;
		};
	},
	DBA_Holomap_RefreshTime,
	[_particlePositionArray, _upscaleFactor, _object]
] call CBA_fnc_addPerFrameHandler;
