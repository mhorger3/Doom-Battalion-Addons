
sleep 1;
private ["_v", "_lv", "_laser"];
private ["_objects"];
private ["_avPos", "_avNeg", "_sm"];
private ["_speed", "_speedStart", "_speedEnd", "_speedDir"];
private ["_minPosWalkSpeed", "_minNegWalkSpeed"];
private ["_sleepAlive", "_sleepEngineOn"];
private ["_timeStart", "_timeEnd", "_timeDiff"];
private ["_maxspeed", "_curspeed", "_newspeed", "_vel", "_dir"];

private ["_num"];
private ["_fpos", "_footprint"];

// _v allowDamage false;
if (!is3DEN) then {
	_v = _this select 0;

	if (isNull _v) exitWith {};

	_objects = attachedObjects _v;
	// hintsilent str _objects;
	_lv = _objects select 0;
	// _laser = _objects select 1;

	_avPos = 0.75;//positive animation value
	_avNeg = -0.75;//negative animation value
	_sm = 2.0;//speed multiplier - controls speed of animations

	//speed at which the walking animation starts
	_minPosWalkSpeed = 0.5;
	_minNegWalkSpeed = -0.5;

	/* used to check if speed is decreasing */
	_speedStart = 0;
	_speedEnd = 0;
	_speedDir = 0;

	_sleepAlive = 1.0;
	_sleepEngineOn = 0.25;

	_fpos = "footprint_right";// memorypoint for spawning footprints

	#include "walking_sequence.inc.sqf";
};