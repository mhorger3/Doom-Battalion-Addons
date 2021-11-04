[
    "DBA_HUD_Medical_Enabled",
    "CHECKBOX",
    "Enabled",
    "101st Aux Mod HUD - Medical",
    true,
    true,
    {
        call DBA_HUD_Medical_fnc_toggle;
    }
] call CBA_fnc_addSetting;

[
    "DBA_HUD_Medical_Require_Medic_Trait",
    "CHECKBOX",
    "Require Medic Trait",
    "101st Aux Mod HUD - Medical",
    false,
    true
] call CBA_fnc_addSetting;

[
    "DBA_HUD_Medical_Range",
    "SLIDER",
    "Range",
    "101st Aux Mod HUD - Medical",
    [0, 100, 10, 1],
    true
] call CBA_fnc_addSetting;

[
    "DBA_HUD_Medical_Draw_Lines",
    "CHECKBOX",
    "Draw Lines",
    "101st Aux Mod HUD - Medical",
    false,
    true
] call CBA_fnc_addSetting;

[
    "DBA_HUD_Medical_Show_Friendlies",
    "CHECKBOX",
    "Show Friendlies",
    "101st Aux Mod HUD - Medical",
    true,
    true
] call CBA_fnc_addSetting;

[
    "DBA_HUD_Medical_Show_Civilians",
    "CHECKBOX",
    "Show Civilians",
    "101st Aux Mod HUD - Medical",
    true,
    true
] call CBA_fnc_addSetting;

[
    "DBA_HUD_Medical_Show_Enemies",
    "CHECKBOX",
    "Show Enemies",
    "101st Aux Mod HUD - Medical",
    true,
    true
] call CBA_fnc_addSetting;

[
    "DBA_HUD_Medical_Font",
    "EDITBOX",
    "Font",
    ["101st Aux Mod HUD - Medical", "Text"],
    "PuristaMedium",
    true
] call CBA_fnc_addSetting;

[
    "DBA_HUD_Medical_Text_Size",
    "SLIDER",
    "Text Size",
    ["101st Aux Mod HUD - Medical", "Text"],
    [0, 1, 0.03, 2],
    true
] call CBA_fnc_addSetting;

[
    "DBA_HUD_Medical_Color",
    "COLOR",
    "Color",
    ["101st Aux Mod HUD - Medical", "Text"],
    [1, 1, 1],
    true
] call CBA_fnc_addSetting;

[
    "DBA_HUD_Medical_Opacity",
    "SLIDER",
    "Opacity",
    ["101st Aux Mod HUD - Medical", "Text"],
    [0, 1, 0.8, 2],
    true,
    {
		call DBA_HUD_fnc_cacheIconColors;
    }
] call CBA_fnc_addSetting;

[
    "DBA_HUD_Medical_Outline",
    "CHECKBOX",
    "Outline",
    ["101st Aux Mod HUD - Medical", "Text"],
    false,
    true,
    {
		call DBA_HUD_fnc_cacheIconColors;
    }
] call CBA_fnc_addSetting;

[
    "DBA_HUD_Medical_Spacing",
    "SLIDER",
    ["Spacing", "Spacing between medical labels"],
    ["101st Aux Mod HUD - Medical", "Text"],
    [0, 1, 0.1, 2],
    true
] call CBA_fnc_addSetting;

[
    "DBA_HUD_Medical_Offset_Text",
    "SLIDER",
    "Text Offset",
    ["101st Aux Mod HUD - Medical", "Text"],
    [-10, 10, 0.15, 2],
    true
] call CBA_fnc_addSetting;

[
    "DBA_HUD_Medical_Offset_X",
    "SLIDER",
    "X Offset",
    ["101st Aux Mod HUD - Medical", "Text"],
    [-10, 10, 0.5, 2],
    true
] call CBA_fnc_addSetting;

[
    "DBA_HUD_Medical_Offset_Y",
    "SLIDER",
    "Y Offset",
    ["101st Aux Mod HUD - Medical", "Text"],
    [-10, 10, 0, 2],
    true
] call CBA_fnc_addSetting;

[
    "DBA_HUD_Medical_Offset_Z",
    "SLIDER",
    "Z Offset",
    ["101st Aux Mod HUD - Medical", "Text"],
    [-10, 10, 0.3, 2],
    true
] call CBA_fnc_addSetting;
