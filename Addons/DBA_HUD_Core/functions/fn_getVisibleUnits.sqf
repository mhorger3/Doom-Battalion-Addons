params [
    ["_player", objNull, [objNull]]
];

private _nearUnits = (_player nearEntities [["Car", "Helicopter", "Man", "Plane", "Ship", "Tank"], DBA_HUD_Near_Distance]) - [player];
private _visibleUnits = [];

{
    if (([_player, "PHYSX", _x] checkVisibility [eyePos _player, getPosASL _x]) > 0) then
    {
        _visibleUnits pushBack (_x call DBA_HUD_fnc_getIconForUnit);
    };
} forEach _nearUnits;

_visibleUnits
