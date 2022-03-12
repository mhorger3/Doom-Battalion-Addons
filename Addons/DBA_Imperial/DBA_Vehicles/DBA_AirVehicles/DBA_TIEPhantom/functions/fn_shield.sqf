params ["_this"];
while {alive _this && isEngineOn _this} do
	{
		while {_this getvariable [""cloakStatus"",false]) == false} do
			{
				if (CBA_missionTime < _Lastkilledtime + 30) then {sleep 1} else 
				private _shield = "DBA_TIEPhantomShield" createVehicle [0,0,0];
				_shield attachTo _this;
				if 
				
			};
	};
deleteVehicle _shield;


Private _Lastkilledtime = 0;
while {alive _this && isEngineOn _this} do
	{
			if (CBA_missionTime < _Lastkilledtime + 30 && _this getvariable [""cloakStatus"",false]) == true) then {sleep 1} else 
			private _shield = "DBA_TIEPhantomShield" createVehicle [0,0,0];
			_shield attachTo _this;
		while {alive _shield} do
			{
				
				sleep 1;
				if (_this getvariable [""cloakStatus"",false]) == true) exitwith {};
				
			};
			_Lastkilledtime = CBA_missionTime;
			
	};
deleteVehicle _shield;