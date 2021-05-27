[
    "DBA_HUD_Enabled",
    "CHECKBOX",
    "Enabled",
    ["101st Aux Mod HUD", "General"],
    true,
    false
] call CBA_fnc_addSetting;

[
    "DBA_HUD_First_Person_Only",
    "CHECKBOX",
    "First Person Only",
    ["101st Aux Mod HUD", "General"],
    false,
    false
] call CBA_fnc_addSetting;

[
    "DBA_HUD_Visor_Update_Rate",
    "SLIDER",
    ["Visor Update Rate", "Time between updating HUD"],
    ["101st Aux Mod HUD", "Timers"],
    [0, 10, 0.5, 1],
    false
] call CBA_fnc_addSetting;

[
    "DBA_HUD_Visor_Classes",
    "EDITBOX",
    "Visor Classes",
    ["101st Aux Mod HUD", "Classes"],
    "G_Tactical_Black,G_Tactical_Clear",
    true,
    {
        localNamespace setVariable ["DBA_HUD_visors", (DBA_HUD_Visor_Classes splitString ",")]
    }
] call CBA_fnc_addSetting;

[
    "DBA_HUD_Near_Distance",
    "SLIDER",
    "Near Distance",
    ["101st Aux Mod HUD", "Distances"],
    [0, 2000, 200, 0],
    true
] call CBA_fnc_addSetting;

[
    "DBA_HUD_Icon_Outline",
    "Checkbox",
    "Outline",
    ["101st Aux Mod HUD", "Icons"],
    false,
    true
] call CBA_fnc_addSetting;

[
    "DBA_HUD_Icon_Max_Size",
    "SLIDER",
    "Max Size",
    ["101st Aux Mod HUD", "Icons"],
    [0, 10, 1, 2],
    true
] call CBA_fnc_addSetting;

[
    "DBA_HUD_Icon_Opacity",
    "SLIDER",
    "Opacity",
    ["101st Aux Mod HUD", "Icons"],
    [0, 1, 0.6, 2],
    true,
    {
        call DBA_HUD_fnc_cacheIconColors;
    }
] call CBA_fnc_addSetting;

[
    "DBA_HUD_Icon_Unconscious",
    "EDITBOX",
    "Unconscious",
    ["101st Aux Mod HUD", "Icons"],
    "\A3\ui_f\data\igui\cfg\revive\overlayicons\u100_ca.paa",
    true
] call CBA_fnc_addSetting;

[
    "DBA_HUD_Icon_Unconscious_Scale",
    "SLIDER",
    ["Unconscious Scale Multiplier", "Increases scale of unconscious markers"],
    ["101st Aux Mod HUD", "Icons"],
    [0, 5, 2, 1],
    true
] call CBA_fnc_addSetting;

[
    "DBA_HUD_Icon_Height_Standing",
    "SLIDER",
    "Standing Height",
    ["101st Aux Mod HUD", "Icons - Height"],
    [0, 10, 1.25, 2],
    true
] call CBA_fnc_addSetting;

[
    "DBA_HUD_Icon_Height_Crouch",
    "SLIDER",
    "Crouch Height",
    ["101st Aux Mod HUD", "Icons - Height"],
    [0, 10, 0.75, 2],
    true
] call CBA_fnc_addSetting;

[
    "DBA_HUD_Icon_Height_Prone",
    "SLIDER",
    "Prone Height",
    ["101st Aux Mod HUD", "Icons - Height"],
    [0, 10, 0.25, 2],
    true
] call CBA_fnc_addSetting;

[
    "DBA_HUD_Icon_Height_Unconscious",
    "SLIDER",
    "Unconscious Height",
    ["101st Aux Mod HUD", "Icons - Height"],
    [0, 10, 0.5, 2],
    true
] call CBA_fnc_addSetting;

[
    "DBA_HUD_Icon_BLUFOR_Armor",
    "EDITBOX",
    "Armor",
    ["101st Aux Mod HUD", "Icons - BLUFOR"],
    "\A3\ui_f\data\map\markers\nato\b_armor.paa",
    true
] call CBA_fnc_addSetting;

[
    "DBA_HUD_Icon_BLUFOR_Helicopter",
    "EDITBOX",
    "Helicopter",
    ["101st Aux Mod HUD", "Icons - BLUFOR"],
    "\A3\ui_f\data\map\markers\nato\b_air.paa",
    true
] call CBA_fnc_addSetting;

[
    "DBA_HUD_Icon_BLUFOR_Infantry",
    "EDITBOX",
    "Infantry",
    ["101st Aux Mod HUD", "Icons - BLUFOR"],
    "\A3\ui_f\data\map\markers\nato\b_inf.paa",
    true
] call CBA_fnc_addSetting;

[
    "DBA_HUD_Icon_BLUFOR_Motorized",
    "EDITBOX",
    "Motorized",
    ["101st Aux Mod HUD", "Icons - BLUFOR"],
    "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa",
    true
] call CBA_fnc_addSetting;

[
    "DBA_HUD_Icon_BLUFOR_Naval",
    "EDITBOX",
    "Naval",
    ["101st Aux Mod HUD", "Icons - BLUFOR"],
    "\A3\ui_f\data\map\markers\nato\b_naval.paa",
    true
] call CBA_fnc_addSetting;

[
    "DBA_HUD_Icon_BLUFOR_Plane",
    "EDITBOX",
    "Plane",
    ["101st Aux Mod HUD", "Icons - BLUFOR"],
    "\A3\ui_f\data\map\markers\nato\b_plane.paa",
    true
] call CBA_fnc_addSetting;

[
    "DBA_HUD_Icon_GREENFOR_Armor",
    "EDITBOX",
    "Armor",
    ["101st Aux Mod HUD", "Icons - GREENFOR"],
    "\A3\ui_f\data\map\markers\nato\n_armor.paa",
    true
] call CBA_fnc_addSetting;

[
    "DBA_HUD_Icon_GREENFOR_Helicopter",
    "EDITBOX",
    "Helicopter",
    ["101st Aux Mod HUD", "Icons - GREENFOR"],
    "\A3\ui_f\data\map\markers\nato\n_air.paa",
    true
] call CBA_fnc_addSetting;

[
    "DBA_HUD_Icon_GREENFOR_Infantry",
    "EDITBOX",
    "Infantry",
    ["101st Aux Mod HUD", "Icons - GREENFOR"],
    "\A3\ui_f\data\map\markers\nato\n_inf.paa",
    true
] call CBA_fnc_addSetting;

[
    "DBA_HUD_Icon_GREENFOR_Motorized",
    "EDITBOX",
    "Motorized",
    ["101st Aux Mod HUD", "Icons - GREENFOR"],
    "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa",
    true
] call CBA_fnc_addSetting;

[
    "DBA_HUD_Icon_GREENFOR_Naval",
    "EDITBOX",
    "Naval",
    ["101st Aux Mod HUD", "Icons - GREENFOR"],
    "\A3\ui_f\data\map\markers\nato\n_naval.paa",
    true
] call CBA_fnc_addSetting;

[
    "DBA_HUD_Icon_GREENFOR_Plane",
    "EDITBOX",
    "Plane",
    ["101st Aux Mod HUD", "Icons - GREENFOR"],
    "\A3\ui_f\data\map\markers\nato\n_plane.paa",
    true
] call CBA_fnc_addSetting;

[
    "DBA_HUD_Icon_OPFOR_Armor",
    "EDITBOX",
    "Armor",
    ["101st Aux Mod HUD", "Icons - OPFOR"],
    "\A3\ui_f\data\map\markers\nato\o_armor.paa",
    true
] call CBA_fnc_addSetting;

[
    "DBA_HUD_Icon_OPFOR_Helicopter",
    "EDITBOX",
    "Helicopter",
    ["101st Aux Mod HUD", "Icons - OPFOR"],
    "\A3\ui_f\data\map\markers\nato\o_air.paa",
    true
] call CBA_fnc_addSetting;

[
    "DBA_HUD_Icon_OPFOR_Infantry",
    "EDITBOX",
    "Infantry",
    ["101st Aux Mod HUD", "Icons - OPFOR"],
    "\A3\ui_f\data\map\markers\nato\o_inf.paa",
    true
] call CBA_fnc_addSetting;

[
    "DBA_HUD_Icon_OPFOR_Motorized",
    "EDITBOX",
    "Motorized",
    ["101st Aux Mod HUD", "Icons - OPFOR"],
    "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa",
    true
] call CBA_fnc_addSetting;

[
    "DBA_HUD_Icon_OPFOR_Naval",
    "EDITBOX",
    "Naval",
    ["101st Aux Mod HUD", "Icons - OPFOR"],
    "\A3\ui_f\data\map\markers\nato\o_naval.paa",
    true
] call CBA_fnc_addSetting;

[
    "DBA_HUD_Icon_OPFOR_Plane",
    "EDITBOX",
    "Plane",
    ["101st Aux Mod HUD", "Icons - OPFOR"],
    "\A3\ui_f\data\map\markers\nato\o_plane.paa",
    true
] call CBA_fnc_addSetting;

[
    "DBA_HUD_Icon_CIV_Car",
    "EDITBOX",
    "Car",
    ["101st Aux Mod HUD", "Icons - Civilian"],
    "\A3\ui_f\data\map\markers\nato\c_car.paa",
    true
] call CBA_fnc_addSetting;

[
    "DBA_HUD_Icon_CIV_Helicopter",
    "EDITBOX",
    "Helicopter",
    ["101st Aux Mod HUD", "Icons - Civilian"],
    "\A3\ui_f\data\map\markers\nato\c_air.paa",
    true
] call CBA_fnc_addSetting;

[
    "DBA_HUD_Icon_CIV_Naval",
    "EDITBOX",
    "Naval",
    ["101st Aux Mod HUD", "Icons - Civilian"],
    "\A3\ui_f\data\map\markers\nato\c_naval.paa",
    true
] call CBA_fnc_addSetting;

[
    "DBA_HUD_Icon_CIV_Plane",
    "EDITBOX",
    "Plane",
    ["101st Aux Mod HUD", "Icons - Civilian"],
    "\A3\ui_f\data\map\markers\nato\c_plane.paa",
    true
] call CBA_fnc_addSetting;

[
    "DBA_HUD_Icon_CIV_Unknown",
    "EDITBOX",
    "Unknown",
    ["101st Aux Mod HUD", "Icons - Civilian"],
    "\A3\ui_f\data\map\markers\nato\c_unknown.paa",
    true
] call CBA_fnc_addSetting;
