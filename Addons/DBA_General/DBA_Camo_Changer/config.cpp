#include "CfgPatches.hpp"
#include "CfgFunctions.hpp"
#include "CfgCamo.hpp"
#include "CfgWeapons.hpp"
#include "CfgEventHandlers.hpp"

class CfgVehicles
{
    class Man;

    class CAManBase: Man
    {
        class ACE_SelfActions
        {
//             class DBA_Camo
// 			{
// 				displayName = "Change Camo";
// 				condition = "[player, ""101st""] call DBA_Camo_Changer_fnc_hasCamoChanger";
//                 statement = "";

//                 class Base
//                 {
//                     displayName = "Base";
//                     condition = "!([player, ""Base""] call DBA_Camo_Changer_fnc_isCamoEquipped)";
//                     statement = "[_player, ""Base""] call DBA_Camo_Changer_fnc_changeCamo;";
//                 };

//                 class Arid
//                 {
//                     displayName = "Arid";
//                     condition = "!([player, ""Arid""] call DBA_Camo_Changer_fnc_isCamoEquipped)";
//                     statement = "[_player, ""Arid""] call DBA_Camo_Changer_fnc_changeCamo;";
//                 };

//                 class Night
//                 {
//                     displayName = "Night";
//                     condition = "!([player, ""Night""] call DBA_Camo_Changer_fnc_isCamoEquipped)";
//                     statement = "[_player, ""Night""] call DBA_Camo_Changer_fnc_changeCamo;";
//                 };

//                 class Tropic
//                 {
//                     displayName = "Tropic";
//                     condition = "!([player, ""Tropic""] call DBA_Camo_Changer_fnc_isCamoEquipped)";
//                     statement = "[_player, ""Tropic""] call DBA_Camo_Changer_fnc_changeCamo;";
//                 };

//                 class Urban
//                 {
//                     displayName = "Urban";
//                     condition = "!([player, ""Urban""] call DBA_Camo_Changer_fnc_isCamoEquipped)";
//                     statement = "[_player, ""Urban""] call DBA_Camo_Changer_fnc_changeCamo;";
//                 };

//                 class Winter
//                 {
//                     displayName = "Winter";
//                     condition = "!([player, ""Winter""] call DBA_Camo_Changer_fnc_isCamoEquipped)";
//                     statement = "[_player, ""Winter""] call DBA_Camo_Changer_fnc_changeCamo;";
//                 };
// 			};

            class DBA_ARF_Multi_Tool
            {
                displayName = "ARF Multi-tool";
				condition = "[_player, ""DBA_ARF_Multi_Tool""] call ACE_common_fnc_hasItem";
                statement = "";

                class Blend
                {
                    displayName = "Blend";
                    condition = "(stance _player == ""PRONE"") && !(_player getVariable [""DBA_blend"", false])";
                    statement = "_player call DBA_Camo_Changer_fnc_blend;";
                };

                class Unblend
                {
                    displayName = "Unblend";
                    condition = "_player getVariable [""DBA_blend"", false]";
                    statement = "_player setVariable [""DBA_blend"", false, false];";
                };
            };
        };
    };
};
