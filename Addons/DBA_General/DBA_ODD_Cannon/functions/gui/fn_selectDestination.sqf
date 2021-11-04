params ["_values"];

_values params ["_control", "_button", "_x", "_y", "_shift", "_ctrl", "_alt"];

// Only respond on left click
if (_button != 0) exitWith {};

private _position = _control ctrlMapScreenToWorld [_x, _y];
missionNamespace setVariable ["DBA_ODD_Cannon_destination", _position, true];

deleteMarkerLocal "DBA_ODD_Cannon_destination";
private _marker = createMarkerLocal ["DBA_ODD_Cannon_destination", [0, 0, 0]];
_marker setMarkerColorLocal "colorYELLOW";
_marker setMarkerTypeLocal "mil_end";
_marker setMarkerTextLocal "ODD Destination";
"DBA_ODD_Cannon_destination" setMarkerPos _position;
