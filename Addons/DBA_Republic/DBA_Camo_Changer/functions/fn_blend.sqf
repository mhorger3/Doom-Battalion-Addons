/**
 * Author: Ragwolf
 * Changes a unit's textures to match the surrounding terrain.
 * Effect will cancel if the unit dies, is not prone, or is deactivated through ACE interaction.
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
 * Public: No
 */
params ["_unit"];

if (stance _unit != "PRONE") exitWith
{
	"You must be prone to blend" call DBA_Camo_Changer_fnc_hint;
};

_unit call DBA_Camo_Changer_fnc_activateBlend;
"Blend activated" call DBA_Camo_Changer_fnc_hint;

[
	{
		params ["_args", "_handle"];
		_args params ["_unit"];

		if (isGamePaused) exitWith {};

		// Moved onto a different surface, reapply textures
		if ((surfaceTexture position _unit) != (_unit getVariable "DBA_surfaceTexture")) then
		{
			_unit call DBA_Camo_Changer_fnc_activateBlend;
		};

		if (!(alive _unit) || (stance _unit != "PRONE") || !(_unit getVariable "DBA_blend")) then
		{
			"Blend deactivated" call DBA_Camo_Changer_fnc_hint;
			_unit call DBA_Camo_Changer_fnc_deactivateBlend;
			_handle call CBA_fnc_removePerFrameHandler;
		};
	},
	1,
	[_unit]
] call CBA_fnc_addPerFrameHandler;
