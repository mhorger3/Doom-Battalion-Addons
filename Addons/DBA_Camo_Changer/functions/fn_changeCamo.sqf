params ["_unit", "_camo"];

private ["_uniformTextures", "_backpackTextures", "_helmetClass"];

if (_camo isEqualTo "Base") then
{
	_uniformTextures = _unit getVariable ["DBA_baseUniformTextures", []];
	_backpackTextures = _unit getVariable ["DBA_baseBackpackTextures", []];
	_helmetClass = _unit getVariable "DBA_baseHelmet";
}
else
{
	_uniformTextures = getArray (configFile >> "DBA_Camo" >> _templates >> _camo >> "uniformTextures");
	_backpackTextures = getArray (configFile >> "DBA_Camo" >> _templates >> _camo >> "backpackTextures");
	_helmetClass = getText (configFile >> "DBA_Camo" >> _templates >> _camo >> "helmetClass");
};

private _baseUniformTextures = _unit getVariable "DBA_baseUniformTextures";
if (isNil "_baseUniformTextures") then
{
	private _textures = getArray (configFile >> "CfgWeapons" >> (uniform _unit) >> "hiddenSelectionsTextures");
	_unit setVariable ["DBA_baseUniformTextures", _textures];
};

{
	_unit setObjectTextureGlobal [_forEachIndex, _x];
} forEach _uniformTextures;

if !(isNull (backpackContainer _unit)) then
{
	private _baseBackpackTextures = _unit getVariable "DBA_baseBackpackTextures";
	if (isNil "_baseBackpackTextures") then
	{
		private _textures = getArray (configFile >> "CfgVehicles" >> (backpack _unit) >> "hiddenSelectionsTextures");
		_unit setVariable ["DBA_baseBackpackTextures", _textures];
	};

	{
		(backpackContainer _unit) setObjectTextureGlobal [_forEachIndex, _x];
	} forEach _backpackTextures;
};

// Store the starting helmet, so if the unit starts with a custom helmet switching to "Base" will re-equip it.
private _baseHelmet = _unit getVariable "DBA_baseHelmet";
if (isNil "_baseHelmet") then
{
	_unit setVariable ["DBA_baseHelmet", headgear _unit, false];
};

removeHeadgear _unit;
_unit addHeadgear _helmetClass;

_unit setVariable ["DBA_camoType", _camo];

(format ["Camo changed to %1", _camo]) call DBA_Camo_Changer_fnc_hint;
