class CfgPatches
{
    class DBA_Aux_Mod_CapitalShips
    {
        author = "Ragwolf";
        name = "101st Aux Mod Capital Ships";

        requiredAddons[] =
        {
            "DBA_Aux_Mod_Common"
        };
        requiredVersion = 0.1;
        ammo[] =
        {
            "DBA_CapitalShips_Ammo_Base",
            "DBA_CapitalShips_Ammo_Blue",
            "DBA_CapitalShips_Ammo_Green",
            "DBA_CapitalShips_Ammo_Red"
        };
        units[] =
        {
            // Ammo Props
            "DBA_CapitalShips_Ammo_Base_Prop",
            "DBA_CapitalShips_Ammo_Blue_Prop",
            "DBA_CapitalShips_Ammo_Green_Prop",
            "DBA_CapitalShips_Ammo_Red_Prop",
            // Ships
            "DBA_CapitalShips_Acclamator",
            "DBA_CapitalShips_Arquitens",
            "DBA_CapitalShips_Lucrehulk",
            "DBA_CapitalShips_Munificent",
            "DBA_CapitalShips_Providence",
            "DBA_CapitalShips_Providence_Dreadnought",
            "DBA_CapitalShips_Quasar",
            "DBA_CapitalShips_Recusant",
            "DBA_CapitalShips_Recusant_Dreadnought",
            "DBA_CapitalShips_Subjugator",
            "DBA_CapitalShips_Venator"
        };
        weapons[] = {};
    };
};
