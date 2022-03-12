

params ["_this"];
_vehic = _this;
_pil = driver _this;
_vehic setvariable ["cloakStatus",false,true];
_stealthMode = createGroup civillian;
_this enableSimulationGlobal enable;


private _oldGroup = group _this;
private _newGroup = createGroup west;

if ((allGroups findIf {side _x isEqualTo civilian && {(groupId _oldGroup) isEqualTo (groupId _newGroup)}}) == -1) then {
    _newGroup setGroupIdGlobal [groupId _oldGroup];
};

    {
        private _team = assignedTeam _x;
        [_x] joinSilent _newGroup;
        _x assignTeam _team;
    } forEach units _this;
    deleteGroup _oldGroup;


_this animateSource ["StealthMode", 0];
_this setVariable ["irTargetSize", 1.4, true];
_this setVariable ["radarTargetSize", 1.4, true];

Params ["_position"];
private _bPos = getPosATL _position;
private _boom =  createVehicle ["DBA_ImploderBlock_Ammo", _bPos, [], 0, "CAN_COLLIDE"];
_boom setDamage 1;
deleteVehicle _position;