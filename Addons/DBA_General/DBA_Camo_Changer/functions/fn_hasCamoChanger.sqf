/**
 * Author: Ragwolf
 * Checks whether a unit is equipped with a camo changer.
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
 * Public: No
 */
params ["_unit"];

private _config = configFile >> "CfgWeapons" >> (uniform _unit);

private _hasCamoChanger = (getNumber (_config >> "DBA_hasCamoChanger")) isEqualTo 1;
// Check if the template specifies a required item
private _templateClass = getText (_config >> "DBA_camoTemplate");
private _requiredItem = getText (configFile >> "DBA_Camo" >> _templateClass >> "requiredItem");

if (_requiredItem isEqualTo "") then
{
	_hasCamoChanger
}
else
{
	_hasCamoChanger && {[_unit, _requiredItem] call ACE_common_fnc_hasItem}
}
