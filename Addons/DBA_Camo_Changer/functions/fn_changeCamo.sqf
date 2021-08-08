params ["_unit", "_camo", ["_templates", "101st"]];

private ["_chestTexture", "_legsTexture", "_helmetClass"];

if (_camo isEqualTo "Base") then
{
	private _baseUniformTextures = _unit getVariable "DBA_baseUniformTextures";
	_chestTexture = _baseUniformTextures # 0;
	_legsTexture = _baseUniformTextures # 1;
	_helmetClass = _unit getVariable "DBA_baseHelmet";
}
else
{
	_chestTexture = getText (configFile >> "DBA_Camo" >> _templates >> _camo >> "chestTexture");
	_legsTexture = getText (configFile >> "DBA_Camo" >> _templates >> _camo >> "legsTexture");
	_helmetClass = getText (configFile >> "DBA_Camo" >> _templates >> _camo >> "helmetClass");
};

private _backpackTexture = getText (configFile >> "DBA_Camo" >> _templates >> _camo >> "backpackTexture");

private _baseUniformTextures = _unit getVariable "DBA_baseUniformTextures";
if (isNil "_baseUniformTextures") then
{
	private _textures = getArray (configFile >> "CfgWeapons" >> (uniform _unit) >> "hiddenSelectionsTextures");
	_unit setVariable ["DBA_baseUniformTextures", _textures];
};

_unit setObjectTextureGlobal [0, _chestTexture];
_unit setObjectTextureGlobal [1, _legsTexture];

if !(isNull (backpackContainer _unit)) then
{
	(backpackContainer _unit) setObjectTextureGlobal [0, _backpackTexture];
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
