params ["_type", "_startPos", "_startDir", "_destination", "_moveDuration", "_turnDuration", "_trigger", ["_thirdPersonCamera", true]];

if !(hasInterface) exitWith {};

// Create the local animated ship
private _localShip = [_type, _startPos, _startDir] call DB101_Hyperspace_fnc_createShip;
// Turn towards destination
[_localShip, _destination, _turnDuration] call DBA_Common_fnc_turnTowards;
// Move to altitude of destination
_startPos set [2, _destination # 2];
[_localShip, _startPos, _turnDuration, "", true, true] call DBA_Common_fnc_moveTowards;

private _cam = nil;

// If the player is in the ship area, create third person ship camera
if (_thirdPersonCamera) then
{
	if (player inArea _trigger) then
	{
		_cam = "camera" camCreate (_localShip getRelPos [1200, 180]);

		[
			{
				params ["_cam", "_localShip"];
				_cam camSetTarget _localShip;
				_cam camSetRelPos [-800, 1200, 200];
				_cam cameraEffect ["internal", "back"];
				_cam camCommit 1;
				_cam attachTo [_localShip, [-800, 1200, 200]];
			},
			[_cam, _localShip],
			0.001
		] call CBA_fnc_waitAndExecute;
	};
};

[
	{
		params ["_ship","_destination", "_moveDuration"];

		[_ship, _destination, _moveDuration, "", true, true] call DBA_Common_fnc_moveTowards;
	},
	[_localShip, _destination, _moveDuration],
	_turnDuration
] call CBA_fnc_waitAndExecute;

[
	{
		params ["_localShip", "_cam"];

		if !(isNil "_cam") then
		{
			_cam cameraEffect ["terminate", "back"]; 
			camDestroy _cam;
		};

		// Delete local ship
		deleteVehicle _localShip;
	},
	[_localShip, _cam],
	(_moveDuration + _turnDuration)
] call CBA_fnc_waitAndExecute;
