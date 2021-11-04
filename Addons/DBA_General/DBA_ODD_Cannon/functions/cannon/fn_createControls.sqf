// Example: [this, [Launcher_1]] call DBA_ODD_Cannon_fnc_createControls;
params ["_object", "_launchers"];

_object setVariable ["DBA_linkedLaunchers", _launchers, true];

_object addAction [
	"ODD Cannon Control",
	{
		params ["_target", "_caller", "_actionId", "_arguments"];
		
		missionNamespace setVariable ["DBA_ODD_Cannon_console", _target, false];
		createDialog "DBA_ODD_Cannon_Control_Dialog";
	}
];
