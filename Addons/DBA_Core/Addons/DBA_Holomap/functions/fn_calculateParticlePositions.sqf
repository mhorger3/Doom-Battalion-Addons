/*
 * Author: Crimzonkat
 * Adapted to allow for dynamic mapping of all terrains from Tennesse Timmy's "Holomap" script (https://gist.github.com/Tennessee-Timmy/c205ae5f25c1fd6f14b953721ecf548e)
 * Optimization, scaling, and sizing edits made by Ragwolf
 * 
 * NOTES: Please provide proper credits to those who participate in development. This framework was developed for Legion Studios Core. 
 * Do not place in any other mod without permission.
 * 
 * Arguments:
 * 0: <ARRAY>: 		Array of Arrays; dynamic terrain height samples
 * 1: <OBJECT>:   	Used for identifying "_isCurrentPosition"
 *
 * Example:
 * [_arrayOfArrays, BillAndTed] call ls_holomap_fnc_calculateParticlePositions;
 *
 * Return Value:
 * None
 *
 */
params ["_particlePositionArray", "_object"];

// Delete all array elements
_particlePositionArray deleteRange [0, count _particlePositionArray];

private _modelPos = _object modelToWorld [0, 0, 0];
private _positionX = _modelPos select 0;
private _positionY = _modelPos select 1;

private _mapScale = _object getVariable "DB101_mapScale";
private _projectedMapLength = _object getVariable "DB101_projectedMapLength";
private _mapSize = _object getVariable "DB101_mapSize";
// Scales the map size to fix the number of map particles
private _upscaleFactor = (_mapSize / _projectedMapLength);
private _particleSpacingFactor = (0.01875 * _mapScale) - (1 / _upscaleFactor);
private _mapCenteredFactor = (_projectedMapLength * (0.01875 * _mapScale)) / 2;

private _center = _object getVariable "DB101_center";
private _xOffset = ((_center # 0) - (_mapSize / 2));
private _yOffset = ((_center # 1) - (_mapSize / 2));

private _holoHeight = _object getVariable "DB101_holoHeight";
private _heightScale = _object getVariable "DB101_heightScale";
private _lowestPosition = 100;
private _isCurrentPosition = false;

private _xPosition = (_positionX - _xOffset) / _upscaleFactor;
private _yPosition = (_positionY - _yOffset) / _upscaleFactor;

for "_xIndex" from 0 to _projectedMapLength do {
	for "_yIndex" from 0 to _projectedMapLength do {
		private _samplePositionHeight = getTerrainHeightASL [(_xIndex * _upscaleFactor) + _xOffset, (_yIndex * _upscaleFactor) + _yOffset];
		private _yFactor = _yIndex * _particleSpacingFactor - _mapCenteredFactor;
		private _xFactor = _xIndex * _particleSpacingFactor - _mapCenteredFactor;
		private _projectedParticleHeight = (_holoHeight + (_samplePositionHeight / (_heightScale / _mapScale)));

		if (_projectedParticleHeight < _lowestPosition) then
		{
			_lowestPosition = _projectedParticleHeight;
		};
		
		private _projectedParticlePosition = [
			(_xIndex / _upscaleFactor) + _xFactor,
			(_yIndex / _upscaleFactor) + _yFactor,
			_projectedParticleHeight
		];

		if ((abs(_xPosition - 1) < _xIndex and _xPosition + 1 > _xIndex) and (abs(_yPosition - 1) < _yIndex) and _yPosition + 1 > _yIndex) then
		{
			_isCurrentPosition = true;
		};

		{
			_x params ["_color", "_pos", "_dir", "_text", "_icon"];
			_pos params ["_xPos", "_yPos"];
			_xPos = (_xPos - _xOffset) / _upscaleFactor;
			_yPos = (_yPos - _yOffset) / _upscaleFactor;

			if ((abs(_xPos - 1) < _xIndex and _xPos + 1 > _xIndex) and (abs(_yPos - 1) < _yIndex) and _yPos + 1 > _yIndex) then
			{
				_x set [6, _projectedParticlePosition];
			};
		} forEach (localNamespace getVariable ["DBA_allMapMarkers", []]);

		_particlePositionArray pushBack [_projectedParticlePosition, _samplePositionHeight, _isCurrentPosition];
		_isCurrentPosition = false;
	};
};

// Adjust the positions so the lowest point is level with the projection height
if (_lowestPosition != _holoHeight) then
{
	private _heightDiff = _holoHeight - _lowestPosition;
	{
		_x params ["_pos"];
		_pos set [2, ((_pos # 2) + _heightDiff)];
	} forEach _particlePositionArray;
};