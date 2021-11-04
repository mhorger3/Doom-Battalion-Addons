class CfgPatches
{
	class 101st_Aux_Mod_Backpacks
	{
		author="Dutch";
		name="101st Backpacks";
		requiredaddons[] = 
		{
			"A3_Weapons_F",
			"A3_Functions_F"
		};
		requiredversion = 0.1;
		units[]={};
		weapons[]={};
	};
};
class CfgVehicles {
	#include "backpacks.hpp";
};