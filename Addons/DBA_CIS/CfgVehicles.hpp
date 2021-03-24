#define mag_xx(a,b) class _xx_##a {magazine = a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}

class CfgVehicles {
    // Base class definitions
    class O_Soldier_F;
    class RD501_opfor_unit_IG_88;
    class RD501_drone_cis_Hover_Droid;
    class RD501_HMP_transport;
    class RD501_HMP_gunship;
    class 101st_Crab_Droid;
	class 101st_DSD_Droid;
    class 101st_DSD3_Droid;
    class 101st_NR99_Droid_Tank;
    class 101st_Octo_Droid;
	class 101st_Hyena_Bomber;
    class 3AS_GAT;
    class 3AS_GAT_Olive;
    class 3AS_GAT_tan;
    class 3AS_GAT_urban;
    class 3AS_GAT_Light;
    class 3AS_GAT_Light_Olive;
    class 3AS_GAT_Light_tan;
    class 3AS_GAT_Light_urban;
    class 3AS_AAT;
    class 3AS_AAT_snow;
    class 3AS_AAT_tan;
    class 3AS_AAT_Tropic;
    class 3AS_AAT_urban;
    class RD501_Praetorian_Variant_normal;
    class SW_SPCIS;
    class RD501_heavy_ordinance_tank_CIS;
    class RD501_rocket_ordinance_tank_CIS;
    class 3as_MTT;
    class 3as_SAC_Trade;
    class 442_argon_ammo_cis;
    class 442_argon_device_cis;
    class 442_argon_fuel_cis;
    class 442_argon_medical_cis;
    class 442_argon_repair_cis;
    class 442_argon_transport_cis;
    class 442_argon_covered_cis;
    class 3as_CIS_Mortar;
    class O_OKalani_CIS_Droideka_01;
    class O_OKalani_DSD1_Dwarf_Spider_Droid_01;
    class O_OKalani_DSD1_Dwarf_Spider_Droid_02;
    class O_OKalani_Eweb_02;
    class O_OKalani_OG_10_Homing_Spider_01;
    class 3as_ParticleCannon;
    class 3AS_FieldCannon;
    class RD501_speedboat_cis;
    class 3as_Vulture_dynamicLoadout;
    class O_OKalani_Vulture_Droid_01;
    class O_OKalani_Hyena_Bomber_Droid_01;
    class RD501_vulture_MKII;
    class RD501_trifighter_MKII;
    class RD501_hyena_Mk2;
    class JLTS_B1_backpack;
    class JLTS_B1_backpack_Geonosis;
    class JLTS_B1_backpack_training;
    class JLTS_B1_antenna;
    class JLTS_B1_antenna_Geonosis;
    class JLTS_B1_antenna_training;
    class JLTS_B1_jetpack_Rocket;
    class FlagCarrier;

    class O_DBA_CIS_B1_Backpack_Jungle : JLTS_B1_backpack
    {
        scope = 2;
        hiddenSelectionsTextures[] =
        {
            "101st_Aux_Mod\Addons\DBA_CIS_Textures\data\Jungle_B1_Backpack_CO.paa"
        };
    };

    class O_DBA_CIS_B1_Backpack_Winter : JLTS_B1_backpack
    {
        scope = 2;
        hiddenSelectionsTextures[] =
        {
            "101st_Aux_Mod\Addons\DBA_CIS_Textures\data\Winter_B1_Backpack_CO.paa"
        };
    };

    class O_DBA_CIS_B1_Antenna_Sniper : JLTS_B1_antenna
    {
        scope = 2;
        hiddenSelectionsTextures[] =
        {
            "101st_Aux_Mod\Addons\DBA_CIS_Textures\data\Normal_B1_Sniper_Antenna_CO.paa"
        };
    };

    class O_DBA_CIS_B1_Backpack_Sniper : JLTS_B1_backpack
    {
        scope = 2;
        hiddenSelectionsTextures[] =
        {
            "101st_Aux_Mod\Addons\DBA_CIS_Textures\data\Normal_B1_Sniper_Backpack_CO.paa"
        };
    };

    class O_DBA_CIS_B1_Antenna_Sniper_Geonosis : JLTS_B1_backpack
    {
        scope = 2;
        hiddenSelectionsTextures[] =
        {
            "101st_Aux_Mod\Addons\DBA_CIS_Textures\data\Geo_B1_Sniper_Antenna_CO.paa"
        };
    };

    class O_DBA_CIS_B1_Backpack_Sniper_Geonosis : JLTS_B1_backpack
    {
        scope = 2;
        hiddenSelectionsTextures[] =
        {
            "101st_Aux_Mod\Addons\DBA_CIS_Textures\data\Geo_B1_Sniper_Backpack_CO.paa"
        };
    };

    class O_DBA_CIS_B1_Backpack_Rifleman : JLTS_B1_backpack
    {
        scope = 1;
        class TransportMagazines
        {
        };
        class TransportItems
        {
        };
    };

    class O_DBA_CIS_B1_Backpack_Rifleman_Geonosis : JLTS_B1_backpack_Geonosis
    {
        scope = 1;
        class TransportMagazines
        {
        };
        class TransportItems
        {
        };
    };

    class O_DBA_CIS_B1_Backpack_Rifleman_Jungle : O_DBA_CIS_B1_Backpack_Jungle
    {
        scope = 1;
        class TransportMagazines
        {
        };
        class TransportItems
        {
        };
    };

    class O_DBA_CIS_B1_Backpack_Rifleman_Training : JLTS_B1_backpack_training
    {
        scope = 1;
        class TransportMagazines
        {
        };
        class TransportItems
        {
        };
    };

    class O_DBA_CIS_B1_Backpack_Rifleman_Winter : O_DBA_CIS_B1_Backpack_Winter
    {
        scope = 1;
        class TransportMagazines
        {
        };
        class TransportItems
        {
        };
    };

    class O_DBA_CIS_B1_Antenna : JLTS_B1_antenna
    {
        scope = 1;
        class TransportMagazines
        {
        };
        class TransportItems
        {
        };
    };

    class O_DBA_CIS_B1_Antenna_Geonosis : JLTS_B1_antenna_Geonosis
    {
        scope = 1;
        class TransportMagazines
        {
        };
        class TransportItems
        {
        };
    };

    class O_DBA_CIS_B1_Antenna_Jungle : JLTS_B1_antenna
    {
        scope = 2;
        hiddenSelectionsTextures[] =
        {
            "101st_Aux_Mod\Addons\DBA_CIS_Textures\data\Jungle_B1_Antenna_CO.paa"
        };
    };

    class O_DBA_CIS_B1_Antenna_Training : JLTS_B1_antenna_training
    {
        scope = 1;
        class TransportMagazines
        {
        };
        class TransportItems
        {
        };
    };

    class O_DBA_CIS_B1_Antenna_Winter : JLTS_B1_antenna
    {
        scope = 2;
        hiddenSelectionsTextures[] =
        {
            "101st_Aux_Mod\Addons\DBA_CIS_Textures\data\Winter_B1_Antenna_CO.paa"
        };
    };

    class O_DBA_CIS_B1_Backpack_AA : JLTS_B1_backpack
    {
        scope = 1;
        class TransportMagazines
        {
            mag_xx(Titan_AA, 2);
        };
        class TransportItems
        {
        };
    };

    class O_DBA_CIS_B1_Backpack_AA_Geonosis : JLTS_B1_backpack_Geonosis
    {
        scope = 1;
        class TransportMagazines
        {
            mag_xx(Titan_AA, 2);
        };
        class TransportItems
        {
        };
    };

    class O_DBA_CIS_B1_Backpack_AA_Training : JLTS_B1_backpack_training
    {
        scope = 1;
        class TransportMagazines
        {
            mag_xx(Titan_AA, 2);
        };
        class TransportItems
        {
        };
    };

    class O_DBA_CIS_B1_Backpack_AA_Winter : O_DBA_CIS_B1_Backpack_Winter
    {
        scope = 1;

        class TransportMagazines
        {
            mag_xx(Titan_AA, 2);
        };
        class TransportItems
        {
        };
    };

    class O_DBA_CIS_B1_Backpack_AT : JLTS_B1_backpack
    {
        scope = 1;
        class TransportMagazines
        {
            mag_xx(JLTS_E60R_AT_mag, 2);
        };
        class TransportItems
        {
        };
    };

    class O_DBA_CIS_B1_Backpack_AT_Geonosis : JLTS_B1_backpack_Geonosis
    {
        scope = 1;
        class TransportMagazines
        {
            mag_xx(JLTS_E60R_AT_mag, 2);
        };
        class TransportItems
        {
        };
    };

    class O_DBA_CIS_B1_Backpack_AT_Jungle : O_DBA_CIS_B1_Backpack_Jungle
    {
        scope = 1;

        class TransportMagazines
        {
            mag_xx(JLTS_E60R_AT_mag, 2);
        };
        class TransportItems
        {
        };
    };

    class O_DBA_CIS_B1_Backpack_AT_Training : JLTS_B1_backpack_training
    {
        scope = 1;
        class TransportMagazines
        {
            mag_xx(JLTS_E60R_AT_mag, 2);
        };
        class TransportItems
        {
        };
    };

    class O_DBA_CIS_B1_Backpack_AT_Winter : O_DBA_CIS_B1_Backpack_Winter
    {
        scope = 1;

        class TransportMagazines
        {
            mag_xx(JLTS_E60R_AT_mag, 2);
        };
        class TransportItems
        {
        };
    };

    class O_DBA_CIS_B1_Backpack_Rocket : JLTS_B1_jetpack_Rocket
    {
        scope = 1;
        class TransportMagazines
        {
            mag_xx(JLTS_E60R_AP_mag, 4);
        };
        class TransportItems
        {
        };
    };

    class O_DBA_CIS_B1_Base_F : O_Soldier_F
    {
        scope = 0;
        scopeCurator = 0;
        displayName = "";
       
        editorSubcategory = "O_DBA_CIS_B1_Droids";
        vehicleClass = "O_DBA_CIS_B1_Droids";
        side = 0;
        faction = "O_DBA_CIS_F";
        genericNames = "JLTS_DroidsB1";
        model = "\MRC\JLTS\characters\DroidArmor\DroidUniformB1.p3d";

        identityTypes[] = { "NoGlasses", "Head_NATO" };
        facewear = "";

        uniformClass = "";

        linkedItems[] = { "ItemMap","ItemGPS","ItemCompass" };
        respawnLinkedItems[] = { "ItemMap","ItemGPS","ItemCompass" };
        
        weapons[] = {};
        respawnWeapons[] = {};

        magazines[] = {};
        respawnMagazines[] = {};

        items[] = {};
        respawnItems[] = {};

        armor=5;
        armorStructural=1;
        explosionShielding=0.1;
        minTotalDamageThreshold=0.001;
        impactDamageMultiplier=0.5;
        impactEffectsBlood="ImpactMetal";

        class HitPoints
        {

            class HitFace
            {
                armor=1;
                material=-1;
                name="face_hub";
                passThrough=0.1;
                radius=0.08;
                explosionShielding=1.5;
                minimalHit=0.01;
            };

            class HitNeck : HitFace
            {
                armor=5;
                name="neck";
                radius=0.1;
            };

            class HitHead : HitNeck
            {
                armor=1;
                name="head";
                radius=0.2;
                depends="HitFace max HitNeck";
            };

            class HitPelvis
            {
                armor=5;
                material=-1;
                name="pelvis";
                passThrough=0.1;
                radius=0.2;
                explosionShielding=2;
                visual="injury_body";
                minimalHit=0.01;
            };

            class HitAbdomen : HitPelvis
            {
                name="spine1";
                radius=0.15;
            };

            class HitDiaphragm : HitAbdomen
            {
                name="spine2";
            };

            class HitChest : HitDiaphragm
            {
                name="spine3";
            };

            class HitBody : HitChest
            {
                armor=1000;
                name="body";
                radius=0.16;
                depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
            };

            class HitArms
            {
                armor=15;
                material=-1;
                name="arms";
                passThrough=0.1;
                radius=0.1;
                explosionShielding=2;
                visual="injury_hands";
                minimalHit=0.01;
            };

            class HitHands : HitArms
            {
                name="hands";
                depends="HitArms";
            };

            class HitLegs
            {
                armor=15;
                material=-1;
                name="legs";
                passThrough=0.1;
                radius=0.12;
                explosionShielding=2;
                visual="injury_legs";
                minimalHit=0.01;
            };
        };
    };

    class O_DBA_CIS_B2_Base_F : O_Soldier_F
    {
        scope = 0;
        scopeCurator = 0;
        displayName = "";
       
        editorSubcategory = "O_DBA_CIS_Spec_Ops";
        vehicleClass = "O_DBA_CIS_Spec_Ops";
        side = 0;
        faction = "O_DBA_CIS_F";
        editorPreview = "ux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_B2_Base_F.jpg";
        genericNames = "JLTS_DroidsB1";
        model = "\SWOP_Droids\B2.p3d";

        identityTypes[] = { "NoGlasses", "Head_NATO" };
        facewear = "";

        uniformClass = "";

        linkedItems[] = { "ItemMap","ItemGPS","ItemCompass" };
        respawnLinkedItems[] = { "ItemMap","ItemGPS","ItemCompass" };
        
        weapons[] = {};
        respawnWeapons[] = {};

        magazines[] = {};
        respawnMagazines[] = {};

        items[] = {};
        respawnItems[] = {};

        maxSpeed = 1.5;

        armor=7;
        armorStructural=2;
        explosionShielding=0.2;
        minTotalDamageThreshold=0.001;
        impactDamageMultiplier=0.1;
        impactEffectsBlood="ImpactMetal";

        class HitPoints
        {
            class HitFace
            {
                armor=1;
                material=-1;
                name="face_hub";
                passThrough=0.1;
                radius=0.06;
                explosionShielding=0.75;
                minimalHit=0.1;
            };

            class HitNeck : HitFace
            {
                armor=5;
                name="neck";
                radius=0.1;
            };

            class HitHead : HitNeck
            {
                armor=1;
                name="head";
                radius=0.1;
                depends="HitFace max HitNeck";
            };

            class HitPelvis
            {
                armor=5;
                material=-1;
                name="pelvis";
                passThrough=0.1;
                radius=0.2;
                explosionShielding=1;
                visual="injury_body";
                minimalHit=0.1;
            };

            class HitAbdomen : HitPelvis
            {
                name="spine1";
                radius=0.15;
            };

            class HitDiaphragm : HitAbdomen
            {
                name="spine2";
                explosionShielding=6;
            };

            class HitChest : HitDiaphragm
            {
                name="spine3";
            };

            class HitBody : HitChest
            {
                armor=1000;
                name="body";
                radius=0.16;
                depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
            };

            class HitArms
            {
                armor=15;
                material=-1;
                name="arms";
                passThrough=1;
                radius=0.1;
                explosionShielding=1;
                visual="injury_hands";
                minimalHit=0.1;
            };

            class HitHands : HitArms
            {
                name="hands";
                depends="HitArms";
            };

            class HitLegs
            {
                armor=15;
                material=-1;
                name="legs";
                passThrough=1;
                radius=0.12;
                explosionShielding=1;
                visual="injury_legs";
                minimalHit=0.1;
            };
        };
    };

    class O_DBA_CIS_BX_Base_F : O_Soldier_F
    {
        scope = 0;
        scopeCurator = 0;
        displayName = "";
       
        editorSubcategory = "O_DBA_CIS_Spec_Ops";
        vehicleClass = "O_DBA_CIS_Spec_Ops";
        side = 0;
        faction = "O_DBA_CIS_F";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_BX_Base_F.jpg";
        genericNames = "JLTS_DroidsB1";

        identityTypes[] = { "NoGlasses", "Head_NATO" };
        facewear = "";

        uniformClass = "";

        linkedItems[] = { "ItemMap","ItemGPS","ItemCompass" };
        respawnLinkedItems[] = { "ItemMap","ItemGPS","ItemCompass" };
        
        weapons[] = {};
        respawnWeapons[] = {};

        magazines[] = {};
        respawnMagazines[] = {};

        items[] = {};
        respawnItems[] = {};

        armor=25;
        armorStructural=5;
        explosionShielding=2;
        minTotalDamageThreshold=0.001;
        impactDamageMultiplier=0.5;
        impactEffectsBlood="ImpactMetal";

        armor=5;
        armorStructural=1;
        explosionShielding=0.1;
        minTotalDamageThreshold=0.001;
        impactDamageMultiplier=0.1;
        impactEffectsBlood="ImpactMetal";

        class HitPoints
        {

            class HitFace
            {
                armor=1;
                material=-1;
                name="face_hub";
                passThrough=0.1;
                radius=0.08;
                explosionShielding=1.5;
                minimalHit=0.01;
            };

            class HitNeck : HitFace
            {
                armor=5;
                name="neck";
                radius=0.1;
            };

            class HitHead : HitNeck
            {
                armor=1;
                name="head";
                radius=0.2;
                depends="HitFace max HitNeck";
            };

            class HitPelvis
            {
                armor=5;
                material=-1;
                name="pelvis";
                passThrough=0.1;
                radius=0.2;
                explosionShielding=2;
                visual="injury_body";
                minimalHit=0.01;
            };

            class HitAbdomen : HitPelvis
            {
                name="spine1";
                radius=0.15;
            };

            class HitDiaphragm : HitAbdomen
            {
                name="spine2";
            };

            class HitChest : HitDiaphragm
            {
                name="spine3";
            };

            class HitBody : HitChest
            {
                armor=1000;
                name="body";
                radius=0.16;
                depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
            };

            class HitArms
            {
                armor=15;
                material=-1;
                name="arms";
                passThrough=0.1;
                radius=0.1;
                explosionShielding=2;
                visual="injury_hands";
                minimalHit=0.01;
            };

            class HitHands : HitArms
            {
                name="hands";
                depends="HitArms";
            };

            class HitLegs
            {
                armor=15;
                material=-1;
                name="legs";
                passThrough=0.1;
                radius=0.12;
                explosionShielding=2;
                visual="injury_legs";
                minimalHit=0.01;
            };
        };
    };

    class O_DBA_CIS_B1_Droid_F : O_DBA_CIS_B1_Base_F
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "B1 Droid";
       
        side = 0;
        faction = "O_DBA_CIS_F";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_B1_Droid_F.jpg";
        hiddenSelectionsTextures[] =
        {
            "\MRC\JLTS\characters\DroidArmor\data\b1_co.paa"
        };

        identityTypes[] = { "NoGlasses", "Head_NATO" };
        facewear = "";

        uniformClass = "DBA_B1";
        
        weapons[] = { "JLTS_E5","Throw",
			"Put" };
        respawnWeapons[] = { "JLTS_E5","Throw",
			"Put" };

        magazines[] = { "JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","Chemlight_yellow","Chemlight_yellow","Chemlight_yellow","Chemlight_yellow","Chemlight_yellow","Chemlight_yellow", "101st_thermaldet_x1_mag", "101st_thermaldet_x1_mag", "101st_thermaldet_x1_mag" };
        respawnMagazines[] = { "JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","Chemlight_yellow","Chemlight_yellow","Chemlight_yellow","Chemlight_yellow","Chemlight_yellow","Chemlight_yellow","101st_thermaldet_x1_mag", "101st_thermaldet_x1_mag", "101st_thermaldet_x1_mag"  };

        items[] = { "ACE_CableTie","ACE_CableTie","ACE_CableTie" };
        respawnItems[] = { "ACE_CableTie","ACE_CableTie","ACE_CableTie" };

        backpack = "O_DBA_CIS_B1_Backpack_Rifleman";

    };

    class O_DBA_CIS_OOM_Command_Droid_F : O_DBA_CIS_B1_Base_F
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "OOM Command Droid";
       
        side = 0;
        faction = "O_DBA_CIS_F";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_OOM_Command_Droid_F.jpg";
        genericNames = "JLTS_DroidsOOM";
        hiddenSelectionsTextures[] =
        {
            "\MRC\JLTS\characters\DroidArmor\data\b1_commander_co.paa"
        };

        identityTypes[] = { "NoGlasses", "Head_NATO" };
        facewear = "";

        uniformClass = "DBA_B1_OOM";
        
        weapons[] = { "JLTS_E5","Throw",
			"Put" };
        respawnWeapons[] = { "JLTS_E5","Throw",
			"Put" };

        magazines[] = { "JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","RD501_thermaldet_x1_mag","RD501_thermaldet_x1_mag","RD501_thermaldet_x1_mag" };
        respawnMagazines[] = { "JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","101st_thermaldet_x1_mag", "101st_thermaldet_x1_mag", "101st_thermaldet_x1_mag"  };

        items[] = { "ACE_CableTie","ACE_CableTie","ACE_CableTie" };
        respawnItems[] = { "ACE_CableTie","ACE_CableTie","ACE_CableTie" };

        backpack = "O_DBA_CIS_B1_Antenna";

    };

    class O_DBA_CIS_B1_Crew_Droid_F : O_DBA_CIS_B1_Base_F
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "B1 Crew Droid";
       
        side = 0;
        faction = "O_DBA_CIS_F";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_B1_Crew_Droid_F.jpg";
        hiddenSelectionsTextures[] =
        {
            "\MRC\JLTS\characters\DroidArmor\data\b1_crew_co.paa"
        };

        identityTypes[] = { "NoGlasses", "Head_NATO" };
        facewear = "";

        uniformClass = "DBA_B1_Crew";
        
        weapons[] = { "JLTS_E5","Throw",
			"Put" };
        respawnWeapons[] = { "JLTS_E5","Throw",
			"Put" };

        magazines[] = { "JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","Chemlight_yellow","Chemlight_yellow","Chemlight_yellow","Chemlight_yellow","Chemlight_yellow","Chemlight_yellow","101st_thermaldet_x1_mag", "101st_thermaldet_x1_mag", "101st_thermaldet_x1_mag"  };
        respawnMagazines[] = { "JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","Chemlight_yellow","Chemlight_yellow","Chemlight_yellow","Chemlight_yellow","Chemlight_yellow","Chemlight_yellow","101st_thermaldet_x1_mag", "101st_thermaldet_x1_mag", "101st_thermaldet_x1_mag"  };

        items[] = { "ACE_CableTie","ACE_CableTie","ACE_CableTie" };
        respawnItems[] = { "ACE_CableTie","ACE_CableTie","ACE_CableTie" };

        backpack = "O_DBA_CIS_B1_Backpack_Rifleman";

    };

    class O_DBA_CIS_B1_Heavy_Droid_F : O_DBA_CIS_B1_Base_F
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "B1 Heavy Droid";
       
        side = 0;
        faction = "O_DBA_CIS_F";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_B1_Heavy_Droid_F.jpg";

        identityTypes[] = { "NoGlasses", "Head_NATO" };
        facewear = "";

        uniformClass = "DBA_B1";
        
        weapons[] = { "JLTS_E5C_stock","Throw",
			"Put" };
        respawnWeapons[] = { "JLTS_E5C_stock","Throw",
			"Put" };

        magazines[] = { "JLTS_E5C_mag","JLTS_E5C_mag","JLTS_E5C_mag","JLTS_E5C_mag","JLTS_E5C_mag","JLTS_E5C_mag","JLTS_E5C_mag","JLTS_E5C_mag","JLTS_E5C_mag","JLTS_E5C_mag","JLTS_E5C_mag","SmokeShellYellow","SmokeShellYellow","SmokeShellYellow","SmokeShellYellow","SmokeShellYellow","SmokeShellYellow","101st_thermaldet_x1_mag", "101st_thermaldet_x1_mag", "101st_thermaldet_x1_mag","101st_imploder_x1_mag"  };
        respawnMagazines[] = { "JLTS_E5C_mag","JLTS_E5C_mag","JLTS_E5C_mag","JLTS_E5C_mag","JLTS_E5C_mag","JLTS_E5C_mag","JLTS_E5C_mag","JLTS_E5C_mag","JLTS_E5C_mag","JLTS_E5C_mag","JLTS_E5C_mag","SmokeShellYellow","SmokeShellYellow","SmokeShellYellow","SmokeShellYellow","SmokeShellYellow","SmokeShellYellow","101st_thermaldet_x1_mag", "101st_thermaldet_x1_mag", "101st_thermaldet_x1_mag","101st_imploder_x1_mag"  };

        items[] = { "ACE_CableTie","ACE_CableTie","ACE_CableTie" };
        respawnItems[] = { "ACE_CableTie","ACE_CableTie","ACE_CableTie" };

        backpack = "O_DBA_CIS_B1_Backpack_Rifleman";

    };

    class O_DBA_CIS_OOM_Marine_Droid_F : O_DBA_CIS_B1_Base_F
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "OOM Marine Droid";
       
        side = 0;
        faction = "O_DBA_CIS_F";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_OOM_Marine_Droid_F.jpg";
        hiddenSelectionsTextures[] =
        {
            "\MRC\JLTS\characters\DroidArmor\data\b1_marine_co.paa"
        };

        identityTypes[] = { "NoGlasses", "Head_NATO" };
        facewear = "";

        uniformClass = "DBA_B1_Marine";
        
        weapons[] = { "JLTS_E5","JLTS_E60R_AT","Throw",
			"Put" };
        respawnWeapons[] = { "JLTS_E5","JLTS_E60R_AT","Throw",
			"Put" };

        magazines[] = { "JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","101st_thermaldet_x1_mag", "101st_thermaldet_x1_mag", "101st_thermaldet_x1_mag","101st_imploder_x1_mag" };
        respawnMagazines[] = { "JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag", "101st_thermaldet_x1_mag", "101st_thermaldet_x1_mag", "101st_thermaldet_x1_mag","101st_imploder_x1_mag" };

        items[] = { "ACE_CableTie","ACE_CableTie","ACE_CableTie" };
        respawnItems[] = { "ACE_CableTie","ACE_CableTie","ACE_CableTie" };

        backpack = "O_DBA_CIS_B1_Backpack_AT";

    };

    class O_DBA_CIS_OOM_Security_Droid_F : O_DBA_CIS_B1_Base_F
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "OOM Security Droid";
       
        side = 0;
        faction = "O_DBA_CIS_F";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_OOM_Security_Droid_F.jpg";
        hiddenSelectionsTextures[] =
        {
            "\MRC\JLTS\characters\DroidArmor\data\b1_security_co.paa"
        };

        identityTypes[] = { "NoGlasses", "Head_NATO" };
        facewear = "";

        uniformClass = "DBA_B1_Security";
        
        weapons[] = { "JLTS_E5","Throw",
			"Put" };
        respawnWeapons[] = { "JLTS_E5","Throw",
			"Put" };

        magazines[] = { "JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","101st_thermaldet_x1_mag", "101st_thermaldet_x1_mag", "101st_thermaldet_x1_mag","101st_imploder_x1_mag" };
        respawnMagazines[] = { "JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","101st_thermaldet_x1_mag", "101st_thermaldet_x1_mag", "101st_thermaldet_x1_mag","101st_imploder_x1_mag" };

        items[] = { "ACE_CableTie","ACE_CableTie","ACE_CableTie" };
        respawnItems[] = { "ACE_CableTie","ACE_CableTie","ACE_CableTie" };

        backpack = "O_DBA_CIS_B1_Backpack_Rifleman";

    };

    class O_DBA_CIS_OOM_Pilot_Droid_F : O_DBA_CIS_B1_Base_F
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "OOM Pilot Droid";
       
        side = 0;
        faction = "O_DBA_CIS_F";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_OOM_Pilot_Droid_F.jpg";
        hiddenSelectionsTextures[] =
        {
            "\MRC\JLTS\characters\DroidArmor\data\b1_pilot_co.paa"
        };

        identityTypes[] = { "NoGlasses", "Head_NATO" };
        facewear = "";

        uniformClass = "DBA_B1_Pilot";
        
        weapons[] = { "JLTS_E5","Throw",
			"Put" };
        respawnWeapons[] = { "JLTS_E5","Throw",
			"Put" };

        magazines[] = { "JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","SmokeShellYellow","SmokeShellYellow","SmokeShellYellow","SmokeShellYellow","SmokeShellYellow","SmokeShellYellow","101st_thermaldet_x1_mag", "101st_thermaldet_x1_mag", "101st_thermaldet_x1_mag","101st_imploder_x1_mag" };
        respawnMagazines[] = { "JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","SmokeShellYellow","SmokeShellYellow","SmokeShellYellow","SmokeShellYellow","SmokeShellYellow","SmokeShellYellow","101st_thermaldet_x1_mag", "101st_thermaldet_x1_mag", "101st_thermaldet_x1_mag","101st_imploder_x1_mag" };

        items[] = { "ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie" };
        respawnItems[] = { "ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie" };

        backpack = "O_DBA_CIS_B1_Backpack_Rifleman";

    };

    class O_DBA_CIS_B1_Sniper_Droid_F : O_DBA_CIS_B1_Base_F
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "B1 Sniper Droid";
       
        side = 0;
        faction = "O_DBA_CIS_F";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_B1_Sniper_Droid_F.jpg";
        hiddenSelectionsTextures[] =
        {
            "101st_Aux_Mod\Addons\DBA_CIS_Textures\data\Normal_B1_Sniper_Body_CO.paa"
        };

        identityTypes[] = { "NoGlasses", "Head_NATO" };
        facewear = "";

        uniformClass = "DBA_B1_Sniper";
        
        weapons[] = { "JLTS_E5S","Throw",
			"Put" };
        respawnWeapons[] = { "JLTS_E5S","Throw",
			"Put" };

        magazines[] = { "JLTS_E5S_mag","JLTS_E5S_mag","JLTS_E5S_mag","JLTS_E5S_mag","JLTS_E5S_mag","JLTS_E5S_mag","JLTS_E5S_mag","JLTS_E5S_mag","JLTS_E5S_mag","JLTS_E5S_mag","JLTS_E5S_mag","SmokeShellYellow","SmokeShellYellow","SmokeShellYellow","SmokeShellYellow","SmokeShellYellow","SmokeShellYellow","101st_thermaldet_x1_mag", "101st_thermaldet_x1_mag", "101st_thermaldet_x1_mag","101st_imploder_x1_mag" };
        respawnMagazines[] = { "JLTS_E5S_mag","JLTS_E5S_mag","JLTS_E5S_mag","JLTS_E5S_mag","JLTS_E5S_mag","JLTS_E5S_mag","JLTS_E5S_mag","JLTS_E5S_mag","JLTS_E5S_mag","JLTS_E5S_mag","JLTS_E5S_mag","SmokeShellYellow","SmokeShellYellow","SmokeShellYellow","SmokeShellYellow","SmokeShellYellow","SmokeShellYellow","101st_thermaldet_x1_mag", "101st_thermaldet_x1_mag", "101st_thermaldet_x1_mag","101st_imploder_x1_mag" };

        items[] = { "ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie" };
        respawnItems[] = { "ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie" };

        backpack = "O_DBA_CIS_B1_Backpack_Rifleman";

    };

    class O_DBA_CIS_B1_AA_Droid_F : O_DBA_CIS_B1_Base_F
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "B1 AA Droid";
       
        side = 0;
        faction = "O_DBA_CIS_F";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_B1_AA_Droid_F.jpg";

        identityTypes[] = { "NoGlasses", "Head_NATO" };
        facewear = "";

        uniformClass = "DBA_B1";
        
        weapons[] = { "JLTS_E5","launch_B_Titan_F","Throw",
			"Put" };
        respawnWeapons[] = { "JLTS_E5","launch_B_Titan_F","Throw",
			"Put" };

        magazines[] = { "JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","SmokeShellYellow","SmokeShellYellow","SmokeShellYellow","SmokeShellYellow","SmokeShellYellow","SmokeShellYellow","101st_thermaldet_x1_mag", "101st_thermaldet_x1_mag", "101st_thermaldet_x1_mag","101st_imploder_x1_mag" };
        respawnMagazines[] = { "JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","SmokeShellYellow","SmokeShellYellow","SmokeShellYellow","SmokeShellYellow","SmokeShellYellow","SmokeShellYellow","101st_thermaldet_x1_mag", "101st_thermaldet_x1_mag", "101st_thermaldet_x1_mag","101st_imploder_x1_mag" };

        items[] = { "ACE_CableTie","ACE_CableTie","ACE_CableTie" };
        respawnItems[] = { "ACE_CableTie","ACE_CableTie","ACE_CableTie" };

        backpack = "O_DBA_CIS_B1_Backpack_AA";

    };

    class O_DBA_CIS_B1_AT_Droid_F : O_DBA_CIS_B1_Base_F
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "B1 AT Droid";
       
        side = 0;
        faction = "O_DBA_CIS_F";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_B1_AT_Droid_F.jpg";

        identityTypes[] = { "NoGlasses", "Head_NATO" };
        facewear = "";

        uniformClass = "DBA_B1";
        
        weapons[] = { "JLTS_E5","JLTS_E60R_AT","Throw",
			"Put" };
        respawnWeapons[] = { "JLTS_E5","JLTS_E60R_AT","Throw",
			"Put" };

        magazines[] = { "JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","SmokeShellYellow","SmokeShellYellow","SmokeShellYellow","SmokeShellYellow","SmokeShellYellow","SmokeShellYellow","101st_thermaldet_x1_mag", "101st_thermaldet_x1_mag", "101st_thermaldet_x1_mag","101st_imploder_x1_mag" };
        respawnMagazines[] = { "JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","SmokeShellYellow","SmokeShellYellow","SmokeShellYellow","SmokeShellYellow","SmokeShellYellow","SmokeShellYellow","101st_thermaldet_x1_mag", "101st_thermaldet_x1_mag", "101st_thermaldet_x1_mag","101st_imploder_x1_mag" };

        items[] = { "ACE_CableTie","ACE_CableTie","ACE_CableTie" };
        respawnItems[] = { "ACE_CableTie","ACE_CableTie","ACE_CableTie" };

        backpack = "O_DBA_CIS_B1_Backpack_AT";

    };

    class O_DBA_CIS_B1_Rocket_Droid_F : O_DBA_CIS_B1_Base_F
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "B1 Rocket Droid";
       
        side = 0;
        faction = "O_DBA_CIS_F";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_B1_Rocket_Droid_F.jpg";
        hiddenSelectionsTextures[] =
        {
            "\MRC\JLTS\characters\DroidArmor\data\b1_rocket_co.paa"
        };

        identityTypes[] = { "NoGlasses", "Head_NATO" };
        facewear = "";

        uniformClass = "DBA_B1_Rocket";
        
        weapons[] = { "JLTS_E5","JLTS_E60R_AT","Throw",
			"Put" };
        respawnWeapons[] = { "JLTS_E5","JLTS_E60R_AT","Throw",
			"Put" };

        magazines[] = { "JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","SmokeShellYellow","SmokeShellYellow","SmokeShellYellow","SmokeShellYellow","SmokeShellYellow","SmokeShellYellow","101st_thermaldet_x1_mag", "101st_thermaldet_x1_mag", "101st_thermaldet_x1_mag","101st_imploder_x1_mag","101st_throwable_c_type_x1_mag" };
        respawnMagazines[] = { "JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","SmokeShellYellow","SmokeShellYellow","SmokeShellYellow","SmokeShellYellow","SmokeShellYellow","SmokeShellYellow","101st_thermaldet_x1_mag", "101st_thermaldet_x1_mag", "101st_thermaldet_x1_mag","101st_imploder_x1_mag","101st_throwable_c_type_x1_mag" };

        items[] = { "ACE_CableTie","ACE_CableTie","ACE_CableTie" };
        respawnItems[] = { "ACE_CableTie","ACE_CableTie","ACE_CableTie" };

        backpack = "O_DBA_CIS_B1_Backpack_Rocket";

    };

    class O_DBA_CIS_B1_Droid_Geonosis_F : O_DBA_CIS_B1_Droid_F
    {
        editorSubcategory = "O_DBA_CIS_B1_Droids_Geonosis";
        vehicleClass = "O_DBA_CIS_B1_Droids_Geonosis";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_B1_Droid_Geonosis_F.jpg";
        uniformClass = "DBA_B1_Geonosis";
        backpack = "O_DBA_CIS_B1_Backpack_Rifleman_Geonosis";
        hiddenSelectionsTextures[] =
        {
            "\MRC\JLTS\characters\DroidUnits\data\Droid_B1Geonosis_co.paa"
        };
    };

    class O_DBA_CIS_B1_AA_Droid_Geonosis_F : O_DBA_CIS_B1_AA_Droid_F
    {
        editorSubcategory = "O_DBA_CIS_B1_Droids_Geonosis";
        vehicleClass = "O_DBA_CIS_B1_Droids_Geonosis";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_B1_AA_Droid_Geonosis_F.jpg";
        uniformClass = "DBA_B1_Geonosis";
        backpack = "O_DBA_CIS_B1_Backpack_AA_Geonosis";
        hiddenSelectionsTextures[] =
        {
            "\MRC\JLTS\characters\DroidUnits\data\Droid_B1Geonosis_co.paa"
        };
    };

    class O_DBA_CIS_B1_AT_Droid_Geonosis_F : O_DBA_CIS_B1_AT_Droid_F
    {
        editorSubcategory = "O_DBA_CIS_B1_Droids_Geonosis";
        vehicleClass = "O_DBA_CIS_B1_Droids_Geonosis";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_B1_AT_Droid_Geonosis_F.jpg";
        uniformClass = "DBA_B1_Geonosis";
        backpack = "O_DBA_CIS_B1_Backpack_AT_Geonosis";
        hiddenSelectionsTextures[] =
        {
            "\MRC\JLTS\characters\DroidUnits\data\Droid_B1Geonosis_co.paa"
        };
    };

    class O_DBA_CIS_OOM_Command_Droid_Geonosis_F : O_DBA_CIS_OOM_Command_Droid_F
    {
        editorSubcategory = "O_DBA_CIS_B1_Droids_Geonosis";
        vehicleClass = "O_DBA_CIS_B1_Droids_Geonosis";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_OOM_Command_Droid_Geonosis_F.jpg";
        uniformClass = "DBA_B1_Geonosis_Commander";
        backpack = "O_DBA_CIS_B1_Antenna_Geonosis";
        hiddenSelectionsTextures[] =
        {
            "\MRC\JLTS\characters\DroidUnits\data\Droid_B1GeonosisCommander_co.paa"
        };
    };

    class O_DBA_CIS_B1_Heavy_Droid_Geonosis_F : O_DBA_CIS_B1_Heavy_Droid_F
    {
        editorSubcategory = "O_DBA_CIS_B1_Droids_Geonosis";
        vehicleClass = "O_DBA_CIS_B1_Droids_Geonosis";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_B1_Heavy_Droid_Geonosis_F.jpg";
        uniformClass = "DBA_B1_Geonosis";
        backpack = "O_DBA_CIS_B1_Backpack_Rifleman_Geonosis";
        hiddenSelectionsTextures[] =
        {
            "\MRC\JLTS\characters\DroidUnits\data\Droid_B1Geonosis_co.paa"
        };
    };

    class O_DBA_CIS_B1_Sniper_Droid_Geonosis_F : O_DBA_CIS_B1_Sniper_Droid_F
    {
        editorSubcategory = "O_DBA_CIS_B1_Droids_Geonosis";
        vehicleClass = "O_DBA_CIS_B1_Droids_Geonosis";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_B1_Sniper_Droid_Geonosis_F.jpg";
        uniformClass = "DBA_B1_Sniper_Geonosis";
        backpack = "O_DBA_CIS_B1_Backpack_Rifleman_Geonosis";
        hiddenSelectionsTextures[] =
        {
            "101st_Aux_Mod\Addons\DBA_CIS_Textures\data\Geo_B1_Sniper_Body_CO.paa"
        };
    };

    class O_DBA_CIS_B1_Droid_Jungle_F : O_DBA_CIS_B1_Droid_F
    {
        editorSubcategory = "O_DBA_CIS_B1_Droids_Jungle";
        vehicleClass = "O_DBA_CIS_B1_Droids_Jungle";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_B1_Droid_Jungle_F.jpg";
        uniformClass = "DBA_B1_Jungle";
        backpack = "O_DBA_CIS_B1_Backpack_Rifleman_Jungle";
        hiddenSelectionsTextures[] =
        {
            "101st_Aux_Mod\Addons\DBA_CIS_Textures\data\Jungle_B1_Body_CO.paa"
        };
    };

    class O_DBA_CIS_B1_AA_Droid_Jungle_F : O_DBA_CIS_B1_AA_Droid_F
    {
        editorSubcategory = "O_DBA_CIS_B1_Droids_Jungle";
        vehicleClass = "O_DBA_CIS_B1_Droids_Jungle";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_B1_AA_Droid_Jungle_F.jpg";
        uniformClass = "DBA_B1_Jungle";
        backpack = "O_DBA_CIS_B1_Backpack_AA_Jungle";
        hiddenSelectionsTextures[] =
        {
            "101st_Aux_Mod\Addons\DBA_CIS_Textures\data\Jungle_B1_Body_CO.paa"
        };
    };

    class O_DBA_CIS_B1_AT_Droid_Jungle_F : O_DBA_CIS_B1_AT_Droid_F
    {
        editorSubcategory = "O_DBA_CIS_B1_Droids_Jungle";
        vehicleClass = "O_DBA_CIS_B1_Droids_Jungle";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_B1_AT_Droid_Jungle_F.jpg";
        uniformClass = "DBA_B1_Jungle";
        backpack = "O_DBA_CIS_B1_Backpack_AT_Jungle";
        hiddenSelectionsTextures[] =
        {
            "101st_Aux_Mod\Addons\DBA_CIS_Textures\data\Jungle_B1_Body_CO.paa"
        };
    };

    class O_DBA_CIS_OOM_Command_Droid_Jungle_F : O_DBA_CIS_OOM_Command_Droid_F
    {
        editorSubcategory = "O_DBA_CIS_B1_Droids_Jungle";
        vehicleClass = "O_DBA_CIS_B1_Droids_Jungle";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_OOM_Command_Droid_Jungle_F.jpg";
        uniformClass = "DBA_B1_Jungle";
        backpack = "O_DBA_CIS_B1_Antenna_Jungle";
        hiddenSelectionsTextures[] =
        {
            "101st_Aux_Mod\Addons\DBA_CIS_Textures\data\Jungle_B1_Body_CO.paa"
        };
    };

    class O_DBA_CIS_B1_Heavy_Droid_Jungle_F : O_DBA_CIS_B1_Heavy_Droid_F
    {
        editorSubcategory = "O_DBA_CIS_B1_Droids_Jungle";
        vehicleClass = "O_DBA_CIS_B1_Droids_Jungle";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_B1_Heavy_Droid_Jungle_F.jpg";
        uniformClass = "DBA_B1_Jungle";
        backpack = "O_DBA_CIS_B1_Backpack_Rifleman_Jungle";
        hiddenSelectionsTextures[] =
        {
            "101st_Aux_Mod\Addons\DBA_CIS_Textures\data\Jungle_B1_Body_CO.paa"
        };
    };

    class O_DBA_CIS_B1_Sniper_Droid_Jungle_F : O_DBA_CIS_B1_Sniper_Droid_F
    {
        editorSubcategory = "O_DBA_CIS_B1_Droids_Jungle";
        vehicleClass = "O_DBA_CIS_B1_Droids_Jungle";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_B1_Sniper_Droid_Jungle_F.jpg";
        uniformClass = "DBA_B1_Jungle";
        backpack = "O_DBA_CIS_B1_Backpack_Rifleman_Jungle";
        hiddenSelectionsTextures[] =
        {
            "101st_Aux_Mod\Addons\DBA_CIS_Textures\data\Jungle_B1_Body_CO.paa"
        };
    };

    class O_DBA_CIS_B1_Droid_Training_F : O_DBA_CIS_B1_Droid_F
    {
        editorSubcategory = "O_DBA_CIS_B1_Droids_Training";
        vehicleClass = "O_DBA_CIS_B1_Droids_Training";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_B1_Droid_Training_F.jpg";
        uniformClass = "DBA_B1_Training";
        backpack = "O_DBA_CIS_B1_Backpack_Rifleman_Training";
        hiddenSelectionsTextures[] =
        {
            "\MRC\JLTS\characters\DroidUnits\data\Droid_B1Training_co.paa"
        };
    };

    class O_DBA_CIS_B1_AA_Droid_Training_F : O_DBA_CIS_B1_AA_Droid_F
    {
        editorSubcategory = "O_DBA_CIS_B1_Droids_Training";
        vehicleClass = "O_DBA_CIS_B1_Droids_Training";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_B1_AA_Droid_Training_F.jpg";
        uniformClass = "DBA_B1_Training";
        backpack = "O_DBA_CIS_B1_Backpack_AA_Training";
        hiddenSelectionsTextures[] =
        {
            "\MRC\JLTS\characters\DroidUnits\data\Droid_B1Training_co.paa"
        };
    };

    class O_DBA_CIS_B1_AT_Droid_Training_F : O_DBA_CIS_B1_AT_Droid_F
    {
        editorSubcategory = "O_DBA_CIS_B1_Droids_Training";
        vehicleClass = "O_DBA_CIS_B1_Droids_Training";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_B1_AT_Droid_Training_F.jpg";
        uniformClass = "DBA_B1_Training";
        backpack = "O_DBA_CIS_B1_Backpack_AT_Training";
        hiddenSelectionsTextures[] =
        {
            "\MRC\JLTS\characters\DroidUnits\data\Droid_B1Training_co.paa"
        };
    };

    class O_DBA_CIS_OOM_Command_Droid_Training_F : O_DBA_CIS_OOM_Command_Droid_F
    {
        editorSubcategory = "O_DBA_CIS_B1_Droids_Training";
        vehicleClass = "O_DBA_CIS_B1_Droids_Training";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_OOM_Command_Droid_Training_F.jpg";
        uniformClass = "DBA_B1_Training";
        backpack = "O_DBA_CIS_B1_Antenna_Training";
        hiddenSelectionsTextures[] =
        {
            "\MRC\JLTS\characters\DroidUnits\data\Droid_B1Training_co.paa"
        };
    };

    class O_DBA_CIS_B1_Heavy_Droid_Training_F : O_DBA_CIS_B1_Heavy_Droid_F
    {
        editorSubcategory = "O_DBA_CIS_B1_Droids_Training";
        vehicleClass = "O_DBA_CIS_B1_Droids_Training";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_B1_Heavy_Droid_Training_F.jpg";
        uniformClass = "DBA_B1_Training";
        backpack = "O_DBA_CIS_B1_Backpack_Rifleman_Training";
        hiddenSelectionsTextures[] =
        {
            "\MRC\JLTS\characters\DroidUnits\data\Droid_B1Training_co.paa"
        };
    };

    class O_DBA_CIS_B1_Sniper_Droid_Training_F : O_DBA_CIS_B1_Sniper_Droid_F
    {
        editorSubcategory = "O_DBA_CIS_B1_Droids_Training";
        vehicleClass = "O_DBA_CIS_B1_Droids_Training";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_B1_Sniper_Droid_Training_F.jpg";
        uniformClass = "DBA_B1_Training";
        backpack = "O_DBA_CIS_B1_Backpack_Rifleman_Training";
        hiddenSelectionsTextures[] =
        {
            "\MRC\JLTS\characters\DroidUnits\data\Droid_B1Training_co.paa"
        };
    };

    class O_DBA_CIS_B1_Droid_Winter_F : O_DBA_CIS_B1_Droid_F
    {
        editorSubcategory = "O_DBA_CIS_B1_Droids_Winter";
        vehicleClass = "O_DBA_CIS_B1_Droids_Winter";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_B1_Droid_Winter_F.jpg";
        uniformClass = "DBA_B1_Winter";
        backpack = "O_DBA_CIS_B1_Backpack_Rifleman_Winter";
        hiddenSelectionsTextures[] =
        {
            "101st_Aux_Mod\Addons\DBA_CIS_Textures\data\Winter_B1_Body_CO.paa"
        };
    };

    class O_DBA_CIS_B1_AA_Droid_Winter_F : O_DBA_CIS_B1_AA_Droid_F
    {
        editorSubcategory = "O_DBA_CIS_B1_Droids_Winter";
        vehicleClass = "O_DBA_CIS_B1_Droids_Winter";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_B1_AA_Droid_Winter_F.jpg";
        uniformClass = "DBA_B1_Winter";
        backpack = "O_DBA_CIS_B1_Backpack_AA_Winter";
        hiddenSelectionsTextures[] =
        {
            "101st_Aux_Mod\Addons\DBA_CIS_Textures\data\Winter_B1_Body_CO.paa"
        };
    };

    class O_DBA_CIS_B1_AT_Droid_Winter_F : O_DBA_CIS_B1_AT_Droid_F
    {
        editorSubcategory = "O_DBA_CIS_B1_Droids_Winter";
        vehicleClass = "O_DBA_CIS_B1_Droids_Winter";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_B1_AT_Droid_Winter_F.jpg";
        uniformClass = "DBA_B1_Winter";
        backpack = "O_DBA_CIS_B1_Backpack_AT_Winter";
        hiddenSelectionsTextures[] =
        {
            "101st_Aux_Mod\Addons\DBA_CIS_Textures\data\Winter_B1_Body_CO.paa"
        };
    };

    class O_DBA_CIS_OOM_Command_Droid_Winter_F : O_DBA_CIS_OOM_Command_Droid_F
    {
        editorSubcategory = "O_DBA_CIS_B1_Droids_Winter";
        vehicleClass = "O_DBA_CIS_B1_Droids_Winter";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_OOM_Command_Droid_Winter_F.jpg";
        uniformClass = "DBA_B1_Winter";
        backpack = "O_DBA_CIS_B1_Antenna_Winter";
        hiddenSelectionsTextures[] =
        {
            "101st_Aux_Mod\Addons\DBA_CIS_Textures\data\Winter_B1_Body_CO.paa"
        };
    };

    class O_DBA_CIS_B1_Heavy_Droid_Winter_F : O_DBA_CIS_B1_Heavy_Droid_F
    {
        editorSubcategory = "O_DBA_CIS_B1_Droids_Winter";
        vehicleClass = "O_DBA_CIS_B1_Droids_Winter";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_B1_Heavy_Droid_Winter_F.jpg";
        uniformClass = "DBA_B1_Winter";
        backpack = "O_DBA_CIS_B1_Backpack_Rifleman_Winter";
        hiddenSelectionsTextures[] =
        {
            "101st_Aux_Mod\Addons\DBA_CIS_Textures\data\Winter_B1_Body_CO.paa"
        };
    };

    class O_DBA_CIS_B1_Sniper_Droid_Winter_F : O_DBA_CIS_B1_Sniper_Droid_F
    {
        editorSubcategory = "O_DBA_CIS_B1_Droids_Winter";
        vehicleClass = "O_DBA_CIS_B1_Droids_Winter";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_B1_Sniper_Droid_Winter_F.jpg";
        uniformClass = "DBA_B1_Winter";
        backpack = "O_DBA_CIS_B1_Backpack_Rifleman_Winter";
        hiddenSelectionsTextures[] =
        {
            "101st_Aux_Mod\Addons\DBA_CIS_Textures\data\Winter_B1_Body_CO.paa"
        };
    };

    class O_DBA_CIS_B2_Droid_F : O_DBA_CIS_B2_Base_F
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "B2 Droid";
       
        side = 0;
        faction = "O_DBA_CIS_F";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_B2_Droid_F.jpg";
        hiddenSelections[] =
        {
            "Camo1",
            "Camo2",
            "Camo3"
        };
        hiddenSelectionsTextures[] =
        {
            "RD501_Units\textures\cis\b2\rocket\reskinb2_chest.paa",
            "RD501_Units\textures\cis\b2\rocket\reskinb2_waist.paa",
            "RD501_Units\textures\cis\b2\rocket\reskinb2_legs.paa"
        };

        identityTypes[] = { "NoGlasses", "Head_NATO" };
        facewear = "";

        uniformClass = "DBA_B2";
        
        weapons[] = { "`_b2gun" };
        respawnWeapons[] = { "SWOP_b2gun" };

        magazines[] = { "SWOP_b2gun_Mag","SWOP_b2gun_Mag","SWOP_b2gun_Mag","SWOP_b2gun_Mag","SWOP_b2gun_Mag","SWOP_b2gun_Mag","SWOP_b2gun_Mag" };
        respawnMagazines[] = { "SWOP_b2gun_Mag","SWOP_b2gun_Mag","SWOP_b2gun_Mag","SWOP_b2gun_Mag","SWOP_b2gun_Mag","SWOP_b2gun_Mag","SWOP_b2gun_Mag" };

        items[] = {};
        respawnItems[] = {};

    };

    class O_DBA_CIS_B2_Super_Droid_F : O_DBA_CIS_B2_Base_F
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "B2 Super Droid";
       
        side = 0;
        faction = "O_DBA_CIS_F";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_B2_Super_Droid_F.jpg";
        hiddenSelections[] =
        {
            "Camo1",
            "Camo2",
            "Camo3"
        };
        hiddenSelectionsTextures[] =
        {
            "RD501_Units\textures\cis\b2\super\super_b2_chest.paa",
            "RD501_Units\textures\cis\b2\super\super_b2_waist.paa",
            "RD501_Units\textures\cis\b2\super\super_b2_legs.paa"
        };

        identityTypes[] = { "NoGlasses", "Head_NATO" };
        facewear = "";

        uniformClass = "DBA_B2_Super";
        
        weapons[] = { "SWOP_b2gun" };
        respawnWeapons[] = { "SWOP_b2gun" };

        magazines[] = { "SWOP_b2gun_Mag","SWOP_b2gun_Mag","SWOP_b2gun_Mag","SWOP_b2gun_Mag","SWOP_b2gun_Mag","SWOP_b2gun_Mag","SWOP_b2gun_Mag","SWOP_b2rocket_Mag","SWOP_b2rocket_Mag","SWOP_b2rocket_Mag" };
        respawnMagazines[] = { "SWOP_b2gun_Mag","SWOP_b2gun_Mag","SWOP_b2gun_Mag","SWOP_b2gun_Mag","SWOP_b2gun_Mag","SWOP_b2gun_Mag","SWOP_b2gun_Mag","SWOP_b2rocket_Mag","SWOP_b2rocket_Mag","SWOP_b2rocket_Mag" };

        items[] = {};
        respawnItems[] = {};
    };

    class O_DBA_CIS_BX_Commando_Droid_F : O_DBA_CIS_BX_Base_F
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "BX Commando Droid";
       
        editorSubcategory = "O_DBA_CIS_Spec_Ops";
        vehicleClass = "O_DBA_CIS_Spec_Ops";
        side = 0;
        faction = "O_DBA_CIS_F";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_BX_Commando_Droid_F.jpg";

        identityTypes[] = { "NoGlasses", "Head_NATO" };
        facewear = "";

        uniformClass = "212th_BX_DROID";
        
        weapons[] = { "JLTS_E5","Throw",
			"Put" };
        respawnWeapons[] = { "JLTS_E5","Throw",
			"Put" };

        magazines[] = { "JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","SmokeShellYellow","SmokeShellYellow","SmokeShellYellow","SmokeShellYellow","SmokeShellYellow","SmokeShellYellow","101st_imploder_x1_mag", "101st_imploder_x1_mag", "101st_imploder_x1_mag","101st_imploder_x1_mag" };
        respawnMagazines[] = { "JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","SmokeShellYellow","SmokeShellYellow","SmokeShellYellow","SmokeShellYellow","SmokeShellYellow","SmokeShellYellow","101st_imploder_x1_mag", "101st_imploder_x1_mag", "101st_imploder_x1_mag","101st_imploder_x1_mag" };

        items[] = {};
        respawnItems[] = {};

    };
    
    class O_DBA_CIS_BX_Commando_Droid_Captain_F : O_DBA_CIS_BX_Commando_Droid_F
    {
        displayName = "BX Commando Droid (Captain)";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_BX_Commando_Droid_Captain_F.jpg";
        uniformClass = "212th_BX_DROID_CAPTAIN";
    };
    
    class O_DBA_CIS_BX_Commando_Droid_Citadel_F : O_DBA_CIS_BX_Commando_Droid_F
    {
        displayName = "BX Commando Droid (Citadel)";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_BX_Commando_Droid_Citadel_F.jpg";
        uniformClass = "212th_BX_DROID_CITADEL";

        weapons[] = { "JLTS_E5_shield" };
        respawnWeapons[] = { "JLTS_E5_shield" };
    };

     class O_DBA_CIS_BX_Commando_Droid_Diplomat_F : O_DBA_CIS_BX_Commando_Droid_F
    {
        displayName = "BX Commando Droid (Diplomat)";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_BX_Commando_Droid_Diplomat_F.jpg";
        uniformClass = "212th_BX_DROID_DIPLOMAT";
    };

     class O_DBA_CIS_BX_Commando_Droid_Training_F : O_DBA_CIS_BX_Commando_Droid_F
    {
        displayName = "BX Commando Droid (Training)";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_BX_Commando_Droid_Training_F.jpg";
        uniformClass = "212th_BX_DROID_TRAINING";
    };

    class O_DBA_CIS_MagnaGuard_Base_F : O_Soldier_F
    {
        scope = 0;
        scopeCurator = 0;
       
        editorSubcategory = "O_DBA_CIS_Spec_Ops";
        vehicleClass = "O_DBA_CIS_Spec_Ops";
        faction = "O_DBA_CIS_F";
        genericNames = "JLTS_DroidsB1";

        identityTypes[] = { "NoGlasses", "Head_NATO" };
        facewear = "";

        linkedItems[] = { "ItemMap","ItemGPS","ItemCompass" };
        respawnLinkedItems[] = { "ItemMap","ItemGPS","ItemCompass" };
        
        weapons[] = { "JLTS_E5","Throw",
			"Put" };
        respawnWeapons[] = { "JLTS_E5","Throw",
			"Put" };

        magazines[] = { "JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","101st_imploder_x1_mag", "101st_imploder_x1_mag", "101st_imploder_x1_mag","101st_imploder_x1_mag" };
        respawnMagazines[] = { "JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","101st_imploder_x1_mag", "101st_imploder_x1_mag", "101st_imploder_x1_mag","101st_imploder_x1_mag" };

        items[] = {};
        respawnItems[] = {};
    };

    // TODO: IG100 armour values
    class O_DBA_CIS_IG100_MagnaGuard_F : O_Soldier_F
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "IG-100 MagnaGuard";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_IG100_MagnaGuard_F.jpg";
        uniformClass = "SWOP_Magnadroid_F_Spec";
    };

    // TODO: IG101 armour values
    class O_DBA_CIS_IG101_MagnaGuard_F : O_Soldier_F
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "IG-101 MagnaGuard";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_IG101_MagnaGuard_F.jpg";
        uniformClass = "RD501_opfor_uniform_Manga_Spec_Op";
    };

    class O_DBA_CIS_T_Series_Base_F : O_DBA_CIS_B1_Base_F
    {
        editorSubcategory = "O_DBA_CIS_T_Series";
        vehicleClass = "O_DBA_CIS_T_Series";
        genericNames = "tdroidnames";

        identityTypes[] = { "NoGlasses", "Head_NATO" };
        facewear = "";
        
        linkedItems[] = { "ItemMap","ItemGPS","ItemCompass" };
        respawnLinkedItems[] = { "ItemMap","ItemGPS","ItemCompass" };
        
        weapons[] = { "JLTS_RG4D" };
        respawnWeapons[] = { "JLTS_RG4D" };

        magazines[] = { "JLTS_RG4D_mag","JLTS_RG4D_mag","JLTS_RG4D_mag","JLTS_RG4D_mag","JLTS_RG4D_mag","JLTS_RG4D_mag" };
        respawnMagazines[] = { "JLTS_RG4D_mag","JLTS_RG4D_mag","JLTS_RG4D_mag","JLTS_RG4D_mag","JLTS_RG4D_mag","JLTS_RG4D_mag" };
    };

    class O_DBA_CIS_T_Series_Officer_Black_F : O_DBA_CIS_T_Series_Base_F
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "T-Series (Black)";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_T_Series_Officer_Black_F.jpg";
        uniformClass = "SWOP_TacticDroid_black_F_Spec";
    };

    class O_DBA_CIS_T_Series_Officer_Blue_F : O_DBA_CIS_T_Series_Base_F
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "T-Series (Blue)";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_T_Series_Officer_Blue_F.jpg";
        uniformClass = "SWOP_TacticDroid_blue_F_Spec";
    };

    class O_DBA_CIS_T_Series_Officer_Green_F : O_DBA_CIS_T_Series_Base_F
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "T-Series (Green)";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_T_Series_Officer_Green_F.jpg";
        uniformClass = "SWOP_TacticDroid_green_F_Spec";
    };

    class O_DBA_CIS_T_Series_Officer_Red_F : O_DBA_CIS_T_Series_Base_F
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "T-Series (Red)";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_T_Series_Officer_Red_F.jpg";
        uniformClass = "SWOP_TacticDroid_red_F_Spec";
    };

    class O_DBA_CIS_Hover_Droid_MKII_F : RD501_drone_cis_Hover_Droid
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "Hover Droid MK.II";
       
        editorSubcategory = "O_DBA_CIS_Drones";
        vehicleClass = "O_DBA_CIS_Drones";
        side = 0;
        faction = "O_DBA_CIS_F";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_Hover_Droid_MKII_F.jpg";
    };

    class O_DBA_CIS_HMP_Transport_F : RD501_HMP_transport
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "HMP-Class Droid Transport";
       
        editorSubcategory = "O_DBA_CIS_Helicopters";
        vehicleClass = "O_DBA_CIS_Helicopters";
        side = 0;
        faction = "O_DBA_CIS_F";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_HMP_Transport_F.jpg";
        crew = "O_DBA_CIS_OOM_Pilot_Droid_F";
    };

    class O_DBA_CIS_HMP_Gunship_F : RD501_HMP_gunship
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "HMP Gunship";
       
        editorSubcategory = "O_DBA_CIS_Helicopters";
        vehicleClass = "O_DBA_CIS_Helicopters";
        side = 0;
        faction = "O_DBA_CIS_F";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_HMP_Gunship_F.jpg";
        crew = "O_DBA_CIS_OOM_Pilot_Droid_F";
    };
	
	class O_DBA_CIS_Hyena_Bomber_F : 101st_Hyena_Bomber
	{
		scope = 2;
        scopeCurator = 2;
        displayName = "Hyena-Class Bomber";
        editorSubcategory = "O_DBA_CIS_RD501_Planes";
        vehicleClass = "O_DBA_CIS_RD501_Planes";
        side = 0;
        faction = "O_DBA_CIS_F";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_HMP_Gunship_F.jpg";
        crew = "O_DBA_CIS_OOM_Pilot_Droid_F";
	};
    class O_DBA_CIS_GAT_F : 3AS_GAT
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "GAT";
       
        editorSubcategory = "O_DBA_CIS_Tanks";
        vehicleClass = "O_DBA_CIS_Tanks";
        side = 0;
        faction = "O_DBA_CIS_F";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_GAT_F.jpg";
        crew = "O_DBA_CIS_B1_Crew_Droid_F";
    };

    class O_DBA_CIS_GAT_Olive_F : 3AS_GAT_Olive
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "GAT (Olive)";
       
        editorSubcategory = "O_DBA_CIS_Tanks";
        vehicleClass = "O_DBA_CIS_Tanks";
        side = 0;
        faction = "O_DBA_CIS_F";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_GAT_Olive_F.jpg";
        crew = "O_DBA_CIS_B1_Crew_Droid_F";
    };

    class O_DBA_CIS_GAT_Tan_F : 3AS_GAT_tan
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "GAT (Tan)";
       
        editorSubcategory = "O_DBA_CIS_Tanks";
        vehicleClass = "O_DBA_CIS_Tanks";
        side = 0;
        faction = "O_DBA_CIS_F";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_GAT_Tan_F.jpg";
        crew = "O_DBA_CIS_B1_Crew_Droid_F";
    };

    class O_DBA_CIS_GAT_Urban_F : 3AS_GAT_urban
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "GAT (Urban)";
       
        editorSubcategory = "O_DBA_CIS_Tanks";
        vehicleClass = "O_DBA_CIS_Tanks";
        side = 0;
        faction = "O_DBA_CIS_F";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_GAT_Urban_F.jpg";
        crew = "O_DBA_CIS_B1_Crew_Droid_F";
    };

    class O_DBA_CIS_GAT_Light_F : 3AS_GAT_Light
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "GAT Light";
       
        editorSubcategory = "O_DBA_CIS_Tanks";
        vehicleClass = "O_DBA_CIS_Tanks";
        side = 0;
        faction = "O_DBA_CIS_F";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_GAT_Light_F.jpg";
        crew = "O_DBA_CIS_B1_Crew_Droid_F";
    };

    class O_DBA_CIS_GAT_Light_Olive_F : 3AS_GAT_Light_Olive
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "GAT Light (Olive)";
       
        editorSubcategory = "O_DBA_CIS_Tanks";
        vehicleClass = "O_DBA_CIS_Tanks";
        side = 0;
        faction = "O_DBA_CIS_F";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_GAT_Light_Olive_F.jpg";
        crew = "O_DBA_CIS_B1_Crew_Droid_F";
    };

    class O_DBA_CIS_GAT_Light_Tan_F : 3AS_GAT_Light_tan
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "GAT Light (Tan)";
       
        editorSubcategory = "O_DBA_CIS_Tanks";
        vehicleClass = "O_DBA_CIS_Tanks";
        side = 0;
        faction = "O_DBA_CIS_F";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_GAT_Light_Tan_F.jpg";
        crew = "O_DBA_CIS_B1_Crew_Droid_F";
    };

    class O_DBA_CIS_GAT_Light_Urban_F : 3AS_GAT_Light_urban
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "GAT Light (Urban)";
       
        editorSubcategory = "O_DBA_CIS_Tanks";
        vehicleClass = "O_DBA_CIS_Tanks";
        side = 0;
        faction = "O_DBA_CIS_F";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_GAT_Light_Urban_F.jpg";
        crew = "O_DBA_CIS_B1_Crew_Droid_F";
    };

    class O_DBA_CIS_AAT_F : 3AS_AAT
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "AAT";
       
        editorSubcategory = "O_DBA_CIS_Tanks";
        vehicleClass = "O_DBA_CIS_Tanks";
        side = 0;
        faction = "O_DBA_CIS_F";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_AAT_F.jpg";
        crew = "O_DBA_CIS_B1_Crew_Droid_F";
    };

    class O_DBA_CIS_AAT_Tan_F : 3AS_AAT_tan
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "AAT (Tan)";
       
        editorSubcategory = "O_DBA_CIS_Tanks";
        vehicleClass = "O_DBA_CIS_Tanks";
        side = 0;
        faction = "O_DBA_CIS_F";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_AAT_Tan_F.jpg";
        crew = "O_DBA_CIS_B1_Crew_Droid_F";
    };

    class O_DBA_CIS_AAT_Snow_F : 3AS_AAT_snow
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "AAT (Snow)";
       
        editorSubcategory = "O_DBA_CIS_Tanks";
        vehicleClass = "O_DBA_CIS_Tanks";
        side = 0;
        faction = "O_DBA_CIS_F";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_AAT_Snow_F.jpg";
        crew = "O_DBA_CIS_B1_Crew_Droid_F";
    };

    class O_DBA_CIS_AAT_Tropic_F : 3AS_AAT_Tropic
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "AAT (Tropic)";
       
        editorSubcategory = "O_DBA_CIS_Tanks";
        vehicleClass = "O_DBA_CIS_Tanks";
        side = 0;
        faction = "O_DBA_CIS_F";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_AAT_Tropic_F.jpg";
        crew = "O_DBA_CIS_B1_Crew_Droid_F";
    };

    class O_DBA_CIS_AAT_Urban_F : 3AS_AAT_urban
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "AAT (Urban)";
       
        editorSubcategory = "O_DBA_CIS_Tanks";
        vehicleClass = "O_DBA_CIS_Tanks";
        side = 0;
        faction = "O_DBA_CIS_F";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_AAT_Urban_F.jpg";
        crew = "O_DBA_CIS_B1_Crew_Droid_F";
    };

    class O_DBA_CIS_Snail_Tank_F : 101st_NR99_Droid_Tank
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "NR-N99 Snail Tank";
       
        editorSubcategory = "O_DBA_CIS_Tanks";
        vehicleClass = "O_DBA_CIS_Tanks";
        side = 0;
        faction = "O_DBA_CIS_F";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_Snail_Tank_F.jpg";
        crew = "O_DBA_CIS_B1_Crew_Droid_F";
    };

    class O_DBA_CIS_CISSpeeder_F : SW_SPCIS
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "CIS Speeder";
       
        editorSubcategory = "O_DBA_CIS_Cars";
        vehicleClass = "O_DBA_CIS_Cars";
        side = 0;
        faction = "O_DBA_CIS_F";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_CISSpeeder_F.jpg";
    };

    class O_DBA_CIS_Plasma_Artillery_F : RD501_heavy_ordinance_tank_CIS
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "Plasma Artillery";
       
        editorSubcategory = "O_DBA_CIS_Artillery";
        vehicleClass = "O_DBA_CIS_Artillery";
        side = 0;
        faction = "O_DBA_CIS_F";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_Plasma_Artillery_F.jpg";
        crew = "O_DBA_CIS_B1_Crew_Droid_F";
    };

    class O_DBA_CIS_Rocket_Artillery_F : RD501_rocket_ordinance_tank_CIS
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "Rocket Artillery";
       
        editorSubcategory = "O_DBA_CIS_Artillery";
        vehicleClass = "O_DBA_CIS_Artillery";
        side = 0;
        faction = "O_DBA_CIS_F";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_Rocket_Artillery_F.jpg";
        crew = "O_DBA_CIS_B1_Crew_Droid_F";
    };

    class O_DBA_CIS_BEARD_AA_F : RD501_Praetorian_Variant_normal
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "BEARD AA";
       
        editorSubcategory = "O_DBA_CIS_AAs";
        vehicleClass = "O_DBA_CIS_AAs";
        side = 0;
        faction = "O_DBA_CIS_F";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_BEARD_AA_F.jpg";
        crew = "O_DBA_CIS_B1_Crew_Droid_F";
    };

    class O_DBA_CIS_MTT_F : 3as_MTT
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "MTT";
       
        editorSubcategory = "O_DBA_CIS_APCs";
        vehicleClass = "O_DBA_CIS_APCs";
        side = 0;
        faction = "O_DBA_CIS_F";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_MTT_F.jpg";
        crew = "O_DBA_CIS_B1_Crew_Droid_F";
    };

    class O_DBA_CIS_Squad_Assault_Craft_F : 3as_SAC_Trade
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "Squad Assault Craft";
       
        editorSubcategory = "O_DBA_CIS_Cars";
        vehicleClass = "O_DBA_CIS_Cars";
        side = 0;
        faction = "O_DBA_CIS_F";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_Squad_Assault_Craft_F.jpg";
        crew = "O_DBA_CIS_B1_Crew_Droid_F";
    };

    class O_DBA_CIS_Argon_Ammo_F : 442_argon_ammo_cis
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "Argon Ammo Truck";
       
        editorSubcategory = "O_DBA_CIS_Cars";
        vehicleClass = "O_DBA_CIS_Cars";
        side = 0;
        faction = "O_DBA_CIS_F";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_Argon_Ammo_F.jpg";
        crew = "O_DBA_CIS_B1_Crew_Droid_F";
    };

    class O_DBA_CIS_Argon_Device_F : 442_argon_device_cis
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "Argon Device Carrier";
       
        editorSubcategory = "O_DBA_CIS_Cars";
        vehicleClass = "O_DBA_CIS_Cars";
        side = 0;
        faction = "O_DBA_CIS_F";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_Argon_Device_F.jpg";
        crew = "O_DBA_CIS_B1_Crew_Droid_F";
    };

    class O_DBA_CIS_Argon_Fuel_F : 442_argon_fuel_cis
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "Argon Fuel Truck";
       
        editorSubcategory = "O_DBA_CIS_Cars";
        vehicleClass = "O_DBA_CIS_Cars";
        side = 0;
        faction = "O_DBA_CIS_F";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_Argon_Fuel_F.jpg";
        crew = "O_DBA_CIS_B1_Crew_Droid_F";
    };

    class O_DBA_CIS_Argon_Medical_F : 442_argon_medical_cis
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "Argon Medical Truck";
       
        editorSubcategory = "O_DBA_CIS_Cars";
        vehicleClass = "O_DBA_CIS_Cars";
        side = 0;
        faction = "O_DBA_CIS_F";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_Argon_Medical_F.jpg";
        crew = "O_DBA_CIS_B1_Crew_Droid_F";
    };

    class O_DBA_CIS_Argon_Repair_F : 442_argon_repair_cis
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "Argon Repair Truck";
       
        editorSubcategory = "O_DBA_CIS_Cars";
        vehicleClass = "O_DBA_CIS_Cars";
        side = 0;
        faction = "O_DBA_CIS_F";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_Argon_Repair_F.jpg";
        crew = "O_DBA_CIS_B1_Crew_Droid_F";
    };

    class O_DBA_CIS_Argon_Transport_F : 442_argon_transport_cis
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "Argon Transport Truck";
       
        editorSubcategory = "O_DBA_CIS_Cars";
        vehicleClass = "O_DBA_CIS_Cars";
        side = 0;
        faction = "O_DBA_CIS_F";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_Argon_Transport_F.jpg";
        crew = "O_DBA_CIS_B1_Crew_Droid_F";
    };

    class O_DBA_CIS_Argon_Transport_Covered_F : 442_argon_covered_cis
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "Argon Transport Truck (Covered)";
       
        editorSubcategory = "O_DBA_CIS_Cars";
        vehicleClass = "O_DBA_CIS_Cars";
        side = 0;
        faction = "O_DBA_CIS_F";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_Argon_Transport_Covered_F.jpg";
        crew = "O_DBA_CIS_B1_Crew_Droid_F";
    };

    class O_DBA_CIS_Plasma_Mortar_F : 3as_CIS_Mortar
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "Plasma Mortar";
       
        editorSubcategory = "O_DBA_CIS_Turrets";
        vehicleClass = "O_DBA_CIS_Turrets";
        side = 0;
        faction = "O_DBA_CIS_F";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_Plasma_Mortar_F.jpg";
        crew = "O_DBA_CIS_B1_Crew_Droid_F";
    };

    class O_DBA_CIS_Droideka_F : O_OKalani_CIS_Droideka_01
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "Droideka";
       
        editorSubcategory = "O_DBA_CIS_Turrets";
        vehicleClass = "O_DBA_CIS_Turrets";
        side = 0;
        faction = "O_DBA_CIS_F";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_Droideka_F.jpg";
    };

    class O_DBA_CIS_Dwarf_Spider_Droid_1_F : O_OKalani_DSD1_Dwarf_Spider_Droid_01
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "Dwarf Spider Droid Mk1";
       
        editorSubcategory = "O_DBA_CIS_Turrets";
        vehicleClass = "O_DBA_CIS_Turrets";
        side = 0;
        faction = "O_DBA_CIS_F";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_Dwarf_Spider_Droid_1_F.jpg";
    };

    class O_DBA_CIS_Dwarf_Spider_Droid_2_F : O_OKalani_DSD1_Dwarf_Spider_Droid_02
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "Dwarf Spider Droid Mk2";
       
        editorSubcategory = "O_DBA_CIS_Turrets";
        vehicleClass = "O_DBA_CIS_Turrets";
        side = 0;
        faction = "O_DBA_CIS_F";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_Dwarf_Spider_Droid_2_F.jpg";
    };

    class O_DBA_CIS_EWeb_F : O_OKalani_Eweb_02
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "E-web";
       
        editorSubcategory = "O_DBA_CIS_Turrets";
        vehicleClass = "O_DBA_CIS_Turrets";
        side = 0;
        faction = "O_DBA_CIS_F";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_EWeb_F.jpg";
        crew = "O_DBA_CIS_B1_Droid_F";
    };

    class O_DBA_CIS_OG10_Homing_Spider_F : O_OKalani_OG_10_Homing_Spider_01
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "OG-10 Homing Spider";
       
        editorSubcategory = "O_DBA_CIS_Turrets";
        vehicleClass = "O_DBA_CIS_Turrets";
        side = 0;
        faction = "O_DBA_CIS_F";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_OG10_Homing_Spider_F.jpg";
        crew = "O_DBA_CIS_B1_Crew_Droid_F";
    };

    class O_DBA_CIS_Particle_Cannon_F : 3as_ParticleCannon
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "Particle Cannon";
       
        editorSubcategory = "O_DBA_CIS_Turrets";
        vehicleClass = "O_DBA_CIS_Turrets";
        side = 0;
        faction = "O_DBA_CIS_F";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_Particle_Cannon_F.jpg";
        crew = "O_DBA_CIS_B1_Crew_Droid_F";
    };

    class O_DBA_CIS_Proton_Cannon_F : 3AS_FieldCannon
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "Proton Cannon";
       
        editorSubcategory = "O_DBA_CIS_Turrets";
        vehicleClass = "O_DBA_CIS_Turrets";
        side = 0;
        faction = "O_DBA_CIS_F";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_Proton_Cannon_F.jpg";
        crew = "O_DBA_CIS_B1_Crew_Droid_F";
    };

    class O_DBA_CIS_Crab_Droid_F : 101st_Crab_Droid
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "LM-432 Crab Droid";
        editorSubcategory = "O_DBA_CIS_Turrets";
        vehicleClass = "O_DBA_CIS_Turrets";
        side = 0;
        faction = "O_DBA_CIS_F";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_Crab_Droid_F.jpg";
        crew = "O_DBA_CIS_B1_Crew_Droid_F";
    };

    class O_DBA_CIS_DSD3_F : 101st_DSD3_Droid
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "DSD3 Spider Droid";
        editorSubcategory = "O_DBA_CIS_Turrets";
        vehicleClass = "O_DBA_CIS_Turrets";
        side = 0;
        faction = "O_DBA_CIS_F";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_DSD3_F.jpg";
        crew = "O_DBA_CIS_B1_Crew_Droid_F";
    };
	 class O_DBA_CIS_DSD1_F : 101st_DSD_Droid
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "Dwarf Spider Droid";
        editorSubcategory = "O_DBA_CIS_Turrets";
        vehicleClass = "O_DBA_CIS_Turrets";
        side = 0;
        faction = "O_DBA_CIS_F";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_DSD3_F.jpg";
        crew = "O_DBA_CIS_B1_Crew_Droid_F";
    };

    class O_DBA_CIS_Tri_Droid_F : 101st_Octo_Droid
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "Octuptarra Tri-Droid";
        editorSubcategory = "O_DBA_CIS_Turrets";
        vehicleClass = "O_DBA_CIS_Turrets";
        side = 0;
        faction = "O_DBA_CIS_F";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_Tri_Droid_F.jpg";
        crew = "O_DBA_CIS_B1_Crew_Droid_F";
    };

    class O_DBA_CIS_Speedboat_F : RD501_speedboat_cis
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "Speedboat";
       
        editorSubcategory = "O_DBA_CIS_Boats";
        vehicleClass = "O_DBA_CIS_Boats";
        side = 0;
        faction = "O_DBA_CIS_F";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_Speedboat_F.jpg";
        crew = "O_DBA_CIS_B1_Crew_Droid_F";
    };

    class O_DBA_CIS_Vulture_Droid_3as_F : 3as_Vulture_dynamicLoadout
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "Vulture-Class Droid Fighter";
       
        editorSubcategory = "O_DBA_CIS_3as_Planes";
        vehicleClass = "O_DBA_CIS_3as_Planes";
        side = 0;
        faction = "O_DBA_CIS_F";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_Vulture_Droid_3as_F.jpg";
        crew = "O_DBA_CIS_OOM_Pilot_Droid_F";
    };

    class O_DBA_CIS_Vulture_Droid_Kalani_F : O_OKalani_Vulture_Droid_01
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "Vulture-Class Droid Fighter";
       
        editorSubcategory = "O_DBA_CIS_Kalani_Planes";
        vehicleClass = "O_DBA_CIS_Kalani_Planes";
        side = 0;
        faction = "O_DBA_CIS_F";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_Vulture_Droid_Kalani_F.jpg";
        crew = "O_DBA_CIS_OOM_Pilot_Droid_F";
    };

    class O_DBA_CIS_Hyena_Bomber_Droid_Kalani_F : O_OKalani_Hyena_Bomber_Droid_01
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "Hyena Bomber Droid";
       
        editorSubcategory = "O_DBA_CIS_Kalani_Planes";
        vehicleClass = "O_DBA_CIS_Kalani_Planes";
        side = 0;
        faction = "O_DBA_CIS_F";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_Hyena_Bomber_Droid_Kalani_F.jpg";
        crew = "O_DBA_CIS_OOM_Pilot_Droid_F";
    };

    class O_DBA_CIS_Vulture_Droid_RD501_F : RD501_vulture_MKII
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "Vulture-Class Droid Fighter";
       
        editorSubcategory = "O_DBA_CIS_RD501_Planes";
        vehicleClass = "O_DBA_CIS_RD501_Planes";
        side = 0;
        faction = "O_DBA_CIS_F";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_Vulture_Droid_RD501_F.jpg";
        crew = "O_DBA_CIS_OOM_Pilot_Droid_F";
    };

    class O_DBA_CIS_Tri_Fighter_Droid_RD501_F : RD501_trifighter_MKII
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "Tri Fighter Droid";
       
        editorSubcategory = "O_DBA_CIS_RD501_Planes";
        vehicleClass = "O_DBA_CIS_RD501_Planes";
        side = 0;
        faction = "O_DBA_CIS_F";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_Tri_Fighter_Droid_RD501_F.jpg";
        crew = "O_DBA_CIS_OOM_Pilot_Droid_F";
    };

    class O_DBA_CIS_Hyena_Bomber_Droid_RD501_F : RD501_hyena_Mk2
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "Hyena Bomber Droid";
       
        editorSubcategory = "O_DBA_CIS_RD501_Planes";
        vehicleClass = "O_DBA_CIS_RD501_Planes";
        side = 0;
        faction = "O_DBA_CIS_F";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_Hyena_Bomber_Droid_RD501_F.jpg";
        crew = "O_DBA_CIS_OOM_Pilot_Droid_F";
    };

    class O_DBA_CIS_Flag_CIS_F : FlagCarrier
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "Flag (CIS)";
        side = 3;
        faction = "Default";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_Flag_CIS_F.jpg";

        class EventHandlers {
            init = "(_this select 0) setFlagTexture '101st_Aux_Mod\Addons\DBA_CIS\pictures\flag_cis.paa'";
        };
    };
};
