// _t = time
// _b = beginning value
// _c = change in value
// _d = duration
params ["_t", "_b", "_c", "_d"];

_t = _t / _d;

_c * _t * _t * _t + _b
