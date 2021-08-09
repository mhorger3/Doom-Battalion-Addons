#include "\a3\editor_f\Data\Scripts\dikCodes.h"

[
    "DBA_Camo_Changer_Camo_Coef",
    "SLIDER",
    "Camouflage Coefficient",
    ["101st Aux Mod", "Camouflage"],
    [0.01, 1, 0.1, 2],
    true
] call CBA_fnc_addSetting;

[
    "DBA_Camo_Changer_Hints",
    "CHECKBOX",
    ["Show hints", "Show hints when camo changes"],
    ["101st Aux Mod", "Camouflage"],
    true,
    false
] call CBA_fnc_addSetting;

[
    "101st Aux Mod",
    "arf_multitool_blend",
    "ARF Multi-tool Blend",
    {
        if !([player, "DBA_ARF_Multi_Tool"] call ACE_common_fnc_hasItem) exitWith {};

        if ((stance player == "PRONE") && !(player getVariable ["DBA_blend", false])) then
        {
            player call DBA_Camo_Changer_fnc_blend;
        };

        true
    },
    "",
    [DIK_B, [false, true, false]]
] call CBA_fnc_addKeybind;
