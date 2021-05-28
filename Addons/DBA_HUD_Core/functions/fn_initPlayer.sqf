#include "101st_Aux_Mod\addons\DBA_Common\script_macros_common.hpp"

DEVELOPER_GUARD;

if !(hasInterface) exitWith {};

if !(DBA_HUD_Enabled) exitWith {};

[
    {
        !(isNull player)
    },
    {
        localNamespace setVariable ["DBA_HUD_enabled", false];
        localNamespace setVariable ["DBA_HUD_visors", (DBA_HUD_Visor_Classes splitString ",")];

        [
            {
                if (
                    isGamePaused ||
                    {!DBA_HUD_Enabled} ||
                    {DBA_HUD_First_Person_Only && {cameraView == "EXTERNAL"}}
                ) exitWith {};

                if !((goggles player) in (localNamespace getVariable "DBA_HUD_visors")) exitWith
                {
                    localNamespace setVariable ["DBA_HUD_enabled", false];
                };
                
                localNamespace setVariable ["DBA_HUD_enabled", true];
                localNamespace setVariable ["DBA_HUD_visibleUnits", (player call DBA_HUD_fnc_getVisibleUnits)];
            },
            DBA_HUD_Visor_Update_Rate
        ] call CBA_fnc_addPerFrameHandler;

        [
            {
                if (
                    isGamePaused ||
                    {!DBA_HUD_Enabled} ||
                    {!(localNamespace getVariable ["DBA_HUD_enabled", false])} ||
                    {DBA_HUD_First_Person_Only && {cameraView == "EXTERNAL"}}
                ) exitWith {};
                
                private ["_position"];

                {
                    _x params ["_unit", "_icon", "_color", "_height", "_scale"];

                    _position = _unit modelToWorldVisual [0, 0, _height];

                    drawIcon3D [
                        _icon,
                        _color,
                        _position,
                        _scale,
                        _scale,
                        0,
                        "",
                        [0, 2] select DBA_HUD_Icon_Outline
                    ];

                    {
                        _x params ["_key", "_function"];

                        [_unit, _position, _height] call _function;
                    } forEach (localNamespace getVariable ["DBA_HUD_drawHandlers", []]);
                } forEach (localNamespace getVariable ["DBA_HUD_visibleUnits", []]);
            },
            0
        ] call CBA_fnc_addPerFrameHandler;
    }
] call CBA_fnc_waitUntilAndExecute;
