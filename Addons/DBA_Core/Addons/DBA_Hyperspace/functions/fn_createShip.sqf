params ["_ship", "_position", "_direction", ["_isLocal", true]];

private _dirOffset = _ship call DB101_Hyperspace_fnc_getShipDirOffset;

private _object = if (_isLocal) then
{
	_ship createVehicleLocal _position
}
else
{
	_ship createVehicle _position
};
_object setPosASL _position;
_object setDir (_direction + _dirOffset);

_object
