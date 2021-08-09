/**
 * Author: Ragwolf
 * Changes a unit's textures back to its original textures.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * player call DBA_Camo_Changer_fnc_deactivateBlend
 *
 * Public: No
 */
params ["_unit"];

private _uniformTextures = _unit getVariable ["DBA_uniformTextures", []];
private _backpackTextures = _unit getVariable ["DBA_backpackTextures", []];

_unit setVariable ["DBA_blend", false, false];
_unit setUnitTrait ["camouflageCoef", 1];

{
	_unit setObjectTextureGlobal [_forEachIndex, _x];
} forEach _uniformTextures;

if !(isNull backpackContainer _unit) then
{
	{
		(backpackContainer _unit) setObjectTextureGlobal [_forEachIndex, _x];
	} forEach _backpackTextures;
};

_unit setVariable ["DBA_surfaceTexture", nil];
_unit setVariable ["DBA_uniformTextures", nil];
_unit setVariable ["DBA_backpackTextures", nil];
