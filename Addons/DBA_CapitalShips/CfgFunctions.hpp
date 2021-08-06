class CfgFunctions
{
    class DBA_CapitalShips
	{
		class functions
		{
			file = "101st_Aux_Mod\Addons\DBA_CapitalShips\functions";

            class achilles {};
            class ambientFleet {};
            class bombard {};
            class bombardArea {};
            class crashShip {};
            class crashShipLocal {};
            class createShipControls {};
            class getBombardmentAmmo {};
            class getBombardmentSpawnPosition {};
            class moveShip {};
            class moveShipLocal {};
            class moveTo {};
            class selectShip {};
			class zen {};
			class zeus
			{
				postInit = 1;
			};

            // GUI
            class cancelButton {};
            class controlSettingsOnLoad {};
            class moveButton {};
            class selectDestination {};
            class sliderChanged {};
		};
	};
};
