/*
 * Battle stimulant reduces pain to 0 for the duration.
 */
params ["_player"];

if (DBA_Stims_Debug_Warning) then
{
	[_player, "WARNING: I'M ABUSING DRUGS! [Battle Stimulant]"] remoteExec ["globalChat", 0];
};

[
	DBA_Stims_Inject_Duration,
	_player,
	{
		params ["_player"];

		_player removeItem "JLTS_drugs_stimulant_battle";

		private _pain = _player getVariable "ace_medical_pain";
		[_player, "", 1] call ace_common_fnc_doAnimation;

		// Constantly set pain level to 0
		private _handle = [
			{
				params ["_args", "_handle"];
				_args params ["_player"];

				[_player, -100] call ace_medical_fnc_adjustPainLevel;
			},
			1,
			[_player]
		] call CBA_fnc_addPerFrameHandler;

		[
			{
				params ["_player", "_pain", "_handle"];

				_handle call CBA_fnc_removePerFrameHandler;
				[
					_player,
					(_pain * DBA_Stims_Battle_Stim_Side_Effect_Pain_Multiplier)
				] call ace_medical_fnc_adjustPainLevel;
			},
			[_player, _pain, _handle],
			DBA_Stims_Battle_Stim_Duration
		] call CBA_fnc_waitAndExecute;
	},
	{
		params ["_player"];
		[_player, "", 1] call ace_common_fnc_doAnimation;
	},
	"Injecting Battle Stimulant..."
] call ace_common_fnc_progressBar;

private _anim = _player call DBA_Stims_fnc_getInjectAnimation;
[_player, _anim] call ace_common_fnc_doAnimation;
