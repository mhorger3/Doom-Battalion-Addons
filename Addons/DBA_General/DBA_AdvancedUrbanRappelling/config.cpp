class CfgPatches
{
	class AUR_AdvancedUrbanRappelling
	{
		units[] = {"AUR_AdvancedUrbanRappelling"};
		requiredVersion = 1.0;
		requiredAddons[] = {"A3_Modules_F", "DBA_Aux_Mod_Common"};
	};
};

class CfgNetworkMessages
{
	
	class AdvancedUrbanRappellingRemoteExecClient
	{
		module = "AdvancedUrbanRappelling";
		parameters[] = {"ARRAY","STRING","OBJECT","BOOL"};
	};
	
	class AdvancedUrbanRappellingRemoteExecServer
	{
		module = "AdvancedUrbanRappelling";
		parameters[] = {"ARRAY","STRING","BOOL"};
	};
	
};

class CfgFunctions 
{
	class SA
	{
		class AdvancedUrbanRappelling
		{
			file = "DBA_Core\Addons\DBA_General\DBA_AdvancedUrbanRappelling\functions";
			class advancedUrbanRappellingInit{postInit=1;};
		};
	};
};

class CfgSounds
{
	class AUR_Rappel_Loop
	{
		name = "AUR_Rappel_Loop";
		sound[] = {"DBA_Core\Addons\DBA_General\DBA_AdvancedUrbanRappelling\sounds\AUR_Rappel_Loop.ogg", db+5, 1};
		titles[] = {0,""};
	};
	class AUR_Rappel_Start
	{
		name = "AUR_Rappel_Start";
		sound[] = {"DBA_Core\Addons\DBA_General\DBA_AdvancedUrbanRappelling\sounds\AUR_Rappel_Start.ogg", db+10, 1};
		titles[] = {0,""};
	};
	class AUR_Rappel_End
	{
		name = "AUR_Rappel_End";
		sound[] = {"DBA_Core\Addons\DBA_General\DBA_AdvancedUrbanRappelling\sounds\AUR_Rappel_End.ogg", db+10, 1};
		titles[] = {0,""};
	};
};
#include "cfgAnimations.hpp"

class Extended_PreInit_EventHandlers
{
    class DBA_AUR_pre_init_event
	{
        init = "call compile preprocessFileLineNumbers 'DBA_Core\Addons\DBA_General\DBA_AdvancedUrbanRappelling\XEH_preInit.sqf'";
    };
};
