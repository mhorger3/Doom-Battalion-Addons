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
	


    class 101st_NoseArt_Gearhead: 101st_NoseArt_None
    {
        displayName="Gearhead";
        statement="_target setObjectTextureGlobal [1, '101st_Aux_Mod\Addons\DBA_AirVehicles\Republic\LAAT\Command_Arcturus_CO.paa']";
    };
    class 101st_NoseArt_Wolf: 101st_NoseArt_None
    {
        displayName="Wolf";
        statement="_target setObjectTextureGlobal [1, '101st_Aux_Mod\Addons\DBA_AirVehicles\Republic\LAAT\Denial_LAAT_ARMA_CO.paa']";
    };
    class 101st_NoseArt_crashTest: 101st_NoseArt_None
    {
        displayName="Crash Test";
        statement="_target setObjectTextureGlobal [1, '101st_Aux_Mod\Addons\DBA_AirVehicles\Republic\LAAT\Arcturus_LAAT_ARMA_CO.paa']";
    };
    class 101st_NoseArt_Dragon: 101st_NoseArt_None
    {
        displayName="Dragon";
        statement="_target setObjectTextureGlobal [1, '101st_Aux_Mod\Addons\DBA_AirVehicles\Republic\LAAT\Dragon_LAAT_ARMA_CO.paa']";
    };
    class 101st_NoseArt_Mockingjay: 101st_NoseArt_None
    {
        displayName="Mockingjay";
        statement="_target setObjectTextureGlobal [1, '101st_Aux_Mod\Addons\DBA_AirVehicles\Republic\LAAT\Jay_LAAT_Base_CO.paa']";
    };
};
