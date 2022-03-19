#define DISPLAY 1295
#define LAUNCH_DELAY_TEXT 1000

params ["_slider", "_values"];

private ["_text"];

switch (_slider) do
{
	case "launchDelay": {
		_text = (findDisplay DISPLAY) displayCtrl LAUNCH_DELAY_TEXT;
		_text ctrlSetText str (_values select 1);
	};
	default {};
};
