#define DISPLAY 1295
#define ALTITUDE_TEXT 1000
#define ALTITUDE_SLIDER 1900
#define MOVE_DURATION_TEXT 1001
#define MOVE_DURATION_SLIDER 1901
#define TURN_DURATION_TEXT 1002
#define TURN_DURATION_SLIDER 1902

private _altitude = missionNamespace getVariable ["DBA_CS_altitude", -500];
private _moveDuration = missionNamespace getVariable ["DBA_CS_moveDuration", 30];
private _turnDuration = missionNamespace getVariable ["DBA_CS_turnDuration", 30];

[
	{
		!isNull (findDisplay DISPLAY)
	},
	{
		params ["_altitude", "_moveDuration", "_turnDuration"];

		private _display = (findDisplay DISPLAY);

		private _altitudeText = _display displayCtrl ALTITUDE_TEXT;
		private _altitudeSlider = _display displayCtrl ALTITUDE_SLIDER;

		_altitudeText ctrlSetText str abs _altitude;
		_altitudeSlider sliderSetPosition _altitude;

		_altitudeSlider ctrlAddEventHandler ["SliderPosChanged", {
			params ["_control", "_newValue"];
			private _text = (findDisplay DISPLAY) displayCtrl ALTITUDE_TEXT;
			_text ctrlSetText str _newValue;
		}];

		private _moveDurationText = _display displayCtrl MOVE_DURATION_TEXT;
		private _moveDurationSlider = _display displayCtrl MOVE_DURATION_SLIDER;

		_moveDurationText ctrlSetText str _moveDuration;
		_moveDurationSlider sliderSetPosition _moveDuration;

		_moveDurationSlider ctrlAddEventHandler ["SliderPosChanged", {
			params ["_control", "_newValue"];
			private _text = (findDisplay DISPLAY) displayCtrl MOVE_DURATION_TEXT;
			_text ctrlSetText str _newValue;
		}];

		private _turnDurationText = _display displayCtrl TURN_DURATION_TEXT;
		private _turnDurationSlider = _display displayCtrl TURN_DURATION_SLIDER;

		_turnDurationText ctrlSetText str _turnDuration;
		_turnDurationSlider sliderSetPosition _turnDuration;

		_turnDurationSlider ctrlAddEventHandler ["SliderPosChanged", {
			params ["_control", "_newValue"];
			private _text = (findDisplay DISPLAY) displayCtrl TURN_DURATION_TEXT;
			_text ctrlSetText str _newValue;
		}];
	},
	[_altitude, _moveDuration, _turnDuration]
] call CBA_fnc_waitUntilAndExecute;
