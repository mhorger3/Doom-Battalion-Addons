params [
    ["_unit", objNull, [objNull]]
];

private _icon = "";

private _color = switch (side _unit) do
{
    case west:       { localNamespace getVariable "DBA_HUD_color_BLUFOR"   };
    case east:       { localNamespace getVariable "DBA_HUD_color_OPFOR"    };
    case resistance: { localNamespace getVariable "DBA_HUD_color_GREENFOR" };
    default          { localNamespace getVariable "DBA_HUD_color_CIV"      };
};

private _height = 0;

private _scale = DBA_HUD_Icon_Max_Size - ((player distance _unit) / DBA_HUD_Near_Distance);

// TODO: Cache icons for performance
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
        _icon = DBA_HUD_Icon_Unconscious;
        _height = DBA_HUD_Icon_Height_Unconscious;
        _scale = _scale * DBA_HUD_Icon_Unconscious_Scale;
    }
    else
    {
        _icon = switch (side _unit) do
        {
            case west: { DBA_HUD_Icon_BLUFOR_Infantry };
            case east: { DBA_HUD_Icon_OPFOR_Infantry };
            case resistance: { DBA_HUD_Icon_GREENFOR_Infantry };
            default { DBA_HUD_Icon_CIV_Unknown };
        };
    };
}
else
{
    private _boundingBox = boundingBox _unit;
    _boundingBox params ["_min", "_max"];
    _max params ["_xmax", "_ymax", "_zmax"];

    _height = _zmax / 2;

    if (_unit isKindOf "Car") then
    {
        _icon = switch (side _unit) do
        {
            case west: { DBA_HUD_Icon_BLUFOR_Motorized };
            case east: { DBA_HUD_Icon_OPFOR_Motorized };
            case resistance: { DBA_HUD_Icon_GREENFOR_Motorized };
            default { DBA_HUD_Icon_CIV_Car };
        };
    }
    else
    {
        if (_unit isKindOf "Tank") then
        {
            _icon = switch (side _unit) do
            {
                case west: { DBA_HUD_Icon_BLUFOR_Armor };
                case east: { DBA_HUD_Icon_OPFOR_Armor };
                case resistance: { DBA_HUD_Icon_GREENFOR_Armor };
                default { "" };
            };
        }
        else
        {
            if (_unit isKindOf "Helicopter") then
            {
                _icon = switch (side _unit) do
                {
                    case west: { DBA_HUD_Icon_BLUFOR_Helicopter };
                    case east: { DBA_HUD_Icon_OPFOR_Helicopter };
                    case resistance: { DBA_HUD_Icon_GREENFOR_Helicopter };
                    default { DBA_HUD_Icon_CIV_Helicopter };
                };
            }
            else
            {
                if (_unit isKindOf "Ship") then
                {
                    _icon = switch (side _unit) do
                    {
                        case west: { DBA_HUD_Icon_BLUFOR_Naval };
                        case east: { DBA_HUD_Icon_OPFOR_Naval };
                        case resistance: { DBA_HUD_Icon_GREENFOR_Naval };
                        default { DBA_HUD_Icon_CIV_Naval };
                    };
                }
                else
                {
                    if (_unit isKindOf "Plane") then
                    {
                        _icon = switch (side _unit) do
                        {
                            case west: { DBA_HUD_Icon_BLUFOR_Plane };
                            case east: { DBA_HUD_Icon_OPFOR_Plane };
                            case resistance: { DBA_HUD_Icon_GREENFOR_Plane };
                            default { DBA_HUD_Icon_CIV_Plane };
                        };
                    }
                    else
                    {
                        ""
                    };
                };
            };
        };
    };
};

[_unit, _icon, _color, _height, _scale]
