private _category = "101st Aux Mod - AI";

[_category, "Garrison Group (Disable LAMBS)",
{
	params ["_position", "_object"];
	
	if (isNull _object || !(_object isKindOf "Man")) exitWith
	{
		[objNull, "must be placed on a unit"] call BIS_fnc_showCuratorFeedbackMessage;
	};

	private _dialogResult = [
		"Garrison Group",
		[
			["Radius", "SLIDER", 0.1],
			["Filling Mode", ["Even Filling", "Building By Building", "Random"], 0],
			["Fill From Top Down", ["Yes", "No"], 0]
		]
	] call Ares_fnc_showChooseDialog;
	
	if (_dialogResult isEqualTo []) exitWith {};

	_dialogResult params ["_radius", "_fillMode", "_topDown"];

	// Convert number to boolean
	_topDown = _topDown == 0;

	[_object, _position, _radius, _fillMode, _topDown] call DB101_AI_fnc_garrison;
}] call Ares_fnc_RegisterCustomModule;

[_category, "Ungarrison Group (Enable LAMBS)",
{
	params ["_position", "_object"];

	_object call DB101_AI_fnc_ungarrison;
}] call Ares_fnc_RegisterCustomModule;
