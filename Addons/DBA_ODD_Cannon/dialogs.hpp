#define GUI_GRID_X	(0)
#define GUI_GRID_Y	(0)
#define GUI_GRID_W	(0.025)
#define GUI_GRID_H	(0.04)
#define GUI_GRID_WAbs	(1)
#define GUI_GRID_HAbs	(1)

class RscButton;
class RscCombo;
class RscMapControl;
class RscPicture;
class RscSlider;
class RscText;

class DBA_ODD_Cannon_Control_Dialog
{
    idd = 1295;
    movingEnable = 0;
    onLoad = "";
    controls[] =
    {
        "background",
        "title",
		"map",
        "launchDelayLabel",
        "launchDelay",
        "launchDelayText",
        "launchButton",
		"launchTypeLabel",
		"launchType",
		"cancelButton"
    };

	class background: RscPicture
	{
		idc = 1200;

		text = "#(argb,8,8,3)color(0,0,0,0.7)";
		x = 0.5 * GUI_GRID_W + GUI_GRID_X;
		y = 0.5 * GUI_GRID_H + GUI_GRID_Y;
		w = 40 * GUI_GRID_W;
		h = 24 * GUI_GRID_H;
	};
	class title: RscText
	{
		idc = 1003;

		text = "ODD Cannon Control"; //--- ToDo: Localize;
		x = 0.5 * GUI_GRID_W + GUI_GRID_X;
		y = 0.5 * GUI_GRID_H + GUI_GRID_Y;
		w = 39 * GUI_GRID_W;
		h = 1 * GUI_GRID_H;
		colorBackground[] = {0,0.5,0,0.8};
	};
	class map: RscMapControl
	{
		idc = 1800;
		x = 1 * GUI_GRID_W + GUI_GRID_X;
		y = 2 * GUI_GRID_H + GUI_GRID_Y;
		w = 38 * GUI_GRID_W;
		h = 18 * GUI_GRID_H;
		
		onMouseButtonDown = "[_this] call DBA_ODD_Cannon_fnc_selectDestination";
	};
	class launchDelay: RscSlider
	{
		idc = 1900;
		sliderPosition = 30;
		sliderRange[] = {1,120};
		sliderStep = 1;
		onSliderPosChanged = "['launchDelay', _this] call DBA_ODD_Cannon_fnc_sliderChanged";

		x = 1 * GUI_GRID_W + GUI_GRID_X;
		y = 23 * GUI_GRID_H + GUI_GRID_Y;
		w = 10 * GUI_GRID_W;
		h = 1 * GUI_GRID_H;
	};
	class launchDelayLabel: RscText
	{
		idc = 1005;

		text = "Launch Delay:"; //--- ToDo: Localize;
		x = 2 * GUI_GRID_W + GUI_GRID_X;
		y = 20 * GUI_GRID_H + GUI_GRID_Y;
		w = 6 * GUI_GRID_W;
		h = 3 * GUI_GRID_H;
	};
	class launchDelayText: RscText
	{
		idc = 1000;

		text = "30"; //--- ToDo: Localize;
		x = 8 * GUI_GRID_W + GUI_GRID_X;
		y = 20 * GUI_GRID_H + GUI_GRID_Y;
		w = 4 * GUI_GRID_W;
		h = 3 * GUI_GRID_H;
	};
	class launchTypeLabel: RscText
	{
		idc = 1006;

		text = "Launch Type:";
		x = 13 * GUI_GRID_W + GUI_GRID_X;
		y = 20 * GUI_GRID_H + GUI_GRID_Y;
		w = 6 * GUI_GRID_W;
		h = 3 * GUI_GRID_H;
	};
	class launchType: RscCombo
	{
		idc = 2900;

		x = 12 * GUI_GRID_W + GUI_GRID_X;
		y = 23 * GUI_GRID_H + GUI_GRID_Y;
		w = 10 * GUI_GRID_W;
		h = 1 * GUI_GRID_H;

		class Items
		{
			class Infantry
			{
				text = "Infantry";
				default = 1;
				value = 0;
			};

			class Resupply_AmmoBox
			{
				text = "Resupply [AmmoBox]";
				value = 1;
				data = "101st_AmmoBox_F";
			};

			class Resupply_Handgun
			{
				text = "Resupply [Handgun]";
				value = 1;
				data = "101st_Handgun_F";
			};

			class Resupply_Launcher
			{
				text = "Resupply [Launcher]";
				value = 1;
				data = "101st_Launcher_F";
			};

			class Resupply_Medical
			{
				text = "Resupply [Medical]";
				value = 1;
				data = "101st_Medical_F";
			};

			class Resupply_Explosive
			{
				text = "Resupply [Explosive]";
				value = 1;
				data = "101st_Explosive_F";
			};
		};
	};
	class launchButton: RscButton
	{
		idc = 1600;
		action = "call DBA_ODD_Cannon_fnc_launchButton";
		colorBackground[] = {0, 1, 0, 1};

		text = "Launch"; //--- ToDo: Localize;
		x = 34 * GUI_GRID_W + GUI_GRID_X;
		y = 21 * GUI_GRID_H + GUI_GRID_Y;
		w = 4 * GUI_GRID_W;
		h = 2 * GUI_GRID_H;
	};
	class cancelButton: RscButton
	{
		idc = 1601;
		action = "call DBA_ODD_Cannon_fnc_cancelButton";
		colorBackground[] = {1, 0, 0, 1};

		text = "Cancel"; //--- ToDo: Localize;
		x = 34 * GUI_GRID_W + GUI_GRID_X;
		y = 23 * GUI_GRID_H + GUI_GRID_Y;
		w = 4 * GUI_GRID_W;
		h = 1 * GUI_GRID_H;
	};
};
