if (isClass (configFile >> "CfgPatches" >> "zen_custom_modules")) then
{
	call DBA_CapitalShips_fnc_zen;
}
else
{
	if (isClass (configFile >> "CfgPatches" >> "achilles_modules_f_achilles")) then
	{
		call DBA_CapitalShips_fnc_achilles;
	};
};
