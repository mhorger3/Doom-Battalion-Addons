class CfgPatches
{
    class 101st_Aux_Holomap
    {
        author = "Ragwolf";
        name = "101st Aux Mod Holomap";

        requiredAddons[] =
        {
			"442_misc_holotable",
            "JLTS_C_Intel"
        };
        requiredVersion = 0.1;
        units[] = {
			"101st_Holomap",
			"101st_HoloTable_Long",
			"101st_HoloTable_Round"
		};
        weapons[] = {};
    };
};

class CfgFunctions
{
    class DB101_Holomap
    {
        class functions
        {
            file = "101st_Aux_Mod\Addons\Holomap\functions";

			class calculateParticlePositions {};
			class create {};
			class deploy {};
			class despawn {};
			class despawnParticle {};
			class disable {};
			class drawMapMarkers {};
			class hideMapMarkers {};
			class mapArea {};
			class mapPlanet {};
			class pickUp {};
			class resetScale {};
			class setVariable {};
			class spawn {};
			class spawnParticle {};
			class updateMapMarkers {};
        };
    };
};

class CfgVehicles
{
    class land_mesa;
	class 442_holotable;
	class 442_holotable2;

	class 101st_Holomap : land_mesa
	{
		displayName = "Holomap";
		scope = 2;
		scopeCurator = 2;
		editorCategory = "Category101stAux";
		editorSubcategory = "101st_Props";
		DB101_holoHeight = 0.5;

		class EventHandlers
		{
			class DB101_Holomap
			{
				init = "_this call DB101_Holomap_fnc_create";
			};
		};
	};

	class 101st_HoloTable_Round : 442_holotable
	{
		displayName = "Holo Table (Round)";
		scope = 2;
		scopeCurator = 2;
		editorCategory = "Category101stAux";
		editorSubcategory = "101st_Props";
		DB101_holoHeight = 1.0;

		class EventHandlers
		{
			class DB101_Holomap
			{
				init = "_this call DB101_Holomap_fnc_create";
			};
		};
	};

	class 101st_HoloTable_Long : 442_holotable2
	{
		displayName = "Holo Table (Long)";
		scope = 2;
		scopeCurator = 2;
		editorCategory = "Category101stAux";
		editorSubcategory = "101st_Props";
		DB101_holoHeight = 1.2;

		class EventHandlers
		{
			class DB101_Holomap
			{
				init = "_this call DB101_Holomap_fnc_create";
			};
		};
	};

	class Weapon_Base_F;
	class 101st_GH_Portable_Holomap : Weapon_Base_F
	{
		displayName = "Portable Holomap";
		scope = 1;
		scopeCurator = 1;
		editorCategory = "Category101stAux";
		editorSubcategory = "101st_Equipment";

		class TransportItems
		{
			class 101st_Portable_Holomap
			{
				name = "101st_Portable_Holomap";
				count = 1;
			}
		};
	};
};

class CfgWeapons
{
	class JLTS_intel_holoProjector;

	class 101st_Portable_Holomap : JLTS_intel_holoProjector
	{
		displayName = "Portable Holomap";
		displayNameShort = "Portable Holomap";
		descriptionShort = "Portable Holomap";
	};
};

class Extended_PreInit_EventHandlers
{
    class DBA_Holomap_pre_init_event
	{
        init = "call compile preprocessFileLineNumbers '101st_Aux_Mod\Addons\Holomap\XEH_preInit.sqf'";
    };
};
