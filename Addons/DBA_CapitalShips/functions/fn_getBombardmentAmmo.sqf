params ["_ship"];

private _ammo = getText (configFile >> "CfgVehicles" >> (typeOf _ship) >> "DBA_ammo");

if (_ammo isEqualTo "") then
{
	"DBA_CapitalShip_Ammo_Red"
}
else
{
	_ammo
}
