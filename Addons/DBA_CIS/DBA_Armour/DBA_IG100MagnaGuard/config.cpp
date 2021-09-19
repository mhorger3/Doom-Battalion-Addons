class CfgPatches
{
	class DBA_IG100MagnaGuardUniform
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
			"DBA_IG100MagnaGuard",
		};
	};
};
class CfgWeapons
{
	class U_I_CombatUniform;
	class UniformItem;
	class DBA_IG100MagnaGuard : U_I_CombatUniform
	{
		JLTS_isDroid = 1;
		JLTS_hasEMPProtection = 1;
		JLTS_deathSounds = "DeathDroid";
		author = "MrClock + Dutch";
		scope = 2;
		displayName = "DBA IG100 MagnaGuard";
		picture = "\MRC\JLTS\characters\DroidArmor\data\ui\b1_uniform_ui_ca.paa";
		model = "101st_Aux_Mod\Addons\DBA_CIS\DBA_Armour\DBA_IG100MagnaGuard\Magna.p3d";
		hiddenSelections[] = { "camo1" };
		hiddenSelectionsTextures[] = { "101st_Aux_Mod\Addons\DBA_CIS\DBA_Armour\DBA_IG100MagnaGuard\data\Magna_CO.paa" };
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "DBA_IG100MagnaGuard_F";
			containerClass = "Supply150";
			mass = 40;
		};
	};
};