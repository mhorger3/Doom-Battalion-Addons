params ["_player"];

_player setVariable ["DBA_blend", true, false];
_player setUnitTrait ["camouflageCoef", DBA_Camo_Changer_Camo_Coef];

private _originalTextures = getObjectTextures _player;

private _tex = surfaceTexture position _player;
_player setObjectTextureGlobal [0, _tex];
_player setObjectTextureGlobal [1, _tex];

if !(isNull backpackContainer _player) then
{
	_originalTextures pushBack ((getObjectTextures backpackContainer _player) # 0);
	(backpackContainer _player) setObjectTextureGlobal [0, _tex];
};

[
	{
		params ["_args", "_handle"];
		_args params ["_player", "_originalTextures"];

		if (!(alive _player) || (stance _player != "PRONE") || !(_player getVariable "DBA_blend")) then
		{
			// If it was disabled by speed, need to set this false
			_player setVariable ["DBA_blend", false, false];
			_player setUnitTrait ["camouflageCoef", 1];

			_player setObjectTextureGlobal [0, _originalTextures # 0];
			_player setObjectTextureGlobal [1, _originalTextures # 1];

			if !(isNull backpackContainer _player) then
			{
				(backpackContainer _player) setObjectTextureGlobal [0, _originalTextures # 2];
			};

			_handle call CBA_fnc_removePerFrameHandler;
		};
	},
	1,
	[_player, _originalTextures]
] call CBA_fnc_addPerFrameHandler;