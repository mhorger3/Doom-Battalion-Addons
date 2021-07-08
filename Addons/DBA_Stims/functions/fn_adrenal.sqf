/*
 * Adrenal increases player's movement speed for the duration.
 */
params ["_player"];

if !(call DBA_Common_fnc_isDeveloper) exitWith {};

[
	DBA_Stims_Inject_Duration,
	_player,
	{
		params ["_player"];

		_player removeItem "JLTS_drugs_stimulant_adrenal";

		_player setVariable ["DBA_defaultAnimSpeedCoef", (getAnimSpeedCoef _player)];
		_player setAnimSpeedCoef DBA_Stims_Adrenal_Speed;
		[_player, "", 1] call ace_common_fnc_doAnimation;

		[
			{
				params ["_player"];

				_player setAnimSpeedCoef DBA_Stims_Adrenal_Side_Effect_Speed;
			},
			[_player],
			DBA_Stims_Adrenal_Duration
		] call CBA_fnc_waitAndExecute;

		[
			{
				params ["_player"];

				private _defaultAnimSpeedCoef = _player getVariable ["DBA_defaultAnimSpeedCoef", 1];
				_player setAnimSpeedCoef _defaultAnimSpeedCoef;
			},
			[_player],
			DBA_Stims_Adrenal_Duration + DBA_Stims_Adrenal_Side_Effect_Duration
		] call CBA_fnc_waitAndExecute;
	},
	{
		params ["_player"];
		[_player, "", 1] call ace_common_fnc_doAnimation;
	},
	"Injecting Adrenal..."
] call ace_common_fnc_progressBar;

private _anim = _player call DBA_Stims_fnc_getInjectAnimation;
[_player, _anim] call ace_common_fnc_doAnimation;
