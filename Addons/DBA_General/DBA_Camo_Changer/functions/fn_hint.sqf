/**
 * Author: Ragwolf
 * Displays a hint message if enabled in addon settings.
 *
 * Arguments:
 * 0: Message <STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * "Hello, world!" call DBA_Camo_Changer_fnc_hint
 *
 * Public: No
 */
params ["_message"];

if (DBA_Camo_Changer_Hints) then
{
	hint _message;
};
