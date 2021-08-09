/**
 * Author: Ragwolf
 * Changes a unit's textures to match the surrounding terrain.
 * Effect will cancel if a unit dies, is not prone, or is deactivated through ACE interaction.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * player call DBA_Camo_Changer_fnc_blend
 *
 * Public: Yes
 */
params ["_unit"];

if (stance _unit != "PRONE") exitWith
{
	"You must be prone to blend" call DBA_Camo_Changer_fnc_hint;
};

_unit setVariable ["DBA_blend", true, false];
_unit setUnitTrait ["camouflageCoef", DBA_Camo_Changer_Camo_Coef];

private _originalTextures = getObjectTextures _unit;

private _tex = surfaceTexture position _unit;
_unit setObjectTextureGlobal [0, _tex];
_unit setObjectTextureGlobal [1, _tex];

if !(isNull backpackContainer _unit) then
{
	_originalTextures pushBack ((getObjectTextures backpackContainer _unit) # 0);
	(backpackContainer _unit) setObjectTextureGlobal [0, _tex];
};

"Blend activated" call DBA_Camo_Changer_fnc_hint;

[
	{
		params ["_args", "_handle"];
		_args params ["_unit", "_originalTextures"];

		if (!(alive _unit) || (stance _unit != "PRONE") || !(_unit getVariable "DBA_blend")) then
		{
			"Blend deactivated" call DBA_Camo_Changer_fnc_hint;
			_unit setVariable ["DBA_blend", false, false];
			_unit setUnitTrait ["camouflageCoef", 1];

			_unit setObjectTextureGlobal [0, _originalTextures # 0];
			_unit setObjectTextureGlobal [1, _originalTextures # 1];

			if !(isNull backpackContainer _unit) then
			{
				(backpackContainer _unit) setObjectTextureGlobal [0, _originalTextures # 2];
			};

			_handle call CBA_fnc_removePerFrameHandler;
		};
	},
	1,
	[_unit, _originalTextures]
] call CBA_fnc_addPerFrameHandler;
