params ["_player"];

// Use same animations as morphine
private _config = configFile >> "ace_medical_actions" >> "Basic" >> "Morphine";

// Get injection animation for the player
private _anim = getText (_config >> ["animationCallerSelf", "animationCallerSelfProne"] select (stance _player == "PRONE"));

// Adjust animation based on the current weapon of the player
private _wpn = ["non", "rfl", "lnr", "pst"] param [["", primaryWeapon _player, secondaryWeapon _player, handgunWeapon _player] find currentWeapon _player, "non"];
_anim = [_anim, "[wpn]", _wpn] call CBA_fnc_replace;

_anim
