params ["_this"];
[
	_this allowCrewInImmobile true;
	{
		_x disableAI "FSM";
		_x setBehaviour "CARELESS";
	} forEach crew _this;
];
