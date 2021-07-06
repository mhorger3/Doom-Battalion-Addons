if !(call DBA_Common_fnc_isDeveloper) exitWith {};

if !(DBA_HUD_IFF_Enabled) exitWith
{
	"DBA_HUD_IFF" call DBA_HUD_fnc_unregisterDrawHandler;
};

[
	"DBA_HUD_IFF",
	{
		params ["_unit", "_position", "_height"];

		private _icon = _unit call DBA_HUD_IFF_fnc_getIconForUnit;
		_icon params ["_icon", "_color", "_scale"];

		drawIcon3D [
			_icon,
			_color,
			_position,
			_scale,
			_scale,
			0,
			"",
			[0, 2] select DBA_HUD_Icon_Outline
		];
	}
] call DBA_HUD_fnc_registerDrawHandler;
