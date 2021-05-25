params ["_destination", "_launchDelay", "_launchType", "_launchData"];

switch (_launchType) do
{
	case 0: {
		[_destination, _launchDelay] call DBA_ODD_Cannon_fnc_launchInfantry;
	};
	case 1: {
		[_destination, _launchDelay, _launchData] call DBA_ODD_Cannon_fnc_launchObject;
	};
};
