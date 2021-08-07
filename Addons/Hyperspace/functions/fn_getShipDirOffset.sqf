params ["_type"];

private _dirOffset = switch (_type) do
{
	case "DBA_CapitalShips_Acclamator": { DBA_Hyperspace_Offset_Acclamator };
	case "DBA_CapitalShips_Munificent": { DBA_Hyperspace_Offset_Munificent };
	case "DBA_CapitalShips_Quasar": { DBA_Hyperspace_Offset_Quasar };
	case "101st_BabyYoda": { 180 };
	default { DBA_Hyperspace_Offset_Default };
};

_dirOffset
