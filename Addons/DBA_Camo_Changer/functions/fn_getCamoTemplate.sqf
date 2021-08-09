/**
 * Author: Ragwolf
 * Gets the camo template for a unit based on their uniform.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * Camo template <ARRAY>
 *
 * Example:
 * player call DBA_Camo_Changer_fnc_getCamoTemplate
 *
 * Public: Yes
 */
params ["_unit"];

private _templateClass = getText (configFile >> "CfgWeapons" >> (uniform _unit) >> "DBA_camoTemplate");

"true" configClasses (configFile >> "DBA_Camo" >> _templateClass)
