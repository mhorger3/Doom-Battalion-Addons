class CfgVehicles
{
    class Man;

    class CAManBase: Man
    {
        class ACE_SelfActions
		{
			class DBA_Stims
			{
                displayName = "Stims";
                condition = "_player call DBA_Stims_fnc_hasStim";
                statment = "";

				class DBA_Stims_Adrenal
				{
					displayName = "Adrenal";
					condition = "[_player, ""JLTS_drugs_stimulant_adrenal""] call ACE_common_fnc_hasItem";
					statement = "_player call DBA_Stims_fnc_adrenal";
				};

				class DBA_Stims_Battle
				{
					displayName = "Battle Stimulant";
					condition = "[_player, ""JLTS_drugs_stimulant_battle""] call ACE_common_fnc_hasItem";
					statement = "_player call DBA_Stims_fnc_battle";
				};
			};
		};
    };
};
