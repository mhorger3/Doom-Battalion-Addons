class CfgFunctions
{
	class DBA_HUD
	{
		class functions
		{
			file = "101st_Aux_Mod\Addons\DBA_HUD_Core\functions";

			class cacheIconColors
			{
				postInit = 1;
			};
			class getUnitHeight {};
            class getVisibleUnits {};
			class initPlayer
			{
				postInit = 1;
			};
            class registerDrawHandler {};
            class unregisterDrawHandler {};
		};
	};
};
