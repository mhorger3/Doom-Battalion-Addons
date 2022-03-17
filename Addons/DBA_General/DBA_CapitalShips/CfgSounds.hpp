class CfgSounds
{
	sounds[] = {};

	class capital_ship_engines
	{
		name = "capital_ship_engines";
		sound[] = {
			"\DBA_Core\Addons\DBA_General\DBA_CapitalShips\sounds\capital_ship_engines.ogg", db + 10, 1
		};
        titles[] = {};
	};

    class imperial_alert
    {
        name = "imperial_alert";
        sound[] = {
            "\DBA_Core\Addons\DBA_General\DBA_CapitalShips\sounds\imperial_alert.ogg", db + 10, 1
        };
        titles[] = {};
    };

    class barrage_shot
    {
        name = "barrage_shot";
        sound[] = {
            "DBA_Core\Addons\DBA_Weapons\KathHound\AR.ogg", db + 10, 1
        };
        titles[] = {};
    };
};
