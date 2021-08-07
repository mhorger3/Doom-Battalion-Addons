params ["_type"];

private _dirOffset = switch (_type) do
{
	case "442_acclamator_2": { DBA_Hyperspace_Offset_Acclamator };
	case "DBA_Munificent": { DBA_Hyperspace_Offset_Munificent };
	case "442_quasar": { DBA_Hyperspace_Offset_Quasar };
	case "CR90R": { DBA_Hyperspace_Offset_CR90 };
	case "land_hammerheadcorvette": { DBA_Hyperspace_Offset_Hammerhead };
	case "land_NebulonB": { DBA_Hyperspace_Offset_Nebulon };
	case "101st_BabyYoda": { 180 };
	case "land_cis_landing_ship": { DBA_Hyperspace_Offset_C9979 };
	default { DBA_Hyperspace_Offset_Default };
};

_dirOffset
