/**
 * Author: Ragwolf
 * Registers camouflage related Zeus modules.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * call DBA_Camo_Changer_fnc_zeus
 *
 * Public: No
 */

private _category = "101st Aux Mod - Camouflage";

[_category, "Camouflage Infantry",
{
	params ["_position", "_object"];

	if (isNull _object || !(_object isKindOf "Man")) exitWith
	{
		[objNull, "must be placed on a unit"] call BIS_fnc_showCuratorFeedbackMessage;
	};

	private ["_tex"];

	{
		private _unit = _x;
		private _tex = surfaceTexture position _unit;

		{
			_unit setObjectTextureGlobal [_forEachIndex, _tex];
		} forEach (getObjectTextures _unit);
		
		if !(isNull (backpackContainer _unit)) then
		{
			(backpackContainer _unit) setObjectTextureGlobal [0, _tex];
		};
	} forEach (units (group _object));
}] call zen_custom_modules_fnc_register;

[_category, "Camouflage Vehicle",
{
	params ["_position", "_object"];

	if (isNull _object) exitWith
	{
		[objNull, "must be placed on a vehicle"] call BIS_fnc_showCuratorFeedbackMessage;
	};

	{
		private _tex = surfaceTexture position _object;
		_object setObjectTextureGlobal [_forEachIndex, _tex];
	} forEach (getObjectTextures _object);
}] call zen_custom_modules_fnc_register;
