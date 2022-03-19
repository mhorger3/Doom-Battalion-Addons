private _category = "101st Aux Mod - Utility";

[_category, "Set Object Scale",
{
    params ["_position", "_object"];

    [
        "Set Object Scale",
        [
            ["EDIT", "Scale", [str (getObjectScale _object)]]
        ],
        {
            params ["_result", "_object"];
            _result params ["_scale"];
			_scale = [parseNumber(_scale), 0.0001, 65504] call BIS_fnc_clamp;

			_object setObjectScale _scale;
        },
        {},
        _object
    ] call zen_dialog_fnc_create;
}] call zen_custom_modules_fnc_register;

[_category, "Reset Object Scale",
{
	params ["_position", "_object"];

	_object setObjectScale 1;
}] call zen_custom_modules_fnc_register;
