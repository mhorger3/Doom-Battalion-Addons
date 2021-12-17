class CfgPatches 
{
	class DBA_Optre
	{
		requiredAddons[] = {"A3_Armor_F_Beta"};
		units[] = {"O_DBA_CIS_Devil_F", "O_DBA_CIS_Obliterator_F", "O_DBA_CIS_Conquest_F", "O_DBA_CIS_SuperConqueer_F"};
		weapons[] = {};
	};
};
class Mode_SemiAuto;
class CfgVehicles
{
	class Tank_F;
	class MBT_01_base_F: Tank_F
	{
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
				class ViewGunner;
			};
		};
		class CommanderOptics;
	};
	class B_MBT_01_base_F: MBT_01_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
			};
			class CommanderOptics: CommanderOptics
			{
			};
		};
	};
	class B_MBT_01_cannon_F: B_MBT_01_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
			};
			class CommanderOptics: CommanderOptics
			{
			};
		};
	};
	class OPTRE_M808S: B_MBT_01_cannon_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
			};
			class CommanderOptics: CommanderOptics
			{
			};
		};
	};
	class OPTRE_M808B2: B_MBT_01_cannon_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
			};
			class CommanderOptics: CommanderOptics
			{
			};
		};
	};
	class OPTRE_M808B_base: B_MBT_01_cannon_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
			};
			class CommanderOptics: CommanderOptics
			{
			};
		};
	};
	class OPTRE_M850_base: OPTRE_M808B_base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
			};
			class CommanderOptics: CommanderOptics
			{
			};
		};
	};
	class OPTRE_M850_UNSC: OPTRE_M850_base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
			};
			class CommanderOptics: CommanderOptics
			{
			};
		};
	};	
	class O_DBA_CIS_Devil_F: OPTRE_M808B2
	{
		scope=2;
		scopeCurator=2;
		displayName="CIS Devil Tank";
		editorSubcategory="O_DBA_CIS_Tanks";
		vehicleClass="O_DBA_CIS_Tanks";
		armor=1250;
		explosionShielding=0.1;
		side=0;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"DBA_50mw_K5B2"
				};
				magazines[]=
				{
					"DBA_50mm_sap_x150_mag",
					"DBA_50mm_sap_x150_mag",
					"DBA_50mm_sap_x150_mag"
				};
			};
		};
		faction="O_DBA_CIS_F";
		crew="O_DBA_CIS_B1_Crew_Droid_F";
		canFloat="true";
	};
	class O_DBA_CIS_Obliterator_F: OPTRE_M808S
	{
		scope=2;
		scopeCurator=2;
		displayName="CIS Obliterator Tank";
		editorSubcategory="O_DBA_CIS_Tanks";
		vehicleClass="O_DBA_CIS_Tanks";
		side=0;
		armor=1250;
		explosionShielding=0.1;
		faction="O_DBA_CIS_F";
		crew="O_DBA_CIS_B1_Crew_Droid_F";
		canFloat="true";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"DBA_140mw_HH30M4_Cannon"
				};
				magazines[]=
				{
					"DBA_140mm_KB1P_HEAT_x23_mag",
					"DBA_140mm_R1P_AP_x17_mag"
				};
			};
		};
	};
	class O_DBA_CIS_Conquest_F: OPTRE_M850_UNSC
	{
		scope=2;
		scopeCurator=2;
		displayName="CIS Conquest Tank";
		editorSubcategory="O_DBA_CIS_Tanks";
		vehicleClass="O_DBA_CIS_Tanks";
		side=0;
		armor=3750;
		armorStructural=45;
		explosionShielding=0.0099999998;
		faction="O_DBA_CIS_F";
		crew="O_DBA_CIS_B1_Crew_Droid_F";
		canFloat="true";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] =
                {
                    "DBA_240mw_Cannon",
					"DBA_57mw_Cannon"
                };
                magazines[] =
                {
                    "DBA_lancer_mbt_td_x12_mag",
                    "DBA_lancer_mbt_td_x12_mag",
                    "DBA_lancer_mbt_td_x12_mag",
                    "DBA_lancer_mbt_td_x12_mag",
                    "DBA_lancer_mbt_td_x12_mag",
                    "DBA_lancer_mbt_td_x12_mag",
                    "DBA_lancer_mbt_td_x12_mag",
                    "DBA_lancer_mbt_td_x12_mag",
                    "DBA_lancer_mbt_td_x12_mag",
					"DBA_57mm_hef_x6_mag",
					"DBA_57mm_hef_x6_mag",
					"DBA_57mm_hef_x6_mag",
					"DBA_57mm_hef_x6_mag",
					"DBA_57mm_hef_x6_mag",
					"DBA_57mm_hef_x6_mag",
					"DBA_57mm_hef_x6_mag",
					"DBA_57mm_hef_x6_mag",
					"DBA_57mm_hef_x6_mag",
					"DBA_57mm_hef_x6_mag",
					"DBA_57mm_hef_x6_mag",
					"DBA_57mm_hef_x6_mag",
					"DBA_57mm_hef_x6_mag",
					"DBA_57mm_hef_x6_mag",
					"DBA_57mm_hef_x6_mag",
					"DBA_57mm_hef_x6_mag",
					"DBA_57mm_hef_x6_mag",
					"DBA_57mm_hef_x6_mag",
					"DBA_57mm_hef_x6_mag",
					"DBA_57mm_hef_x6_mag",
					"DBA_57mm_ap_x6_mag",
					"DBA_57mm_ap_x6_mag",
					"DBA_57mm_ap_x6_mag"
				};
			};
		};
	};
	class O_DBA_CIS_SuperConqueer_F : OPTRE_M850_UNSC
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "CIS Super ConqTank";
        editorSubcategory = "O_DBA_CIS_Tanks";
        vehicleClass = "O_DBA_CIS_Tanks";
        side = 0;
        armor = 5000;
        armorStructural = 45;
		acceleration = 12.5;
		maxSpeed = 85;
        explosionShielding = 0.01;
        faction = "O_DBA_CIS_F";
        crew = "O_DBA_CIS_B1_Crew_Droid_F";
        canFloat = true;
            class Turrets : turrets 
        {
            class MainTurret : Mainturret
            {
                weapons[] =
                {
                    "DBA_240mw_Cannon",
					"DBA_57mw_Cannon"
                };
                magazines[] =
                {
                    "DBA_lancer_mbt_td_x12_mag",
                    "DBA_lancer_mbt_td_x12_mag",
                    "DBA_lancer_mbt_td_x12_mag",
                    "DBA_lancer_mbt_td_x12_mag",
                    "DBA_lancer_mbt_td_x12_mag",
                    "DBA_lancer_mbt_td_x12_mag",
                    "DBA_lancer_mbt_td_x12_mag",
                    "DBA_lancer_mbt_td_x12_mag",
                    "DBA_lancer_mbt_td_x12_mag",
					"DBA_57mm_hef_x6_mag",
					"DBA_57mm_hef_x6_mag",
					"DBA_57mm_hef_x6_mag",
					"DBA_57mm_hef_x6_mag",
					"DBA_57mm_hef_x6_mag",
					"DBA_57mm_hef_x6_mag",
					"DBA_57mm_hef_x6_mag",
					"DBA_57mm_hef_x6_mag",
					"DBA_57mm_hef_x6_mag",
					"DBA_57mm_hef_x6_mag",
					"DBA_57mm_hef_x6_mag",
					"DBA_57mm_hef_x6_mag",
					"DBA_57mm_hef_x6_mag",
					"DBA_57mm_hef_x6_mag",
					"DBA_57mm_hef_x6_mag",
					"DBA_57mm_hef_x6_mag",
					"DBA_57mm_hef_x6_mag",
					"DBA_57mm_hef_x6_mag",
					"DBA_57mm_hef_x6_mag",
					"DBA_57mm_hef_x6_mag",
					"DBA_57mm_ap_x6_mag",
					"DBA_57mm_ap_x6_mag",
					"DBA_57mm_ap_x6_mag"
					

                };
            };
        };
    };
};