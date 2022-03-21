
class CfgPatches
{
	class dba_Wraith
	{
		author = "DBA";
		requiredAddons[] = {
			"A3_data_F",
			"A3_anims_F",
			"A3_weapons_F",
			"A3_characters_F"
		};
		requiredVersion = 0.1;
		units[] = {};
        weapons[] = {};
    };
};

class CfgWeapons
{

	class U_I_CombatUniform;
	class UniformItem;
	class DBA_WraithUniform : U_I_CombatUniform
	{
		author = "Vulgar";
		scope = 2;
		displayName = "[DBA] Wraith";
		picture = "";
		model = "DBA_Imperial\Addons\DBA_Armour\DBA_RingWraith\data\Royal_guard_t.p3d";
		hiddenSelections[] = { "camo1" };
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_DBA_Wraith_F";
			containerClass = "Supply150";
			mass = 40;
		};
	};
};
