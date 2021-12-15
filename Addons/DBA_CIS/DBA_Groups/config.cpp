class cfgPatches
{
    class DBA_CIS_Groups
    {
        name = "DBA CIS Groups";
        author = "Vulgar";
        requiredVersion = 1.6;
        requiredAddons[] =
        {
        };
        units[] =
        {
        };
        weapons[] =
        {
        };
        magazines[] = {};
        ammo[] = {};
    };
};
class cfgGroups
{
	class EAST
	{
		class O_DBA_CIS_F
		{
			name = "DBA CIS";
			class Infantry
			{
				name = "Infantry";
				class O_DBA_CIS_B1_Assault_Squad
				{
					author = "Vulgar";
					scope = 2;
					scopeCurator = 2;
					name = "DBA B1 Assault Squad";
					side = 0;
					faction = "O_DBA_CIS_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup = 0.4;

                    class Unit0 {
                        position[] = { 0,0,0 };
                        rank = "LIEUTENANT";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Command_Droid_F";
                    };
                    class Unit1 {
                        position[] = { -5,-5,0 };
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Command_Droid_F";
                    };
                    class Unit2 {
                        position[] = { 5,-5,0 };
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Command_Droid_F";
                    };
                    class Unit3 {
                        position[] = { -10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_F";
                    };
                    class Unit4 {
                        position[] = { 10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_F";
                    };
                    class Unit5 {
                        position[] = { -15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_F";
                    };
                    class Unit6 {
                        position[] = { 15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_F";
                    };
                    class Unit7 {
                        position[] = { -20,-20,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_F";
                    };
                    class Unit8 {
                        position[] = { 20,-20,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_F";
                    };
                    class Unit9 {
                        position[] = { -25,-25,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_F";
                    };
                    class Unit10 {
                        position[] = { 25,-25,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_F";
                    };
                    class Unit11 {
                        position[] = { -30,-30,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_F";
                    };
                    class Unit12 {
                        position[] = { 30,-30,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_F";
                    };
                    class Unit13 {
                        position[] = { -35,-35,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_F";
                    };
                    class Unit14 {
                        position[] = { 35,-35,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_F";
                    };
                    class Unit15 {
                        position[] = { -40,-40,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_F";
                    };
                    class Unit16 {
                        position[] = { 40,-40,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_F";
                    };
                    class Unit17 {
                        position[] = { -45,-45,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Heavy_Droid_F";
                    };
                    class Unit18 {
                        position[] = { 45,-45,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Heavy_Droid_F";
                    };
                    class Unit19 {
                        position[] = { -50,-50,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Sniper_Droid_F";
                    };
                    class Unit20 {
                        position[] = { 50,-50,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Sniper_Droid_F";
                    };
                    class Unit21 {
                        position[] = { -55,-55,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Rocket_Droid_F";
                    };
                    class Unit22 {
                        position[] = { 55,-55,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Rocket_Droid_F";
                    };
                    class Unit23 {
                        position[] = { -60,-60,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Flamer_Droid_F";
                    };
                    class Unit24 {
                        position[] = { 60,-60,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Flamer_Droid_F";
                    };
				};

                class O_DBA_CIS_B1_Command_Squad
                {
                    author = "Vulgar";
                    scope = 2;
                    scopeCurator = 2;
                    name = "DBA B1 Command Squad";
                    side = 0;
                    faction = "O_DBA_CIS_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.2;
                    class Unit0
                    {
                        position[] = { 0,0,0 };
                        rank = "LIEUTENANT";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Command_Droid_F";
                    };
                    class Unit1
                    {
                        position[] = { -5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_F";
                    };
                    class Unit2
                    {
                        position[] = { 5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_F";
                    };
                    class Unit3
                    {
                        position[] = { -10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_F";
                    };
                    class Unit4
                    {
                        position[] = { 10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_F";
                    };
                    class Unit5
                    {
                        position[] = { -15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_F";
                    };
                    class Unit6
                    {
                        position[] = { 15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_F";
                    };
                    class Unit7
                    {
                        position[] = { -20,-20,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_F";
                    };
                };
                class O_DBA_CIS_B1_CQC_Squad {
                    author = "Vulgar";
                    name = "DBA B1 CQC Squad";
                    scope = 2;
                    scopeCurator = 2;
                    side = 0;
                    faction = "O_DBA_CIS_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.35;

                    class Unit0 {
                        position[] = { 0,0,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_F";
                    };
                    class Unit1 {
                        position[] = { -5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_F";
                    };
                    class Unit2 {
                        position[] = { 5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_F";
                    };
                    class Unit3 {
                        position[] = { -10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_F";
                    };
                    class Unit4 {
                        position[] = { 10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_F";
                    };
                    class Unit5 {
                        position[] = { -15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_F";
                    };
                    class Unit6 {
                        position[] = { 15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_F";
                    };
                    class Unit7 {
                        position[] = { -20,-20,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_F";
                    };
                    class Unit8 {
                        position[] = { 20,-20,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_F";
                    };
                    class Unit9 {
                        position[] = { 25,-25,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Flamer_Droid_F";
                    };
                };
                class O_DBA_CIS_B1_Defense_Squad {
                    name = "DBA B1 Defense Squad";
                    author = "Vulgar";
                    scope = 2;
                    scopeCurator = 2;
                    side = 0;
                    faction = "O_DBA_CIS_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.55;

                    class Unit0 {
                        position[] = { 0,0,0 };
                        rank = "LIEUTENANT";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Command_Droid_F";
                    };
                    class Unit1 {
                        position[] = { -5,-5,0 };
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Command_Droid_F";
                    };
                    class Unit2 {
                        position[] = { 5,-5,0 };
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Command_Droid_F";
                    };
                    class Unit3 {
                        position[] = { -10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_F";
                    };
                    class Unit4 {
                        position[] = { 10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_F";
                    };
                    class Unit5 {
                        position[] = { -15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_F";
                    };
                    class Unit6 {
                        position[] = { 15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_F";
                    };
                    class Unit7 {
                        position[] = { -20,-20,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_F";
                    };
                    class Unit8 {
                        position[] = { 20,-20,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_F";
                    };
                    class Unit9 {
                        position[] = { -25,-25,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_F";
                    };
                    class Unit10 {
                        position[] = { 25,-25,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_F";
                    };
                    class Unit11 {
                        position[] = { -30,-30,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_F";
                    };
                    class Unit12 {
                        position[] = { 30,-30,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_F";
                    };
                    class Unit13 {
                        position[] = { -35,-35,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_F";
                    };
                    class Unit14 {
                        position[] = { 35,-35,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_F";
                    };
                    class Unit15 {
                        position[] = { -40,-40,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_F";
                    };
                    class Unit16 {
                        position[] = { 40,-40,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Heavy_Droid_F";
                    };
                    class Unit17 {
                        position[] = { -45,-45,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Heavy_Droid_F";
                    };
                    class Unit18 {
                        position[] = { 45,-45,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Security_Droid_F";
                    };
                    class Unit19 {
                        position[] = { -50,-50,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Security_Droid_F";
                    };
                    class Unit20 {
                        position[] = { 50,-50,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_F";
                    };
                    class Unit21 {
                        position[] = { -55,-55,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_F";
                    };
                    class Unit22 {
                        position[] = { 55,-55,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Sniper_Droid_F";
                    };
                    class Unit23 {
                        position[] = { -60,-60,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Sniper_Droid_F";
                    };
                    class Unit24 {
                        position[] = { 60,-60,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_F";
                    };
                    class Unit25 {
                        position[] = { -65,-65,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_F";
                    };
                    class Unit26 {
                        position[] = { 65,-65,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_F";
                    };
                    class Unit27 {
                        position[] = { -70,-70,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_F";
                    };
                    class Unit28 {
                        position[] = { 70,-70,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_F";
                    };
                    class Unit29 {
                        position[] = { -75,-75,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_F";
                    };
                    class Unit30 {
                        position[] = { 75,-75,0 };
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_F";
                    };
                    class Unit31 {
                        position[] = { -80,-80,0 };
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_F";
                    };
                    class Unit32 {
                        position[] = { 80,-80,0 };
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_F";
                    };
                    class Unit33 {
                        position[] = { 85,-85,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Flamer_Droid_F";
                    };
                    class Unit34 {
                        position[] = { -85,-85,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Flamer_Droid_F";
                    };
                };

                class O_DBA_CIS_B1_Patrol_Squad {
                    name = "DBA B1 Patrol Squad";
                    author = "Vulgar";
                    scope = 2;
                    scopeCurator = 2;
                    side = 0;
                    faction = "O_DBA_CIS_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.45;

                    class Unit0 {
                        position[] = { 0,0,0 };
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_F";
                    };
                    class Unit1 {
                        position[] = { -5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_F";
                    };
                    class Unit2 {
                        position[] = { 5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_F";
                    };
                    class Unit3 {
                        position[] = { -10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Heavy_Droid_F";
                    };
                    class Unit4 {
                        position[] = { 10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Sniper_Droid_F";
                    };
                };

                class O_DBA_CIS_B1_Rifle_Squad {
                    name = "DBA B1 Rifle Squad";
                    author = "Vulgar";
                    scope = 2;
                    scopeCurator = 2;
                    side = 0;
                    faction = "O_DBA_CIS_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = { 0,0,0 };
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_F";
                    };
                    class Unit1 {
                        position[] = { -5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_F";
                    };
                    class Unit2 {
                        position[] = { 5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_F";
                    };
                    class Unit3 {
                        position[] = { -10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_F";
                    };
                    class Unit4 {
                        position[] = { 10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_F";
                    };
                    class Unit5 {
                        position[] = { -15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_F";
                    };
                    class Unit6 {
                        position[] = { 15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_F";
                    };
                    class Unit7 {
                        position[] = { -20,-20,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_F";
                    };
                    class Unit8 {
                        position[] = { 20,-20,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_F";
                    };
                    class Unit9 {
                        position[] = { -25,-25,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_F";
                    };
                    class Unit10 {
                        position[] = { 25,-25,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_F";
                    };
                };

                class O_DBA_CIS_B1_Weapons_Squad {
                    name = "DBA B1 Weapons Squad";
                    author = "Vulgar";
                    scope = 2;
                    scopeCurator = 2;
                    side = 0;
                    faction = "O_DBA_CIS_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.37;

                    class Unit0 {
                        position[] = { 0,0,0 };
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_F";
                    };
                    class Unit1 {
                        position[] = { -5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_F";
                    };
                    class Unit2 {
                        position[] = { 5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_F";
                    };
                    class Unit3 {
                        position[] = { -10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_F";
                    };
                    class Unit4 {
                        position[] = { 10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_F";
                    };
                    class Unit5 {
                        position[] = { -15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_F";
                    };
                    class Unit6 {
                        position[] = { 15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_F";
                    };
                    class Unit7 {
                        position[] = { -20,-20,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Heavy_Droid_F";
                    };
                    class Unit8 {
                        position[] = { 20,-20,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Heavy_Droid_F";
                    };
                    class Unit9 {
                        position[] = { -25,-25,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Sniper_Droid_F";
                    };
                    class Unit10 {
                        position[] = { 25,-25,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Sniper_Droid_F";
                    };
                    class Unit11 {
                        position[] = { 30,-30,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Flamer_Droid_F";
                    };
                };

                class O_DBA_CIS_B1_AA_Squad {
                    name = "DBA B1 AA Squad";
                    author = "Vulgar";
                    scope = 2;
                    scopeCurator = 2;
                    side = 0;
                    faction = "O_DBA_CIS_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.3;

                    class Unit0 {
                        position[] = { 0,0,0 };
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_F";
                    };
                    class Unit1 {
                        position[] = { -5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_AA_Droid_F";
                    };
                    class Unit2 {
                        position[] = { 5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_AA_Droid_F";
                    };
                    class Unit3 {
                        position[] = { -10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_AA_Droid_F";
                    };
                    class Unit4 {
                        position[] = { 10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_AA_Droid_F";
                    };
                    class Unit5 {
                        position[] = { -15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_F";
                    };
                    class Unit6 {
                        position[] = { 15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_F";
                    };
                    class Unit7 {
                        position[] = { -20,-20,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Heavy_Droid_F";
                    };
                    class Unit8 {
                        position[] = { 20,-20,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Heavy_Droid_F";
                    };
                    class Unit9 {
                        position[] = { -25,-25,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Sniper_Droid_F";
                    };
                };

                class O_DBA_CIS_B1_AT_Squad {
                    name = "DBA B1 AT Squad";
                    author = "Vulgar";
                    scope = 2;
                    scopeCurator = 2;
                    side = 0;
                    faction = "O_DBA_CIS_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.3;

                    class Unit0 {
                        position[] = { 0,0,0 };
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_F";
                    };
                    class Unit1 {
                        position[] = { -5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_AT_Droid_F";
                    };
                    class Unit2 {
                        position[] = { 5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_AT_Droid_F";
                    };
                    class Unit3 {
                        position[] = { -10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_AT_Droid_F";
                    };
                    class Unit4 {
                        position[] = { 10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_AT_Droid_F";
                    };
                    class Unit5 {
                        position[] = { -15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_F";
                    };
                    class Unit6 {
                        position[] = { 15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_F";
                    };
                    class Unit7 {
                        position[] = { -20,-20,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Heavy_Droid_F";
                    };
                    class Unit8 {
                        position[] = { 20,-20,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Heavy_Droid_F";
                    };
                    class Unit9 {
                        position[] = { -25,-25,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Sniper_Droid_F";
                    };
                };

                class O_DBA_CIS_B1_B2_Mixed_Squad {
                    name = "DBA B1 B2 Mixed Squad";
                    author = "Vulgar";
                    scope = 2;
                    scopeCurator = 2;
                    side = 0;
                    faction = "O_DBA_CIS_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.76;

                    class Unit0 {
                        position[] = { 0,0,0 };
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_F";
                    };
                    class Unit1 {
                        position[] = { -5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_AA_Droid_F";
                    };
                    class Unit2 {
                        position[] = { 5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_AT_Droid_F";
                    };
                    class Unit3 {
                        position[] = { -10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_F";
                    };
                    class Unit4 {
                        position[] = { 10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_F";
                    };
                    class Unit5 {
                        position[] = { -15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Heavy_Droid_F";
                    };
                    class Unit6 {
                        position[] = { 15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Heavy_Droid_F";
                    };
                    class Unit7 {
                        position[] = { -20,-20,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DBA_B2Battledroid_F";
                    };
                    class Unit8 {
                        position[] = { 20,-20,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DBA_B2Battledroid_F";
                    };
                    class Unit9 {
                        position[] = { 25,-25,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Flamer_Droid_F";
                    };
                };
                class O_DBA_CIS_B2_Squad {
                    name = "DBA B2 Squad";
                    author = "Vulgar";
                    scope = 2;
                    scopeCurator = 2;
                    side = 0;
                    faction = "O_DBA_CIS_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.08;

                    class Unit0 {
                        position[] = { 0,0,0 };
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "DBA_B2Battledroid_F";
                    };
                    class Unit1 {
                        position[] = { -5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DBA_B2Battledroid_F";
                    };
                    class Unit2 {
                        position[] = { 5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DBA_B2Battledroid_F";
                    };
                    class Unit3 {
                        position[] = { -10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DBA_B2Battledroid_F";
                    };
                    class Unit4 {
                        position[] = { 10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DBA_B2Battledroid_F";
                    };
                };
                class  O_DBA_CIS_B2_Platoon_Squad {
                    name = "DBA B2 Platoon";
                    author = "Vulgar";
                    scope = 2;
                    scopeCurator = 2;
                    side = 0;
                    faction = "O_DBA_CIS_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.0001;

                    class Unit0 {
                        position[] = { 0,0,0 };
                        rank = "LIEUTENANT";
                        side = 0;
                        vehicle = "DBA_B2BattledroidRed_F";
                    };
                    class Unit1 {
                        position[] = { 5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DBA_B2Battledroid_F";
                    };
                    class Unit2 {
                        position[] = { -5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DBA_B2Battledroid_F";
                    };
                    class Unit3 {
                        position[] = { 10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DBA_B2Battledroid_F";
                    };
                    class Unit4 {
                        position[] = { -10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DBA_B2Battledroid_F";
                    };
                    class Unit5 {
                        position[] = { 15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DBA_B2Battledroid_F";
                    };
                    class Unit6 {
                        position[] = { -15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DBA_B2Battledroid_F";
                    };
                    class Unit7 {
                        position[] = { 20,-20,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DBA_B2Battledroid_F";
                    };
                    class Unit8 {
                        position[] = { -20,-20,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DBA_B2Battledroid_F";
                    };
                    class Unit9 {
                        position[] = { 25,-25,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DBA_B2Battledroid_F";
                    };
                    class Unit10 {
                        position[] = { -25,-25,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DBA_B2Battledroid_F";
                    };
                    class Unit11 {
                        position[] = { 30,-30,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DBA_B2Battledroid_F";
                    };
                    class Unit12 {
                        position[] = { -30,-30,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DBA_B2Battledroid_F";
                    };
                    class Unit13 {
                        position[] = { 35,-35,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DBA_B2Battledroid_F";
                    };
                    class Unit14 {
                        position[] = { -35,-35,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DBA_B2Battledroid_F";
                    };
                    class Unit15 {
                        position[] = { 40,-40,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DBA_B2Battledroid_F";
                    };
                    class Unit16 {
                        position[] = { -40,-40,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DBA_B2Battledroid_F";
                    };
                    class Unit17 {
                        position[] = { 45,-45,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DBA_B2Battledroid_F";
                    };
                    class Unit18 {
                        position[] = { -45,-45,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DBA_B2Battledroid_F";
                    };
                    class Unit19 {
                        position[] = { 50,-50,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DBA_B2Battledroid_F";
                    };
                    class Unit20 {
                        position[] = { -50,-50,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DBA_B2Battledroid_F";
                    };
                    class Unit21 {
                        position[] = { 55,-55,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DBA_B2Battledroid_F";
                    };
                    class Unit22 {
                        position[] = { -55,-55,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DBA_B2Battledroid_F";
                    };
                    class Unit23 {
                        position[] = { 60,-60,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DBA_B2Battledroid_F";
                    };
                    class Unit24 {
                        position[] = { -60,-60,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DBA_B2Battledroid_F";
                    };
                    class Unit25 {
                        position[] = { 65,-65,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DBA_B2Battledroid_F";
                    };
                    class Unit26 {
                        position[] = { -65,-65,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DBA_B2Battledroid_F";
                    };
                    class Unit27 {
                        position[] = { 70,-70,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DBA_B2Battledroid_F";
                    };
                    class Unit28 {
                        position[] = { -70,-70,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DBA_B2Battledroid_F";
                    };
                    class Unit29 {
                        position[] = { 75,-75,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DBA_B2Battledroid_F";
                    };
                    class Unit30 {
                        position[] = { -75,-75,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DBA_B2Battledroid_F";
                    };
                };
			};
            
			
			class Infantry_Winter {
				name = "Infantry (Winter)";
				class O_DBA_CIS_B1_Assault_Squad
				{
					author = "Vulgar";
					scope = 2;
					scopeCurator = 2;
					name = "DBA B1 Assault Squad";
					side = 0;
					faction = "O_DBA_CIS_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup = 0.4;

                    class Unit0 {
                        position[] = { 0,0,0 };
                        rank = "LIEUTENANT";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Command_Droid_Winter_F";
                    };
                    class Unit1 {
                        position[] = { -5,-5,0 };
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Command_Droid_Winter_F";
                    };
                    class Unit2 {
                        position[] = { 5,-5,0 };
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Command_Droid_Winter_F";
                    };
                    class Unit3 {
                        position[] = { -10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Winter_F";
                    };
                    class Unit4 {
                        position[] = { 10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Winter_F";
                    };
                    class Unit5 {
                        position[] = { -15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Winter_F";
                    };
                    class Unit6 {
                        position[] = { 15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Winter_F";
                    };
                    class Unit7 {
                        position[] = { -20,-20,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Winter_F";
                    };
                    class Unit8 {
                        position[] = { 20,-20,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Winter_F";
                    };
                    class Unit9 {
                        position[] = { -25,-25,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Winter_F";
                    };
                    class Unit10 {
                        position[] = { 25,-25,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Winter_F";
                    };
                    class Unit11 {
                        position[] = { -30,-30,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Winter_F";
                    };
                    class Unit12 {
                        position[] = { 30,-30,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Winter_F";
                    };
                    class Unit13 {
                        position[] = { -35,-35,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Winter_F";
                    };
                    class Unit14 {
                        position[] = { 35,-35,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Winter_F";
                    };
                    class Unit15 {
                        position[] = { -40,-40,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Winter_F";
                    };
                    class Unit16 {
                        position[] = { 40,-40,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Winter_F";
                    };
                    class Unit17 {
                        position[] = { -45,-45,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Heavy_Droid_Winter_F";
                    };
                    class Unit18 {
                        position[] = { 45,-45,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Heavy_Droid_Winter_F";
                    };
                    class Unit19 {
                        position[] = { -50,-50,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Sniper_Droid_Winter_F";
                    };
                    class Unit20 {
                        position[] = { 50,-50,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Sniper_Droid_Winter_F";
                    };
                    class Unit21 {
                        position[] = { -55,-55,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Rocket_Droid_Winter_F";
                    };
                    class Unit22 {
                        position[] = { 55,-55,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Rocket_Droid_Winter_F";
                    };
                    class Unit23 {
                        position[] = { -60,-60,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Flamer_Droid_Winter_F";
                    };
                    class Unit24 {
                        position[] = { 60,-60,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Flamer_Droid_Winter_F";
                    };
				};

                class O_DBA_CIS_B1_Command_Squad
                {
                    author = "Vulgar";
                    scope = 2;
                    scopeCurator = 2;
                    name = "DBA B1 Command Squad";
                    side = 0;
                    faction = "O_DBA_CIS_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.2;
                    class Unit0
                    {
                        position[] = { 0,0,0 };
                        rank = "LIEUTENANT";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Command_Droid_Winter_F";
                    };
                    class Unit1
                    {
                        position[] = { -5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Winter_F";
                    };
                    class Unit2
                    {
                        position[] = { 5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Winter_F";
                    };
                    class Unit3
                    {
                        position[] = { -10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Winter_F";
                    };
                    class Unit4
                    {
                        position[] = { 10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Winter_F";
                    };
                    class Unit5
                    {
                        position[] = { -15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Winter_F";
                    };
                    class Unit6
                    {
                        position[] = { 15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Winter_F";
                    };
                    class Unit7
                    {
                        position[] = { -20,-20,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Winter_F";
                    };
                };
                class O_DBA_CIS_B1_CQC_Squad {
                    author = "Vulgar";
                    name = "DBA B1 CQC Squad";
                    scope = 2;
                    scopeCurator = 2;
                    side = 0;
                    faction = "O_DBA_CIS_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.35;

                    class Unit0 {
                        position[] = { 0,0,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Winter_F";
                    };
                    class Unit1 {
                        position[] = { -5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Winter_F";
                    };
                    class Unit2 {
                        position[] = { 5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Winter_F";
                    };
                    class Unit3 {
                        position[] = { -10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Winter_F";
                    };
                    class Unit4 {
                        position[] = { 10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Winter_F";
                    };
                    class Unit5 {
                        position[] = { -15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Winter_F";
                    };
                    class Unit6 {
                        position[] = { 15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Winter_F";
                    };
                    class Unit7 {
                        position[] = { -20,-20,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Winter_F";
                    };
                    class Unit8 {
                        position[] = { 20,-20,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Winter_F";
                    };
                    class Unit9 {
                        position[] = { 25,-25,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Flamer_Droid_Winter_F";
                    };
                };
                class O_DBA_CIS_B1_Defense_Squad {
                    name = "DBA B1 Defense Squad";
                    author = "Vulgar";
                    scope = 2;
                    scopeCurator = 2;
                    side = 0;
                    faction = "O_DBA_CIS_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.55;

                    class Unit0 {
                        position[] = { 0,0,0 };
                        rank = "LIEUTENANT";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Command_Droid_Winter_F";
                    };
                    class Unit1 {
                        position[] = { -5,-5,0 };
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Command_Droid_Winter_F";
                    };
                    class Unit2 {
                        position[] = { 5,-5,0 };
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Command_Droid_Winter_F";
                    };
                    class Unit3 {
                        position[] = { -10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Winter_F";
                    };
                    class Unit4 {
                        position[] = { 10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Winter_F";
                    };
                    class Unit5 {
                        position[] = { -15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Winter_F";
                    };
                    class Unit6 {
                        position[] = { 15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Winter_F";
                    };
                    class Unit7 {
                        position[] = { -20,-20,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Winter_F";
                    };
                    class Unit8 {
                        position[] = { 20,-20,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Winter_F";
                    };
                    class Unit9 {
                        position[] = { -25,-25,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Winter_F";
                    };
                    class Unit10 {
                        position[] = { 25,-25,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Winter_F";
                    };
                    class Unit11 {
                        position[] = { -30,-30,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Winter_F";
                    };
                    class Unit12 {
                        position[] = { 30,-30,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Winter_F";
                    };
                    class Unit13 {
                        position[] = { -35,-35,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Winter_F";
                    };
                    class Unit14 {
                        position[] = { 35,-35,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Winter_F";
                    };
                    class Unit15 {
                        position[] = { -40,-40,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Winter_F";
                    };
                    class Unit16 {
                        position[] = { 40,-40,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Heavy_Droid_Winter_F";
                    };
                    class Unit17 {
                        position[] = { -45,-45,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Heavy_Droid_Winter_F";
                    };
                    class Unit18 {
                        position[] = { 45,-45,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Security_Droid_Winter_F";
                    };
                    class Unit19 {
                        position[] = { -50,-50,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Security_Droid_Winter_F";
                    };
                    class Unit20 {
                        position[] = { 50,-50,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Winter_F";
                    };
                    class Unit21 {
                        position[] = { -55,-55,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Winter_F";
                    };
                    class Unit22 {
                        position[] = { 55,-55,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Sniper_Droid_Winter_F";
                    };
                    class Unit23 {
                        position[] = { -60,-60,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Sniper_Droid_Winter_F";
                    };
                    class Unit24 {
                        position[] = { 60,-60,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Winter_F";
                    };
                    class Unit25 {
                        position[] = { -65,-65,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Winter_F";
                    };
                    class Unit26 {
                        position[] = { 65,-65,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Winter_F";
                    };
                    class Unit27 {
                        position[] = { -70,-70,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Winter_F";
                    };
                    class Unit28 {
                        position[] = { 70,-70,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Winter_F";
                    };
                    class Unit29 {
                        position[] = { -75,-75,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Winter_F";
                    };
                    class Unit30 {
                        position[] = { 75,-75,0 };
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Winter_F";
                    };
                    class Unit31 {
                        position[] = { -80,-80,0 };
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Winter_F";
                    };
                    class Unit32 {
                        position[] = { 80,-80,0 };
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Winter_F";
                    };
                    class Unit33 {
                        position[] = { 85,-85,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Flamer_Droid_Winter_F";
                    };
                    class Unit34 {
                        position[] = { -85,-85,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Flamer_Droid_Winter_F";
                    };
                };

                class O_DBA_CIS_B1_Patrol_Squad {
                    name = "DBA B1 Patrol Squad";
                    author = "Vulgar";
                    scope = 2;
                    scopeCurator = 2;
                    side = 0;
                    faction = "O_DBA_CIS_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.45;

                    class Unit0 {
                        position[] = { 0,0,0 };
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Winter_F";
                    };
                    class Unit1 {
                        position[] = { -5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Winter_F";
                    };
                    class Unit2 {
                        position[] = { 5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Winter_F";
                    };
                    class Unit3 {
                        position[] = { -10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Heavy_Droid_Winter_F";
                    };
                    class Unit4 {
                        position[] = { 10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Sniper_Droid_Winter_F";
                    };
                };

                class O_DBA_CIS_B1_Rifle_Squad {
                    name = "DBA B1 Rifle Squad";
                    author = "Vulgar";
                    scope = 2;
                    scopeCurator = 2;
                    side = 0;
                    faction = "O_DBA_CIS_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = { 0,0,0 };
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Winter_F";
                    };
                    class Unit1 {
                        position[] = { -5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Winter_F";
                    };
                    class Unit2 {
                        position[] = { 5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Winter_F";
                    };
                    class Unit3 {
                        position[] = { -10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Winter_F";
                    };
                    class Unit4 {
                        position[] = { 10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Winter_F";
                    };
                    class Unit5 {
                        position[] = { -15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Winter_F";
                    };
                    class Unit6 {
                        position[] = { 15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Winter_F";
                    };
                    class Unit7 {
                        position[] = { -20,-20,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Winter_F";
                    };
                    class Unit8 {
                        position[] = { 20,-20,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Winter_F";
                    };
                    class Unit9 {
                        position[] = { -25,-25,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Winter_F";
                    };
                    class Unit10 {
                        position[] = { 25,-25,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Winter_F";
                    };
                };

                class O_DBA_CIS_B1_Weapons_Squad {
                    name = "DBA B1 Weapons Squad";
                    author = "Vulgar";
                    scope = 2;
                    scopeCurator = 2;
                    side = 0;
                    faction = "O_DBA_CIS_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.37;

                    class Unit0 {
                        position[] = { 0,0,0 };
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Winter_F";
                    };
                    class Unit1 {
                        position[] = { -5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Winter_F";
                    };
                    class Unit2 {
                        position[] = { 5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Winter_F";
                    };
                    class Unit3 {
                        position[] = { -10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Winter_F";
                    };
                    class Unit4 {
                        position[] = { 10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Winter_F";
                    };
                    class Unit5 {
                        position[] = { -15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Winter_F";
                    };
                    class Unit6 {
                        position[] = { 15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Winter_F";
                    };
                    class Unit7 {
                        position[] = { -20,-20,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Heavy_Droid_Winter_F";
                    };
                    class Unit8 {
                        position[] = { 20,-20,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Heavy_Droid_Winter_F";
                    };
                    class Unit9 {
                        position[] = { -25,-25,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Sniper_Droid_Winter_F";
                    };
                    class Unit10 {
                        position[] = { 25,-25,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Sniper_Droid_Winter_F";
                    };
                    class Unit11 {
                        position[] = { 30,-30,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Flamer_Droid_Winter_F";
                    };
                };

                class O_DBA_CIS_B1_AA_Squad {
                    name = "DBA B1 AA Squad";
                    author = "Vulgar";
                    scope = 2;
                    scopeCurator = 2;
                    side = 0;
                    faction = "O_DBA_CIS_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.3;

                    class Unit0 {
                        position[] = { 0,0,0 };
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Winter_F";
                    };
                    class Unit1 {
                        position[] = { -5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_AA_Droid_Winter_F";
                    };
                    class Unit2 {
                        position[] = { 5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_AA_Droid_Winter_F";
                    };
                    class Unit3 {
                        position[] = { -10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_AA_Droid_Winter_F";
                    };
                    class Unit4 {
                        position[] = { 10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_AA_Droid_Winter_F";
                    };
                    class Unit5 {
                        position[] = { -15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Winter_F";
                    };
                    class Unit6 {
                        position[] = { 15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Winter_F";
                    };
                    class Unit7 {
                        position[] = { -20,-20,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Heavy_Droid_Winter_F";
                    };
                    class Unit8 {
                        position[] = { 20,-20,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Heavy_Droid_Winter_F";
                    };
                    class Unit9 {
                        position[] = { -25,-25,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Sniper_Droid_Winter_F";
                    };
                };

                class O_DBA_CIS_B1_AT_Squad {
                    name = "DBA B1 AT Squad";
                    author = "Vulgar";
                    scope = 2;
                    scopeCurator = 2;
                    side = 0;
                    faction = "O_DBA_CIS_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.3;

                    class Unit0 {
                        position[] = { 0,0,0 };
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Winter_F";
                    };
                    class Unit1 {
                        position[] = { -5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_AT_Droid_Winter_F";
                    };
                    class Unit2 {
                        position[] = { 5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_AT_Droid_Winter_F";
                    };
                    class Unit3 {
                        position[] = { -10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_AT_Droid_Winter_F";
                    };
                    class Unit4 {
                        position[] = { 10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_AT_Droid_Winter_F";
                    };
                    class Unit5 {
                        position[] = { -15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Winter_F";
                    };
                    class Unit6 {
                        position[] = { 15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Winter_F";
                    };
                    class Unit7 {
                        position[] = { -20,-20,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Heavy_Droid_Winter_F";
                    };
                    class Unit8 {
                        position[] = { 20,-20,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Heavy_Droid_Winter_F";
                    };
                    class Unit9 {
                        position[] = { -25,-25,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Sniper_Droid_Winter_F";
                    };
                };

                class O_DBA_CIS_B1_B2_Mixed_Squad {
                    name = "DBA B1 B2 Mixed Squad";
                    author = "Vulgar";
                    scope = 2;
                    scopeCurator = 2;
                    side = 0;
                    faction = "O_DBA_CIS_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.76;

                    class Unit0 {
                        position[] = { 0,0,0 };
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Winter_F";
                    };
                    class Unit1 {
                        position[] = { -5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_AA_Droid_Winter_F";
                    };
                    class Unit2 {
                        position[] = { 5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_AT_Droid_Winter_F";
                    };
                    class Unit3 {
                        position[] = { -10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Winter_F";
                    };
                    class Unit4 {
                        position[] = { 10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Winter_F";
                    };
                    class Unit5 {
                        position[] = { -15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Heavy_Droid_Winter_F";
                    };
                    class Unit6 {
                        position[] = { 15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Heavy_Droid_Winter_F";
                    };
                    class Unit7 {
                        position[] = { -20,-20,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DBA_B2BattleDroid_F";
                    };
                    class Unit8 {
                        position[] = { 20,-20,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DBA_B2BattleDroid_F";
                    };
                    class Unit9 {
                        position[] = { 25,-25,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Flamer_Droid_Winter_F";
                    };
                };
			};
			
			class Infantry_Jungle {
				name = "Infantry (Jungle)";
				class O_DBA_CIS_B1_Assault_Squad
				{
					author = "Vulgar";
					scope = 2;
					scopeCurator = 2;
					name = "DBA B1 Assault Squad";
					side = 0;
					faction = "O_DBA_CIS_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup = 0.4;

                    class Unit0 {
                        position[] = { 0,0,0 };
                        rank = "LIEUTENANT";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Command_Droid_Jungle_F";
                    };
                    class Unit1 {
                        position[] = { -5,-5,0 };
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Command_Droid_Jungle_F";
                    };
                    class Unit2 {
                        position[] = { 5,-5,0 };
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Command_Droid_Jungle_F";
                    };
                    class Unit3 {
                        position[] = { -10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Jungle_F";
                    };
                    class Unit4 {
                        position[] = { 10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Jungle_F";
                    };
                    class Unit5 {
                        position[] = { -15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Jungle_F";
                    };
                    class Unit6 {
                        position[] = { 15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Jungle_F";
                    };
                    class Unit7 {
                        position[] = { -20,-20,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Jungle_F";
                    };
                    class Unit8 {
                        position[] = { 20,-20,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Jungle_F";
                    };
                    class Unit9 {
                        position[] = { -25,-25,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Jungle_F";
                    };
                    class Unit10 {
                        position[] = { 25,-25,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Jungle_F";
                    };
                    class Unit11 {
                        position[] = { -30,-30,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Jungle_F";
                    };
                    class Unit12 {
                        position[] = { 30,-30,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Jungle_F";
                    };
                    class Unit13 {
                        position[] = { -35,-35,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Jungle_F";
                    };
                    class Unit14 {
                        position[] = { 35,-35,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Jungle_F";
                    };
                    class Unit15 {
                        position[] = { -40,-40,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Jungle_F";
                    };
                    class Unit16 {
                        position[] = { 40,-40,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Jungle_F";
                    };
                    class Unit17 {
                        position[] = { -45,-45,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Heavy_Droid_Jungle_F";
                    };
                    class Unit18 {
                        position[] = { 45,-45,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Heavy_Droid_Jungle_F";
                    };
                    class Unit19 {
                        position[] = { -50,-50,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Sniper_Droid_Jungle_F";
                    };
                    class Unit20 {
                        position[] = { 50,-50,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Sniper_Droid_Jungle_F";
                    };
                    class Unit21 {
                        position[] = { -55,-55,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Rocket_Droid_Jungle_F";
                    };
                    class Unit22 {
                        position[] = { 55,-55,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Rocket_Droid_Jungle_F";
                    };
                    class Unit23 {
                        position[] = { -60,-60,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Flamer_Droid_Jungle_F";
                    };
                    class Unit24 {
                        position[] = { 60,-60,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Flamer_Droid_Jungle_F";
                    };
				};

                class O_DBA_CIS_B1_Command_Squad
                {
                    author = "Vulgar";
                    scope = 2;
                    scopeCurator = 2;
                    name = "DBA B1 Command Squad";
                    side = 0;
                    faction = "O_DBA_CIS_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.2;
                    class Unit0
                    {
                        position[] = { 0,0,0 };
                        rank = "LIEUTENANT";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Command_Droid_Jungle_F";
                    };
                    class Unit1
                    {
                        position[] = { -5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Jungle_F";
                    };
                    class Unit2
                    {
                        position[] = { 5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Jungle_F";
                    };
                    class Unit3
                    {
                        position[] = { -10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Jungle_F";
                    };
                    class Unit4
                    {
                        position[] = { 10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Jungle_F";
                    };
                    class Unit5
                    {
                        position[] = { -15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Jungle_F";
                    };
                    class Unit6
                    {
                        position[] = { 15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Jungle_F";
                    };
                    class Unit7
                    {
                        position[] = { -20,-20,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Jungle_F";
                    };
                };
                class O_DBA_CIS_B1_CQC_Squad {
                    author = "Vulgar";
                    name = "DBA B1 CQC Squad";
                    scope = 2;
                    scopeCurator = 2;
                    side = 0;
                    faction = "O_DBA_CIS_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.35;

                    class Unit0 {
                        position[] = { 0,0,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Jungle_F";
                    };
                    class Unit1 {
                        position[] = { -5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Jungle_F";
                    };
                    class Unit2 {
                        position[] = { 5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Jungle_F";
                    };
                    class Unit3 {
                        position[] = { -10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Jungle_F";
                    };
                    class Unit4 {
                        position[] = { 10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Jungle_F";
                    };
                    class Unit5 {
                        position[] = { -15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Jungle_F";
                    };
                    class Unit6 {
                        position[] = { 15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Jungle_F";
                    };
                    class Unit7 {
                        position[] = { -20,-20,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Jungle_F";
                    };
                    class Unit8 {
                        position[] = { 20,-20,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Jungle_F";
                    };
                    class Unit9 {
                        position[] = { 25,-25,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Flamer_Droid_Jungle_F";
                    };
                };
                class O_DBA_CIS_B1_Defense_Squad {
                    name = "DBA B1 Defense Squad";
                    author = "Vulgar";
                    scope = 2;
                    scopeCurator = 2;
                    side = 0;
                    faction = "O_DBA_CIS_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.55;

                    class Unit0 {
                        position[] = { 0,0,0 };
                        rank = "LIEUTENANT";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Command_Droid_Jungle_F";
                    };
                    class Unit1 {
                        position[] = { -5,-5,0 };
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Command_Droid_Jungle_F";
                    };
                    class Unit2 {
                        position[] = { 5,-5,0 };
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Command_Droid_Jungle_F";
                    };
                    class Unit3 {
                        position[] = { -10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Jungle_F";
                    };
                    class Unit4 {
                        position[] = { 10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Jungle_F";
                    };
                    class Unit5 {
                        position[] = { -15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Jungle_F";
                    };
                    class Unit6 {
                        position[] = { 15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Jungle_F";
                    };
                    class Unit7 {
                        position[] = { -20,-20,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Jungle_F";
                    };
                    class Unit8 {
                        position[] = { 20,-20,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Jungle_F";
                    };
                    class Unit9 {
                        position[] = { -25,-25,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Jungle_F";
                    };
                    class Unit10 {
                        position[] = { 25,-25,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Jungle_F";
                    };
                    class Unit11 {
                        position[] = { -30,-30,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Jungle_F";
                    };
                    class Unit12 {
                        position[] = { 30,-30,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Jungle_F";
                    };
                    class Unit13 {
                        position[] = { -35,-35,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Jungle_F";
                    };
                    class Unit14 {
                        position[] = { 35,-35,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Jungle_F";
                    };
                    class Unit15 {
                        position[] = { -40,-40,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Jungle_F";
                    };
                    class Unit16 {
                        position[] = { 40,-40,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Heavy_Droid_Jungle_F";
                    };
                    class Unit17 {
                        position[] = { -45,-45,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Heavy_Droid_Jungle_F";
                    };
                    class Unit18 {
                        position[] = { 45,-45,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Security_Droid_Jungle_F";
                    };
                    class Unit19 {
                        position[] = { -50,-50,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Security_Droid_Jungle_F";
                    };
                    class Unit20 {
                        position[] = { 50,-50,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Jungle_F";
                    };
                    class Unit21 {
                        position[] = { -55,-55,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Jungle_F";
                    };
                    class Unit22 {
                        position[] = { 55,-55,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Sniper_Droid_Jungle_F";
                    };
                    class Unit23 {
                        position[] = { -60,-60,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Sniper_Droid_Jungle_F";
                    };
                    class Unit24 {
                        position[] = { 60,-60,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Jungle_F";
                    };
                    class Unit25 {
                        position[] = { -65,-65,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Jungle_F";
                    };
                    class Unit26 {
                        position[] = { 65,-65,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Jungle_F";
                    };
                    class Unit27 {
                        position[] = { -70,-70,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Jungle_F";
                    };
                    class Unit28 {
                        position[] = { 70,-70,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Jungle_F";
                    };
                    class Unit29 {
                        position[] = { -75,-75,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Jungle_F";
                    };
                    class Unit30 {
                        position[] = { 75,-75,0 };
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Jungle_F";
                    };
                    class Unit31 {
                        position[] = { -80,-80,0 };
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Jungle_F";
                    };
                    class Unit32 {
                        position[] = { 80,-80,0 };
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Jungle_F";
                    };
                    class Unit33 {
                        position[] = { 85,-85,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Flamer_Droid_Jungle_F";
                    };
                    class Unit34 {
                        position[] = { -85,-85,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Flamer_Droid_Jungle_F";
                    };
                };

                class O_DBA_CIS_B1_Patrol_Squad {
                    name = "DBA B1 Patrol Squad";
                    author = "Vulgar";
                    scope = 2;
                    scopeCurator = 2;
                    side = 0;
                    faction = "O_DBA_CIS_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.45;

                    class Unit0 {
                        position[] = { 0,0,0 };
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Jungle_F";
                    };
                    class Unit1 {
                        position[] = { -5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Jungle_F";
                    };
                    class Unit2 {
                        position[] = { 5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Jungle_F";
                    };
                    class Unit3 {
                        position[] = { -10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Heavy_Droid_Jungle_F";
                    };
                    class Unit4 {
                        position[] = { 10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Sniper_Droid_Jungle_F";
                    };
                };

                class O_DBA_CIS_B1_Rifle_Squad {
                    name = "DBA B1 Rifle Squad";
                    author = "Vulgar";
                    scope = 2;
                    scopeCurator = 2;
                    side = 0;
                    faction = "O_DBA_CIS_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = { 0,0,0 };
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Jungle_F";
                    };
                    class Unit1 {
                        position[] = { -5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Jungle_F";
                    };
                    class Unit2 {
                        position[] = { 5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Jungle_F";
                    };
                    class Unit3 {
                        position[] = { -10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Jungle_F";
                    };
                    class Unit4 {
                        position[] = { 10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Jungle_F";
                    };
                    class Unit5 {
                        position[] = { -15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Jungle_F";
                    };
                    class Unit6 {
                        position[] = { 15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Jungle_F";
                    };
                    class Unit7 {
                        position[] = { -20,-20,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Jungle_F";
                    };
                    class Unit8 {
                        position[] = { 20,-20,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Jungle_F";
                    };
                    class Unit9 {
                        position[] = { -25,-25,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Jungle_F";
                    };
                    class Unit10 {
                        position[] = { 25,-25,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Jungle_F";
                    };
                };

                class O_DBA_CIS_B1_Weapons_Squad {
                    name = "DBA B1 Weapons Squad";
                    author = "Vulgar";
                    scope = 2;
                    scopeCurator = 2;
                    side = 0;
                    faction = "O_DBA_CIS_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.37;

                    class Unit0 {
                        position[] = { 0,0,0 };
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Jungle_F";
                    };
                    class Unit1 {
                        position[] = { -5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Jungle_F";
                    };
                    class Unit2 {
                        position[] = { 5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Jungle_F";
                    };
                    class Unit3 {
                        position[] = { -10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Jungle_F";
                    };
                    class Unit4 {
                        position[] = { 10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Jungle_F";
                    };
                    class Unit5 {
                        position[] = { -15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Jungle_F";
                    };
                    class Unit6 {
                        position[] = { 15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Jungle_F";
                    };
                    class Unit7 {
                        position[] = { -20,-20,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Heavy_Droid_Jungle_F";
                    };
                    class Unit8 {
                        position[] = { 20,-20,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Heavy_Droid_Jungle_F";
                    };
                    class Unit9 {
                        position[] = { -25,-25,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Sniper_Droid_Jungle_F";
                    };
                    class Unit10 {
                        position[] = { 25,-25,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Sniper_Droid_Jungle_F";
                    };
                    class Unit11 {
                        position[] = { 30,-30,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Flamer_Droid_Jungle_F";
                    };
                };

                class O_DBA_CIS_B1_AA_Squad {
                    name = "DBA B1 AA Squad";
                    author = "Vulgar";
                    scope = 2;
                    scopeCurator = 2;
                    side = 0;
                    faction = "O_DBA_CIS_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.3;

                    class Unit0 {
                        position[] = { 0,0,0 };
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Jungle_F";
                    };
                    class Unit1 {
                        position[] = { -5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_AA_Droid_Jungle_F";
                    };
                    class Unit2 {
                        position[] = { 5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_AA_Droid_Jungle_F";
                    };
                    class Unit3 {
                        position[] = { -10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_AA_Droid_Jungle_F";
                    };
                    class Unit4 {
                        position[] = { 10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_AA_Droid_Jungle_F";
                    };
                    class Unit5 {
                        position[] = { -15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Jungle_F";
                    };
                    class Unit6 {
                        position[] = { 15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Jungle_F";
                    };
                    class Unit7 {
                        position[] = { -20,-20,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Heavy_Droid_Jungle_F";
                    };
                    class Unit8 {
                        position[] = { 20,-20,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Heavy_Droid_Jungle_F";
                    };
                    class Unit9 {
                        position[] = { -25,-25,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Sniper_Droid_Jungle_F";
                    };
                };

                class O_DBA_CIS_B1_AT_Squad {
                    name = "DBA B1 AT Squad";
                    author = "Vulgar";
                    scope = 2;
                    scopeCurator = 2;
                    side = 0;
                    faction = "O_DBA_CIS_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.3;

                    class Unit0 {
                        position[] = { 0,0,0 };
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Jungle_F";
                    };
                    class Unit1 {
                        position[] = { -5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_AT_Droid_Jungle_F";
                    };
                    class Unit2 {
                        position[] = { 5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_AT_Droid_Jungle_F";
                    };
                    class Unit3 {
                        position[] = { -10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_AT_Droid_Jungle_F";
                    };
                    class Unit4 {
                        position[] = { 10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_AT_Droid_Jungle_F";
                    };
                    class Unit5 {
                        position[] = { -15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Jungle_F";
                    };
                    class Unit6 {
                        position[] = { 15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Jungle_F";
                    };
                    class Unit7 {
                        position[] = { -20,-20,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Heavy_Droid_Jungle_F";
                    };
                    class Unit8 {
                        position[] = { 20,-20,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Heavy_Droid_Jungle_F";
                    };
                    class Unit9 {
                        position[] = { -25,-25,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Sniper_Droid_Jungle_F";
                    };
                };

                class O_DBA_CIS_B1_B2_Mixed_Squad {
                    name = "DBA B1 B2 Mixed Squad";
                    author = "Vulgar";
                    scope = 2;
                    scopeCurator = 2;
                    side = 0;
                    faction = "O_DBA_CIS_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.76;

                    class Unit0 {
                        position[] = { 0,0,0 };
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Jungle_F";
                    };
                    class Unit1 {
                        position[] = { -5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_AA_Droid_Jungle_F";
                    };
                    class Unit2 {
                        position[] = { 5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_AT_Droid_Jungle_F";
                    };
                    class Unit3 {
                        position[] = { -10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Jungle_F";
                    };
                    class Unit4 {
                        position[] = { 10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Jungle_F";
                    };
                    class Unit5 {
                        position[] = { -15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Heavy_Droid_Jungle_F";
                    };
                    class Unit6 {
                        position[] = { 15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Heavy_Droid_Jungle_F";
                    };
                    class Unit7 {
                        position[] = { -20,-20,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DBA_B2BattleDroid_F";
                    };
                    class Unit8 {
                        position[] = { 20,-20,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DBA_B2BattleDroid_F";
                    };
                    class Unit9 {
                        position[] = { 25,-25,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Flamer_Droid_Jungle_F";
                    };
                };
			};		
			class Infantry_Simulation {
				name = "Infantry (Training)";
				class O_DBA_CIS_B1_Assault_Squad
				{
					author = "Vulgar";
					scope = 2;
					scopeCurator = 2;
					name = "DBA B1 Assault Squad";
					side = 0;
					faction = "O_DBA_CIS_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup = 0.4;

                    class Unit0 {
                        position[] = { 0,0,0 };
                        rank = "LIEUTENANT";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Command_Droid_Training_F";
                    };
                    class Unit1 {
                        position[] = { -5,-5,0 };
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Command_Droid_Training_F";
                    };
                    class Unit2 {
                        position[] = { 5,-5,0 };
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Command_Droid_Training_F";
                    };
                    class Unit3 {
                        position[] = { -10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Training_F";
                    };
                    class Unit4 {
                        position[] = { 10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Training_F";
                    };
                    class Unit5 {
                        position[] = { -15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Training_F";
                    };
                    class Unit6 {
                        position[] = { 15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Training_F";
                    };
                    class Unit7 {
                        position[] = { -20,-20,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Training_F";
                    };
                    class Unit8 {
                        position[] = { 20,-20,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Training_F";
                    };
                    class Unit9 {
                        position[] = { -25,-25,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Training_F";
                    };
                    class Unit10 {
                        position[] = { 25,-25,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Training_F";
                    };
                    class Unit11 {
                        position[] = { -30,-30,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Training_F";
                    };
                    class Unit12 {
                        position[] = { 30,-30,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Training_F";
                    };
                    class Unit13 {
                        position[] = { -35,-35,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Training_F";
                    };
                    class Unit14 {
                        position[] = { 35,-35,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Training_F";
                    };
                    class Unit15 {
                        position[] = { -40,-40,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Training_F";
                    };
                    class Unit16 {
                        position[] = { 40,-40,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Training_F";
                    };
                    class Unit17 {
                        position[] = { -45,-45,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Heavy_Droid_Training_F";
                    };
                    class Unit18 {
                        position[] = { 45,-45,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Heavy_Droid_Training_F";
                    };
                    class Unit19 {
                        position[] = { -50,-50,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Sniper_Droid_Training_F";
                    };
                    class Unit20 {
                        position[] = { 50,-50,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Sniper_Droid_Training_F";
                    };
                    class Unit21 {
                        position[] = { -55,-55,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Rocket_Droid_Training_F";
                    };
                    class Unit22 {
                        position[] = { 55,-55,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Rocket_Droid_Training_F";
                    };
                    class Unit23 {
                        position[] = { -60,-60,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Flamer_Droid_Training_F";
                    };
                    class Unit24 {
                        position[] = { 60,-60,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Flamer_Droid_Training_F";
                    };
				};

                class O_DBA_CIS_B1_Command_Squad
                {
                    author = "Vulgar";
                    scope = 2;
                    scopeCurator = 2;
                    name = "DBA B1 Command Squad";
                    side = 0;
                    faction = "O_DBA_CIS_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.2;
                    class Unit0
                    {
                        position[] = { 0,0,0 };
                        rank = "LIEUTENANT";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Command_Droid_Training_F";
                    };
                    class Unit1
                    {
                        position[] = { -5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Training_F";
                    };
                    class Unit2
                    {
                        position[] = { 5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Training_F";
                    };
                    class Unit3
                    {
                        position[] = { -10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Training_F";
                    };
                    class Unit4
                    {
                        position[] = { 10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Training_F";
                    };
                    class Unit5
                    {
                        position[] = { -15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Training_F";
                    };
                    class Unit6
                    {
                        position[] = { 15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Training_F";
                    };
                    class Unit7
                    {
                        position[] = { -20,-20,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Training_F";
                    };
                };
                class O_DBA_CIS_B1_CQC_Squad {
                    author = "Vulgar";
                    name = "DBA B1 CQC Squad";
                    scope = 2;
                    scopeCurator = 2;
                    side = 0;
                    faction = "O_DBA_CIS_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.35;

                    class Unit0 {
                        position[] = { 0,0,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Training_F";
                    };
                    class Unit1 {
                        position[] = { -5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Training_F";
                    };
                    class Unit2 {
                        position[] = { 5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Training_F";
                    };
                    class Unit3 {
                        position[] = { -10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Training_F";
                    };
                    class Unit4 {
                        position[] = { 10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Training_F";
                    };
                    class Unit5 {
                        position[] = { -15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Training_F";
                    };
                    class Unit6 {
                        position[] = { 15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Training_F";
                    };
                    class Unit7 {
                        position[] = { -20,-20,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Training_F";
                    };
                    class Unit8 {
                        position[] = { 20,-20,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Training_F";
                    };
                    class Unit9 {
                        position[] = { 25,-25,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Flamer_Droid_Training_F";
                    };
                };
                class O_DBA_CIS_B1_Defense_Squad {
                    name = "DBA B1 Defense Squad";
                    author = "Vulgar";
                    scope = 2;
                    scopeCurator = 2;
                    side = 0;
                    faction = "O_DBA_CIS_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.55;

                    class Unit0 {
                        position[] = { 0,0,0 };
                        rank = "LIEUTENANT";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Command_Droid_Training_F";
                    };
                    class Unit1 {
                        position[] = { -5,-5,0 };
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Command_Droid_Training_F";
                    };
                    class Unit2 {
                        position[] = { 5,-5,0 };
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Command_Droid_Training_F";
                    };
                    class Unit3 {
                        position[] = { -10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Training_F";
                    };
                    class Unit4 {
                        position[] = { 10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Training_F";
                    };
                    class Unit5 {
                        position[] = { -15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Training_F";
                    };
                    class Unit6 {
                        position[] = { 15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Training_F";
                    };
                    class Unit7 {
                        position[] = { -20,-20,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Training_F";
                    };
                    class Unit8 {
                        position[] = { 20,-20,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Training_F";
                    };
                    class Unit9 {
                        position[] = { -25,-25,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Training_F";
                    };
                    class Unit10 {
                        position[] = { 25,-25,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Training_F";
                    };
                    class Unit11 {
                        position[] = { -30,-30,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Training_F";
                    };
                    class Unit12 {
                        position[] = { 30,-30,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Training_F";
                    };
                    class Unit13 {
                        position[] = { -35,-35,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Training_F";
                    };
                    class Unit14 {
                        position[] = { 35,-35,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Training_F";
                    };
                    class Unit15 {
                        position[] = { -40,-40,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Training_F";
                    };
                    class Unit16 {
                        position[] = { 40,-40,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Heavy_Droid_Training_F";
                    };
                    class Unit17 {
                        position[] = { -45,-45,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Heavy_Droid_Training_F";
                    };
                    class Unit18 {
                        position[] = { 45,-45,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Security_Droid_Training_F";
                    };
                    class Unit19 {
                        position[] = { -50,-50,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Security_Droid_Training_F";
                    };
                    class Unit20 {
                        position[] = { 50,-50,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Training_F";
                    };
                    class Unit21 {
                        position[] = { -55,-55,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Training_F";
                    };
                    class Unit22 {
                        position[] = { 55,-55,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Sniper_Droid_Training_F";
                    };
                    class Unit23 {
                        position[] = { -60,-60,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Sniper_Droid_Training_F";
                    };
                    class Unit24 {
                        position[] = { 60,-60,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Training_F";
                    };
                    class Unit25 {
                        position[] = { -65,-65,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Training_F";
                    };
                    class Unit26 {
                        position[] = { 65,-65,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Training_F";
                    };
                    class Unit27 {
                        position[] = { -70,-70,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Training_F";
                    };
                    class Unit28 {
                        position[] = { 70,-70,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Training_F";
                    };
                    class Unit29 {
                        position[] = { -75,-75,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Training_F";
                    };
                    class Unit30 {
                        position[] = { 75,-75,0 };
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Training_F";
                    };
                    class Unit31 {
                        position[] = { -80,-80,0 };
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Training_F";
                    };
                    class Unit32 {
                        position[] = { 80,-80,0 };
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Training_F";
                    };
                    class Unit33 {
                        position[] = { 85,-85,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Flamer_Droid_Training_F";
                    };
                    class Unit34 {
                        position[] = { -85,-85,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Flamer_Droid_Training_F";
                    };
                };

                class O_DBA_CIS_B1_Patrol_Squad {
                    name = "DBA B1 Patrol Squad";
                    author = "Vulgar";
                    scope = 2;
                    scopeCurator = 2;
                    side = 0;
                    faction = "O_DBA_CIS_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.45;

                    class Unit0 {
                        position[] = { 0,0,0 };
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Training_F";
                    };
                    class Unit1 {
                        position[] = { -5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Training_F";
                    };
                    class Unit2 {
                        position[] = { 5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Training_F";
                    };
                    class Unit3 {
                        position[] = { -10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Heavy_Droid_Training_F";
                    };
                    class Unit4 {
                        position[] = { 10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Sniper_Droid_Training_F";
                    };
                };

                class O_DBA_CIS_B1_Rifle_Squad {
                    name = "DBA B1 Rifle Squad";
                    author = "Vulgar";
                    scope = 2;
                    scopeCurator = 2;
                    side = 0;
                    faction = "O_DBA_CIS_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = { 0,0,0 };
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Training_F";
                    };
                    class Unit1 {
                        position[] = { -5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Training_F";
                    };
                    class Unit2 {
                        position[] = { 5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Training_F";
                    };
                    class Unit3 {
                        position[] = { -10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Training_F";
                    };
                    class Unit4 {
                        position[] = { 10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Training_F";
                    };
                    class Unit5 {
                        position[] = { -15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Training_F";
                    };
                    class Unit6 {
                        position[] = { 15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Training_F";
                    };
                    class Unit7 {
                        position[] = { -20,-20,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Training_F";
                    };
                    class Unit8 {
                        position[] = { 20,-20,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Training_F";
                    };
                    class Unit9 {
                        position[] = { -25,-25,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Training_F";
                    };
                    class Unit10 {
                        position[] = { 25,-25,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Training_F";
                    };
                };

                class O_DBA_CIS_B1_Weapons_Squad {
                    name = "DBA B1 Weapons Squad";
                    author = "Vulgar";
                    scope = 2;
                    scopeCurator = 2;
                    side = 0;
                    faction = "O_DBA_CIS_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.37;

                    class Unit0 {
                        position[] = { 0,0,0 };
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Training_F";
                    };
                    class Unit1 {
                        position[] = { -5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Training_F";
                    };
                    class Unit2 {
                        position[] = { 5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Training_F";
                    };
                    class Unit3 {
                        position[] = { -10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Training_F";
                    };
                    class Unit4 {
                        position[] = { 10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Training_F";
                    };
                    class Unit5 {
                        position[] = { -15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Training_F";
                    };
                    class Unit6 {
                        position[] = { 15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Training_F";
                    };
                    class Unit7 {
                        position[] = { -20,-20,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Heavy_Droid_Training_F";
                    };
                    class Unit8 {
                        position[] = { 20,-20,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Heavy_Droid_Training_F";
                    };
                    class Unit9 {
                        position[] = { -25,-25,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Sniper_Droid_Training_F";
                    };
                    class Unit10 {
                        position[] = { 25,-25,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Sniper_Droid_Training_F";
                    };
                    class Unit11 {
                        position[] = { 30,-30,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Flamer_Droid_Training_F";
                    };
                };

                class O_DBA_CIS_B1_AA_Squad {
                    name = "DBA B1 AA Squad";
                    author = "Vulgar";
                    scope = 2;
                    scopeCurator = 2;
                    side = 0;
                    faction = "O_DBA_CIS_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.3;

                    class Unit0 {
                        position[] = { 0,0,0 };
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Training_F";
                    };
                    class Unit1 {
                        position[] = { -5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_AA_Droid_Training_F";
                    };
                    class Unit2 {
                        position[] = { 5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_AA_Droid_Training_F";
                    };
                    class Unit3 {
                        position[] = { -10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_AA_Droid_Training_F";
                    };
                    class Unit4 {
                        position[] = { 10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_AA_Droid_Training_F";
                    };
                    class Unit5 {
                        position[] = { -15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Training_F";
                    };
                    class Unit6 {
                        position[] = { 15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Training_F";
                    };
                    class Unit7 {
                        position[] = { -20,-20,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Heavy_Droid_Training_F";
                    };
                    class Unit8 {
                        position[] = { 20,-20,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Heavy_Droid_Training_F";
                    };
                    class Unit9 {
                        position[] = { -25,-25,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Sniper_Droid_Training_F";
                    };
                };

                class O_DBA_CIS_B1_AT_Squad {
                    name = "DBA B1 AT Squad";
                    author = "Vulgar";
                    scope = 2;
                    scopeCurator = 2;
                    side = 0;
                    faction = "O_DBA_CIS_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.3;

                    class Unit0 {
                        position[] = { 0,0,0 };
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Training_F";
                    };
                    class Unit1 {
                        position[] = { -5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_AT_Droid_Training_F";
                    };
                    class Unit2 {
                        position[] = { 5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_AT_Droid_Training_F";
                    };
                    class Unit3 {
                        position[] = { -10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_AT_Droid_Training_F";
                    };
                    class Unit4 {
                        position[] = { 10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_AT_Droid_Training_F";
                    };
                    class Unit5 {
                        position[] = { -15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Training_F";
                    };
                    class Unit6 {
                        position[] = { 15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Training_F";
                    };
                    class Unit7 {
                        position[] = { -20,-20,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Heavy_Droid_Training_F";
                    };
                    class Unit8 {
                        position[] = { 20,-20,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Heavy_Droid_Training_F";
                    };
                    class Unit9 {
                        position[] = { -25,-25,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Sniper_Droid_Training_F";
                    };
                };

                class O_DBA_CIS_B1_B2_Mixed_Squad {
                    name = "DBA B1 B2 Mixed Squad";
                    author = "Vulgar";
                    scope = 2;
                    scopeCurator = 2;
                    side = 0;
                    faction = "O_DBA_CIS_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.76;

                    class Unit0 {
                        position[] = { 0,0,0 };
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Training_F";
                    };
                    class Unit1 {
                        position[] = { -5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_AA_Droid_Training_F";
                    };
                    class Unit2 {
                        position[] = { 5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_AT_Droid_Training_F";
                    };
                    class Unit3 {
                        position[] = { -10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Training_F";
                    };
                    class Unit4 {
                        position[] = { 10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Training_F";
                    };
                    class Unit5 {
                        position[] = { -15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Heavy_Droid_Training_F";
                    };
                    class Unit6 {
                        position[] = { 15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Heavy_Droid_Training_F";
                    };
                    class Unit7 {
                        position[] = { -20,-20,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DBA_B2BattleDroid_F";
                    };
                    class Unit8 {
                        position[] = { 20,-20,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DBA_B2BattleDroid_F";
                    };
                    class Unit9 {
                        position[] = { 25,-25,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Flamer_Droid_Training_F";
                    };
                };				
			};
			
			class Infantry_Geonosis {
				name = "Infantry (Geonosis)";
				class O_DBA_CIS_B1_Assault_Squad
				{
					author = "Vulgar";
					scope = 2;
					scopeCurator = 2;
					name = "DBA B1 Assault Squad";
					side = 0;
					faction = "O_DBA_CIS_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup = 0.4;

                    class Unit0 {
                        position[] = { 0,0,0 };
                        rank = "LIEUTENANT";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Command_Droid_Geonosis_F";
                    };
                    class Unit1 {
                        position[] = { -5,-5,0 };
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Command_Droid_Geonosis_F";
                    };
                    class Unit2 {
                        position[] = { 5,-5,0 };
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Command_Droid_Geonosis_F";
                    };
                    class Unit3 {
                        position[] = { -10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Geonosis_F";
                    };
                    class Unit4 {
                        position[] = { 10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Geonosis_F";
                    };
                    class Unit5 {
                        position[] = { -15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Geonosis_F";
                    };
                    class Unit6 {
                        position[] = { 15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Geonosis_F";
                    };
                    class Unit7 {
                        position[] = { -20,-20,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Geonosis_F";
                    };
                    class Unit8 {
                        position[] = { 20,-20,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Geonosis_F";
                    };
                    class Unit9 {
                        position[] = { -25,-25,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Geonosis_F";
                    };
                    class Unit10 {
                        position[] = { 25,-25,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Geonosis_F";
                    };
                    class Unit11 {
                        position[] = { -30,-30,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Geonosis_F";
                    };
                    class Unit12 {
                        position[] = { 30,-30,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Geonosis_F";
                    };
                    class Unit13 {
                        position[] = { -35,-35,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Geonosis_F";
                    };
                    class Unit14 {
                        position[] = { 35,-35,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Geonosis_F";
                    };
                    class Unit15 {
                        position[] = { -40,-40,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Geonosis_F";
                    };
                    class Unit16 {
                        position[] = { 40,-40,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Geonosis_F";
                    };
                    class Unit17 {
                        position[] = { -45,-45,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Heavy_Droid_Geonosis_F";
                    };
                    class Unit18 {
                        position[] = { 45,-45,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Heavy_Droid_Geonosis_F";
                    };
                    class Unit19 {
                        position[] = { -50,-50,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Sniper_Droid_Geonosis_F";
                    };
                    class Unit20 {
                        position[] = { 50,-50,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Sniper_Droid_Geonosis_F";
                    };
                    class Unit21 {
                        position[] = { -55,-55,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Rocket_Droid_Geonosis_F";
                    };
                    class Unit22 {
                        position[] = { 55,-55,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Rocket_Droid_Geonosis_F";
                    };
                    class Unit23 {
                        position[] = { -60,-60,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Flamer_Droid_Geonosis_F";
                    };
                    class Unit24 {
                        position[] = { 60,-60,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Flamer_Droid_Geonosis_F";
                    };
				};

                class O_DBA_CIS_B1_Command_Squad
                {
                    author = "Vulgar";
                    scope = 2;
                    scopeCurator = 2;
                    name = "DBA B1 Command Squad";
                    side = 0;
                    faction = "O_DBA_CIS_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.2;
                    class Unit0
                    {
                        position[] = { 0,0,0 };
                        rank = "LIEUTENANT";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Command_Droid_Geonosis_F";
                    };
                    class Unit1
                    {
                        position[] = { -5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Geonosis_F";
                    };
                    class Unit2
                    {
                        position[] = { 5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Geonosis_F";
                    };
                    class Unit3
                    {
                        position[] = { -10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Geonosis_F";
                    };
                    class Unit4
                    {
                        position[] = { 10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Geonosis_F";
                    };
                    class Unit5
                    {
                        position[] = { -15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Geonosis_F";
                    };
                    class Unit6
                    {
                        position[] = { 15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Geonosis_F";
                    };
                    class Unit7
                    {
                        position[] = { -20,-20,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Geonosis_F";
                    };
                };
                class O_DBA_CIS_B1_CQC_Squad {
                    author = "Vulgar";
                    name = "DBA B1 CQC Squad";
                    scope = 2;
                    scopeCurator = 2;
                    side = 0;
                    faction = "O_DBA_CIS_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.35;

                    class Unit0 {
                        position[] = { 0,0,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Geonosis_F";
                    };
                    class Unit1 {
                        position[] = { -5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Geonosis_F";
                    };
                    class Unit2 {
                        position[] = { 5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Geonosis_F";
                    };
                    class Unit3 {
                        position[] = { -10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Geonosis_F";
                    };
                    class Unit4 {
                        position[] = { 10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Geonosis_F";
                    };
                    class Unit5 {
                        position[] = { -15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Geonosis_F";
                    };
                    class Unit6 {
                        position[] = { 15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Geonosis_F";
                    };
                    class Unit7 {
                        position[] = { -20,-20,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Geonosis_F";
                    };
                    class Unit8 {
                        position[] = { 20,-20,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Geonosis_F";
                    };
                    class Unit9 {
                        position[] = { 25,-25,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Flamer_Droid_Geonosis_F";
                    };
                };
                class O_DBA_CIS_B1_Defense_Squad {
                    name = "DBA B1 Defense Squad";
                    author = "Vulgar";
                    scope = 2;
                    scopeCurator = 2;
                    side = 0;
                    faction = "O_DBA_CIS_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.55;

                    class Unit0 {
                        position[] = { 0,0,0 };
                        rank = "LIEUTENANT";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Command_Droid_Geonosis_F";
                    };
                    class Unit1 {
                        position[] = { -5,-5,0 };
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Command_Droid_Geonosis_F";
                    };
                    class Unit2 {
                        position[] = { 5,-5,0 };
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Command_Droid_Geonosis_F";
                    };
                    class Unit3 {
                        position[] = { -10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Geonosis_F";
                    };
                    class Unit4 {
                        position[] = { 10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Geonosis_F";
                    };
                    class Unit5 {
                        position[] = { -15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Geonosis_F";
                    };
                    class Unit6 {
                        position[] = { 15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Geonosis_F";
                    };
                    class Unit7 {
                        position[] = { -20,-20,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Geonosis_F";
                    };
                    class Unit8 {
                        position[] = { 20,-20,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Geonosis_F";
                    };
                    class Unit9 {
                        position[] = { -25,-25,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Geonosis_F";
                    };
                    class Unit10 {
                        position[] = { 25,-25,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Geonosis_F";
                    };
                    class Unit11 {
                        position[] = { -30,-30,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Geonosis_F";
                    };
                    class Unit12 {
                        position[] = { 30,-30,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Geonosis_F";
                    };
                    class Unit13 {
                        position[] = { -35,-35,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Geonosis_F";
                    };
                    class Unit14 {
                        position[] = { 35,-35,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Geonosis_F";
                    };
                    class Unit15 {
                        position[] = { -40,-40,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Geonosis_F";
                    };
                    class Unit16 {
                        position[] = { 40,-40,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Heavy_Droid_Geonosis_F";
                    };
                    class Unit17 {
                        position[] = { -45,-45,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Heavy_Droid_Geonosis_F";
                    };
                    class Unit18 {
                        position[] = { 45,-45,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Security_Droid_Geonosis_F";
                    };
                    class Unit19 {
                        position[] = { -50,-50,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Security_Droid_Geonosis_F";
                    };
                    class Unit20 {
                        position[] = { 50,-50,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Geonosis_F";
                    };
                    class Unit21 {
                        position[] = { -55,-55,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Geonosis_F";
                    };
                    class Unit22 {
                        position[] = { 55,-55,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Sniper_Droid_Geonosis_F";
                    };
                    class Unit23 {
                        position[] = { -60,-60,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Sniper_Droid_Geonosis_F";
                    };
                    class Unit24 {
                        position[] = { 60,-60,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Geonosis_F";
                    };
                    class Unit25 {
                        position[] = { -65,-65,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Geonosis_F";
                    };
                    class Unit26 {
                        position[] = { 65,-65,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Geonosis_F";
                    };
                    class Unit27 {
                        position[] = { -70,-70,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Geonosis_F";
                    };
                    class Unit28 {
                        position[] = { 70,-70,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Geonosis_F";
                    };
                    class Unit29 {
                        position[] = { -75,-75,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Geonosis_F";
                    };
                    class Unit30 {
                        position[] = { 75,-75,0 };
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Geonosis_F";
                    };
                    class Unit31 {
                        position[] = { -80,-80,0 };
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Geonosis_F";
                    };
                    class Unit32 {
                        position[] = { 80,-80,0 };
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Geonosis_F";
                    };
                    class Unit33 {
                        position[] = { 85,-85,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Flamer_Droid_Geonosis_F";
                    };
                    class Unit34 {
                        position[] = { -85,-85,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Flamer_Droid_Geonosis_F";
                    };
                };

                class O_DBA_CIS_B1_Patrol_Squad {
                    name = "DBA B1 Patrol Squad";
                    author = "Vulgar";
                    scope = 2;
                    scopeCurator = 2;
                    side = 0;
                    faction = "O_DBA_CIS_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.45;

                    class Unit0 {
                        position[] = { 0,0,0 };
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Geonosis_F";
                    };
                    class Unit1 {
                        position[] = { -5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Geonosis_F";
                    };
                    class Unit2 {
                        position[] = { 5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Geonosis_F";
                    };
                    class Unit3 {
                        position[] = { -10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Heavy_Droid_Geonosis_F";
                    };
                    class Unit4 {
                        position[] = { 10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Sniper_Droid_Geonosis_F";
                    };
                };

                class O_DBA_CIS_B1_Rifle_Squad {
                    name = "DBA B1 Rifle Squad";
                    author = "Vulgar";
                    scope = 2;
                    scopeCurator = 2;
                    side = 0;
                    faction = "O_DBA_CIS_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = { 0,0,0 };
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Geonosis_F";
                    };
                    class Unit1 {
                        position[] = { -5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Geonosis_F";
                    };
                    class Unit2 {
                        position[] = { 5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Geonosis_F";
                    };
                    class Unit3 {
                        position[] = { -10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Geonosis_F";
                    };
                    class Unit4 {
                        position[] = { 10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Geonosis_F";
                    };
                    class Unit5 {
                        position[] = { -15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Geonosis_F";
                    };
                    class Unit6 {
                        position[] = { 15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Geonosis_F";
                    };
                    class Unit7 {
                        position[] = { -20,-20,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Geonosis_F";
                    };
                    class Unit8 {
                        position[] = { 20,-20,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Geonosis_F";
                    };
                    class Unit9 {
                        position[] = { -25,-25,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Geonosis_F";
                    };
                    class Unit10 {
                        position[] = { 25,-25,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Geonosis_F";
                    };
                };

                class O_DBA_CIS_B1_Weapons_Squad {
                    name = "DBA B1 Weapons Squad";
                    author = "Vulgar";
                    scope = 2;
                    scopeCurator = 2;
                    side = 0;
                    faction = "O_DBA_CIS_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.37;

                    class Unit0 {
                        position[] = { 0,0,0 };
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Geonosis_F";
                    };
                    class Unit1 {
                        position[] = { -5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Geonosis_F";
                    };
                    class Unit2 {
                        position[] = { 5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Geonosis_F";
                    };
                    class Unit3 {
                        position[] = { -10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Geonosis_F";
                    };
                    class Unit4 {
                        position[] = { 10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Geonosis_F";
                    };
                    class Unit5 {
                        position[] = { -15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Geonosis_F";
                    };
                    class Unit6 {
                        position[] = { 15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Geonosis_F";
                    };
                    class Unit7 {
                        position[] = { -20,-20,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Heavy_Droid_Geonosis_F";
                    };
                    class Unit8 {
                        position[] = { 20,-20,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Heavy_Droid_Geonosis_F";
                    };
                    class Unit9 {
                        position[] = { -25,-25,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Sniper_Droid_Geonosis_F";
                    };
                    class Unit10 {
                        position[] = { 25,-25,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Sniper_Droid_Geonosis_F";
                    };
                    class Unit11 {
                        position[] = { 30,-30,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Flamer_Droid_Geonosis_F";
                    };
                };

                class O_DBA_CIS_B1_AA_Squad {
                    name = "DBA B1 AA Squad";
                    author = "Vulgar";
                    scope = 2;
                    scopeCurator = 2;
                    side = 0;
                    faction = "O_DBA_CIS_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.3;

                    class Unit0 {
                        position[] = { 0,0,0 };
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Geonosis_F";
                    };
                    class Unit1 {
                        position[] = { -5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_AA_Droid_Geonosis_F";
                    };
                    class Unit2 {
                        position[] = { 5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_AA_Droid_Geonosis_F";
                    };
                    class Unit3 {
                        position[] = { -10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_AA_Droid_Geonosis_F";
                    };
                    class Unit4 {
                        position[] = { 10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_AA_Droid_Geonosis_F";
                    };
                    class Unit5 {
                        position[] = { -15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Geonosis_F";
                    };
                    class Unit6 {
                        position[] = { 15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Geonosis_F";
                    };
                    class Unit7 {
                        position[] = { -20,-20,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Heavy_Droid_Geonosis_F";
                    };
                    class Unit8 {
                        position[] = { 20,-20,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Heavy_Droid_Geonosis_F";
                    };
                    class Unit9 {
                        position[] = { -25,-25,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Sniper_Droid_Geonosis_F";
                    };
                };

                class O_DBA_CIS_B1_AT_Squad {
                    name = "DBA B1 AT Squad";
                    author = "Vulgar";
                    scope = 2;
                    scopeCurator = 2;
                    side = 0;
                    faction = "O_DBA_CIS_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.3;

                    class Unit0 {
                        position[] = { 0,0,0 };
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Geonosis_F";
                    };
                    class Unit1 {
                        position[] = { -5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_AT_Droid_Geonosis_F";
                    };
                    class Unit2 {
                        position[] = { 5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_AT_Droid_Geonosis_F";
                    };
                    class Unit3 {
                        position[] = { -10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_AT_Droid_Geonosis_F";
                    };
                    class Unit4 {
                        position[] = { 10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_AT_Droid_Geonosis_F";
                    };
                    class Unit5 {
                        position[] = { -15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Geonosis_F";
                    };
                    class Unit6 {
                        position[] = { 15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Geonosis_F";
                    };
                    class Unit7 {
                        position[] = { -20,-20,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Heavy_Droid_Geonosis_F";
                    };
                    class Unit8 {
                        position[] = { 20,-20,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Heavy_Droid_Geonosis_F";
                    };
                    class Unit9 {
                        position[] = { -25,-25,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Sniper_Droid_Geonosis_F";
                    };
                };

                class O_DBA_CIS_B1_B2_Mixed_Squad {
                    name = "DBA B1 B2 Mixed Squad";
                    author = "Vulgar";
                    scope = 2;
                    scopeCurator = 2;
                    side = 0;
                    faction = "O_DBA_CIS_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.76;

                    class Unit0 {
                        position[] = { 0,0,0 };
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Geonosis_F";
                    };
                    class Unit1 {
                        position[] = { -5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_AA_Droid_Geonosis_F";
                    };
                    class Unit2 {
                        position[] = { 5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_AT_Droid_Geonosis_F";
                    };
                    class Unit3 {
                        position[] = { -10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Geonosis_F";
                    };
                    class Unit4 {
                        position[] = { 10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Droid_Geonosis_F";
                    };
                    class Unit5 {
                        position[] = { -15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Heavy_Droid_Geonosis_F";
                    };
                    class Unit6 {
                        position[] = { 15,-15,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Heavy_Droid_Geonosis_F";
                    };
                    class Unit7 {
                        position[] = { -20,-20,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DBA_B2BattleDroid_F";
                    };
                    class Unit8 {
                        position[] = { 20,-20,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DBA_B2BattleDroid_F";
                    };
                    class Unit9 {
                        position[] = { 25,-25,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_B1_Flamer_Droid_Geonosis_F";
                    };
                };			
			};
			
			
			class SpecOps {
                name = "SpecOps";

                class O_DBA_CIS_BX_Commando_Squad {
                    name = "DBA BX Commando Squad";
                    author = "Vulgar";
                    scope = 2;
                    scopeCurator = 2;
                    side = 0;
                    faction = "O_DBA_CIS_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.6;

                    class Unit0 {
                        position[] = { 0,0,0 };
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_DBA_CIS_BXCommando_F";
                    };
                    class Unit1 {
                        position[] = { -5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_BXCommando_F";
                    };
                    class Unit2 {
                        position[] = { 5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_BXCommando_F";
                    };
                    class Unit3 {
                        position[] = { -10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_BXCommando_F";
                    };
                    class Unit4 {
                        position[] = { 10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_DBA_CIS_BXCommando_F";
                    };
                };

                class O_DBA_CIS_MagnaGuard_Protection_Detail {
                    name = "DBA MagnaGuard Protection Detail";
                    author = "Vulgar";
                    scope = 2;
                    scopeCurator = 2;
                    side = 0;
                    faction = "O_DBA_CIS_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.35;

                    class Unit0 {
                        position[] = { 0,0,0 };
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "DBA_IG100MagnaGuard_F";
                    };
                    class Unit1 {
                        position[] = { -5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DBA_IG100MagnaGuard_F";
                    };
                    class Unit2 {
                        position[] = { 5,-5,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DBA_IG100MagnaGuard_F";
                    };
                    class Unit3 {
                        position[] = { -10,-10,0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DBA_IG100MagnaGuard_F";
                    };
                };
            };
            class Motorized {
                name = "Motorized";
            };
            class Motorized_MTP {
                name = "Motorized Infantry (MTP)";
            };

        };
	};
};