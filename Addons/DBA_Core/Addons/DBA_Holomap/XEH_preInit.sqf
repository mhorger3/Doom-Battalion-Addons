[
	"DBA_Holomap_ViewDistance",
	"SLIDER",
	"View Distance",
	["101st Aux Mod", "Holomap"],
	[0, 100, 50, 0],
	true
] call CBA_fnc_addSetting;


[
	"DBA_Holomap_RefreshTime",
	"SLIDER",
	"Refresh Time",
	["101st Aux Mod", "Holomap"],
	[0, 10, 6, 1],
	true
] call CBA_fnc_addSetting;

[
	"DBA_Holomap_Enabled",
	"CHECKBOX",
	"Enabled",
	["101st Aux Mod", "Holomap"],
	false,
	false
] call CBA_fnc_addSetting;
