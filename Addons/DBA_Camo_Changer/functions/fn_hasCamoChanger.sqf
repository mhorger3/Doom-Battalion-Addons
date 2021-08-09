params ["_player", "_template"];

private _config = configFile >> "CfgWeapons" >> (uniform _player);
private _hasCamoChanger = getNumber (_config >> "DBA_hasCamoChanger") isEqualTo 1;
private _uniformMatchesTemplate = getText (_config >> "DBA_camoTemplate") isEqualTo _template;

_hasCamoChanger && _uniformMatchesTemplate
