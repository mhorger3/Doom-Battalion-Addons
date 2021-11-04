params ["_object", "_position", "_radius", "_fillMode", "_topDown"];

private _group = group _object;
private _units = units _group;

_group setVariable ["lambs_danger_disableGroupAI", true];

private _buildings = _position nearObjects ["Building", _radius] apply {
    _x buildingPos -1
} select {
    !(_x isEqualTo [])
};

if (_topDown) then {
    {
        {
            reverse _x
        } forEach _x;

        _x sort false;

        {
            reverse _x;
        } forEach _x;
    } forEach _buildings;
};

{
    if (vehicle _x != _x) then {
        moveOut _x;
    };
} forEach _units;

private _countUnits = count _units;
private _garrisonedUnits = [];

private _fnc_moveUnit = {
    params ["_unit", "_position"];

    if (surfaceIsWater _position) then {
        _unit setPosASL AGLtoASL _position;
    } else {
        _unit setPosATL _position;
    };

    doStop _unit;
    _unit disableAI "PATH";
    _unit setVariable ["lambs_danger_disableAI",true];
    _garrisonedUnits pushBack _unit;
};

switch (_fillMode) do {
    case 0: { // Even filling
        while {!(_units isEqualTo [])} do {
            private _currentBuilding = _buildings select 0;

            if (_currentBuilding isEqualTo []) then {
                _buildings deleteAt 0;
            } else {
                private _buildingPos = _currentBuilding select 0;

                if (_buildingPos nearEntities ["CAManBase", 1] isEqualTo []) then {
                    [_units deleteAt 0, _buildingPos] call _fnc_moveUnit;

                    _buildings deleteAt 0;
                    _buildings pushBackUnique _currentBuilding;
                } else {
                    _currentBuilding deleteAt 0;
                };
            };
        };
    };
    case 1: { // Building by building
        while {!(_units isEqualTo [])} do {
            private _currentBuilding = _buildings select 0;

            if (_currentBuilding isEqualTo []) then {
                _buildings deleteAt 0;
            } else {
                private _buildingPos = _currentBuilding select 0;

                if (_buildingPos nearEntities ["CAManBase", 1] isEqualTo []) then {
                    [_units deleteAt 0, _buildingPos] call _fnc_moveUnit;
                };

                _currentBuilding deleteAt 0;
            };
        };
    };
    case 2: { // Random
        while {!(_units isEqualTo [])} do {
            private _currentBuilding = selectRandom _buildings;

            if (_currentBuilding isEqualTo []) then {
                _buildings deleteAt (_buildings find _currentBuilding);
            } else {
                private _buildingPos = selectRandom _currentBuilding;

                if (_buildingPos nearEntities ["CAManBase", 1] isEqualTo []) then {
                    [_units deleteAt 0, _buildingPos] call _fnc_moveUnit;
                };

                _currentBuilding deleteAt (_currentBuilding find _buildingPos);
            };
        };
    };
};

if (count _garrisonedUnits < _countUnits) then
{
    [objNull, "could not garrison all units"] call BIS_fnc_showCuratorFeedbackMessage;
};
