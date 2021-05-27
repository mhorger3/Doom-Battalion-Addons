localNamespace setVariable ["DBA_HUD_color_BLUFOR", [
    (profilenamespace getvariable ['Map_BLUFOR_R',0]),
    (profilenamespace getvariable ['Map_BLUFOR_G',1]),
    (profilenamespace getvariable ['Map_BLUFOR_B',1]),
    DBA_HUD_Icon_Opacity
]];

localNamespace setVariable ["DBA_HUD_color_GREENFOR", [
    (profilenamespace getvariable ['Map_Independent_R',0]),
    (profilenamespace getvariable ['Map_Independent_G',1]),
    (profilenamespace getvariable ['Map_Independent_B',1]),
    DBA_HUD_Icon_Opacity
]];

localNamespace setVariable ["DBA_HUD_color_OPFOR", [
    (profilenamespace getvariable ['Map_OPFOR_R',0]),
    (profilenamespace getvariable ['Map_OPFOR_G',1]),
    (profilenamespace getvariable ['Map_OPFOR_B',1]),
    DBA_HUD_Icon_Opacity
]];

localNamespace setVariable ["DBA_HUD_color_CIV", [
    (profilenamespace getvariable ['Map_Civilian_R',0]),
    (profilenamespace getvariable ['Map_Civilian_G',1]),
    (profilenamespace getvariable ['Map_Civilian_B',1]),
    DBA_HUD_Icon_Opacity
]];
