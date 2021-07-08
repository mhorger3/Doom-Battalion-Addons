params ["_key", "_handler"];

private _drawHandlers = localNamespace getVariable ["DBA_HUD_drawHandlers", []];
_drawHandlers pushBack [_key, _handler];
localNamespace setVariable ["DBA_HUD_drawHandlers", _drawHandlers];
