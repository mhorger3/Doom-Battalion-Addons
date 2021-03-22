params ["_object"];

private _allMarkers = [];

private ["_color", "_pos", "_dir", "_text", "_icon"];

{
	_text = markerText _x;

	if !(_text isEqualTo "") then
	{
		_color = getArray (configFile >> "CfgMarkerColors" >> (getMarkerColor _x) >> "color");
		_pos = getMarkerPos _x;
		_dir = (markerDir _x);
		_icon = getText (configFile >> "CfgMarkers" >> (getMarkerType _x) >> "icon");

		_allMarkers pushBack [_color, _pos, _dir, _text, _icon, position _object];
	};
} forEach allMapMarkers;

// No map markers
if (_allMarkers isEqualTo []) exitWith {};

private _existingMarkers = localNamespace getVariable ["DBA_allMapMarkers", []];

private _changed = (count _allMarkers != count _existingMarkers);

if (_changed) then
{
	localNamespace setVariable ["DBA_allMapMarkers", _allMarkers];
	_object setVariable ["DB101_mapChanged", true, true];
}
else
{
	private ["_marker", "_existingMarker"];

	for "_i" from 0 to (count _allMarkers - 1) do
	{
		_marker = _allMarkers # _i;
		_existingMarker = _existingMarkers # _i;

		// Only care about color, pos, dir and icon
		for "_j" from 0 to 3 do
		{
			if !((_marker # _j) isEqualTo (_existingMarker # _j)) then
			{
				_changed = true;
			};
		};
	};

	if (_changed) then
	{
		localNamespace setVariable ["DBA_allMapMarkers", _allMarkers];
		_object setVariable ["DB101_mapChanged", true, true];
	};
};
