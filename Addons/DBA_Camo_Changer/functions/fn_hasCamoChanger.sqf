/**
 * Author: Ragwolf
 * Checks whether a unit is wearing a uniform equipped with a camo changer.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * Camo changer equipped <BOOL>
 *
 * Example:
 * player call DBA_Camo_Changer_fnc_hasCamoChanger
 *
 * Public: Yes
 */
params ["_unit"];

private _config = configFile >> "CfgWeapons" >> (uniform _unit);

getNumber (_config >> "DBA_hasCamoChanger") isEqualTo 1
