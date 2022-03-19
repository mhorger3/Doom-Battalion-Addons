params ["_object"];

_object setVariable ["DBA_mapMarkersDrawn", true, false];

private _draw3DHandlerID = localNamespace getVariable ["DBA_markerDraw3DHandlerID", -1];

// If we've already added a handler, do nothing
if (_draw3DHandlerID != -1) exitWith {};

_draw3DHandlerID = addMissionEventHandler [
	"Draw3D",
	{
		{
			_x params ["_color", "_pos", "_dir", "_text", "_icon", "_objectPos", "_particlePosition"];

			if !(isNil "_particlePosition") then
			{
				// Some marker colors are stored as variables
				// .e.g (profilenamespace getvariable ['Map_BLUFOR_R',0])
				{
					if (typeName _x isEqualTo "STRING") then
					{
						private _code = compile _x;
						_color set [_forEachIndex, (call _code)];
					};
				} forEach _color;

				private _iconPos = _objectPos vectorAdd _particlePosition;

				drawIcon3D
				[
					_icon,             // texture
					_color,            // color
					_iconPos,          // position
					1,                 // width
					1,                 // height
					_dir,              // angle
					_text,             // text
					2,                 // shadow (0 = none, 1 = shadow, 2 = outline)
					0.05,              // textSize
					"RobotoCondensed", // font
					"center",          // textAlign (left, center, right)
					false              // drawSideArrows (arrows and text when off screen)
				];
			};
		} forEach (localNamespace getVariable ["DBA_allMapMarkers", []]);
	}
];

localNamespace setVariable ["DBA_markerDraw3DHandlerID", _draw3DHandlerID];
