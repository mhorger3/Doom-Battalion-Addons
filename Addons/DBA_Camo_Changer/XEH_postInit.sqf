// When player loadout changes check if we need to reload camo template.
[
	"loadout",
	{
		private _currentTemplate = player getVariable ["DBA_camoTemplate", ""];
		private _newTemplate = getText (configFile >> "CfgWeapons" >> (uniform player) >> "DBA_camoTemplate");

		if (_currentTemplate isEqualTo _newTemplate) exitWith {};

		call DBA_Camo_Changer_fnc_addInteractions;
		player setVariable ["DBA_camoTemplate", _newTemplate];
	},
	true
] call CBA_fnc_addPlayerEventHandler;
