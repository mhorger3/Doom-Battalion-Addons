params ["_ship"];

private _altitude = (getPos _ship) # 2;

private _offset = switch (typeOf _ship) do
{
	case "DBA_CapitalShips_Acclamator": { [0, 0, 50] };
	case "DBA_CapitalShips_Arquitens": { [0, 0, 0] };
	case "DBA_CapitalShips_Quasar": { [0, 0, 0] };
	case "DBA_CapitalShips_Venator": { [0, 0, 28] };
	case "DBA_CapitalShips_Munificent": { [0, 0, -40] };
	case "DBA_CapitalShips_Providence": { [0, 0, 65] };
	case "DBA_CapitalShips_Providence_Dreadnought": { [0, 0, 230] };
	case "DBA_CapitalShips_Recusant": { [0, 0, 65] };
	case "DBA_CapitalShips_Recusant_Dreadnought": { [0, 0, 65] };
	case "DBA_CapitalShips_Subjugator": { [0, 0, 300] };
	case "DBA_CapitalShips_Lucrehulk": { [0, 0, 0] };
	default { [0, 0, 0] };
};

// Use modelToWorld to get accurate positions on the x/y axes
private _position = _ship modelToWorld _offset;
// Change Z offset to use the altitude of the ship instead of offset from the center
_position set [2, (_altitude + (_offset # 2))];

_position
