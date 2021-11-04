class CfgPatches
{
	class DBA_Aux_Mod_PN32
	{
		author="";
		requiredAddons[]=
		{
			"101st_Aux_Mod",
			"DBA_patch_weapons",
		};
		requiredVersion=0.1;
		units[]={
			"DBA_PN32_FG",
		};
		weapons[]=
		{};
		magazines[]=
		{};
		ammo[]=
		{};
	};
};
class CfgVehicles
{
	class Land;
	class LandVehicle: Land
	{
		class ViewPilot;
		class NewTurret;
	};
	class StaticWeapon: LandVehicle
	{
		class AnimationSources;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
				class HitPoints;
			};
		};
	};
	class StaticMGWeapon: StaticWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
			};
		};
	};
	class DBA_PN32_FG : StaticMGWeapon{
		scope=2;
		scopeCurator=2;
		side=1;
		faction="Republic_101st";
		editorSubcategory="EdSubcat_Turrets";
		displayName="PN32 Field Gun";
		model="\OPTRE_Weapons\static\FG75\FG75.p3d";
		picture="\OPTRE_Weapons\static\LAU65D\data\UI\LAU65D_ca.paa";
		icon="\OPTRE_Weapons\static\LAU65D\data\UI\map_LAU65D_ca.paa";
		mapSize=4;
		armor=500;
		class AnimationSources: AnimationSources
		{
			class revolving_rot
			{
				source="revolving";
				weapon="DBA_94mw_PN32_FG";
			};
			class revolving_recoil
			{
				source="ammo";
				weapon="DBA_94mw_PN32_FG";
			};
			class recoil
			{
				source="reload";
				weapon="DBA_94mw_PN32_FG";
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"DBA_94mw_PN32_FG"
				};
				magazines[]=
				{
					"DBA_94mm_PM1_x4_mag",
					"DBA_94mm_PM5_x4_mag",
					"DBA_94mm_P2_x4_mag",
					"DBA_94mm_SM3_x4_mag",
					"DBA_94mm_PM4C_x4_mag",
				};
				viewGunnerInExternal=1;
				gunnerAction="Mortar_Gunner";
				gunnerInAction="Mortar_Gunner";
				forceHideGunner=1;
				ejectDeadGunner=1;
				minElev=-10;
				maxElev=35;
				minTurn=-30;
				maxTurn=30;
				gunnerOpticsModel="A3\Weapons_F_Tank\acc\reticle_Vorona.p3d";
				class ViewOptics: ViewOptics
				{
					initAngleX=0;
					minAngleX=-45;
					maxAngleX=75;
					initAngleY=0;
					minAngleY=-120;
					maxAngleY=120;
					initFov=0.40000001;
					minFov=0.041669998;
					maxFov=0.40000001;
					thermalMode[]={0,1};
					visionMode[]=
					{
						"Normal",
						"NVG",
						"TI"
					};
				};
				class ViewGunner
				{
					initAngleX=0;
					minAngleX=-45;
					maxAngleX=75;
					initAngleY=0;
					minAngleY=-120;
					maxAngleY=120;
					initFov=0.40000001;
					minFov=0.40000001;
					maxFov=0.40000001;
				};
				optics = 1;
            class HitPoints
            {
                class HitGun
                {
                    armor = 0.3;
                    material = -1;
                    name = "action";
                    visual = "autonomous_unhide";
                    passThrough = 0;
                    radius = 0.2;
                };
                class HitTurret
                {
                    class DestructionEffects
                    {
                        class Smoke
                        {
                            simulation = "particles";
                            type = "WeaponWreckSmoke";
                            position = "destructionEffect";
                            intensity = 1;
                            interval = 1;
                            lifeTime = 5;
                        };
                    };
                    armor = 0.3;
                    material = -1;
                    name = "action";
                    visual = "autonomous_unhide";
                    passThrough = 0;
                    radius = 0.2;
                };
            };
            class Components
            {
                class VehicleSystemsDisplayManagerComponentLeft
                {
                    class Components
                    {
                        class EmptyDisplay
                        {
                            componentType = "EmptyDisplayComponent";
                        };
                        class MinimapDisplay
                        {
                            componentType = "MinimapDisplayComponent";
                            resource = "RscCustomInfoMiniMap";
                        };
                        class UAVDisplay
                        {
                            componentType = "UAVFeedDisplayComponent";
                        };
                    };
                    componentType = "VehicleSystemsDisplayManager";
                    left = 1;
                    defaultDisplay = "EmptyDisplay";
                    x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_X"",	(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
                    y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_Y"",	(safezoneY + safezoneH - 21 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
                };
                class VehicleSystemsDisplayManagerComponentRight
                {
                    class Components
                    {
                        class EmptyDisplay
                        {
                            componentType = "EmptyDisplayComponent";
                        };
                        class MinimapDisplay
                        {
                            componentType = "MinimapDisplayComponent";
                            resource = "RscCustomInfoMiniMap";
                        };
                        class UAVDisplay
                        {
                            componentType = "UAVFeedDisplayComponent";
                        };
                    };
                    componentType = "VehicleSystemsDisplayManager";
                    right = 1;
                    defaultDisplay = "EmptyDisplay";
                    x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_X"",	((safezoneX + safezoneW) - (		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)))])";
                    y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_Y"",	(safezoneY + safezoneH - 21 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
                };
            };
			};
		};
	};
};