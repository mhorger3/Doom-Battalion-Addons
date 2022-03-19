params ["_ship"];

missionNamespace setVariable ["DBA_selectedShip", _ship, false];

[objNull, "ship selected"] call BIS_fnc_showCuratorFeedbackMessage;
