if (isClass (configFile >> "CfgPatches" >> "zen_custom_modules")) then
{
	call DB101_AircraftSpawner_fnc_zen;
}
else
{
	if (isClass (configFile >> "CfgPatches" >> "achilles_modules_f_achilles")) then
	{
		call DB101_AircraftSpawner_fnc_achilles;
	};
};
