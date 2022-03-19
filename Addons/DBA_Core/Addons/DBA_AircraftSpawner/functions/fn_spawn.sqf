params ["_vehicleClass", "_spawnPos"];

// These aircraft don't create a vehicle crew correctly
private _scuffedAircraft = ["O_OKalani_HMP_Gunship_01", "O_OKalani_Vulture_Droid_01", "O_OKalani_Hyena_Bomber_Droid_01"];

private _aircraft = createVehicle [_vehicleClass, position _spawnPos, [], 0];
if (_vehicleClass in _scuffedAircraft) then
{
	private _group = createGroup [east, true];
	[_aircraft] join _group;
	private _pilot = _group createUnit ["O_Kalani_B1_Pilot_Battledroid_V3_01", position _aircraft, [], 0, "CAN_COLLIDE"];
	_pilot moveInDriver _aircraft;
	_aircraft engineOn True;
}
else
{
	createVehicleCrew _aircraft;
};
{
	_x addCuratorEditableObjects [[_aircraft], true];
} forEach allCurators;
_aircraft setDir (getDir _spawnPos);
_aircraft setVelocityModelSpace [0, 100, 0];
_aircraft flyInHeight 500;

private _nearestEnemy = _aircraft findNearestEnemy _aircraft;
private _waypointPosition = if !(isNull _nearestEnemy) then
{
	position _nearestEnemy
}
else
{
	missionNamespace getVariable ["DB101_aircraftWaypoint", [worldSize / 2, worldSize / 2, 1000]]
};
private _waypoint = group _aircraft addWaypoint [_waypointPosition, 0];
_waypoint setWaypointType "LOITER";

_aircraft
