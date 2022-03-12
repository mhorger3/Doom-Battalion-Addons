params["_this"];
while {alive _this} do
{
	if (_this getHitPointDamage "hitShield" == 1) then {
	_this animateSource ["ShieldStatus", 1];
	sleep 30;
	_this setHit ["hitShield",0];
	}
	else {
	if (_this getVariable ["cloakStatus", false] == true) then
	{sleep 1;}
	else {_this animateSource ["ShieldStatus", 0];};
	};
	sleep 1;
};
