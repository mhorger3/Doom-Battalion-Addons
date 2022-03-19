params ["_target"];

[_target, "Beep_Target"] remoteExec ["say3D", 0, false];

openMap true;

hint localize "str_101st_Holomap_ClickMapArea";

_target onMapSingleClick
{
	[_this, "readoutClick"] remoteExec ["say3D", 0, false];
	hintSilent "";       // Hide the hint
	onMapSingleClick ""; // Remove the map click listener
	openMap false;       // Close the map
	[_this, 1, 500, 1000, _pos] remoteExecCall ["DB101_Holomap_fnc_spawn", 0, false];
};
