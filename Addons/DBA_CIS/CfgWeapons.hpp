class CfgWeapons
{
	class U_I_CombatUniform;

	class JLTS_DroidB1: U_I_CombatUniform
	{
		class ItemInfo;
	};
	class JLTS_DroidB1_Commander: U_I_CombatUniform
	{
		class ItemInfo;
	};
	class JLTS_DroidB1_Crew: U_I_CombatUniform
	{
		class ItemInfo;
	};
	class JLTS_DroidB1_Geonosis: U_I_CombatUniform
	{
		class ItemInfo;
	};
	class JLTS_DroidB1_Geonosis_commander: U_I_CombatUniform
	{
		class ItemInfo;
	};
	class JLTS_DroidB1_Marine: U_I_CombatUniform
	{
		class ItemInfo;
	};
	class JLTS_DroidB1_Pilot: U_I_CombatUniform
	{
		class ItemInfo;
	};
	class JLTS_DroidB1_Rocket: U_I_CombatUniform
	{
		class ItemInfo;
	};
	class JLTS_DroidB1_Security: U_I_CombatUniform
	{
		class ItemInfo;
	};
	class JLTS_DroidB1_Training: U_I_CombatUniform
	{
		class ItemInfo;
	};
	class RD501_opfor_uniform_B2_Armor: U_I_CombatUniform
	{
		class ItemInfo;
	};
	class RD501_opfor_uniform_B2_SuperArmor: U_I_CombatUniform
	{
		class ItemInfo;
	};

	class DBA_B1: JLTS_DroidB1
	{
		displayName = "DBA Battle Droid";
		class ItemInfo: ItemInfo
		{
			uniformClass = "O_DBA_CIS_B1_Droid_F";
		};
	};

	class DBA_B1_Crew: JLTS_DroidB1_Crew
	{
		displayName = "DBA Battle Droid (Crew)";
		class ItemInfo: ItemInfo
		{
			uniformClass = "O_DBA_CIS_B1_Crew_Droid_F";
		};
	};

	class DBA_B1_Marine: JLTS_DroidB1_Marine
	{
		displayName = "DBA Battle Droid (Marine)";
		class ItemInfo: ItemInfo
		{
			uniformClass = "O_DBA_CIS_OOM_Marine_Droid_F";
		};
	};

	class DBA_B1_OOM: JLTS_DroidB1_Commander
	{
		displayName = "DBA Battle Droid (Commander)";
		class ItemInfo: ItemInfo
		{
			uniformClass = "O_DBA_CIS_OOM_Command_Droid_F";
		};
	};

	class DBA_B1_Pilot: JLTS_DroidB1_Pilot
	{
		displayName = "DBA Battle Droid (Pilot)";
		class ItemInfo: ItemInfo
		{
			uniformClass = "O_DBA_CIS_OOM_Pilot_Droid_F";
		};
	};

	class DBA_B1_Rocket: JLTS_DroidB1_Rocket
	{
		displayName = "DBA Battle Droid (Rocket)";
		class ItemInfo: ItemInfo
		{
			uniformClass = "O_DBA_CIS_B1_Rocket_Droid_F";
		};
	};

	class DBA_B1_Security: JLTS_DroidB1_Security
	{
		displayName = "DBA Battle Droid (Security)";
		class ItemInfo: ItemInfo
		{
			uniformClass = "O_DBA_CIS_OOM_Security_Droid_F";
		};
	};

	class DBA_B1_Sniper: JLTS_DroidB1
	{
		displayName = "DBA Battle Droid (Sniper)";
		class ItemInfo: ItemInfo
		{
			uniformClass = "O_DBA_CIS_B1_Sniper_Droid_F";
		};
	};

	class DBA_B1_Geonosis: JLTS_DroidB1_Geonosis
	{
		displayName = "DBA Battle Droid (Geonosis)";
		class ItemInfo: ItemInfo
		{
			uniformClass = "O_DBA_CIS_B1_Droid_Geonosis_F";
		};
	};

	class DBA_B1_Geonosis_Commander: JLTS_DroidB1_Geonosis_commander
	{
		displayName = "DBA Battle Droid (Geonosis Commander)";
		class ItemInfo: ItemInfo
		{
			uniformClass = "O_DBA_CIS_OOM_Command_Droid_Geonosis_F";
		};
	};

	class DBA_B1_Sniper_Geonosis: JLTS_DroidB1
	{
		displayName = "DBA Battle Droid (Geonosis Sniper)";
		class ItemInfo: ItemInfo
		{
			uniformClass = "O_DBA_CIS_B1_Sniper_Droid_Geonosis_F";
		};
	};

	class DBA_B1_Jungle: JLTS_DroidB1
	{
		displayName = "DBA Battle Droid (Jungle)";
		class ItemInfo: ItemInfo
		{
			uniformClass = "O_DBA_CIS_B1_Droid_Jungle_F";
		};
	};

	class DBA_B1_Training: JLTS_DroidB1_Training
	{
		displayName = "DBA Battle Droid (Training)";
		class ItemInfo: ItemInfo
		{
			uniformClass = "O_DBA_CIS_B1_Droid_Training_F";
		};
	};

	class DBA_B1_Winter: JLTS_DroidB1
	{
		displayName = "DBA Battle Droid (Winter)";
		class ItemInfo: ItemInfo
		{
			uniformClass = "O_DBA_CIS_B1_Droid_Winter_F";
		};
	};

	class DBA_B2: RD501_opfor_uniform_B2_Armor
	{
		displayName = "DBA B2";
		class ItemInfo: ItemInfo
		{
			uniformClass = "O_DBA_CIS_B2_Droid_F";
		};
	};

	class DBA_B2_Super: RD501_opfor_uniform_B2_Armor
	{
		displayName = "DBA Super B2";
		class ItemInfo: ItemInfo
		{
			uniformClass = "O_DBA_CIS_B2_Super_Droid_F";
		};
	};
};
