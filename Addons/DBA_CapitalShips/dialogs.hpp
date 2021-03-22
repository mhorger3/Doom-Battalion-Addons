#define GUI_GRID_X	(0)
#define GUI_GRID_Y	(0)
#define GUI_GRID_W	(0.025)
#define GUI_GRID_H	(0.04)
#define GUI_GRID_WAbs	(1)
#define GUI_GRID_HAbs	(1)

class RscButton;
class RscMapControl;
class RscPicture;
class RscSlider;
class RscText;

class DBA_CS_Control_Dialog
{
    idd = 1295;
    movingEnable = 0;
    onLoad = "call DBA_CapitalShips_fnc_controlSettingsOnLoad";
    controls[] =
    {
        "background",
        "title",
		"map",
        "altitudeLabel",
        "altitude",
        "altitudeText",
        "moveDurationLabel",
        "moveDuration",
        "moveDurationText",
        "turnDurationLabel",
        "turnDuration",
        "turnDurationText",
        "moveButton",
		"cancelButton"
    };

	class background: RscPicture
	{
		idc = 1200;

		text = "#(argb,8,8,3)color(0,0,0,0.7)";
		x = 0.5 * GUI_GRID_W + GUI_GRID_X;
		y = 0.5 * GUI_GRID_H + GUI_GRID_Y;
		w = 39 * GUI_GRID_W;
		h = 24 * GUI_GRID_H;
	};
	class title: RscText
	{
		idc = 1003;

		text = "Capital Ship Control"; //--- ToDo: Localize;
		x = 0.5 * GUI_GRID_W + GUI_GRID_X;
		y = 0.5 * GUI_GRID_H + GUI_GRID_Y;
		w = 39 * GUI_GRID_W;
		h = 1 * GUI_GRID_H;
		colorBackground[] = {0,0.5,0,0.8};
	};
	class map: RscMapControl
	{
		idc = 1800;
		x = 3 * GUI_GRID_W + GUI_GRID_X;
		y = 2 * GUI_GRID_H + GUI_GRID_Y;
		w = 36 * GUI_GRID_W;
		h = 18 * GUI_GRID_H;
		
		onMouseButtonDown = "[_this] call DBA_CapitalShips_fnc_selectDestination";
	};
	class altitude: RscSlider
	{
		idc = 1900;
		type=3;
		style=0;
		arrowEmpty="\A3\ui_f\data\gui\cfg\slider\arrowEmpty_ca.paa";
		arrowFull="\A3\ui_f\data\gui\cfg\slider\arrowFull_ca.paa";
		border="\A3\ui_f\data\gui\cfg\slider\border_ca.paa";
		thumb="\A3\ui_f\data\gui\cfg\slider\thumb_ca.paa";

		sliderPosition = -500;
		sliderRange[] = {-10000,-100};
		sliderStep = 10;
		onSliderPosChanged = "['altitude', _this] call DBA_CapitalShips_fnc_sliderChanged";

		x = 1 * GUI_GRID_W + GUI_GRID_X;
		y = 2 * GUI_GRID_H + GUI_GRID_Y;
		w = 1 * GUI_GRID_W;
		h = 22 * GUI_GRID_H;
	};
	class altitudeLabel: RscText
	{
		idc = 1006;

		text = "Altitude:"; //--- ToDo: Localize;
		x = 3 * GUI_GRID_W + GUI_GRID_X;
		y = 20 * GUI_GRID_H + GUI_GRID_Y;
		w = 7 * GUI_GRID_W;
		h = 3 * GUI_GRID_H;
	};
	class altitudeText: RscText
	{
		idc = 1000;

		text = "500"; //--- ToDo: Localize;
		x = 6 * GUI_GRID_W + GUI_GRID_X;
		y = 20 * GUI_GRID_H + GUI_GRID_Y;
		w = 4 * GUI_GRID_W;
		h = 3 * GUI_GRID_H;
	};
	class moveDuration: RscSlider
	{
		idc = 1901;
		sliderPosition = 30;
		sliderRange[] = {1,120};
		sliderStep = 1;
		onSliderPosChanged = "['moveDuration', _this] call DBA_CapitalShips_fnc_sliderChanged";

		x = 10 * GUI_GRID_W + GUI_GRID_X;
		y = 23 * GUI_GRID_H + GUI_GRID_Y;
		w = 10 * GUI_GRID_W;
		h = 1 * GUI_GRID_H;
	};
	class moveDurationLabel: RscText
	{
		idc = 1005;

		text = "Move Duration:"; //--- ToDo: Localize;
		x = 11 * GUI_GRID_W + GUI_GRID_X;
		y = 20 * GUI_GRID_H + GUI_GRID_Y;
		w = 6 * GUI_GRID_W;
		h = 3 * GUI_GRID_H;
	};
	class moveDurationText: RscText
	{
		idc = 1001;

		text = "30"; //--- ToDo: Localize;
		x = 17 * GUI_GRID_W + GUI_GRID_X;
		y = 20 * GUI_GRID_H + GUI_GRID_Y;
		w = 4 * GUI_GRID_W;
		h = 3 * GUI_GRID_H;
	};
	class turnDuration: RscSlider
	{
		idc = 1902;
		sliderPosition = 15;
		sliderRange[] = {1,60};
		sliderStep = 1;
		onSliderPosChanged = "['turnDuration', _this] call DBA_CapitalShips_fnc_sliderChanged";

		x = 21 * GUI_GRID_W + GUI_GRID_X;
		y = 23 * GUI_GRID_H + GUI_GRID_Y;
		w = 10 * GUI_GRID_W;
		h = 1 * GUI_GRID_H;
	};
	class turnDurationLabel: RscText
	{
		idc = 1004;

		text = "Turn Duration:"; //--- ToDo: Localize;
		x = 22 * GUI_GRID_W + GUI_GRID_X;
		y = 20 * GUI_GRID_H + GUI_GRID_Y;
		w = 6 * GUI_GRID_W;
		h = 3 * GUI_GRID_H;
	};
	class turnDurationText: RscText
	{
		idc = 1002;

		text = "15"; //--- ToDo: Localize;
		x = 28 * GUI_GRID_W + GUI_GRID_X;
		y = 20 * GUI_GRID_H + GUI_GRID_Y;
		w = 4 * GUI_GRID_W;
		h = 3 * GUI_GRID_H;
	};
	class moveButton: RscButton
	{
		idc = 1600;
		action = "call DBA_CapitalShips_fnc_moveButton";
		colorBackground[] = {0, 1, 0, 1};

		text = "Move"; //--- ToDo: Localize;
		x = 34 * GUI_GRID_W + GUI_GRID_X;
		y = 21 * GUI_GRID_H + GUI_GRID_Y;
		w = 4 * GUI_GRID_W;
		h = 2 * GUI_GRID_H;
	};
	class cancelButton: RscButton
	{
		idc = 1600;
		action = "call DBA_CapitalShips_fnc_cancelButton";
		colorBackground[] = {1, 0, 0, 1};

		text = "Cancel"; //--- ToDo: Localize;
		x = 34 * GUI_GRID_W + GUI_GRID_X;
		y = 23 * GUI_GRID_H + GUI_GRID_Y;
		w = 4 * GUI_GRID_W;
		h = 1 * GUI_GRID_H;
	};
};
