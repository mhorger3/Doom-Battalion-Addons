/*
 * Author: Ragwolf
 * Adapted from Crimzonkat's edits which allowed the script to be applied to any terrain/map) of Tennesse Timmy's "Holomap" script (https://gist.github.com/Tennessee-Timmy/c205ae5f25c1fd6f14b953721ecf548e)
 * 
 * NOTES: Please provide proper credits to those who participate in development. This framework was developed for Legion Studios Core. 
 * Do not place in any other mod without permission.
 * 
 * Arguments:
 * 0: <OBJECT>: object that will be "projecting" the holomap
 * 1: <BOOL>:   Optional 
 * 2: <STRING>: Optional- Classname of the portable Item object  
 *
 * Example:
 * (Bob) call ls_holomap_fnc_create;
 * (Bob,true,"bob_item_CfgWeapons") call ls_holomap_fnc_create; NOTE: This only creates actions for ONE client
 *
 * Return Value:
 * None
 *
 */
params [
    ["_object", objNull, [objNull]],
    ["_isPortable", false, [false]],
    ["_portableObject", "101st_Portable_Holomap", [""]]
];

DB101_Holomap_fnc_addAceAction = {
    params ["_object", "_actionName", "_statement", ["_parent", ["ACE_MainActions"]]];

    private _displayName = localize format ["str_101st_Holomap_%1", _actionName];
    private _action = [_actionName, _displayName, "", _statement, { true }] call ACE_interact_menu_fnc_createAction;
    [_object, 0, _parent, _action] call ACE_interact_menu_fnc_addActionToObject;
};

DB101_Holomap_fnc_addScrollAction = {
    params ["_object", "_title", "_statement"];

    _object addAction
    [
        localize _title,
        _statement,
        nil,
        1.5,
        false,
        false,
        "",
        "true",
        3
    ];
};

[
    _object,
    "MapPlanet",
    {
        _target call DB101_Holomap_fnc_mapPlanet;
    }
] call DB101_Holomap_fnc_addAceAction;

[
    _object,
    "MapArea",
    { _target call DB101_Holomap_fnc_mapArea; }
] call DB101_Holomap_fnc_addAceAction;

[
    _object,
    "ResetScale",
    { _target call DB101_Holomap_fnc_resetScale; }
] call DB101_Holomap_fnc_addAceAction;

[
    _object,
    "MapMarkers",
    {}
] call DB101_Holomap_fnc_addAceAction;

[
    _object,
    "MapMarkersEnable",
    { [_target, "DB101_mapMarkersEnabled", true] call DB101_Holomap_fnc_setVariable; },
    ["ACE_MainActions", "MapMarkers"]
] call DB101_Holomap_fnc_addAceAction;

[
    _object,
    "MapMarkersDisable",
    { [_target, "DB101_mapMarkersEnabled", false] call DB101_Holomap_fnc_setVariable; },
    ["ACE_MainActions", "MapMarkers"]
] call DB101_Holomap_fnc_addAceAction;

[
    _object,
    "TerrainMode",
    {}
] call DB101_Holomap_fnc_addAceAction;

[
    _object,
    "LandOnly",
    { [_target, "DB101_terrainMode", 0] call DB101_Holomap_fnc_setVariable; },
    ["ACE_MainActions", "TerrainMode"]
] call DB101_Holomap_fnc_addAceAction;

[
    _object,
    "Mixed",
    { [_target, "DB101_terrainMode", 1] call DB101_Holomap_fnc_setVariable; },
    ["ACE_MainActions", "TerrainMode"]
] call DB101_Holomap_fnc_addAceAction;

[
    _object,
    "str_101st_Holomap_ZoomIn",
    {
        params ["_target", "_caller", "_actionId", "_arguments"];
        private _mapSize = (_target getVariable ["DB101_mapSize", 1000]) - 100;
        // Keep map size at least 100
        if (_mapSize < 100) then { _mapSize = 100 };
        [_target, "DB101_mapSize", _mapSize] call DB101_Holomap_fnc_setVariable;

        hint format [localize "str_101st_Holomap_Zoom", _mapSize];
    }
] call DB101_Holomap_fnc_addScrollAction;

[
    _object,
    "str_101st_Holomap_ZoomOut",
    {
        params ["_target", "_caller", "_actionId", "_arguments"];
        private _mapSize = (_target getVariable ["DB101_mapSize", 1000]) + 100;
        [_target, "DB101_mapSize", _mapSize] call DB101_Holomap_fnc_setVariable;

        hint format [localize "str_101st_Holomap_Zoom", _mapSize];
    }
] call DB101_Holomap_fnc_addScrollAction;

[
    _object,
    "str_101st_Holomap_MoveUp",
    {
        params ["_target", "_caller", "_actionId", "_arguments"];
        private _holoHeight = (_target getVariable ["DB101_holoHeight", 0.5]) + 0.1;
        [_target, "DB101_holoHeight", _holoHeight] call DB101_Holomap_fnc_setVariable;

        hint format [localize "str_101st_Holomap_Height", _holoHeight];
    }
] call DB101_Holomap_fnc_addScrollAction;

[
    _object,
    "str_101st_Holomap_MoveDown",
    {
        params ["_target", "_caller", "_actionId", "_arguments"];
        private _holoHeight = (_target getVariable ["DB101_holoHeight", 0.5]) - 0.1;
        [_target, "DB101_holoHeight", _holoHeight] call DB101_Holomap_fnc_setVariable;

        hint format [localize "str_101st_Holomap_Height", _holoHeight];
    }
] call DB101_Holomap_fnc_addScrollAction;

[
    _object,
    "str_101st_Holomap_IncreaseScale",
    {
        params ["_target", "_caller", "_actionId", "_arguments"];
        private _mapScale = (_target getVariable ["DB101_mapScale", 1]) + 1;
        [_target, "DB101_mapScale", _mapScale] call DB101_Holomap_fnc_setVariable;

        hint format [localize "str_101st_Holomap_Scale", _mapScale];
    }
] call DB101_Holomap_fnc_addScrollAction;

[
    _object,
    "str_101st_Holomap_DecreaseScale",
    {
        params ["_target", "_caller", "_actionId", "_arguments"];
        private _mapScale = (_target getVariable ["DB101_mapScale", 1]) - 1;
        // Keep map scale at least 1
        if (_mapScale < 1) then { _mapScale = 1 };
        [_target, "DB101_mapScale", _mapScale] call DB101_Holomap_fnc_setVariable;

        hint format [localize "str_101st_Holomap_Scale", _mapScale];
    }
] call DB101_Holomap_fnc_addScrollAction;

[
    _object,
    "str_101st_Holomap_IncreaseParticleSize",
    {
        params ["_target", "_caller", "_actionId", "_arguments"];
        private _particleSize = (_target getVariable ["DB101_particleSize", 0.03]) + 0.01;
        [_target, "DB101_particleSize", _particleSize] call DB101_Holomap_fnc_setVariable;

        hint format [localize "str_101st_Holomap_ParticleSize", _particleSize];
    }
] call DB101_Holomap_fnc_addScrollAction;

[
    _object,
    "str_101st_Holomap_DecreaseParticleSize",
    {
        params ["_target", "_caller", "_actionId", "_arguments"];
        private _particleSize = (_target getVariable ["DB101_particleSize", 0.03]) - 0.01;
        // Keep particle size at least 0.01
        if (_particleSize == 0) then
        {
            _particleSize = 0.01;
        };
        [_target, "DB101_particleSize", _particleSize] call DB101_Holomap_fnc_setVariable;

        hint format [localize "str_101st_Holomap_ParticleSize", _particleSize];
    }
] call DB101_Holomap_fnc_addScrollAction;

[
    _object,
    "str_101st_Holomap_IncreaseHeightScale",
    {
        params ["_target", "_caller", "_actionId", "_arguments"];
        private _heightScale = (_target getVariable ["DB101_heightScale", 5000]) - 500;
        // Keep height scale at least 500
        if (_heightScale < 500) then { _heightScale = 500 };
        [_target, "DB101_heightScale", _heightScale] call DB101_Holomap_fnc_setVariable;

        hint format [localize "str_101st_Holomap_HeightScale", _heightScale];
    }
] call DB101_Holomap_fnc_addScrollAction;

[
    _object,
    "str_101st_Holomap_DecreaseHeightScale",
    {
        params ["_target", "_caller", "_actionId", "_arguments"];
        private _heightScale = (_target getVariable ["DB101_heightScale", 5000]) + 500;
        [_target, "DB101_heightScale", _heightScale] call DB101_Holomap_fnc_setVariable;

        hint format [localize "str_101st_Holomap_HeightScale", _heightScale];
    }
] call DB101_Holomap_fnc_addScrollAction;

if (_isPortable) then
{
    _object setVariable ["DB101_portableObject", _portableObject, true];

    [
        _object,
        "PickUp",
        { [_target, _player] call DB101_Holomap_fnc_pickUp; }
    ] call DB101_Holomap_fnc_addAceAction;
}
else
{
    [
        _object,
        "Disable",
        { _target call DB101_Holomap_fnc_disable; }
    ] call DB101_Holomap_fnc_addAceAction;
};
