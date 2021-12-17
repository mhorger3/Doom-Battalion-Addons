class CfgPatches 
{
	class DBA_AA
	{
		requiredAddons[] = {"A3_Armor_F_Beta"};
		units[] = {"DBA_SM0L_ADGS", "101st_Tyrant", "101st_Overlord", "DBA_Arbalest_SAM", "DBA_ChiNoKu_SAM"};
		weapons[] = {};
	};
};
class Mode_SemiAuto;
class CfgVehicles
{
	class B_SAM_System_02_F;
	class B_SAM_System_01_F;	
	class 101st_Tyrant : B_SAM_System_02_F
	{
		displayName = "OPFOR Tyrant";
		side = 0;
		editorSubcategory = "O_DBA_CIS_AAs";
        vehicleClass = "O_DBA_CIS_AAs";
        faction = "O_DBA_CIS_F";
		scopeCurator=2;
	};
	class 101st_Overlord : B_SAM_System_01_F
	{
		displayName = "OPFOR Overlord";
		side = 0;
		editorSubcategory = "O_DBA_CIS_AAs";
        vehicleClass = "O_DBA_CIS_AAs";
        faction = "O_DBA_CIS_F";
		scopeCurator=2;
	};
	
	class B_Ship_Gun_01_F;
	class DBA_SM0L_ADGS : B_Ship_Gun_01_F {
    scope = 2;
    scopeCurator = 2;
    side = 0;
	dlc = "Jets";
    faction = "O_DBA_CIS_F";
    crew = "O_DBA_CIS_B1_Crew_Droid_F";
    typicalCargo[] = {"O_DBA_CIS_B1_Crew_Droid_F"};
    vehicleClass = "Autonomous";
    picture = "\A3\Static_F_Destroyer\Ship_Gun_01\Data\Ui\Ship_Gun_01_picture_CA.paa";
    uiPicture = "\A3\Static_F_Destroyer\Ship_Gun_01\Data\Ui\Ship_Gun_01_picture_CA.paa";
    icon = "\A3\Static_F_Destroyer\Ship_Gun_01\Data\Ui\Ship_Gun_01_icon_CA.paa";
    displayName = "SM-0L Area Defense Gun System";
    hasDriver = 0;
    hasGunner = 1;
    isUav = 1;
    uavCameraGunnerPos = "pos_gunner_view";
    uavCameraGunnerDir = "pos_gunner_view_dir";
    memoryPointGun = "pos_barrel_end";
    threat[] = {1,1,0.1};
    cost = 2.5e+006;
    accuracy = 0.12;
    editorPreview = "\A3\EditorPreviews_F_Destroyer\Data\Cfgvehicles\B_Ship_Gun_01_F.jpg";
    unitInfoType = "RscUnitInfoMortar";
    model = "\A3\Static_F_Destroyer\Ship_Gun_01\Ship_Gun_01_F.p3d";
    hiddenSelections[] = {"Camo1"};
    hiddenSelectionsTextures[] = {"A3\Static_F_Destroyer\Ship_Gun_01\Data\Ship_Gun_01_co.paa"};
    extCameraPosition[] = {0,3.5,-9.5};
    canFloat = 0;
    enableGPS = 1;
    artilleryScanner = 0;
    radartype = 2;
    radarTarget = 1;
    radarTargetSize = 1.5;
    visualTarget = 1;
    visualTargetSize = 2;
    irTargetSize = 1;
    reportRemoteTargets = 0;
    receiveRemoteTargets = 1;
    reportOwnPosition = 0;
    lockDetectionSystem = 0;
    incomingMissileDetectionSystem = 16;
    class Components
    {
        class SensorsManagerComponent
        {
            class Components
            {
                class IRSensorComponent
                {
                    class AirTarget
                    {
                        minRange = 500;
                        maxRange = 5250;
                        objectDistanceLimitCoef = -1;
                        viewDistanceLimitCoef = 1;
                    };
                    class GroundTarget
                    {
                        minRange = 500;
                        maxRange = 5250;
                        objectDistanceLimitCoef = 1;
                        viewDistanceLimitCoef = 1;
                    };
                    typeRecognitionDistance = 5250;
                    maxTrackableSpeed = 900;
                    angleRangeHorizontal = 60;
                    angleRangeVertical = 40;
                    animDirection = "mainGun";
                    aimDown = -0.5;
                };
                class DataLinkSensorComponent
                {
                    class AirTarget
                    {
                        minRange = 32000;
                        maxRange = 32000;
                        objectDistanceLimitCoef = -1;
                        viewDistanceLimitCoef = -1;
                    };
                    class GroundTarget
                    {
                        minRange = 32000;
                        maxRange = 32000;
                        objectDistanceLimitCoef = -1;
                        viewDistanceLimitCoef = -1;
                    };
                };
            };
        };
        class TransportCountermeasuresComponent
        {
        };
    };
    animated = 1;
    class AnimationSources
    {
        class muzzle_rot_cannon
        {
            source = "ammorandom";
            weapon = "cannon_105mm";
        };
        class muzzle_hide_cannon
        {
            source = "reload";
            weapon = "cannon_105mm";
        };
    };
    armor = 450;
    armorStructural = 8;
    damageResistance = 0.004;
    damageEffect = "AirDestructionEffects";
    explosionEffect = "FuelExplosionBig";
    fuelExplosionPower = 1;
    hullDamageCauseExplosion = 1;
    secondaryExplosion = -1;
    class HitPoints
    {
        class HitHull
        {
            armor = 1.6;
            name = "hit_hull";
            visual = "zbytek";
            radius = 0.2;
            minimalHit = 0.2;
            explosionShielding = 0.01;
            depends = "Total";
            passThrough = 0.05;
            material = -1;
        };
        class HitEngine
        {
            armor = 0.8;
            material = -1;
            name = "motor";
            passThrough = 1;
        };
        class HitTurret
        {
            armor = 0.8;
            material = -1;
            name = "vez";
            passThrough = 1;
        };
        class HitGun
        {
            armor = 0.6;
            material = -1;
            name = "zbran";
            passThrough = 1;
        };
        class HitLTrack
        {
            armor = 0.6;
            material = -1;
            name = "pas_L";
            passThrough = 1;
        };
        class HitRTrack
        {
            armor = 0.6;
            material = -1;
            name = "pas_P";
            passThrough = 1;
        };
        class HitBody
        {
            armor = 1;
            material = -1;
            name = "NEzbytek";
            visual = "zbytek";
            passThrough = 1;
        };
    };
    class Damage
    {
        tex[] = {};
        mat[] = {"A3\Static_F_Destroyer\Ship_Gun_01\Data\Ship_Gun_01.rvmat","A3\Static_F_Destroyer\Ship_Gun_01\Data\Ship_Gun_01_damage.rvmat","A3\Static_F_Destroyer\Ship_Gun_01\Data\Ship_Gun_01_destruct.rvmat","A3\Static_F_Destroyer\Ship_Gun_01\Data\ship_gun_01_optic.rvmat","A3\Static_F_Destroyer\Ship_Gun_01\Data\Ship_Gun_01_damage.rvmat","A3\Static_F_Destroyer\Ship_Gun_01\Data\Ship_Gun_01_destruct.rvmat"};
    };
    class DestructionEffects
    {
        class LightBig1
        {
            simulation = "light";
            type = "ObjectDestructionLight";
            position = "turretdestruct_pos";
            intensity = 0.001;
            interval = 1;
            lifeTime = 3;
            enabled = "distToWater";
        };
        class Sound
        {
            simulation = "sound";
            position = "turretdestruct_pos";
            intensity = 1;
            interval = 1;
            lifeTime = 1;
            type = "Fire";
        };
        class FireBig1
        {
            simulation = "particles";
            type = "ObjectDestructionFire1";
            position = "turretdestruct_pos";
            intensity = 0.15;
            interval = 1;
            lifeTime = 3;
        };
        class Refract1
        {
            simulation = "particles";
            type = "ObjectDestructionRefract";
            position = "turretdestruct_pos";
            intensity = 0.15;
            interval = 1;
            lifeTime = 3;
        };
        class SmokeBig1
        {
            simulation = "particles";
            type = "ObjectDestructionSmoke";
            position = "turretdestruct_pos";
            intensity = 0.15;
            interval = 1;
            lifeTime = 3.5;
        };
        class SparksBig1
        {
            simulation = "particles";
            type = "ObjectDestructionSparks";
            position = "turretdestruct_pos";
            intensity = 0;
            interval = 1;
            lifeTime = 0;
        };
        class FireSparksBig1
        {
            simulation = "particles";
            type = "FireSparks";
            position = "gundestruct_pos";
            intensity = 1;
            interval = 1;
            lifeTime = 2.8;
        };
        class FireBig2
        {
            simulation = "particles";
            type = "ObjectDestructionFire2";
            position = "gundestruct_pos";
            intensity = 0.15;
            interval = 1;
            lifeTime = 3;
        };
        class SmokeBig1_2
        {
            simulation = "particles";
            type = "ObjectDestructionSmoke1_2";
            position = "gundestruct_pos";
            intensity = 0.15;
            interval = 1;
            lifeTime = 3.5;
        };
        class SmokeBig2
        {
            simulation = "particles";
            type = "ObjectDestructionSmoke2";
            position = "gundestruct_pos";
            intensity = 1;
            interval = 1;
            lifeTime = 3.2;
        };
    };
    class Turrets
    {
        class MainTurret
        {
            minelev = -11;
            maxelev = 80;
            minturn = -180;
            maxturn = 180;
            initElev = 0;
            initTurn = 0;
            maxHorizontalRotSpeed = 0.4444;
            maxVerticalRotSpeed = 0.65;
            elevationMode = 0;
            soundServo[] = {"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner",0.562341,1,30};
            soundServoVertical[] = {"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner_vertical",0.562341,1,30};
            hasGunner = 1;
            gunnerName = "Droid Brain";
            primary = 1;
            primaryGunner = 1;
            startEngine = 0;
            enableManualFire = 1;
            turretInfoType = "RscOptics_crows";
            optics = 1;
            gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
            discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400,2500,2600,2700,2800,2900,3000,3100,3200,3300,3400,3500,3600,3700,3800,3900,4000,4100,4200,4300,4400,4500,4600,4700,4800,4900,5000,5100,5200,5250};
            discreteDistanceInitIndex = 5;
            class OpticsIn
            {
                class Wide
                {
                    opticsDisplayName = "W";
                    initAngleX = 0;
                    minAngleX = -30;
                    maxAngleX = 30;
                    initAngleY = 0;
                    minAngleY = -100;
                    maxAngleY = 100;
                    initFov = 0.466;
                    minFov = 0.466;
                    maxFov = 0.466;
                    visionMode[] = {"Normal","NVG","Ti"};
                    thermalMode[] = {0,1};
                    gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MBT_01_w_F.p3d";
                };
                class Medium
                {
                    opticsDisplayName = "M";
                    initFov = 0.093;
                    minFov = 0.093;
                    maxFov = 0.093;
                    initAngleX = 0;
                    minAngleX = -30;
                    maxAngleX = 30;
                    initAngleY = 0;
                    minAngleY = -100;
                    maxAngleY = 100;
                    visionMode[] = {"Normal","NVG","Ti"};
                    thermalMode[] = {0,1};
                    gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MBT_01_w_F.p3d";
                };
                class Narrow
                {
                    opticsDisplayName = "N";
                    initFov = 0.029;
                    minFov = 0.029;
                    maxFov = 0.029;
                    initAngleX = 0;
                    minAngleX = -30;
                    maxAngleX = 30;
                    initAngleY = 0;
                    minAngleY = -100;
                    maxAngleY = 100;
                    visionMode[] = {"Normal","NVG","Ti"};
                    thermalMode[] = {0,1};
                    gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MBT_01_w_F.p3d";
                };
            };
            forceHideGunner = 1;
            gunnerforceoptics = 1;
            gunnerOutForceOptics = 1;
            viewgunnerinExternal = 0;
            outGunnerMayFire = 1;
            inGunnerMayFire = 1;
            castGunnerShadow = 0;
            showAllTargets = "2 + 4";
            body = "MainTurret";
            gun = "MainGun";
            animationSourceBody = "MainTurret";
            animationSourceGun = "MainGun";
            gunBeg = "Usti hlavne3";
            gunEnd = "Konec hlavne3";
            uavCameraGunnerPos = "pos_gunner_view";
            uavCameraGunnerDir = "pos_gunner_view";
            memoryPointGunnerOptics = "pos_gunner_view";
            cameraDir = "pos_gunner_view";
            particlespos = "pos_fx";
            particlesdir = "pos_fx_dir";
            selectionFireAnim = "";
            gunnerlefthandanimname = "";
            gunnerrighthandanimname = "";
            weapons[] = {"DBA_100mw_HH33G_Cannon"};
            magazines[] = {"DBA_100mm_UB4H_x100_mag"};
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
                        class SensorDisplay
                        {
                            componentType = "SensorsDisplayComponent";
                            range[] = {16000,8000,4000,32000};
                            resource = "RscCustomInfoSensors";
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
                    defaultDisplay = "SensorDisplay";
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
                        class SensorDisplay
                        {
                            componentType = "SensorsDisplayComponent";
                            range[] = {16000,8000,4000,32000};
                            resource = "RscCustomInfoSensors";
                        };
                    };
                    componentType = "VehicleSystemsDisplayManager";
                    right = 1;
                    x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_X"",	((safezoneX + safezoneW) - (		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)))])";
                    y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_Y"",	(safezoneY + safezoneH - 21 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
                };
            };
            class Hitpoints
            {
                class HitTurret
                {
                    name = "hit_turret";
                    convexComponent = "turret";
                    visual = "turret_hit";
                    radius = 0.15;
                    material = -1;
                    armor = 6;
                    passThrough = 0.05;
                    minimalHit = 0.2;
                    explosionShielding = 0.01;
                    isTurret = 1;
                };
                class Hitgun
                {
                    name = "hit_gun";
                    visual = "gun_hit";
                    convexComponent = "gun";
                    radius = 0.05;
                    material = -1;
                    armor = 6;
                    minimalHit = 0.15;
                    explosionShielding = 0.01;
                    passThrough = 0.05;
                    isGun = 1;
                };
            };
            class ViewOptics
            {
            };
            memoryPointsGetInGunner = "pos_gunner";
            memoryPointsGetInGunnerDir = "pos_gunner_dir";
            gunnerReversedGetOut = 0;
            memoryPointGun = "usti hlavne";
            ejectDeadGunner = 0;
            canEject = 0;
            gunnerGetInAction = "";
            gunnerGetOutAction = "";
            animationSourceHatch = "hatchGunner";
            animationSourceCamElev = "camElev";
            proxyType = "CPGunner";
            proxyIndex = 1;
            gunnerType = "";
            primaryObserver = 0;
            soundElevation[] = {"",0.00316228,1};
            minOutElev = -4;
            maxOutElev = 20;
            initOutElev = 0;
            minOutTurn = -60;
            maxOutTurn = 60;
            initOutTurn = 0;
            minCamElev = -90;
            maxCamElev = 90;
            initCamElev = 0;
            stabilizedInAxes = 3;
            commanding = 1;
            turretCanSee = 0;
            canUseScanners = 1;
            class ViewGunner
            {
                initAngleX = 5;
                minAngleX = -75;
                maxAngleX = 85;
                initAngleY = 0;
                minAngleY = -150;
                maxAngleY = 150;
                minFov = 0.25;
                maxFov = 1.25;
                initFov = 0.75;
                minMoveX = 0;
                maxMoveX = 0;
                minMoveY = 0;
                maxMoveY = 0;
                minMoveZ = 0;
                maxMoveZ = 0;
                continuous = 0;
                speedZoomMaxSpeed = 1e+010;
                speedZoomMaxFOV = 0;
            };
            class TurretSpec
            {
                showHeadPhones = 0;
            };
            gunnerOpticsColor[] = {0,0,0,1};
            gunnerOpticsShowCursor = 0;
            gunnerOutOpticsModel = "";
            gunnerOutOpticsColor[] = {0,0,0,1};
            gunnerOpticsEffect[] = {};
            gunnerOutOpticsEffect[] = {};
            memoryPointGunnerOutOptics = "";
            gunnerOutOpticsShowCursor = 0;
            gunnerFireAlsoInInternalCamera = 1;
            gunnerOutFireAlsoInInternalCamera = 1;
            gunnerUsesPilotView = 0;
            viewGunnerShadow = 1;
            viewGunnerShadowDiff = 1;
            viewGunnerShadowAmb = 1;
            hideWeaponsGunner = 1;
            canHideGunner = -1;
            showHMD = 0;
            lockWhenDriverOut = 0;
            lockWhenVehicleSpeed = -1;
            gunnerCompartments = "Compartment1";
            LODTurnedIn = -1;
            LODTurnedOut = -1;
            memoryPointsGetInGunnerPrecise = "";
            missileBeg = "spice rakety";
            missileEnd = "konec rakety";
            armorLights = 0.4;
            class Reflectors
            {
            };
            aggregateReflectors[] = {};
            class GunFire
            {
                cloudletColor[] = {1,1,1,0};
                class Table
                {
                    class T0
                    {
                        color[] = {1,1,1,0};
                        maxT = 0;
                    };
                    class T1
                    {
                        color[] = {1,1,1,0};
                        maxT = 250;
                    };
                    class T2
                    {
                        color[] = {1,0.9,0.6,0};
                        maxT = 350;
                    };
                    class T3
                    {
                        color[] = {0.05,0.05,0.05,0};
                        maxT = 700;
                    };
                    class T4
                    {
                        color[] = {0,0,0,0};
                        maxT = 4200;
                    };
                    class T5
                    {
                        maxT = 1000;
                        color[] = {0.23,0.31,0.29,0};
                    };
                    class T6
                    {
                        maxT = 1500;
                        color[] = {0.21,0.29,0.27,0};
                    };
                    class T7
                    {
                        maxT = 2000;
                        color[] = {0.19,0.23,0.21,0};
                    };
                    class T8
                    {
                        maxT = 2300;
                        color[] = {0.22,0.19,0.1,0};
                    };
                    class T9
                    {
                        maxT = 2500;
                        color[] = {0.35,0.2,0.02,0};
                    };
                    class T10
                    {
                        maxT = 2600;
                        color[] = {0.62,0.29,0.03,0};
                    };
                    class T11
                    {
                        maxT = 2650;
                        color[] = {0.59,0.35,0.05,0};
                    };
                    class T12
                    {
                        maxT = 2700;
                        color[] = {0.75,0.37,0.03,0};
                    };
                    class T13
                    {
                        maxT = 2750;
                        color[] = {0.88,0.34,0.03,0};
                    };
                    class T14
                    {
                        maxT = 2800;
                        color[] = {0.91,0.5,0.17,0};
                    };
                    class T15
                    {
                        maxT = 2850;
                        color[] = {1,0.6,0.2,0};
                    };
                    class T16
                    {
                        maxT = 2900;
                        color[] = {1,0.71,0.3,0};
                    };
                    class T17
                    {
                        maxT = 2950;
                        color[] = {0.98,0.83,0.41,0};
                    };
                    class T18
                    {
                        maxT = 3000;
                        color[] = {0.98,0.91,0.54,0};
                    };
                    class T19
                    {
                        maxT = 3100;
                        color[] = {0.98,0.99,0.6,0};
                    };
                    class T20
                    {
                        maxT = 3300;
                        color[] = {0.96,0.99,0.72,0};
                    };
                    class T21
                    {
                        maxT = 3600;
                        color[] = {1,0.98,0.91,0};
                    };
                    class T22
                    {
                        maxT = 4200;
                        color[] = {1,1,1,0};
                    };
                };
                access = 0;
                cloudletDuration = 0.2;
                cloudletAnimPeriod = 1;
                cloudletSize = 1;
                cloudletAlpha = 0.6;
                cloudletGrowUp = 0;
                cloudletFadeIn = 0.01;
                cloudletFadeOut = 1;
                cloudletAccY = 0;
                cloudletMinYSpeed = -100;
                cloudletMaxYSpeed = 100;
                cloudletShape = "cloudletFire";
                interval = 0.01;
                size = 3;
                sourceSize = 0.5;
                timeToLive = 5;
                initT = 0;
                deltaT = 2250;
            };
            class GunClouds
            {
                cloudletColor[] = {0.8,0.8,0.8,0};
                class Table
                {
                    class T0
                    {
                        color[] = {0.8,0.8,0.8,0};
                        maxT = 0;
                    };
                };
                access = 0;
                cloudletDuration = 1;
                cloudletAnimPeriod = 1;
                cloudletSize = 1;
                cloudletAlpha = 0.1;
                cloudletGrowUp = 0.1;
                cloudletFadeIn = 0.1;
                cloudletFadeOut = 1;
                cloudletAccY = 0.05;
                cloudletMinYSpeed = 0.05;
                cloudletMaxYSpeed = 0.05;
                cloudletShape = "cloudletClouds";
                interval = 0.1;
                size = 1;
                sourceSize = 0;
                timeToLive = 1;
                initT = 0;
                deltaT = 0;
            };
            class MGunClouds
            {
                access = 0;
                cloudletColor[] = {1,1,1,0};
                class Table
                {
                    class T0
                    {
                        color[] = {1,1,1,0};
                        maxT = 0;
                    };
                };
                cloudletGrowUp = 0.05;
                cloudletFadeIn = 0;
                cloudletFadeOut = 0.1;
                cloudletDuration = 0.05;
                cloudletAnimPeriod = 1;
                cloudletSize = 1;
                cloudletAlpha = 0.3;
                cloudletAccY = 0;
                cloudletMinYSpeed = -100;
                cloudletMaxYSpeed = 100;
                cloudletShape = "cloudletClouds";
                timeToLive = 0;
                interval = 0.02;
                size = 0.3;
                sourceSize = 0.02;
                initT = 0;
                deltaT = 0;
            };
            class Turrets
            {
            };
            forceNVG = 0;
            isCopilot = 0;
            gunnerLeftLegAnimName = "";
            gunnerRightLegAnimName = "";
            gunnerDoor = "";
            preciseGetInOut = 0;
            turretFollowFreeLook = 0;
            allowTabLock = 1;
            dontCreateAI = 0;
            disableSoundAttenuation = 0;
            slingLoadOperator = 0;
            playerPosition = 0;
            allowLauncherIn = 0;
            allowLauncherOut = 0;
            class TurnIn
            {
                turnOffset = 0;
            };
            class TurnOut
            {
                turnOffset = 0;
            };
            gunnerInAction = "ManActTestDriver";
            gunnerAction = "ManActTestDriver";
            showCrewAim = 0;
            ace_fcs_Enabled = 0;
            ace_fcs_MinDistance = 200;
            ace_fcs_MaxDistance = 5500;
            ace_fcs_DistanceInterval = 5;
        };
    };
	};
	
	class DBA_ChiNoKu_SAM: B_SAM_System_02_F
	{
		displayName = "DADS-1P Chi No Ku SAM";
		side = 0;
		editorSubcategory = "O_DBA_CIS_AAs";
        vehicleClass = "O_DBA_CIS_AAs";
        faction = "O_DBA_CIS_F";
		scopeCurator=2;
		armor = 400;
		armorStructural = 2;
		damageResistance = 0.004;
		damageEffect = "AirDestructionEffects";
		class AnimationSources
		{
			class Missiles_revolving
			{
				source="revolving";
				weapon="DBA_DADS1P_SAM";
			};
		};
		class Components
		{
        class SensorsManagerComponent
        {
            class Components
            {
                class IRSensorComponent
                {
                    class AirTarget
                    {
                        minRange = 20000;
                        maxRange = 20000;
                        objectDistanceLimitCoef = -1;
                        viewDistanceLimitCoef = 1;
                    };
                    class GroundTarget
                    {
                        minRange = 20000;
                        maxRange = 20000;
                        objectDistanceLimitCoef = 1;
                        viewDistanceLimitCoef = 1;
                    };
                    typeRecognitionDistance = 20000;
                    maxTrackableSpeed = 1900;
                    angleRangeHorizontal = 360;
                    angleRangeVertical = 360;
                    animDirection = "mainGun";
                    aimDown = -0.5;
                };
				class ActiveRadarSensorComponent
					{
						class AirTarget
						{
							minRange=20000;
							maxRange=20000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=20000;
							maxRange=20000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						typeRecognitionDistance=20000;
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						groundNoiseDistanceCoef=1.0;
						componentType="ActiveRadarSensorComponent";
						maxGroundNoiseDistance=20000;
						minSpeedThreshold=5;
						maxSpeedThreshold=1900;
						color[]={0,1,1,1};
						allowsMarking=1;
						animDirection="";
						aimDown=0;
						minTrackableSpeed=-1e+010;
						maxTrackableSpeed=1e+010;
						minTrackableATL=-1e+010;
						maxTrackableATL=1e+010;
					};
                class DataLinkSensorComponent
                {
                };
            };
        };
        class TransportCountermeasuresComponent
        {
        };
		};
		class Turrets{
        class MainTurret
        {
            minelev = -25;
            maxelev = 60;
            minturn = -180;
            maxturn = 180;
            initElev = 15;
            initTurn = 0;
            maxHorizontalRotSpeed = 1.5;
            maxVerticalRotSpeed = 4;
            soundServo[] = {"A3\Sounds_F\vehicles\armor\noises\servo_best",1.41254,1,40};
            hasGunner = 1;
            gunnerName = "Droid Network";
            primary = 1;
            primaryGunner = 1;
            startEngine = 0;
            enableManualFire = 1;
            turretinfotype = "RscOptics_APC_Tracked_01_gunner";
            forceHideGunner = 1;
            gunnerforceoptics = 1;
            gunnerOutForceOptics = 1;
            viewgunnerinExternal = 0;
            outGunnerMayFire = 1;
            inGunnerMayFire = 1;
            castGunnerShadow = 0;
            showAllTargets = 2;
            body = "MainTurret";
            gun = "MainGun";
            animationSourceBody = "MainTurret";
            animationSourceGun = "MainGun";
            uavCameraGunnerPos = "pos_gunner_view";
            uavCameraGunnerDir = "pos_gunner_view_dir";
            memoryPointGunnerOptics = "pos_gunner_view";
            selectionFireAnim = "zasleh";
            missileBeg = "pos_missile";
            missileEnd = "pos_missile_end";
            gunnerlefthandanimname = "";
            gunnerrighthandanimname = "";
            weapons[] = {"DBA_DADS1P_SAM"};
            magazines[] = {"DBA_DADS1P_mag_x8",};
            optics = 1;
            gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_AAA_01_w_F";
            class OpticsIn
            {
                class Wide
                {
                    opticsDisplayName = "W";
                    initAngleX = 0;
                    minAngleX = -30;
                    maxAngleX = 30;
                    initAngleY = 0;
                    minAngleY = -100;
                    maxAngleY = 100;
                    initFov = 0.466;
                    minFov = 0.466;
                    maxFov = 0.466;
                    visionMode[] = {"Normal","NVG","Ti"};
                    thermalMode[] = {0,1};
                    gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_AAA_01_w_F";
                };
                class Medium
                {
                    opticsDisplayName = "M";
                    initFov = 0.093;
                    minFov = 0.093;
                    maxFov = 0.093;
                    gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_AAA_01_m_F";
                    initAngleX = 0;
                    minAngleX = -30;
                    maxAngleX = 30;
                    initAngleY = 0;
                    minAngleY = -100;
                    maxAngleY = 100;
                    visionMode[] = {"Normal","NVG","Ti"};
                    thermalMode[] = {0,1};
                };
                class Narrow
                {
                    opticsDisplayName = "N";
                    gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_AAA_01_n_F";
                    initFov = 0.029;
                    minFov = 0.029;
                    maxFov = 0.029;
                    initAngleX = 0;
                    minAngleX = -30;
                    maxAngleX = 30;
                    initAngleY = 0;
                    minAngleY = -100;
                    maxAngleY = 100;
                    visionMode[] = {"Normal","NVG","Ti"};
                    thermalMode[] = {0,1};
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
                        class SensorDisplay
                        {
                            componentType = "SensorsDisplayComponent";
                            range[] = {20000,4000,2000,16000};
                            resource = "RscCustomInfoSensors";
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
                    defaultDisplay = "SensorDisplay";
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
                        class SensorDisplay
                        {
                            componentType = "SensorsDisplayComponent";
                            range[] = {20000,4000,2000,16000};
                            resource = "RscCustomInfoSensors";
                        };
                    };
                    componentType = "VehicleSystemsDisplayManager";
                    right = 1;
                    x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_X"",	((safezoneX + safezoneW) - (		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)))])";
                    y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_Y"",	(safezoneY + safezoneH - 21 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
                };
            };
            class ViewOptics
            {
            };
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
            memoryPointsGetInGunner = "pos_gunner";
            memoryPointsGetInGunnerDir = "pos_gunner_dir";
            gunnerReversedGetOut = 0;
            memoryPointGun = "usti hlavne";
            ejectDeadGunner = 0;
            canEject = 0;
            gunnerGetInAction = "";
            gunnerGetOutAction = "";
            animationSourceHatch = "hatchGunner";
            animationSourceCamElev = "camElev";
            proxyType = "CPGunner";
            proxyIndex = 1;
            gunnerType = "";
            primaryObserver = 0;
            soundElevation[] = {"",0.00316228,1};
            minOutElev = -4;
            maxOutElev = 20;
            initOutElev = 0;
            minOutTurn = -60;
            maxOutTurn = 60;
            initOutTurn = 0;
            minCamElev = -90;
            maxCamElev = 90;
            initCamElev = 0;
            stabilizedInAxes = 3;
            commanding = 1;
            turretCanSee = 0;
            canUseScanners = 1;
            class ViewGunner
            {
                initAngleX = 5;
                minAngleX = -75;
                maxAngleX = 85;
                initAngleY = 0;
                minAngleY = -150;
                maxAngleY = 150;
                minFov = 0.25;
                maxFov = 1.25;
                initFov = 0.75;
                minMoveX = 0;
                maxMoveX = 0;
                minMoveY = 0;
                maxMoveY = 0;
                minMoveZ = 0;
                maxMoveZ = 0;
                continuous = 0;
                speedZoomMaxSpeed = 1e+010;
                speedZoomMaxFOV = 0;
            };
            class TurretSpec
            {
                showHeadPhones = 0;
            };
            gunnerOpticsColor[] = {0,0,0,1};
            gunnerOpticsShowCursor = 0;
            gunnerOutOpticsModel = "";
            gunnerOutOpticsColor[] = {0,0,0,1};
            gunnerOpticsEffect[] = {};
            gunnerOutOpticsEffect[] = {};
            memoryPointGunnerOutOptics = "";
            gunnerOutOpticsShowCursor = 0;
            gunnerFireAlsoInInternalCamera = 1;
            gunnerOutFireAlsoInInternalCamera = 1;
            gunnerUsesPilotView = 0;
            viewGunnerShadow = 1;
            viewGunnerShadowDiff = 1;
            viewGunnerShadowAmb = 1;
            hideWeaponsGunner = 1;
            canHideGunner = -1;
            showHMD = 0;
            lockWhenDriverOut = 0;
            lockWhenVehicleSpeed = -1;
            gunnerCompartments = "Compartment1";
            LODTurnedIn = -1;
            LODTurnedOut = -1;
            memoryPointsGetInGunnerPrecise = "";
            armorLights = 0.4;
            class Reflectors
            {
            };
            aggregateReflectors[] = {};
            class GunFire
            {
                cloudletColor[] = {1,1,1,0};
                class Table
                {
                    class T0
                    {
                        color[] = {1,1,1,0};
                        maxT = 0;
                    };
                    class T1
                    {
                        color[] = {1,1,1,0};
                        maxT = 250;
                    };
                    class T2
                    {
                        color[] = {1,0.9,0.6,0};
                        maxT = 350;
                    };
                    class T3
                    {
                        color[] = {0.05,0.05,0.05,0};
                        maxT = 700;
                    };
                    class T4
                    {
                        color[] = {0,0,0,0};
                        maxT = 4200;
                    };
                    class T5
                    {
                        maxT = 1000;
                        color[] = {0.23,0.31,0.29,0};
                    };
                    class T6
                    {
                        maxT = 1500;
                        color[] = {0.21,0.29,0.27,0};
                    };
                    class T7
                    {
                        maxT = 2000;
                        color[] = {0.19,0.23,0.21,0};
                    };
                    class T8
                    {
                        maxT = 2300;
                        color[] = {0.22,0.19,0.1,0};
                    };
                    class T9
                    {
                        maxT = 2500;
                        color[] = {0.35,0.2,0.02,0};
                    };
                    class T10
                    {
                        maxT = 2600;
                        color[] = {0.62,0.29,0.03,0};
                    };
                    class T11
                    {
                        maxT = 2650;
                        color[] = {0.59,0.35,0.05,0};
                    };
                    class T12
                    {
                        maxT = 2700;
                        color[] = {0.75,0.37,0.03,0};
                    };
                    class T13
                    {
                        maxT = 2750;
                        color[] = {0.88,0.34,0.03,0};
                    };
                    class T14
                    {
                        maxT = 2800;
                        color[] = {0.91,0.5,0.17,0};
                    };
                    class T15
                    {
                        maxT = 2850;
                        color[] = {1,0.6,0.2,0};
                    };
                    class T16
                    {
                        maxT = 2900;
                        color[] = {1,0.71,0.3,0};
                    };
                    class T17
                    {
                        maxT = 2950;
                        color[] = {0.98,0.83,0.41,0};
                    };
                    class T18
                    {
                        maxT = 3000;
                        color[] = {0.98,0.91,0.54,0};
                    };
                    class T19
                    {
                        maxT = 3100;
                        color[] = {0.98,0.99,0.6,0};
                    };
                    class T20
                    {
                        maxT = 3300;
                        color[] = {0.96,0.99,0.72,0};
                    };
                    class T21
                    {
                        maxT = 3600;
                        color[] = {1,0.98,0.91,0};
                    };
                    class T22
                    {
                        maxT = 4200;
                        color[] = {1,1,1,0};
                    };
                };
                access = 0;
                cloudletDuration = 0.2;
                cloudletAnimPeriod = 1;
                cloudletSize = 1;
                cloudletAlpha = 0.6;
                cloudletGrowUp = 0;
                cloudletFadeIn = 0.01;
                cloudletFadeOut = 1;
                cloudletAccY = 0;
                cloudletMinYSpeed = -100;
                cloudletMaxYSpeed = 100;
                cloudletShape = "cloudletFire";
                interval = 0.01;
                size = 3;
                sourceSize = 0.5;
                timeToLive = 5;
                initT = 0;
                deltaT = 2250;
            };
            class GunClouds
            {
                cloudletColor[] = {0.8,0.8,0.8,0};
                class Table
                {
                    class T0
                    {
                        color[] = {0.8,0.8,0.8,0};
                        maxT = 0;
                    };
                };
                access = 0;
                cloudletDuration = 1;
                cloudletAnimPeriod = 1;
                cloudletSize = 1;
                cloudletAlpha = 0.1;
                cloudletGrowUp = 0.1;
                cloudletFadeIn = 0.1;
                cloudletFadeOut = 1;
                cloudletAccY = 0.05;
                cloudletMinYSpeed = 0.05;
                cloudletMaxYSpeed = 0.05;
                cloudletShape = "cloudletClouds";
                interval = 0.1;
                size = 1;
                sourceSize = 0;
                timeToLive = 1;
                initT = 0;
                deltaT = 0;
            };
            class MGunClouds
            {
                access = 0;
                cloudletColor[] = {1,1,1,0};
                class Table
                {
                    class T0
                    {
                        color[] = {1,1,1,0};
                        maxT = 0;
                    };
                };
                cloudletGrowUp = 0.05;
                cloudletFadeIn = 0;
                cloudletFadeOut = 0.1;
                cloudletDuration = 0.05;
                cloudletAnimPeriod = 1;
                cloudletSize = 1;
                cloudletAlpha = 0.3;
                cloudletAccY = 0;
                cloudletMinYSpeed = -100;
                cloudletMaxYSpeed = 100;
                cloudletShape = "cloudletClouds";
                timeToLive = 0;
                interval = 0.02;
                size = 0.3;
                sourceSize = 0.02;
                initT = 0;
                deltaT = 0;
            };
            class Turrets
            {
            };
            forceNVG = 0;
            isCopilot = 0;
            gunnerLeftLegAnimName = "";
            gunnerRightLegAnimName = "";
            gunnerDoor = "";
            preciseGetInOut = 0;
            turretFollowFreeLook = 0;
            allowTabLock = 0;
            dontCreateAI = 0;
            disableSoundAttenuation = 0;
            slingLoadOperator = 0;
            playerPosition = 0;
            allowLauncherIn = 0;
            allowLauncherOut = 0;
            class TurnIn
            {
                turnOffset = 0;
            };
            class TurnOut
            {
                turnOffset = 0;
            };
            gunnerInAction = "ManActTestDriver";
            gunnerAction = "ManActTestDriver";
            gunBeg = "usti hlavne";
            gunEnd = "konec hlavne";
            showCrewAim = 0;
            ace_fcs_Enabled = 0;
            ace_fcs_MinDistance = 200;
            ace_fcs_MaxDistance = 5500;
            ace_fcs_DistanceInterval = 5;
        };
    };
	class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"mainturret",
					0
				},
				
				{
					"maingun",
					0.25999999
				},
				
				{
					"hide_missilecover_01",
					1
				},
				
				{
					"hide_missilecover_02",
					1
				},
				
				{
					"hide_missilecover_03",
					1
				},
				
				{
					"hide_missilecover_04",
					1
				},
				
				{
					"hide_missilecover_05",
					1
				},
				
				{
					"hide_missilecover_06",
					1
				},
				
				{
					"hide_missilecover_07",
					1
				},
				
				{
					"hide_missilecover_08",
					1
				},
				
				{
					"damageturret",
					0
				},
				
				{
					"damage_hide_missilecover_01",
					0
				},
				
				{
					"damage_hide_missilecover_02",
					0
				},
				
				{
					"damage_hide_missilecover_03",
					0
				},
				
				{
					"damage_hide_missilecover_04",
					0
				},
				
				{
					"damage_hide_missilecover_05",
					0
				},
				
				{
					"damage_hide_missilecover_06",
					0
				},
				
				{
					"damage_hide_missilecover_07",
					0
				},
				
				{
					"damage_hide_missilecover_08",
					0
				},
				
				{
					"missile_move_1",
					1
				},
				
				{
					"missile_move_2",
					1
				},
				
				{
					"missile_move_3",
					1
				},
				
				{
					"missile_move_4",
					1
				},
				
				{
					"missile_move_5",
					1
				},
				
				{
					"missile_move_6",
					1
				},
				
				{
					"missile_move_7",
					1
				}
			};
			hide[]=
			{
				"zasleh",
				"light_back",
				"brzdove svetlo",
				"clan",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=1.972;
			verticalOffsetWorld=0.001;
			init="''";
		};
    animated = 1;
	};
	
	class DBA_Arbalest_SAM : B_SAM_System_01_F
	{
		displayName = "DADS-5M Arbalest SAM";
		side = 0;
		editorSubcategory = "O_DBA_CIS_AAs";
        vehicleClass = "O_DBA_CIS_AAs";
        faction = "O_DBA_CIS_F";
		scopeCurator=2;
		armor = 200;
		armorStructural = 2;
		damageResistance = 0.004;
		damageEffect = "AirDestructionEffects";
		class Components
		{
        class SensorsManagerComponent
        {
            class Components
            {
                class IRSensorComponent
                {
                    class AirTarget
                    {
                        minRange = 20000;
                        maxRange = 20000;
                        objectDistanceLimitCoef = -1;
                        viewDistanceLimitCoef = 1;
                    };
                    class GroundTarget
                    {
                        minRange = 20000;
                        maxRange = 20000;
                        objectDistanceLimitCoef = 1;
                        viewDistanceLimitCoef = 1;
                    };
                    typeRecognitionDistance = 20000;
                    maxTrackableSpeed = 1600;
                    angleRangeHorizontal = 360;
                    angleRangeVertical = 360;
                    animDirection = "mainGun";
                    aimDown = -0.5;
                };
				class ActiveRadarSensorComponent
					{
						class AirTarget
						{
							minRange=20000;
							maxRange=20000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=20000;
							maxRange=20000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						typeRecognitionDistance=20000;
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						groundNoiseDistanceCoef=1.0;
						componentType="ActiveRadarSensorComponent";
						maxGroundNoiseDistance=20000;
						minSpeedThreshold=5;
						maxSpeedThreshold=1900;
						color[]={0,1,1,1};
						allowsMarking=1;
						animDirection="";
						aimDown=0;
						minTrackableSpeed=-1e+010;
						maxTrackableSpeed=1e+010;
						minTrackableATL=-1e+010;
						maxTrackableATL=1e+010;
					};
                class DataLinkSensorComponent
                {
                };
            };
        };
        class TransportCountermeasuresComponent
        {
        };
		};
		class Turrets{
        class MainTurret
        {
            minelev = -25;
            maxelev = 80;
            minturn = -180;
            maxturn = 180;
            initElev = 15;
            initTurn = 0;
            maxHorizontalRotSpeed = 1.5;
            maxVerticalRotSpeed = 4;
            soundServo[] = {"A3\Sounds_F\vehicles\armor\noises\servo_best",1.41254,1,40};
            hasGunner = 1;
            gunnerName = "Droid Network";
            primary = 1;
            primaryGunner = 1;
            startEngine = 0;
            enableManualFire = 1;
            turretinfotype = "RscOptics_APC_Tracked_01_gunner";
            forceHideGunner = 1;
            gunnerforceoptics = 1;
            gunnerOutForceOptics = 1;
            viewgunnerinExternal = 0;
            outGunnerMayFire = 1;
            inGunnerMayFire = 1;
            castGunnerShadow = 0;
            showAllTargets = 2;
            body = "MainTurret";
            gun = "MainGun";
            animationSourceBody = "MainTurret";
            animationSourceGun = "MainGun";
            uavCameraGunnerPos = "pos_gunner_view";
            uavCameraGunnerDir = "pos_gunner_view_dir";
            memoryPointGunnerOptics = "pos_gunner_view";
            selectionFireAnim = "zasleh";
            missileBeg = "pos_missile";
            missileEnd = "pos_missile_end";
            gunnerlefthandanimname = "";
            gunnerrighthandanimname = "";
            weapons[] = {"DBA_DADS5M_SAM"};
            magazines[] = {"DBA_DADS5M_mag_x21"};
            optics = 1;
            gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_AAA_01_w_F";
            class OpticsIn
            {
                class Wide
                {
                    opticsDisplayName = "W";
                    initAngleX = 0;
                    minAngleX = -30;
                    maxAngleX = 30;
                    initAngleY = 0;
                    minAngleY = -100;
                    maxAngleY = 100;
                    initFov = 0.466;
                    minFov = 0.466;
                    maxFov = 0.466;
                    visionMode[] = {"Normal","NVG","Ti"};
                    thermalMode[] = {0,1};
                    gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_AAA_01_w_F";
                };
                class Medium
                {
                    opticsDisplayName = "M";
                    initFov = 0.093;
                    minFov = 0.093;
                    maxFov = 0.093;
                    gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_AAA_01_m_F";
                    initAngleX = 0;
                    minAngleX = -30;
                    maxAngleX = 30;
                    initAngleY = 0;
                    minAngleY = -100;
                    maxAngleY = 100;
                    visionMode[] = {"Normal","NVG","Ti"};
                    thermalMode[] = {0,1};
                };
                class Narrow
                {
                    opticsDisplayName = "N";
                    gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_AAA_01_n_F";
                    initFov = 0.029;
                    minFov = 0.029;
                    maxFov = 0.029;
                    initAngleX = 0;
                    minAngleX = -30;
                    maxAngleX = 30;
                    initAngleY = 0;
                    minAngleY = -100;
                    maxAngleY = 100;
                    visionMode[] = {"Normal","NVG","Ti"};
                    thermalMode[] = {0,1};
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
                        class SensorDisplay
                        {
                            componentType = "SensorsDisplayComponent";
                            range[] = {20000,4000,2000,16000};
                            resource = "RscCustomInfoSensors";
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
                    defaultDisplay = "SensorDisplay";
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
                        class SensorDisplay
                        {
                            componentType = "SensorsDisplayComponent";
                            range[] = {20000,4000,2000,16000};
                            resource = "RscCustomInfoSensors";
                        };
                    };
                    componentType = "VehicleSystemsDisplayManager";
                    right = 1;
                    x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_X"",	((safezoneX + safezoneW) - (		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)))])";
                    y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_Y"",	(safezoneY + safezoneH - 21 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
                };
            };
            class ViewOptics
            {
            };
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
            memoryPointsGetInGunner = "pos_gunner";
            memoryPointsGetInGunnerDir = "pos_gunner_dir";
            gunnerReversedGetOut = 0;
            memoryPointGun = "usti hlavne";
            ejectDeadGunner = 0;
            canEject = 0;
            gunnerGetInAction = "";
            gunnerGetOutAction = "";
            animationSourceHatch = "hatchGunner";
            animationSourceCamElev = "camElev";
            proxyType = "CPGunner";
            proxyIndex = 1;
            gunnerType = "";
            primaryObserver = 0;
            soundElevation[] = {"",0.00316228,1};
            minOutElev = -4;
            maxOutElev = 20;
            initOutElev = 0;
            minOutTurn = -60;
            maxOutTurn = 60;
            initOutTurn = 0;
            minCamElev = -90;
            maxCamElev = 90;
            initCamElev = 0;
            stabilizedInAxes = 3;
            commanding = 1;
            turretCanSee = 0;
            canUseScanners = 1;
            class ViewGunner
            {
                initAngleX = 5;
                minAngleX = -75;
                maxAngleX = 85;
                initAngleY = 0;
                minAngleY = -150;
                maxAngleY = 150;
                minFov = 0.25;
                maxFov = 1.25;
                initFov = 0.75;
                minMoveX = 0;
                maxMoveX = 0;
                minMoveY = 0;
                maxMoveY = 0;
                minMoveZ = 0;
                maxMoveZ = 0;
                continuous = 0;
                speedZoomMaxSpeed = 1e+010;
                speedZoomMaxFOV = 0;
            };
            class TurretSpec
            {
                showHeadPhones = 0;
            };
            gunnerOpticsColor[] = {0,0,0,1};
            gunnerOpticsShowCursor = 0;
            gunnerOutOpticsModel = "";
            gunnerOutOpticsColor[] = {0,0,0,1};
            gunnerOpticsEffect[] = {};
            gunnerOutOpticsEffect[] = {};
            memoryPointGunnerOutOptics = "";
            gunnerOutOpticsShowCursor = 0;
            gunnerFireAlsoInInternalCamera = 1;
            gunnerOutFireAlsoInInternalCamera = 1;
            gunnerUsesPilotView = 0;
            viewGunnerShadow = 1;
            viewGunnerShadowDiff = 1;
            viewGunnerShadowAmb = 1;
            hideWeaponsGunner = 1;
            canHideGunner = -1;
            showHMD = 0;
            lockWhenDriverOut = 0;
            lockWhenVehicleSpeed = -1;
            gunnerCompartments = "Compartment1";
            LODTurnedIn = -1;
            LODTurnedOut = -1;
            memoryPointsGetInGunnerPrecise = "";
            armorLights = 0.4;
            class Reflectors
            {
            };
            aggregateReflectors[] = {};
            class GunFire
            {
                cloudletColor[] = {1,1,1,0};
                class Table
                {
                    class T0
                    {
                        color[] = {1,1,1,0};
                        maxT = 0;
                    };
                    class T1
                    {
                        color[] = {1,1,1,0};
                        maxT = 250;
                    };
                    class T2
                    {
                        color[] = {1,0.9,0.6,0};
                        maxT = 350;
                    };
                    class T3
                    {
                        color[] = {0.05,0.05,0.05,0};
                        maxT = 700;
                    };
                    class T4
                    {
                        color[] = {0,0,0,0};
                        maxT = 4200;
                    };
                    class T5
                    {
                        maxT = 1000;
                        color[] = {0.23,0.31,0.29,0};
                    };
                    class T6
                    {
                        maxT = 1500;
                        color[] = {0.21,0.29,0.27,0};
                    };
                    class T7
                    {
                        maxT = 2000;
                        color[] = {0.19,0.23,0.21,0};
                    };
                    class T8
                    {
                        maxT = 2300;
                        color[] = {0.22,0.19,0.1,0};
                    };
                    class T9
                    {
                        maxT = 2500;
                        color[] = {0.35,0.2,0.02,0};
                    };
                    class T10
                    {
                        maxT = 2600;
                        color[] = {0.62,0.29,0.03,0};
                    };
                    class T11
                    {
                        maxT = 2650;
                        color[] = {0.59,0.35,0.05,0};
                    };
                    class T12
                    {
                        maxT = 2700;
                        color[] = {0.75,0.37,0.03,0};
                    };
                    class T13
                    {
                        maxT = 2750;
                        color[] = {0.88,0.34,0.03,0};
                    };
                    class T14
                    {
                        maxT = 2800;
                        color[] = {0.91,0.5,0.17,0};
                    };
                    class T15
                    {
                        maxT = 2850;
                        color[] = {1,0.6,0.2,0};
                    };
                    class T16
                    {
                        maxT = 2900;
                        color[] = {1,0.71,0.3,0};
                    };
                    class T17
                    {
                        maxT = 2950;
                        color[] = {0.98,0.83,0.41,0};
                    };
                    class T18
                    {
                        maxT = 3000;
                        color[] = {0.98,0.91,0.54,0};
                    };
                    class T19
                    {
                        maxT = 3100;
                        color[] = {0.98,0.99,0.6,0};
                    };
                    class T20
                    {
                        maxT = 3300;
                        color[] = {0.96,0.99,0.72,0};
                    };
                    class T21
                    {
                        maxT = 3600;
                        color[] = {1,0.98,0.91,0};
                    };
                    class T22
                    {
                        maxT = 4200;
                        color[] = {1,1,1,0};
                    };
                };
                access = 0;
                cloudletDuration = 0.2;
                cloudletAnimPeriod = 1;
                cloudletSize = 1;
                cloudletAlpha = 0.6;
                cloudletGrowUp = 0;
                cloudletFadeIn = 0.01;
                cloudletFadeOut = 1;
                cloudletAccY = 0;
                cloudletMinYSpeed = -100;
                cloudletMaxYSpeed = 100;
                cloudletShape = "cloudletFire";
                interval = 0.01;
                size = 3;
                sourceSize = 0.5;
                timeToLive = 5;
                initT = 0;
                deltaT = 2250;
            };
            class GunClouds
            {
                cloudletColor[] = {0.8,0.8,0.8,0};
                class Table
                {
                    class T0
                    {
                        color[] = {0.8,0.8,0.8,0};
                        maxT = 0;
                    };
                };
                access = 0;
                cloudletDuration = 1;
                cloudletAnimPeriod = 1;
                cloudletSize = 1;
                cloudletAlpha = 0.1;
                cloudletGrowUp = 0.1;
                cloudletFadeIn = 0.1;
                cloudletFadeOut = 1;
                cloudletAccY = 0.05;
                cloudletMinYSpeed = 0.05;
                cloudletMaxYSpeed = 0.05;
                cloudletShape = "cloudletClouds";
                interval = 0.1;
                size = 1;
                sourceSize = 0;
                timeToLive = 1;
                initT = 0;
                deltaT = 0;
            };
            class MGunClouds
            {
                access = 0;
                cloudletColor[] = {1,1,1,0};
                class Table
                {
                    class T0
                    {
                        color[] = {1,1,1,0};
                        maxT = 0;
                    };
                };
                cloudletGrowUp = 0.05;
                cloudletFadeIn = 0;
                cloudletFadeOut = 0.1;
                cloudletDuration = 0.05;
                cloudletAnimPeriod = 1;
                cloudletSize = 1;
                cloudletAlpha = 0.3;
                cloudletAccY = 0;
                cloudletMinYSpeed = -100;
                cloudletMaxYSpeed = 100;
                cloudletShape = "cloudletClouds";
                timeToLive = 0;
                interval = 0.02;
                size = 0.3;
                sourceSize = 0.02;
                initT = 0;
                deltaT = 0;
            };
            class Turrets
            {
            };
            forceNVG = 0;
            isCopilot = 0;
            gunnerLeftLegAnimName = "";
            gunnerRightLegAnimName = "";
            gunnerDoor = "";
            preciseGetInOut = 0;
            turretFollowFreeLook = 0;
            allowTabLock = 0;
            dontCreateAI = 0;
            disableSoundAttenuation = 0;
            slingLoadOperator = 0;
            playerPosition = 0;
            allowLauncherIn = 0;
            allowLauncherOut = 0;
            class TurnIn
            {
                turnOffset = 0;
            };
            class TurnOut
            {
                turnOffset = 0;
            };
            gunnerInAction = "ManActTestDriver";
            gunnerAction = "ManActTestDriver";
            gunBeg = "usti hlavne";
            gunEnd = "konec hlavne";
            showCrewAim = 0;
            ace_fcs_Enabled = 0;
            ace_fcs_MinDistance = 200;
            ace_fcs_MaxDistance = 5500;
            ace_fcs_DistanceInterval = 5;
        };
    };
    animated = 1;
	class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"mainturret",
					0
				},
				
				{
					"maingun",
					0.25999999
				},
				
				{
					"hide_missilecover_01",
					1
				},
				
				{
					"hide_missilecover_02",
					1
				},
				
				{
					"hide_missilecover_03",
					1
				},
				
				{
					"hide_missilecover_04",
					1
				},
				
				{
					"hide_missilecover_05",
					1
				},
				
				{
					"hide_missilecover_06",
					1
				},
				
				{
					"hide_missilecover_07",
					1
				},
				
				{
					"hide_missilecover_08",
					1
				},
				
				{
					"hide_missilecover_09",
					1
				},
				
				{
					"hide_missilecover_10",
					1
				},
				
				{
					"hide_missilecover_11",
					1
				},
				
				{
					"hide_missilecover_12",
					1
				},
				
				{
					"hide_missilecover_13",
					1
				},
				
				{
					"hide_missilecover_14",
					1
				},
				
				{
					"hide_missilecover_15",
					1
				},
				
				{
					"hide_missilecover_16",
					1
				},
				
				{
					"hide_missilecover_17",
					1
				},
				
				{
					"hide_missilecover_18",
					1
				},
				
				{
					"hide_missilecover_19",
					1
				},
				
				{
					"hide_missilecover_20",
					1
				},
				
				{
					"hide_missilecover_21",
					1
				},
				
				{
					"damageturret",
					0
				},
				
				{
					"damage_hide_missilecover_01",
					0
				},
				
				{
					"damage_hide_missilecover_02",
					0
				},
				
				{
					"damage_hide_missilecover_03",
					0
				},
				
				{
					"damage_hide_missilecover_04",
					0
				},
				
				{
					"damage_hide_missilecover_05",
					0
				},
				
				{
					"damage_hide_missilecover_06",
					0
				},
				
				{
					"damage_hide_missilecover_07",
					0
				},
				
				{
					"damage_hide_missilecover_08",
					0
				},
				
				{
					"damage_hide_missilecover_09",
					0
				},
				
				{
					"damage_hide_missilecover_10",
					0
				},
				
				{
					"damage_hide_missilecover_11",
					0
				},
				
				{
					"damage_hide_missilecover_12",
					0
				},
				
				{
					"damage_hide_missilecover_13",
					0
				},
				
				{
					"damage_hide_missilecover_14",
					0
				},
				
				{
					"damage_hide_missilecover_15",
					0
				},
				
				{
					"damage_hide_missilecover_16",
					0
				},
				
				{
					"damage_hide_missilecover_17",
					0
				},
				
				{
					"damage_hide_missilecover_18",
					0
				},
				
				{
					"damage_hide_missilecover_19",
					0
				},
				
				{
					"damage_hide_missilecover_20",
					0
				},
				
				{
					"damage_hide_missilecover_21",
					0
				}
			};
			hide[]=
			{
				"zasleh",
				"light_back",
				"brzdove svetlo",
				"clan",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=1.755;
			verticalOffsetWorld=-0.001;
			init="''";
		};
		class AnimationSources
		{
			class Missiles_revolving
			{
				source = "revolving";
				weapon = "DBA_DADS5M_SAM";
			};
		};
	};
};