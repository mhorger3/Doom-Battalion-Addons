params ["_target"];

call DB101_Holomap_fnc_hideMapMarkers;

_target setVariable ["DB101_canProject", false, true];
