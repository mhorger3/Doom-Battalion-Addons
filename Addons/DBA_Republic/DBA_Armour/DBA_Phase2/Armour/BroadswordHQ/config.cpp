class CfgPatches
{
	class DBA_Custom_BroadswordHQ_Armour
	{
		author = "Mutt / Dutch";
		name = "101st Aux Mod Custom Armor";
		requiredaddons[] =
		{
			"A3_Weapons_F",
			"A3_Functions_F",
			"A3_Static_F_Jets_SAM_System_01",
			"A3_Static_F_Jets_SAM_System_02",
			"A3_Data_F_Destroyer",
			"A3_Static_F_Destroyer",
			"A3_Static_F_Destroyer_Ship_MRLS_01",
			"OPTRE_Core",
			"OPTRE_Weapons",
			"OPTRE_Weapons_SMG",
			"OPTRE_Weapons_Rockets",
			"A3_Armor_F_EPB_MBT_03"
		};
		requiredversion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};
class CfgWeapons
{
#include "101st_platoonarmour.hpp"
};
