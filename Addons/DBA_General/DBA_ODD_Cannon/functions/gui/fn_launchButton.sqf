#define DISPLAY 1295
#define LAUNCH_DELAY_SLIDER 1900
#define LAUNCH_TYPE_COMBO 2900

private _destination = missionNamespace getVariable ["DBA_ODD_Cannon_destination", nil];

private _display = findDisplay DISPLAY;
private _launchDelay = sliderPosition (_display displayCtrl LAUNCH_DELAY_SLIDER);

private _launchTypeControl = _display displayCtrl LAUNCH_TYPE_COMBO;
private _launchTypeSel = lbCurSel _launchTypeControl;
private _launchType = _launchTypeControl lbValue _launchTypeSel;
private _launchData = _launchTypeControl lbData _launchTypeSel;

missionNamespace setVariable ["DBA_ODD_Cannon_launchDelay", _launchDelay, true];

if (isNil "_destination") exitWith
{
	["Must set destination first"] spawn BIS_fnc_guiMessage;
};

hint format ["%1 is firing the O.D.D cannon in %2 seconds", name player, _launchDelay];

[_destination, _launchDelay, _launchType, _launchData] call DBA_ODD_Cannon_fnc_launch;

closeDialog 0;
