
_vehic = _this;
_vehic setvariable ["impulsorStatus",false,true];


_titlehintimpulsor  = "<t color='#E57300' size='2' shadow='1' shadowColor='#000000' align='center'>IMPULSOR</t>";
_texthintimpulsor   = "<br /><t color='#CE0000' size='1.4' shadow='1' shadowColor='#000000' align='center'>OFF</t>";
hint parseText (_titlehintimpulsor+_texthintimpulsor);


while {(!(_vehic getvariable ["impulsorStatus",false]) AND (speed _vehic > 100))} do
{
_vel = velocity _vehic;
_dir = direction _vehic;
_speed = -10;
_vehic setVelocity [
(_vel select 0) + (sin _dir * _speed), 
(_vel select 1) + (cos _dir * _speed), 
(_vel select 2)
];
sleep 0.5;
};

