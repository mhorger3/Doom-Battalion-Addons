/**
 * Author: Ragwolf
 * Checks whether a unit has a specific camo equipped.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Camo <STRING>
 *
 * Return Value:
 * Camo equipped <BOOL>
 *
 * Example:
 * [player, "Tropic"] call DBA_Camo_Changer_fnc_isCamoEquipped
 *
 * Public: No
 */
params ["_unit", "_camo"];

private _camoType = _unit getVariable ["DBA_camoType", (getText (configFile >> "CfgWeapons" >> (uniform _unit) >> "DBA_camoType"))];

(toLower _camo) isEqualTo (toLower _camoType)
