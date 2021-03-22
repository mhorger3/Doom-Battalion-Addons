params ["_laat"];

private _lp = _laat getVariable "101st_LAAT_Light";

if !(isNil "_lp") then
{
	deleteVehicle _lp;
	_laat setVariable ["101st_LAAT_Light", nil];
};
