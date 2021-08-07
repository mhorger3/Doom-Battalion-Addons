params ["_ship"];

private _altitude = (getPos _ship) # 2;

private _offset = getText (configFile >> "CfgVehicles" >> (typeOf _ship) >> "DBA_barragePosition");

if (_offset isEqualTo []) then
{
	_offset = [0, 0, 0];
};

// Use modelToWorld to get accurate positions on the x/y axes
private _position = _ship modelToWorld _offset;
// Change Z offset to use the altitude of the ship instead of offset from the center
_position set [2, (_altitude + (_offset # 2))];

_position
