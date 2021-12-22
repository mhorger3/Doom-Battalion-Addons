class CfgPatches
{
	class DBA_Custom_ClaymoreHQ_Armour
	{
		author = "Mutt / Dutch";
		name = "101st Aux Mod Custom Armor";
		requiredaddons[] =
		{
			"A3_Characters_F"
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
