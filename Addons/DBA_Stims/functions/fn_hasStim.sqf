params ["_player"];

private _hasStim = false;

{
	if ([_player, _x] call ace_common_fnc_hasItem) then
	{
		_hasStim = true;
	};
} forEach [
	"DBA_Stim_Adrenal",
	"DBA_Stim_Battle"
];

_hasStim
