params ["_key"];

private _drawHandlers = localNamespace getVariable ["DBA_HUD_drawHandlers", []];
_drawHandlers deleteAt (_drawHandlers findIf { (_x # 0) isEqualTo _key });
localNamespace setVariable ["DBA_HUD_drawHandlers", _drawHandlers];
