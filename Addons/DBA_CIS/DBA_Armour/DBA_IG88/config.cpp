class CfgPatches
{
	class DBA_IG88Uniforms
	{
		author = "Mutt / Dutch";
		requiredaddons[] =
		{
			"A3_Weapons_F",
		};
		requiredversion = 0.1;
		units[] =
		{
		};
		weapons[] =
		{
			"DBA_IG88",
		};
	};
};
class CfgWeapons
{
	class U_I_CombatUniform;
	class UniformItem;
	class DBA_IG88 : U_I_CombatUniform
	{
		DBA_IsDroid = 1;
		DBA_EMPProtection = 1;
		JLTS_isDroid = 1;
		JLTS_hasEMPProtection = 1;
		JLTS_deathSounds = "DeathDroid";
		author = "MrClock + Dutch";
		scope = 2;
		displayName = "DBA IG88";
		picture = "\MRC\JLTS\characters\DroidArmor\data\ui\b1_uniform_ui_ca.paa";
		model = "101st_Aux_Mod\Addons\DBA_CIS\DBA_Armour\DBA_IG88\IG88.p3d";
		hiddenSelections[] = { "camo1" };
		hiddenSelectionsTextures[] = { "101st_Aux_Mod\Addons\DBA_CIS\DBA_Armour\DBA_IG88\data\IG88_CO.paa" };
		hiddenSelectionsMaterial[] = { "101st_Aux_Mod\Addons\DBA_CIS\DBA_Armour\DBA_IG88\data\IG88.rvmat" };
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "O_DBA_CIS_IG88_F";
			containerClass = "Supply150";
			mass = 40;
		};
	};
};