params [
    ["_unit", objNull, [objNull]]
];

private _height = 0;

if (_unit isKindOf "Man") then
{
    _height = switch (stance _unit) do
    {
        case "STAND": { DBA_HUD_Icon_Height_Standing };
        case "CROUCH": { DBA_HUD_Icon_Height_Crouch };
        case "PRONE": { DBA_HUD_Icon_Height_Prone };
        default { 0 };
    };

    if (
        (lifeState _unit == "INCAPACITATED") ||
        {
            (isClass (configFile >> "CfgPatches" >> "ace_medical")) &&
            {!(_unit call ace_common_fnc_isAwake)}
        }
    ) then
    {
        _height = DBA_HUD_Icon_Height_Unconscious;
    };
}
else
{
    private _boundingBox = boundingBox _unit;
    _boundingBox params ["_min", "_max"];
    _max params ["_xmax", "_ymax", "_zmax"];

    _height = _zmax / 2;
};

_height
