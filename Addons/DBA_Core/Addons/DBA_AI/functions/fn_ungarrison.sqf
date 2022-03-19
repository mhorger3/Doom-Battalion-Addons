params ["_object"];

if (isNull _object || !(_object isKindOf "Man")) exitWith
{
	[objNull, "must be placed on a unit"] call BIS_fnc_showCuratorFeedbackMessage;
};

private _group = group _object;
private _units = units _group;

_group setVariable ["lambs_danger_disableGroupAI", false];

{
	_x enableAI "PATH";
	_x setVariable ["lambs_danger_disableAI", false];
} forEach _units;
