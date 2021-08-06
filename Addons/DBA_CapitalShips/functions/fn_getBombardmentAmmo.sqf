params ["_ship"];

private _ammo = switch (typeOf _ship) do
{
	case "442_acclamator_2": { "DBA_CapitalShip_Ammo_Blue" };
	case "442_arquitens": { "DBA_CapitalShip_Ammo_Blue" };
	case "442_quasar": { "DBA_CapitalShip_Ammo_Blue" };
	case "Venator_MK2": { "DBA_CapitalShip_Ammo_Blue" };
	default { "DBA_CapitalShip_Ammo_Red" };
};

_ammo
