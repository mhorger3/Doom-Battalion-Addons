private _category = "101st Aux Mod - Capital Ships";

[_category, "Select Ship",
{
    params ["_position", "_object"];

    _object call DBA_CapitalShips_fnc_selectShip;
}] call zen_custom_modules_fnc_register;

[_category, "Crash Ship",
{
    params ["_position", "_object"];

    private _ship = missionNamespace getVariable "DBA_selectedShip";
	if (isNil "_ship") exitWith
	{
		[objNull, "must select a ship"] call BIS_fnc_showCuratorFeedbackMessage;
	};

    if (_ship getVariable ["DBA_CS_busy", false]) exitWith
    {
        [objNull, "ship is busy"] call BIS_fnc_showCuratorFeedbackMessage;
    };

    [
        "Crash Ship",
        [
            ["EDIT", "Duration", ["10"]],
            ["EDIT", "Radius [m]", ["300"]],
            ["EDIT", "Destroyed objects per second", ["200"]],
            ["CHECKBOX", "Color correction", [false]]
        ],
        {
            params ["_result", "_args"];

            _result params ["_duration", "_radius", "_rate", "_colorCorrection"];
	        _duration = [parseNumber(_duration), 0, 600] call BIS_fnc_clamp;
	        _radius = [parseNumber(_radius), 0, 5000] call BIS_fnc_clamp;
	        _rate = [parseNumber(_rate), 0, 500] call BIS_fnc_clamp;

            _args params ["_ship", "_position"];

            [_ship, (AGLToASL _position), _duration, _radius, _rate, _colorCorrection] call DBA_CapitalShips_fnc_crashShip;
        },
        {},
        [_ship, _position]
    ] call zen_dialog_fnc_create;
}] call zen_custom_modules_fnc_register;

[_category, "Move Ship",
{
    params ["_position", "_object"];

    private _ship = missionNamespace getVariable "DBA_selectedShip";
	if (isNil "_ship") exitWith
	{
		[objNull, "must select a ship"] call BIS_fnc_showCuratorFeedbackMessage;
	};

    if (_ship getVariable ["DBA_CS_busy", false]) exitWith
    {
        [objNull, "ship is busy"] call BIS_fnc_showCuratorFeedbackMessage;
    };

	private _currentAltitude = (getPosASL _ship) select 2;

    [
        "Move Ship",
        [
            ["EDIT", "Turn duration", ["5"]],
            ["EDIT", "Move duration", ["10"]],
            ["EDIT", "Altitude", [str _currentAltitude]]
        ],
        {
            params ["_result", "_args"];

            _result params ["_turnDuration", "_moveDuration", "_altitude"];
	        _turnDuration = [parseNumber(_turnDuration), 0, 600] call BIS_fnc_clamp;
	        _moveDuration = [parseNumber(_moveDuration), 0, 600] call BIS_fnc_clamp;
	        _altitude = [parseNumber(_altitude), 0, 5000] call BIS_fnc_clamp;

            _args params ["_ship", "_position"];

            [_ship, _position, _turnDuration, _moveDuration, _altitude] spawn DBA_CapitalShips_fnc_moveTo;
        },
        {},
        [_ship, _position]
    ] call zen_dialog_fnc_create;
}] call zen_custom_modules_fnc_register;

[_category, "Pitch/Bank Ship",
{
    params ["_position", "_object"];

    private _ship = missionNamespace getVariable "DBA_selectedShip";

	if (isNil "_ship") exitWith
	{
		[objNull, "must select a ship"] call BIS_fnc_showCuratorFeedbackMessage;
	};

    if (_ship getVariable ["DBA_CS_busy", false]) exitWith
    {
        [objNull, "ship is busy"] call BIS_fnc_showCuratorFeedbackMessage;
    };

    (_object call DBA_Common_fnc_getPitchBank) params ["_currentPitch", "_currentBank"];

    [
        "Pitch/Bank Ship",
        [
            ["SLIDER", "Pitch", [-180, 180, _currentPitch, 0]],
            ["SLIDER", "Bank", [-180, 180, _currentBank, 0]],
            ["EDIT", "Duration", ["5"]]
        ],
        {
            params ["_result", "_args"];

            _result params ["_pitch", "_bank", "_duration"];
	        _duration = [parseNumber(_duration), 0, 600] call BIS_fnc_clamp;

            _args params ["_ship"];

            [_ship, _pitch, _bank, _duration] spawn DBA_Common_fnc_pitchBank;
        },
        {},
        [_ship]
    ] call zen_dialog_fnc_create;
}] call zen_custom_modules_fnc_register;

[_category, "Barrage Area",
{
    params ["_position", "_object"];

    private _ship = missionNamespace getVariable "DBA_selectedShip";
	if (isNil "_ship") exitWith
	{
		[objNull, "must select a ship"] call BIS_fnc_showCuratorFeedbackMessage;
	};

    if (_ship getVariable ["DBA_CS_busy", false]) exitWith
    {
        [objNull, "ship is busy"] call BIS_fnc_showCuratorFeedbackMessage;
    };

    private _currentAltitude = (getPosASL _ship) select 2;

    [
        "Barrage Area",
        [
            ["EDIT", "Turn duration", ["5"]],
            ["EDIT", "Move duration", ["10"]],
            ["EDIT", "Altitude", [str _currentAltitude]],
			["SLIDER", ["Spread", "Random velocity added to shots"], [0, 100, 30, 0]],
			["SLIDER", "Number of shots", [1, 100, 20, 0]]
        ],
        {
            params ["_result", "_args"];

            _result params ["_turnDuration", "_moveDuration", "_altitude", "_spread", "_numberOfShots"];
	        _turnDuration = [parseNumber(_turnDuration), 0, 600] call BIS_fnc_clamp;
	        _moveDuration = [parseNumber(_moveDuration), 0, 600] call BIS_fnc_clamp;
	        _altitude = [parseNumber(_altitude), 0, 5000] call BIS_fnc_clamp;

            _args params ["_ship", "_position"];

            [_ship, _position, _turnDuration, _moveDuration, _altitude, _spread, _numberOfShots] spawn DBA_CapitalShips_fnc_barrageArea;
        },
        {},
        [_ship, _position]
    ] call zen_dialog_fnc_create;
}] call zen_custom_modules_fnc_register;

// TODO: Ambient fleet (want to fix multiple fleet issue before adding)
