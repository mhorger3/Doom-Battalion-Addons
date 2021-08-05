params ["_ship"];

private _offset = switch (typeOf _ship) do
{
	case "442_acclamator_2": { 50 };
	case "442_arquitens": { 0 };
	case "442_quasar": { 0 };
	case "Venator_MK2": { 28 };
	case "442_munificent": { -40 };
	case "442_providence_zeus": { 65 };
	case "442_providence_d_zeus": { 230 };
	case "442_recusant_zeus": { 65 };
	case "442_recusant_zeus_d": { 65 };
	case "442_subjugator": { 300 };
	case "442_lucrehulk": { 0 };
	default { 0 };
};

_offset
