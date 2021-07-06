if !(call DBA_Common_fnc_isDeveloper) exitWith {};

if (DBA_HUD_Medical_Enabled) then
{
	[
		"DBA_HUD_Medical",
		{
			params ["_unit", "_position", "_height"];

			if (DBA_HUD_Medical_Require_Medic_Trait && !(player getUnitTrait "medic")) exitWith {};

			private [
				"_hr",
				"_bp",
				"_bpText",
				"_line1Start",
				"_line2Start",
				"_line2End",
				"_hrTextPosPos",
				"_bpTextPos",
				"_medicalColor"
			];

			if (_unit isKindOf "Man" && {(side _unit) == (side player)} && {(player distance _unit) <= DBA_HUD_Medical_Range}) then
			{
				_hr = _unit getVariable ["ace_medical_heartRate", -1];
				_bp = _unit getVariable ["ace_medical_bloodPressure", -1];
				_bpText = format ["BP: %1/%2", (floor (_bp # 1)), (floor (_bp # 2))];

				_line1Start = _position;
				_line2Start = _line1Start getPos [DBA_HUD_Medical_Offset_X, (getDir player) + 90];
				_line2Start set [2, _height];
				_line2End = [(_line2Start # 0), (_line2Start # 1), (_line2Start # 2) + DBA_HUD_Medical_Offset_Z];

				_hrTextPos = _line1Start getPos [DBA_HUD_Medical_Offset_X + DBA_HUD_Medical_Offset_Text, (getDir player) + 90];
				_hrTextPos set [2, _height + DBA_HUD_Medical_Offset_Z];
				_bpTextPos = [(_hrTextPos # 0), (_hrTextPos # 1), (_hrTextPos # 2) - DBA_HUD_Medical_Spacing];

				_medicalColor = DBA_HUD_Medical_Color + [DBA_HUD_Medical_Opacity];

				if (DBA_HUD_Medical_Draw_Lines) then
				{
					drawLine3D [_line1Start, _line2Start, _medicalColor];
					drawLine3D [_line2Start, _line2End, _medicalColor];
				};

				drawIcon3D [
					"",
					_medicalColor,
					_hrTextPos,
					1,
					1,
					0,
					format ["HR: %1", floor _hr],
					[0, 2] select DBA_HUD_Medical_Outline,
					DBA_HUD_Medical_Text_Size,
					DBA_HUD_Medical_Font,
					"left"
				];

				drawIcon3D [
					"",
					_medicalColor,
					_bpTextPos,
					1,
					1,
					0,
					_bpText,
					[0, 2] select DBA_HUD_Medical_Outline,
					DBA_HUD_Medical_Text_Size,
					DBA_HUD_Medical_Font,
					"left"
				];
			};
		}
	] call DBA_HUD_fnc_registerDrawHandler;
}
else
{
	"DBA_HUD_Medical" call DBA_HUD_fnc_unregisterDrawHandler;
};
