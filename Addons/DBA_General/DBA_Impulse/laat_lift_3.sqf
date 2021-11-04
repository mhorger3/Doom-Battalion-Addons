params[
	["_this",objNull,[player]]
];

if(isNull _this) exitWith {
	
};

_this addAction ["<t color='#f4e541'>Engage Magnetic Clamps</t>",{

	params["_vic"];
	_objects= nearestObjects [player, ["Car","Tank","Air","Ship"], 20];
	_vex= _objects select 1;
	_vex attachTo [_vic, [0,1,-7]]; 
	removeAllActions _vic;

	_vic addAction ["<t color='#f44167'>Disengage Magnetic Clamps</t>",	{

		params["_vic"];
		_objects= nearestObjects [player, ["Car","Tank","Air","Ship"], 20];
		removeAllActions _vic;
		_vex= _objects select 1;
		detach _vex;
		_this execVM "101st_Aux_Mod\Addons\DBA_General\DBA_Impulse\laat_lift_3.sqf";

	},[1],0,true,true,""," driver  _target == _this "];

},[1],0,true,true,""," driver  _target == _this "];