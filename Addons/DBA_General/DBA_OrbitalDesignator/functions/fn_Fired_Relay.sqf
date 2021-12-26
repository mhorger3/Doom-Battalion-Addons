Params ["_projectile", "_ammo"];
private _bPos = [-50001, 500001, 500001];

switch getNumber(configFile >> "CfgAmmo" >> _ammo >> "DBA_isAmmoResupply") do
{
	case 1: {([_projectile, _ammo] call DBA_OrbitalDesignator_Fnc_ResupplyAmmoDrop); };
	case 2: {([_projectile, _ammo] call DBA_OrbitalDesignator_Fnc_ResupplyExplosiveDrop); };
	case 3: {([_projectile, _ammo] call DBA_OrbitalDesignator_Fnc_ResupplyLauncherDrop); };
	case 4: {([_projectile, _ammo] call DBA_OrbitalDesignator_Fnc_ResupplyMedicalDrop); };
	case 5: {([_projectile, _ammo] call DBA_OrbitalDesignator_Fnc_ResupplyRepairDrop); };
	case 6: {([_projectile, _ammo] call DBA_OrbitalDesignator_Fnc_ResupplySecondaryAmmoDrop); };
};