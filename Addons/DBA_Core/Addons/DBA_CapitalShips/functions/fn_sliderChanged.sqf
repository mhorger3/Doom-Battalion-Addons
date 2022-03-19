#define DISPLAY 1295
#define ALTITUDE_TEXT 1000
#define MOVE_DURATION_TEXT 1001
#define TURN_DURATION_TEXT 1002

params ["_slider", "_values"];

private ["_text"];

switch (_slider) do
{
	case "altitude": {
		_text = (findDisplay DISPLAY) displayCtrl ALTITUDE_TEXT;
		_text ctrlSetText str (abs (_values select 1));
	};
	case "moveDuration": {
		_text = (findDisplay DISPLAY) displayCtrl MOVE_DURATION_TEXT;
		_text ctrlSetText str (_values select 1);
	};
	case "turnDuration": {
		_text = (findDisplay DISPLAY) displayCtrl TURN_DURATION_TEXT;
		_text ctrlSetText str (_values select 1);
	};
	default {};
};
