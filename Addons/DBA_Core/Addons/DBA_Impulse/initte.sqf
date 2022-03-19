

_vehic = _this;
_vehic setvariable ["impulsorStatus",true,true];

_titlehintimpulsor  = "<t color='#E57300' size='2' shadow='1' shadowColor='#000000' align='center'>IMPULSOR</t>";
_texthintimpulsor   = "<br /><t color='#00ff00' size='1.4' shadow='1' shadowColor='#000000' align='center'>ON</t>";
hint parseText (_titlehintimpulsor+_texthintimpulsor);
[_vehic, "LAATstart_repulsor"] remoteExec ["say3D", 0, false];

while {((_vehic getvariable ["impulsorStatus",false]) AND (alive _vehic))} do
{
if (speed _vehic <= 600) then {
_vel = velocity _vehic;
_dir = direction _vehic;
_speed = 10;
_vehic setVelocity [
(_vel select 0) + (sin _dir * _speed), 
(_vel select 1) + (cos _dir * _speed), 
(_vel select 2)
];
};
sleep 0.5;
};
