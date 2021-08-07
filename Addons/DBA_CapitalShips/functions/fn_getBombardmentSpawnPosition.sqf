params ["_ship"];

private _offset = switch (typeOf _ship) do
{
	case "442_acclamator_2": { [0, 0, 50] };
	case "442_arquitens": { [0, 0, 0] };
	case "442_quasar": { [0, 0, 0] };
	case "Venator_MK2": { [0, 0, 28] };
	case "DBA_Munificent": { [0, 0, -40] };
	case "442_providence_zeus": { [0, 0, 65] };
	case "442_providence_d_zeus": { [0, 0, 230] };
	case "442_recusant_zeus": { [0, 0, 65] };
	case "442_recusant_zeus_d": { [0, 0, 65] };
	case "442_subjugator": { [0, 0, 300] };
	case "442_lucrehulk": { [0, 0, 0] };
	default { [0, 0, 0] };
};

_ship modelToWorld _offset
