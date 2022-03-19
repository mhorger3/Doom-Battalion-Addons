params ["_laat", "_color"];

if !(hasInterface) exitWith {};

private _sunriseSunsetTime = date call BIS_fnc_sunriseSunsetTime;
private _sunriseTime = _sunriseSunsetTime # 0;
private _sunsetTime = _sunriseSunsetTime # 1;

private _lp = _laat getVariable [
	"101st_LAAT_Light",
	"#lightpoint" createVehicleLocal (_laat modelToWorld [0, DBA_LAAT_InteriorLight_PositionY, DBA_LAAT_InteriorLight_PositionZ])
];

private _intensity = if (dayTime > _sunsetTime || dayTime < _sunriseTime) then
{
	100
}
else
{
	100000
};

_lp setLightColor _color;
_lp setLightAmbient _color;
_lp setLightBrightness 1;
_lp setLightIntensity _intensity;
_lp setLightDayLight true;
_lp attachTo [_laat, [0, DBA_LAAT_InteriorLight_PositionY, DBA_LAAT_InteriorLight_PositionZ]];

_laat setVariable ["101st_LAAT_Light", _lp];
