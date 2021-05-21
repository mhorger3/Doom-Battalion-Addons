#define DISPLAY 1295
#define LAUNCH_DELAY_SLIDER 1900

private _destination = missionNamespace getVariable ["DBA_ODD_Cannon_destination", nil];
private _launchDelay = sliderPosition ((findDisplay DISPLAY) displayCtrl LAUNCH_DELAY_SLIDER);

missionNamespace setVariable ["DBA_ODD_Cannon_launchDelay", _launchDelay, true];

if (isNil "_destination") exitWith
{
	["Must set destination first"] spawn BIS_fnc_guiMessage;
};

hint format ["%1 is firing the O.D.D cannon in %2 seconds", name player, _launchDelay];

[_destination, _launchDelay] call DBA_ODD_Cannon_fnc_launch;

closeDialog 0;
