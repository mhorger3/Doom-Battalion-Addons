params ["_object"];

_object setVariable ["DBA_mapMarkersDrawn", false, false];

private _draw3DHandlerID = localNamespace getVariable ["DBA_markerDraw3DHandlerID", -1];
removeMissionEventHandler ["Draw3D", _draw3DHandlerID];
localNamespace setVariable ["DBA_markerDraw3DHandlerID", -1];
