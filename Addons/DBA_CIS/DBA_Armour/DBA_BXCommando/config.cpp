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
			"DBA_BXCommando",
		};
	};
};
class CfgWeapons
{
	class U_I_CombatUniform;
	class UniformItem;
	class DBA_BXCommando : U_I_CombatUniform
	{
		JLTS_isDroid = 1;
		JLTS_hasEMPProtection = 1;
		JLTS_deathSounds = "DeathDroid";
		author = "MrClock + Dutch";
		scope = 2;
		displayName = "DBA BX Commando";
		picture = "\MRC\JLTS\characters\DroidArmor\data\ui\b1_uniform_ui_ca.paa";
		model = "3AS\3as_b1_Low_pol\3AS_LPB1_V3\Model\3AS_BX_DROID.p3d";
		hiddenSelections[] = { "Camo" };
		hiddenSelectionsTextures[] = { "\3AS\3as_b1_Low_pol\3AS_LPB1_V3\Model\textures\3AS_LPB1_BSC_V3_CA.paa" };
		hiddenSelectionsMaterial[] = { "\3AS\3as_b1_Low_pol\3AS_LPB1_V3\Model\textures\BX.rvmat" };
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "O_DBA_CIS_BXCommando_F";
			containerClass = "Supply150";
			mass = 40;
		};
	};
};