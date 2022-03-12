

params ["_this"];
_vehic = _this;
_pil = driver _this;
_vehic setvariable ["cloakStatus",true,true];
_stealthMode = createGroup civillian;
_this enableSimulationGlobal enable;


private _oldGroup = group _this;
private _newGroup = createGroup civilian;

if ((allGroups findIf {side _x isEqualTo civilian && {(groupId _oldGroup) isEqualTo (groupId _newGroup)}}) == -1) then {
    _newGroup setGroupIdGlobal [groupId _oldGroup];
};

    {
        private _team = assignedTeam _x;
        [_x] joinSilent _newGroup;
        _x assignTeam _team;
    } forEach units _this;
    deleteGroup _oldGroup;


_this animateSource ["StealthMode", 1];
_this setVariable ["irTargetSize", 0, true];
_this setVariable ["radarTargetSize", 0, true];