/**
 * Author: Ragwolf
 * Changes a unit's textures to match the surrounding terrain.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * player call DBA_Camo_Changer_fnc_activateBlend
 *
 * Public: No
 */
params ["_unit"];

_unit setVariable ["DBA_blend", true, false];
_unit setUnitTrait ["camouflageCoef", DBA_Camo_Changer_Camo_Coef];

private _uniformTextures = _unit getVariable "DBA_uniformTextures";
if (isNil "_uniformTextures") then
{
	_uniformTextures = getObjectTextures _unit;
	_unit setVariable ["DBA_uniformTextures", _uniformTextures];
};

private _surfaceTexture = surfaceTexture position _unit;
_unit setVariable ["DBA_surfaceTexture", _surfaceTexture];

{
	_unit setObjectTextureGlobal [_forEachIndex, _surfaceTexture];
} forEach _uniformTextures;

if !(isNull backpackContainer _unit) then
{
	private _backpackTextures = _unit getVariable "DBA_backpackTextures";
	if (isNil "_backpackTextures") then
	{
		_backpackTextures = getObjectTextures backpackContainer _unit;
		_unit setVariable ["DBA_backpackTextures", _backpackTextures];
	};

	{
		(backpackContainer _unit) setObjectTextureGlobal [_forEachIndex, _surfaceTexture];
	} forEach _backpackTextures;
};
