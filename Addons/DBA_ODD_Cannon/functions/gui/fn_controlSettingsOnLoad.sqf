#define DISPLAY 1295
#define LAUNCH_DELAY_TEXT 1000
#define LAUNCH_DELAY_SLIDER 1900

private _launchDelay = missionNamespace getVariable ["DBA_ODD_Cannon_launchDelay", 30];

[
	{
		!isNull (findDisplay DISPLAY)
	},
	{
		params ["_launchDelay"];

		private _display = (findDisplay DISPLAY);

		private _launchDelayText = _display displayCtrl LAUNCH_DELAY_TEXT;
		private _launchDelaySlider = _display displayCtrl LAUNCH_DELAY_SLIDER;

		_launchDelayText ctrlSetText str _launchDelay;
		_launchDelaySlider sliderSetPosition _launchDelay;

		_launchDelaySlider ctrlAddEventHandler ["SliderPosChanged", {
			params ["_control", "_newValue"];
			private _text = (findDisplay DISPLAY) displayCtrl LAUNCH_DELAY_TEXT;
			_text ctrlSetText str _newValue;
		}];
	},
	[_launchDelay]
] call CBA_fnc_waitUntilAndExecute;
