params ["_unit", "_camo"];

private _camoType = _unit getVariable ["DBA_camoType", (getText (configFile >> "CfgWeapons" >> (uniform _unit) >> "DBA_camoType"))];

(toLower _camo) isEqualTo (toLower _camoType)
