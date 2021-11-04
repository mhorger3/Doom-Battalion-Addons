/*
 * Author: Crimzonkat
 * Adapted from Tennesse Timmy's "Holomap" script (https://gist.github.com/Tennessee-Timmy/c205ae5f25c1fd6f14b953721ecf548e)
 * Optimization, scaling, and sizing edits made by Ragwolf
 * 
 * NOTES: Please provide proper credits to those who participate in development. This framework was developed for Legion Studios Core. 
 * Do not place in any other mod without permission.
 * 
 * Arguments:
 * 0: <ARRAY>: 		Position Array [x,y,z]
 * 1: <INTEGER>:   	Controls scale and coloring of particles
 * 2: <OBJECT>: 	Object the particle is bound to
 * 3: <INTEGER>: 	Controls which color scheme the particle will be following
 * 4: <NUMBER>:		Size of particle
 * 5: <NUMBER>:		Controls the scale and coloring of particles
 *
 * Example:
 * [pos Liam, 2, LittleTimmy, 1, 0.0001, 500] call ls_holomap_fnc_spawnParticle;
 *
 * Return Value:
 * None
 *
 */
params ["_positionValues", "_scaleFactor", "_object", "_terrainMode", "_particleSize", "_mapScale"];
_positionValues params ["_pos", "_height", "_isCurrentPosition"];

private _color = [0, 0, 1, 1];
private _redIntensity = 0;
private _greenIntensity = 0;
private _blueIntensity = 0;

if (_isCurrentPosition) then
{
	_color = [1, 0, 0, 1];
}
else
{
	if(_terrainMode == 0) then {
		_redIntensity   = linearConversion [-100,  10,     _height, 1, 0, true];
		_greenIntensity = linearConversion [-100, 100, _height * 2, 0, 1, true];
		_blueIntensity  = linearConversion [ -10, 100,     _height, 0, 1, true];
	} else {
		_redIntensity   = linearConversion [-100,  10,                _height, 1, 0, true];
		_greenIntensity = linearConversion [-100, 100, _height * _scaleFactor, 0, 1, true];
		_blueIntensity  = linearConversion [ -10, 100,                _height, 1, 0, true];
	};

	_color set [0, _redIntensity];
	_color set [1, _greenIntensity];
	_color set [2, _blueIntensity];
};

private _particleScale = _particleSize * _mapScale;

drop
[
	"\A3\data_f\kouleSvetlo", // shapeName (p3dPath)
	"",						  //
	"Billboard",			  // type
	0,						  // timerPeriod
	6.2,					  // lifetime
	_pos,					  // position
	[0, 0, 0],				  // moveVelocity
	0,						  // rotationVelocity
	1.275,					  // weight
	1,						  // volume
	0,						  // rubbing
	[_particleScale, _particleScale, _particleScale, _particleScale, _particleScale], // size
	[_color],				  // color
	[0],					  // animationPhase
	0,						  // randomDirectionPeriod
	0,						  // randomDirectionIntensity
	"",						  // onTimer
	"",						  // beforeDestroy
	_object,				  // object
	0,						  // angle
	false,					  // onSurface
	-1,						  // bounceOnSurface
	[_color]				  // emissiveColor
];
