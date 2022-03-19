#define DISPLAY 1295
#define ALTITUDE_SLIDER 1900
#define MOVE_DURATION_SLIDER 1901
#define TURN_DURATION_SLIDER 1902

private _altitude = sliderPosition ((findDisplay DISPLAY) displayCtrl ALTITUDE_SLIDER);
private _destination = missionNamespace getVariable ["DBA_CS_destination", nil];
private _moveDuration = sliderPosition ((findDisplay DISPLAY) displayCtrl MOVE_DURATION_SLIDER);
private _turnDuration = sliderPosition ((findDisplay DISPLAY) displayCtrl TURN_DURATION_SLIDER);

missionNamespace setVariable ["DBA_CS_altitude", _altitude, true];
missionNamespace setVariable ["DBA_CS_moveDuration", _moveDuration, true];
missionNamespace setVariable ["DBA_CS_turnDuration", _turnDuration, true];

if (isNil "_destination") exitWith
{
	["Must set destination first"] spawn BIS_fnc_guiMessage;
};

hint format ["%1 moved the ship", name player];

private _ship = (nearestObjects [player, [
	"Acclamator",
	"Venator_MK2_Main"
], 500]) select 0;

[_ship, _destination, _moveDuration, _turnDuration, abs _altitude] remoteExecCall ["DBA_CapitalShips_fnc_moveShip", 2, false];

closeDialog 0;
