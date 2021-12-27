class CfgPatches
{
	class DBA_B2BattledroidUniforms
	{
		author = "Vulgar";
		name = "DBA B2 Battledroid";
		requiredaddons[] =
		{
			"A3_Weapons_F"
		};
		requiredversion = 0.1;
		units[] =
		{
		};
		weapons[] =
		{
		};
	};
};
class CfgWeapons
{
	class U_I_CombatUniform;
	class UniformItem;
	class DBA_B2 : U_I_CombatUniform
	{
		DBA_isDroid = 1;
		JLTS_isDroid = 1;
		JLTS_hasEMPProtection = 0;
		JLTS_deathSounds = "DeathDroid";
		author = "MrClock + Dutch";
		scope = 2;
		displayName = "DBA B2";
		picture = "\MRC\JLTS\characters\DroidArmor\data\ui\b1_uniform_ui_ca.paa";
		model = "101st_Aux_Mod\Addons\DBA_CIS\DBA_Armour\DBA_B2Battledroid\data\B2.p3d";
		hiddenSelections[] = { "camo1", "camo2", "camo3" };
		hiddenSelectionsTextures[] = { "101st_Aux_Mod\Addons\DBA_CIS\DBA_Armour\DBA_B2Battledroid\data\B2_Bust_CO.paa", "101st_Aux_Mod\Addons\DBA_CIS\DBA_Armour\DBA_B2Battledroid\data\B2_Torso_CO.paa", "101st_Aux_Mod\Addons\DBA_CIS\DBA_Armour\DBA_B2Battledroid\data\B2_Legs_CO.paa" };
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "DBA_B2Battledroid_F";
			containerClass = "Supply150";
			mass = 40;
		};
	};
	class DBA_B2_Red : U_I_CombatUniform
	{
		JLTS_isDroid = 1;
		JLTS_hasEMPProtection = 0;
		JLTS_deathSounds = "DeathDroid";
		author = "MrClock + Dutch";
		scope = 2;
		displayName = "DBA B2 Red";
		picture = "\MRC\JLTS\characters\DroidArmor\data\ui\b1_uniform_ui_ca.paa";
		model = "101st_Aux_Mod\Addons\DBA_CIS\DBA_Armour\DBA_B2Battledroid\data\B2.p3d";
		hiddenSelections[] = { "camo1", "camo2", "camo3" };
		hiddenSelectionsTextures[] = { "101st_Aux_Mod\Addons\DBA_CIS\DBA_Armour\DBA_B2Battledroid\data\B2_Red_Bust_CO.paa", "101st_Aux_Mod\Addons\DBA_CIS\DBA_Armour\DBA_B2Battledroid\data\B2_Red_Torso_CO.paa", "101st_Aux_Mod\Addons\DBA_CIS\DBA_Armour\DBA_B2Battledroid\data\B2_Red_Legs_CO.paa" };
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "DBA_B2BattledroidRed_F";
			containerClass = "Supply150";
			mass = 40;
		};
	};
	class DBA_B2_Blue : U_I_CombatUniform
	{
		JLTS_isDroid = 1;
		JLTS_hasEMPProtection = 0;
		JLTS_deathSounds = "DeathDroid";
		author = "MrClock + Dutch";
		scope = 2;
		displayName = "DBA B2 Blue";
		picture = "\MRC\JLTS\characters\DroidArmor\data\ui\b1_uniform_ui_ca.paa";
		model = "101st_Aux_Mod\Addons\DBA_CIS\DBA_Armour\DBA_B2Battledroid\data\B2.p3d";
		hiddenSelections[] = { "camo1", "camo2", "camo3" };
		hiddenSelectionsTextures[] = 
		{ 
			"101st_Aux_Mod\Addons\DBA_CIS\DBA_Armour\DBA_B2Battledroid\data\B2_Blue_Bust_CO.paa", 
			"101st_Aux_Mod\Addons\DBA_CIS\DBA_Armour\DBA_B2Battledroid\data\B2_Blue_Torso_CO.paa", 
			"101st_Aux_Mod\Addons\DBA_CIS\DBA_Armour\DBA_B2Battledroid\data\B2_Blue_Legs_CO.paa" 
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "DBA_B2BattledroidBlue_F";
			containerClass = "Supply150";
			mass = 40;
		};
	};
};