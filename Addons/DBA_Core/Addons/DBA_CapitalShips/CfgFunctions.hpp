class CfgFunctions
{
    class DBA_CapitalShips
	{
		class functions
		{
			file = "DBA_Core\Addons\DBA_CapitalShips\functions";

            class achilles {};
            class ambientFleet {};
            class barrage {};
            class barrageArea {};
            class crashShip {};
            class crashShipLocal {};
            class createShipControls {};
            class getBarrageAmmo {};
            class getBarrageSpawnPosition {};
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
