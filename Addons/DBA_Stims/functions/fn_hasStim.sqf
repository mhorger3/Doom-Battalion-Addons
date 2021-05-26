params ["_player"];

private _hasStim = false;

{
	if ([_player, _x] call ace_common_fnc_hasItem) then
	{
		_hasStim = true;
	};
} forEach [
	"JLTS_drugs_stimulant_adrenal",
	"JLTS_drugs_stimulant_battle"
];

_hasStim
