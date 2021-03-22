// _t = time
// _b = beginning value
// _c = change in value
// _d = duration
params ["_t", "_b", "_c", "_d"];

_t = _t / (_d / 2);

if (_t < 1) then
{
	_c / 2 * _t * _t * _t + _b
}
else
{
	_t = _t - 2;
	_c / 2 * (_t * _t * _t + 2) + _b
};
