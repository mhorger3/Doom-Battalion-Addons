params ["_unit", "_camo"];

private [
	"_helmetClass",
	"_uniformClass",
	"_uniformName",
	"_backpackName"
];

if (_camo == "Base") then
{
	_uniformClass = "101st_212_Longbow";
	_uniformName = "Longbow_Basic";
	_backpackName = "GAR_Backpack_CO";
	_helmetClass = _unit getVariable ["DBA_baseHelmet", "101st_ARF_Base"];
}
else
{
	_uniformClass = format ["101st_212_Longbow_%1", _camo];
	_uniformName = format ["ARF_%1", _camo];
	_backpackName = format ["ARF_%1_Backpack_CO", _camo];
	_helmetClass = format ["101st_ARF_%1", _camo];
};

private _chestPath = format ["\101st_Aux_Mod\Addons\textures\101st\armor\%1_Chest_CO.paa", _uniformName];
private _legsPath = format ["\101st_Aux_Mod\Addons\textures\101st\armor\%1_Legs_CO.paa", _uniformName];
private _backpackPath = format ["101st_Aux_Mod\Addons\textures\101st\backpacks\%1.paa", _backpackName];

_unit setObjectTextureGlobal [0, _chestPath];
_unit setObjectTextureGlobal [1, _legsPath];

if !(isNull (backpackContainer _player)) then
{
	(backpackContainer _player) setObjectTextureGlobal [0, _backpackPath];
};

// Store the starting helmet, so if the unit starts with a custom helmet switching to "Base" will re-equip it.
private _baseHelmet = _unit getVariable "DBA_baseHelmet";
if (isNil "_baseHelmet") then
{
	_unit setVariable ["DBA_baseHelmet", headgear _unit, false];
};

removeHeadgear _unit;
_unit addHeadgear _helmetClass;

_unit setVariable ["DBA_camo", _uniformClass, false];
