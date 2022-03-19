private _category = "101st Aux Mod - AI";

[_category, "Garrison Group (Disable LAMBS)",
{
	params ["_position", "_object"];
	
	if (isNull _object || !(_object isKindOf "Man")) exitWith
	{
		[objNull, "must be placed on a unit"] call BIS_fnc_showCuratorFeedbackMessage;
	};

	[
		"Garrison Group",
		[
			["SLIDER", "Radius", [5, 5000, 100, 0]],
			["TOOLBOX", "Filling Mode", [0, 1, 3, ["Even Filling", "Building By Building", "Random"]]],
			["TOOLBOX:YESNO", "Fill From Top Down", false]
		],
		{
			params ["_result", "_args"];
			_result params ["_radius", "_fillMode", "_topDown"];
			_args params ["_position", "_object"];

			[_object, _position, _radius, _fillMode, _topDown] call DB101_AI_fnc_garrison;
		},
		{},
		[_position, _object]
	] call zen_dialog_fnc_create;
}] call zen_custom_modules_fnc_register;

[_category, "Ungarrison Group (Enable LAMBS)",
{
	params ["_position", "_object"];

	_object call DB101_AI_fnc_ungarrison;
}] call zen_custom_modules_fnc_register;
