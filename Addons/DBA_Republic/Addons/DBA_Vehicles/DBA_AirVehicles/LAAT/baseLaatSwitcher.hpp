class 101st_Style_Changer
{
    displayName="Change Style"; //Written by RD501
    exceptions[]=
    {
        "isNotInside",
        "isNotSwimming",
        "isNotSitting"
    };
    condition="!(isNull objectParent player) && (driver (vehicle player)==player)";
    showDisabled=0;
    priority=2;

    class 101st_NoseArt_None
    {
        displayName="None";
        exceptions[]=
        {
            "isNotInside",
            "isNotSwimming",
            "isNotSitting"
        };
        condition="!(isNull objectParent player)";
        statement="_target setObjectTextureGlobal [1,'101st_Aux_Mod\Addons\DBA_AirVehicles\Republic\LAAT\Command_Base_CO.paa']";
        showDisabled=0;
        runOnHover=0;
        priority=2.5;
    };
	

    class 101st_NoseArt_Sunlight: 101st_NoseArt_None
    {
        displayName="Sunlight";
        statement="_target setObjectTextureGlobal [1, '101st_Aux_Mod\Addons\Vehicles\LAAT\LAAT_Base_Nyom_CO.paa']";
    };

 	class 101st_NoseArt_Lightning: 101st_NoseArt_None
    {
        displayName="Lightning";
        statement="_target setObjectTextureGlobal [1, '101st_Aux_Mod\Addons\Vehicles\LAAT\LAAT_Base_Frisk_CO.paa']";
    };

    class 101st_NoseArt_Ice: 101st_NoseArt_None
    {
        displayName="Fox";
        statement="_target setObjectTextureGlobal [1, '101st_Aux_Mod\Addons\Vehicles\LAAT\LAAT_Base_Prof_CO.paa']";
    };

    class 101st_NoseArt_Nexu: 101st_NoseArt_None
    {
        displayName="Nexu";
        statement="_target setObjectTextureGlobal [1, '101st_Aux_Mod\Addons\Vehicles\LAAT\LAAT_Base_Nexus_CO.paa']";
    };
    class 101st_NoseArt_Gearhead: 101st_NoseArt_None
    {
        displayName="Gearhead";
        statement="_target setObjectTextureGlobal [1, '101st_Aux_Mod\Addons\Vehicles\LAAT\LAAT_Base_Arcturus_CO.paa']";
    };
    class 101st_NoseArt_Wolf: 101st_NoseArt_None
    {
        displayName="Wolf";
        statement="_target setObjectTextureGlobal [1, '101st_Aux_Mod\Addons\DBA_AirVehicles\Republic\LAAT\Denial_LAAT_ARMA_CO.paa']";
    };
    class 101st_NoseArt_Dragon: 101st_NoseArt_None
    {
        displayName="Dragon";
        statement="_target setObjectTextureGlobal [1, '101st_Aux_Mod\Addons\DBA_AirVehicles\Republic\LAAT\Dragon_LAAT_ARMA_CO.paa']";
    };
};
