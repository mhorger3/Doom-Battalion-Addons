class CfgFunctions
{
    class DBA_Camo_Changer
	{
		class functions
		{
			file = "DBA_Republic\Addons\DBA_Camo_Changer\functions";

            class addInteractions {};
            class activateBlend {};
            class blend {};
            class changeCamo {};
            class deactivateBlend {};
            class getCamoTemplate {};
            class hasCamoChanger {};
            class hint {};
            class isCamoEquipped {};
            class registerZeusModules
            {
                postInit = 1;
            };
        };
    };
};
