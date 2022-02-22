class CfgPatches 
{
	class DBA_AAT
	{
		requiredAddons[] = {
			"A3_Armor_F_Beta",
			"A3_Armor_F_EPB",
			"A3_Armor_F_EPC",
			"A3_Armor_F_Exp",
			"A3_Armor_F",
			"A3_Armor_F_Gamma"
			};
		units[] = {"O_DBA_CIS_King_AAT_F", "O_DBA_CIS_Recon_AAT_Tan_F", "O_DBA_CIS_Medium_AAT_Tropic_F", "O_DBA_CIS_Medium_AAT_Snow_F", "O_DBA_CIS_King_AAT_Red_F","O_DBA_CIS_AAT_IAV_F"};
		weapons[] = {};
	};
};
class DefaultEventHandlers;
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class Mode_SemiAuto;
class CfgVehicles
{
	class LandVehicle;
	class Tank : LandVehicle
	{
		class NewTurret;
		class Sounds;
		class HitPoints;
	};
	class Tank_F : Tank
	{
		class Turrets
		{
			class MainTurret : NewTurret
			{
				class ViewGunner;
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class HeadLimits;
		class HitPoints : HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
		class Sounds : Sounds
		{
			class Engine;
			class Movement;
		};
	};
	//----------AAT Base----------
	class DBA_AAT_base_F : Tank_F
	{
		#include "sounds.hpp"
		#include "physx.hpp"
		author = "Vulgar";
		armor = 500;
		ace_cookoff_probability = 0.5;
		destrType = "DestructWreck";
		armorStructural = 5;
		crewExplosionProtection = 0.99989998;
		damageResistance = 0.0054700002;
		cost = 2500000;
		crewVulnerable = 0;
		epeImpulseDamageCoef = 0.1;
		waterPPInVehicle = 0;
		wheelCircumference = 2.1500001;
		antiRollbarForceCoef = 45;
		antiRollbarForceLimit = 100;
		antiRollbarSpeedMin = 0;
		antiRollbarSpeedMax = 300;
		tracksSpeed = 1.4;
		model = "\3AS\3AS_AAT\model\3AS_AAT.p3d";
		picture = "\A3\armor_f_gamma\MBT_01\Data\UI\Slammer_M2A1_Base_ca.paa";
		Icon = "\A3\armor_f_gamma\MBT_01\Data\ui\map_slammer_mk4_ca.paa";
		memoryPointTaskMarker = "TaskMarker_1_pos";
		hideWeaponsDriver = 1;
		hideWeaponsCargo = 1;
		class Sounds {
		  class Idle_ext {
		   sound[] = {"3as\3as_saber\Sounds\tx130idle.wss", 4, 1, 200}; //0.794328
		   frequency = "0.95	+	((rpm/	2640) factor[(400/	2640),(900/	2640)])*0.15";
		   volume = "engineOn*camPos*(((rpm/	2640) factor[(100/	2640),(200/	2640)])	*	((rpm/	2640) factor[(900/	2640),(700/	2640)]))";
		  };
		  class Engine {
		   sound[] = {"3as\3as_saber\Sounds\tx130slow.wss", 4.48808, 1, 240}; //0.891251
		   frequency = "0.8	+	((rpm/	2640) factor[(700/	2640),(1100/	2640)])*0.2";
		   volume = "engineOn*camPos*(((rpm/	2640) factor[(705/	2640),(850/	2640)])	*	((rpm/	2640) factor[(1100 /	2640),(950/	2640)]))";
		  };
		  class Engine1_ext {
		   sound[] = {"3as\3as_saber\Sounds\tx130slow.wss", 5.65016, 1, 280}; //1.12202
		   frequency = "0.8	+	((rpm/	2640) factor[(950/	2640),(1400/	2640)])*0.2";
		   volume = "engineOn*camPos*(((rpm/	2640) factor[(900/	2640),(1050/	2640)])	*	((rpm/	2640) factor[(1400/	2640),(1200/	2640)]))";
		  };
		  class Engine2_ext {
		   sound[] = {"3as\3as_saber\Sounds\tx130move.wss", 6.3396, 1, 320}; //1.25893
		   frequency = "0.8	+	((rpm/	2640) factor[(1200/	2640),(1700/	2640)])*0.2";
		   volume = "engineOn*camPos*(((rpm/	2640) factor[(1170/	2640),(1380/	2640)])	*	((rpm/	2640) factor[(1700/	2640),(1500/	2640)]))";
		  };
		  class Engine3_ext {
		   sound[] = {"3as\3as_saber\Sounds\tx130move.wss", 7.11313, 1, 360}; //1.41254
		   frequency = "0.8	+	((rpm/	2640) factor[(1500/	2640),(2100/	2640)])*0.1";
		   volume = "engineOn*camPos*(((rpm/	2640) factor[(1500/	2640),(1670/	2640)])	*	((rpm/	2640) factor[(2100/	2640),(1800/	2640)]))";
		  };
		  class Engine4_ext {
		   sound[] = {"3as\3as_saber\Sounds\tx130move.wss", 7.98104, 1, 400}; //1.58489
		   frequency = "0.8	+	((rpm/	2640) factor[(1800/	2640),(2300/	2640)])*0.1";
		   volume = "engineOn*camPos*(((rpm/	2640) factor[(1780/	2640),(2060/	2640)])	*	((rpm/	2640) factor[(2450/	2640),(2200/	2640)]))";
		  };
		  class Engine5_ext {
		   sound[] = {"3as\3as_saber\Sounds\tx130move.wss", 8.95489, 1, 440}; //1.77828
		   frequency = "0.8	+	((rpm/	2640) factor[(2100/	2640),(2640/	2640)])*0.1";
		   volume = "engineOn*camPos*((rpm/	2640) factor[(2150/	2640),(2500/	2640)])";
		  };
		  class IdleThrust {
		   sound[] = {"3as\3as_saber\Sounds\tx130move.wss", 5.65016, 1, 200}; //1.12202
		   frequency = "0.8	+	((rpm/	2640) factor[(400/	2640),(900/	2640)])*0.15";
		   volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(100/	2640),(200/	2640)])	*	((rpm/	2640) factor[(900/	2640),(700/	2640)]))";
		  };
		  class EngineThrust {
		   sound[] = {"3as\3as_saber\Sounds\tx130move.wss", 7.11313, 1, 200}; //1.41254
		   frequency = "0.8	+	((rpm/	2640) factor[(700/	2640),(1100/	2640)])*0.2";
		   volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(705/	2640),(850/	2640)])	*	((rpm/	2640) factor[(1100 /	2640),(950/	2640)]))";
		  };
		  class Engine1_Thrust_ext {
		   sound[] = {"3as\3as_saber\Sounds\tx130move.wss", 8.95489, 1, 230}; //1.77828
		   frequency = "0.8	+	((rpm/	2640) factor[(950/	2640),(1400/	2640)])*0.2";
		   volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(900/	2640),(1050/	2640)])	*	((rpm/	2640) factor[(1400/	2640),(1200/	2640)]))";
		  };
		  class Engine2_Thrust_ext {
		   sound[] = {"3as\3as_saber\Sounds\tx130move.wss", 10.0475, 1, 290}; //1.99526
		   frequency = "0.8	+	((rpm/	2640) factor[(1200/	2640),(1700/	2640)])*0.2";
		   volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(1170/	2640),(1380/	2640)])	*	((rpm/	2640) factor[(1700/	2640),(1500/	2640)]))";
		  };
		  class Engine3_Thrust_ext {
		   sound[] = {"3as\3as_saber\Sounds\tx130move.wss", 8.95489, 1, 350}; //1.77828
		   frequency = "0.8	+	((rpm/	2640) factor[(1500/	2640),(2100/	2640)])*0.1";
		   volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(1500/	2640),(1670/	2640)])	*	((rpm/	2640) factor[(2100/	2640),(1800/	2640)]))";
		  };
		  class Engine4_Thrust_ext {
		   sound[] = {"3as\3as_saber\Sounds\tx130move.wss", 11.27353, 1, 400}; //2.23872
		   frequency = "0.8	+	((rpm/	2640) factor[(1800/	2640),(2300/	2640)])*0.1";
		   volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(1780/	2640),(2060/	2640)])	*	((rpm/	2640) factor[(2450/	2640),(2200/	2640)]))";
		  };
		  class Engine5_Thrust_ext {
		   sound[] = {"3as\3as_saber\Sounds\tx130move.wss", 12.64913, 1, 450}; //2.51189
		   frequency = "0.8	+	((rpm/	2640) factor[(2100/	2640),(2640/	2640)])*0.1";
		   volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2640) factor[(2150/	2640),(2500/	2640)])";
		  };
		  class Idle_int {
		   sound[] = {"3as\3as_saber\Sounds\tx130idle.wss", 2, 1}; //0.501187
		   frequency = "0.8	+	((rpm/	2640) factor[(400/	2640),(900/	2640)])*0.15";
		   volume = "engineOn*(1-camPos)*(((rpm/	2640) factor[(100/	2640),(200/	2640)])	*	((rpm/	2640) factor[(900/	2640),(700/	2640)]))";
		  };
		  class Engine_int {
		   sound[] = {"3as\3as_saber\Sounds\tx130move.wss", 1.41589, 1}; //0.354813
		   frequency = "0.8	+	((rpm/	2640) factor[(700/	2640),(1100/	2640)])*0.2";
		   volume = "engineOn*(1-camPos)*(((rpm/	2640) factor[(705/	2640),(850/	2640)])	*	((rpm/	2640) factor[(1100 /	2640),(950/	2640)]))";
		  };
		  class Engine1_int {
		   sound[] = {"3as\3as_saber\Sounds\tx130move.wss", 1.58866, 1}; //0.398107
		   frequency = "0.8	+	((rpm/	2640) factor[(950/	2640),(1400/	2640)])*0.2";
		   volume = "engineOn*(1-camPos)*(((rpm/	2640) factor[(900/	2640),(1050/	2640)])	*	((rpm/	2640) factor[(1400/	2640),(1200/	2640)]))";
		  };
		  class Engine2_int {
		   sound[] = {"3as\3as_saber\Sounds\tx130move.wss", 1.78250, 1}; //0.446684
		   frequency = "0.8	+	((rpm/	2640) factor[(1200/	2640),(1700/	2640)])*0.2";
		   volume = "engineOn*(1-camPos)*(((rpm/	2640) factor[(1170/	2640),(1380/	2640)])	*	((rpm/	2640) factor[(1700/	2640),(1500/	2640)]))";
		  };
		  class Engine3_int {
		   sound[] = {"3as\3as_saber\Sounds\tx130move.wss", 2, 1}; //0.501187
		   frequency = "0.8	+	((rpm/	2640) factor[(1500/	2640),(2100/	2640)])*0.1";
		   volume = "engineOn*(1-camPos)*(((rpm/	2640) factor[(1500/	2640),(1670/	2640)])	*	((rpm/	2640) factor[(2100/	2640),(1800/	2640)]))";
		  };
		  class Engine4_int {
		   sound[] = {"3as\3as_saber\Sounds\tx130move.wss", 2.24404, 1}; //0.562341
		   frequency = "0.8	+	((rpm/	2640) factor[(1800/	2640),(2300/	2640)])*0.1";
		   volume = "engineOn*(1-camPos)*(((rpm/	2640) factor[(1780/	2640),(2060/	2640)])	*	((rpm/	2640) factor[(2450/	2640),(2200/	2640)]))";
		  };
		  class Engine5_int {
		   sound[] = {"3as\3as_saber\Sounds\tx130move.wss", 2.51785, 1}; //0.630957
		   frequency = "0.8	+	((rpm/	2640) factor[(2100/	2640),(2640/	2640)])*0.1";
		   volume = "engineOn*(1-camPos)*((rpm/	2640) factor[(2150/	2640),(2500/	2640)])";
		  };
		  class IdleThrust_int {
		   sound[] = {"3as\3as_saber\Sounds\tx130move.wss", 2.51785, 1}; //0.630957
		   frequency = "0.8	+	((rpm/	2640) factor[(400/	2640),(900/	2640)])*0.15";
		   volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(100/	2640),(200/	2640)])	*	((rpm/	2640) factor[(900/	2640),(700/	2640)]))";
		  };
		  class EngineThrust_int {
		   sound[] = {"3as\3as_saber\Sounds\tx130move.wss", 1.58866, 1}; //0.398107
		   frequency = "0.8	+	((rpm/	2640) factor[(700/	2640),(1100/	2640)])*0.2";
		   volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(705/	2640),(850/	2640)])	*	((rpm/	2640) factor[(1100 /	2640),(950/	2640)]))";
		  };
		  class Engine1_Thrust_int {
		   sound[] = {"3as\3as_saber\Sounds\tx130move.wss", 1.78250, 1}; //0.446684
		   frequency = "0.8	+	((rpm/	2640) factor[(950/	2640),(1400/	2640)])*0.2";
		   volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(900/	2640),(1050/	2640)])	*	((rpm/	2640) factor[(1400/	2640),(1200/	2640)]))";
		  };
		  class Engine2_Thrust_int {
		   sound[] = {"3as\3as_saber\Sounds\tx130move.wss", 1.78250, 1}; //0.446684
		   frequency = "0.8	+	((rpm/	2640) factor[(1200/	2640),(1700/	2640)])*0.2";
		   volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(1170/	2640),(1380/	2640)])	*	((rpm/	2640) factor[(1700/	2640),(1500/	2640)]))";
		  };
		  class Engine3_Thrust_int {
		   sound[] = {"3as\3as_saber\Sounds\tx130move.wss", 2, 1}; //0.501187
		   frequency = "0.8	+	((rpm/	2640) factor[(1500/	2640),(2100/	2640)])*0.1";
		   volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(1500/	2640),(1670/	2640)])	*	((rpm/	2640) factor[(2100/	2640),(1800/	2640)]))";
		  };
		  class Engine4_Thrust_int {
		   sound[] = {"3as\3as_saber\Sounds\tx130move.wss", 2.24404, 1}; //0.562341
		   frequency = "0.8	+	((rpm/	2640) factor[(1800/	2640),(2300/	2640)])*0.1";
		   volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(1780/	2640),(2060/	2640)])	*	((rpm/	2640) factor[(2450/	2640),(2200/	2640)]))";
		  };
		  class Engine5_Thrust_int {
		   sound[] = {"3as\3as_saber\Sounds\tx130move.wss", 2.51785, 1}; //0.630957
		   frequency = "0.8	+	((rpm/	2640) factor[(2100/	2640),(2640/	2640)])*0.1";
		   volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2640) factor[(2150/	2640),(2500/	2640)])";
		  };
		  class NoiseInt {
		   sound[] = {"A3\sounds_f\vehicles\armor\noises\noise_tank_int_1", 0.501187, 1};
		   frequency = "1";
		   volume = "(1-camPos)*(angVelocity max 0.04)*(speed factor[4, 15])";
		  };
		  class NoiseExt {
		   sound[] = {"A3\sounds_f\vehicles\armor\noises\noise_tank_ext_1", 0.891251, 1, 50};
		   frequency = "1";
		   volume = "camPos*(angVelocity max 0.04)*(speed factor[4, 15])";
		  };
		  class ThreadsOutH0 {
		   sound[] = {"", 0.398107, 1, 140};
		   frequency = "1";
		   volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
		  };
		  class ThreadsOutH1 {
		   sound[] = {"", 0.446684, 1, 160};
		   frequency = "1";
		   volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-10) max 10)/	60),(((-15) max 15)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-30) max 30)/	60),(((-25) max 25)/	60)]))";
		  };
		  class ThreadsOutH2 {
		   sound[] = {"", 0.501187, 1, 180};
		   frequency = "1";
		   volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
		  };
		  class ThreadsOutH3 {
		   sound[] = {"", 0.562341, 1, 200};
		   frequency = "1";
		   volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
		  };
		  class ThreadsOutH4 {
		   sound[] = {"", 0.562341, 1, 220};
		   frequency = "1";
		   volume = "engineOn*camPos*(1-grass)*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
		  };
		  class ThreadsOutS0 {
		   sound[] = {"", 0.316228, 1, 120};
		   frequency = "1";
		   volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
		  };
		  class ThreadsOutS1 {
		   sound[] = {"", 0.354813, 1, 140};
		   frequency = "1";
		   volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-10) max 10)/	60),(((-15) max 15)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-30) max 30)/	60),(((-25) max 25)/	60)]))";
		  };
		  class ThreadsOutS2 {
		   sound[] = {"", 0.398107, 1, 160};
		   frequency = "1";
		   volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
		  };
		  class ThreadsOutS3 {
		   sound[] = {"", 0.446684, 1, 180};
		   frequency = "1";
		   volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
		  };
		  class ThreadsOutS4 {
		   sound[] = {"", 0.501187, 1, 200};
		   frequency = "1";
		   volume = "engineOn*(camPos)*(grass)*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
		  };
		  class ThreadsInH0 {
		   sound[] = {"", 0.251189, 1};
		   frequency = "1";
		   volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
		  };
		  class ThreadsInH1 {
		   sound[] = {"", 0.281838, 1};
		   frequency = "1";
		   volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-10) max 10)/	60),(((-15) max 15)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-30) max 30)/	60),(((-25) max 25)/	60)]))";
		  };
		  class ThreadsInH2 {
		   sound[] = {"", 0.316228, 1};
		   frequency = "1";
		   volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
		  };
		  class ThreadsInH3 {
		   sound[] = {"", 0.354813, 1};
		   frequency = "1";
		   volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
		  };
		  class ThreadsInH4 {
		   sound[] = {"", 0.398107, 1};
		   frequency = "1";
		   volume = "engineOn*(1-camPos)*(1-grass)*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
		  };
		  class ThreadsInS0 {
		   sound[] = {"", 0.316228, 1};
		   frequency = "1";
		   volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
		  };
		  class ThreadsInS1 {
		   sound[] = {"", 0.316228, 1};
		   frequency = "1";
		   volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-10) max 10)/	60),(((-15) max 15)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-30) max 30)/	60),(((-25) max 25)/	60)]))";
		  };
		  class ThreadsInS2 {
		   sound[] = {"", 0.354813, 1};
		   frequency = "1";
		   volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
		  };
		  class ThreadsInS3 {
		   sound[] = {"", 0.354813, 1};
		   frequency = "1";
		   volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
		  };
		  class ThreadsInS4 {
		   sound[] = {"", 0.398107, 1};
		   frequency = "1";
		   volume = "engineOn*(1-camPos)*grass*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
		  };
		};
		class HitPoints : HitPoints //Handles Module Damage + Internal Component Damage
		{
			class HitHull : HitHull
			{
            armor = 4.5;
            material = -1;
            name = "telo";
            visual = "zbytek";
            passThrough = 1;
            minimalHit = 0.2;
            explosionShielding = 0.2;
            radius = 0.12;
			};
			class HitFuel : HitFuel
			{
            armor = 1.5;
            material = -1;
            name = "palivo";
            passThrough = 0.1;
            minimalHit = 0.1;
            explosionShielding = 0.6;
            radius = 0.25;
            visual = "motor";
			};
			class HitEngine : HitEngine
			{
            armor = 0.75;
            material = -1;
            name = "motor";
            passThrough = 0.2;
            minimalHit = 0.24;
            explosionShielding = 0.2;
            radius = 0.33;
            visual = "motor";
			};
			class HitLTrack : HitLTrack
			{
            armor = 4.5;
            material = -1;
            name = "track_l_hit";
            passThrough = 0;
            minimalHit = 0.08;
            explosionShielding = 0.01;
            radius = 0.3;
            visual = "pas_L";
			};
			class HitRTrack : HitRTrack
			{
            armor = 4.5;
            material = -1;
            name = "track_r_hit";
            passThrough = 0;
            minimalHit = 0.08;
            explosionShielding = 0.01;
            radius = 0.3;
            visual = "pas_P";
			};
		};
		animationSourceHatch = "";
		class Exhausts
		{
			class Exhaust_1
			{
				position = "Exhaust_1_pos";
				direction = "Exhaust_1_dir";
				effect = "ExhaustsEffectHeliBig";
			};
			class Exhaust_2
			{
				position = "Exhaust_2_pos";
				direction = "Exhaust_2_dir";
				effect = "ExhaustsEffectHeliBig";
			};
		};
		insideSoundCoef = 0.89999998;
		threat[] = {0.80000001,1,0.30000001};
		class RenderTargets
		{
			class commander_display
			{
				renderTarget = "rendertarget0";
				class CameraView1
				{
					pointPosition = "commanderview";
					pointDirection = "commanderview_dir";
					renderVisionMode = 0;
					renderQuality = 2;
					fov = 0.305731;
					turret[] = {0,0};
				};
				BBoxes[] =
				{
					"PIP_COM_TL",
					"PIP_COM_TR",
					"PIP_COM_BL",
					"PIP_COM_BR"
				};
			};
			class driver_display
			{
				renderTarget = "rendertarget1";
				class CameraView1
				{
					pointPosition = "PIP0_pos";
					pointDirection = "PIP0_dir";
					renderVisionMode = 0;
					renderQuality = 2;
					fov = 0.80000001;
					turret[] = {-1};
				};
				BBoxes[] =
				{
					"PIP_DRV_TL",
					"PIP_DRV_TR",
					"PIP_DRV_BL",
					"PIP_DRV_BR"
				};
			};
		};
		class compartmentsLights
		{
			class Comp1
			{
				class Light1
				{
					color[] = {13,20,20};
					ambient[] = {0,0,0};
					intensity = 2;
					size = 0;
					useFlare = 0;
					flareSize = 0;
					flareMaxDistance = 0;
					dayLight = 0;
					blinking = 0;
					class Attenuation
					{
						start = 0;
						constant = 0;
						linear = 1;
						quadratic = 70;
						hardLimitStart = 0.15000001;
						hardLimitEnd = 1.15;
					};
					point = "light_interior1";
				};
				class Light2 : Light1
				{
					point = "light_interior2";
					color[] = {13,20,20};
					ambient[] = {0,0,0};
					intensity = 1.5;
				};
				class Light3 : Light1
				{
					point = "light_interior3";
					color[] = {13,20,20};
					ambient[] = {0,0,0};
					intensity = 1.5;
				};
				class Light4 : Light1
				{
					point = "light_interior4";
					color[] = {13,20,20};
					ambient[] = {0,0,0};
					intensity = 0.69999999;
				};
				class Light5 : Light1
				{
					point = "light_interior5";
					color[] = {18,20,20};
					ambient[] = {0,0,0};
					intensity = 0.2;
					size = 0;
				};
				class Light6 : Light1
				{
					point = "light_interior6";
					color[] = {18,20,20};
					ambient[] = {0,0,0};
					intensity = 3;
					size = 0;
				};
				class Light7 : Light1
				{
					point = "light_interior7";
					color[] = {18,20,20};
					ambient[] = {0,0,0};
					intensity = 4;
					size = 0;
				};
				class Light8 : Light1
				{
					point = "light_interior8";
					color[] = {18,20,20};
					ambient[] = {0,0,0};
					intensity = 4;
					size = 0;
				};
			};
		};
		class Reflectors
		{
			class Left
			{
				color[] = {1900,1800,1700};
				ambient[] = {5,5,5};
				position = "Light_L";
				direction = "Light_L_end";
				hitpoint = "Light_L";
				selection = "Light_L";
				size = 1;
				innerAngle = 100;
				outerAngle = 179;
				coneFadeCoef = 10;
				intensity = 1;
				useFlare = 0;
				dayLight = 0;
				flareSize = 1;
				class Attenuation
				{
					start = 1;
					constant = 0;
					linear = 0;
					quadratic = 0.25;
					hardLimitStart = 30;
					hardLimitEnd = 60;
				};
			};
			class Right : Left
			{
				position = "Light_R";
				direction = "Light_R_end";
				hitpoint = "Light_R";
				selection = "Light_R";
			};
			class Right2 : Right
			{
				position = "light_R_flare";
				hitpoint = "Light_R_flare";
				useFlare = 1;
			};
			class Left2 : Left
			{
				position = "light_L_flare";
				hitpoint = "Light_L_flare";
				useFlare = 1;
			};
		};
		aggregateReflectors[] =
		{
			{
				"Left",
				"Right",
				"Left2",
				"Right2"
			}
		};
		soundLocked[] =
		{
			"\A3\Sounds_F\weapons\Rockets\opfor_lock_1",
			1,
			1
		};
		soundIncommingMissile[] =
		{
			"\A3\Sounds_F\vehicles\air\noises\alarm_locked_by_missile_1",
			0.31622776,
			1
		};
		smokeLauncherGrenadeCount = 8;
		smokeLauncherVelocity = 14;
		smokeLauncherOnTurret = 1;
		smokeLauncherAngle = 120;
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				class Turrets : Turrets
				{
					class CommanderOptics : CommanderOptics
					{
						body = "Obsturret";
						gun = "Obsgun";
						proxyIndex = 1;
						viewGunnerInExternal = 0;
						proxytype = "CPCommander";
						gunnername = "Commander";
						animationSourceBody = "Obsturret";
						animationSourceGun = "Obsgun";
						minOutElev = -25;
						maxOutElev = 45;
						initOutElev = 0;
						minOutTurn = -90;
						maxOutTurn = 90;
						initOutTurn = 0;
						maxHorizontalRotSpeed = 1.8;	// 1 = 45°/sec
						maxVerticalRotSpeed = 1.8;		// 1 = 45°/sec
						stabilizedInAxes = 3;
						soundServo[] = {"A3\Sounds_F\vehicles\armor\noises\servo_best", db - 40, 1.0,50};
						minElev = -10;
						maxElev = +20;
						initElev = 0;
						minTurn = -15;
						maxTurn = +15;
						initTurn = 0;
						gunnerAction = "";
						gunnerInAction = mbt2_slot2b_in;
						forceHideGunner = 0;
						outGunnerMayFire = 1;
						inGunnerMayFire = 1;
						gunnerRightHandAnimName = "konec hlavne3";
						gunnerLeftHandAnimName = "konec hlavne3";
						soundAttenuationTurret = "HeliAttenuationGunner";
						isPersonTurret = 1;
						personTurretAction = "vehicle_turnout_1";
						memoryPointGun[] = {"z_gunL_muzzle","z_gunR_muzzle"};
						weapons[] = {"3AS_AAT_Repeater", "SmokeLauncher"};
						magazines[] = {"3AS_500Rnd_ATT_RedPlasma","3AS_500Rnd_ATT_RedPlasma","3AS_500Rnd_ATT_RedPlasma","3AS_500Rnd_ATT_RedPlasma","3AS_500Rnd_ATT_RedPlasma","3AS_500Rnd_ATT_RedPlasma","3AS_500Rnd_ATT_RedPlasma","3AS_500Rnd_ATT_RedPlasma","3AS_500Rnd_ATT_RedPlasma","3AS_500Rnd_ATT_RedPlasma","SmokeLauncherMag"};
						turretInfoType = "RscWeaponRangeZeroing";
						discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
						discreteDistanceInitIndex = 2;
						memoryPointGunnerOptics = "CommanderView";
						memoryPointGunnerOutOptics = "commanderview";
						gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Commander_02_F";
						gunnerOutOpticsModel = "";
						gunnerOpticsEffect[] = {};
						gunnerHasFlares = 1;
						turretFollowFreeLook = 1;
						commanding = 1;
						class ViewOptics : ViewOptics
						{
							initAngleX = 0;
							minAngleX = -15;
							maxAngleX = 15;
							initAngleY = 0;
							minAngleY = -10;
							maxAngleY = 60;
							initFov = 0.155;
							minFov = 0.034;
							maxFov = 0.155;
							visionMode[] = {"Normal","NVG","Ti"};
							thermalMode[] = {2,3,4};
						};
						gunnerGetInAction = "GetInHigh";
						gunnerGetOutAction = "GetOutHigh";
						startEngine = 0;
						LODTurnedOut = "VIEW_GUNNER";
						LODTurnedIn = "VIEW_GUNNER";
						class HitPoints
						{
							class HitTurret
							{
								armor = 0.6;
								material = -1;
								name = "Commander_Turret";
								visual = "commander_turret";
								passThrough = 0;
								minimalHit = 0.03;
								explosionShielding = 0.6;
								radius = 0.15;
							};
							class HitGun
							{
								armor = 0.6;
								material = -1;
								name = "Commander_Gun";
								visual = "Commander_Gun";
								passThrough = 0;
								minimalHit = 0.03;
								explosionShielding = 0.6;
								radius = 0.15;
							};
						};
						selectionFireAnim = "zasleh3";
					};
				};
				memoryPointGun = "usti hlavne";
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				weapons[] = {"3AS_AATCannon","SmokeLauncher"};
				magazines[] = {"3as_24Rnd_AAT_AP","3as_24Rnd_AAT_AP","SmokeLauncherMag"};
				turretInfoType = "RscWeaponRangeZeroing";
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
				selectionFireAnim = "zasleh";
				animationSourceBody = "Mainturret";
				animationSourceGun = "MainGun";
				body = "Mainturret";
				gun = "MainGun";
				discreteDistanceInitIndex = 5;
				memoryPointGunnerOptics = "gunnerview";
				gunnerOutOpticsModel = "";
				gunnerOutOpticsEffect[] = {};
				gunnerOpticsEffect[] = {};
				gunnerForceOptics = 1;
				visionMode[] = {"Normal"};
				thermalMode[] = {};
				class OpticsIn
				{
					class Wide
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.155;
						minFov = 0.155;
						maxFov = 0.155;
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {0,1};
						gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Commander_02_F";
						gunnerOpticsEffect[] = {};
					};
					class Narrow : Wide
					{
						gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Commander_02_F";
						initFov = 0.047;
						minFov = 0.047;
						maxFov = 0.047;
					};
				};
				gunnerAction = "mbt2_slot2b_in";
				forceHideGunner = 1;
				outGunnerMayFire = 1;
				gunnerInAction = "mbt2_slot2b_in";
				gunnerRightHandAnimName = "";
				gunnerLeftHandAnimName = "";
				gunnerFireAlsoInInternalCamera = 1;
				gunnerOutFireAlsoInInternalCamera = 1;
				proxyIndex = 1;
				viewGunnerInExternal = 0;
				gunnerName = "Gunner";
				proxytype = "CPGunner";
				isPersonTurret = 0;
				personTurretAction = "vehicle_turnout_1";
				minOutElev = -10;
				maxOutElev = 15;
				initOutElev = 0;
				minOutTurn = -90;
				maxOutTurn = 90;
				initOutTurn = 0;
				soundServo[] = {"A3\Sounds_F\vehicles\armor\noises\servo_best", db - 40, 1.0,50};
				minElev = -9;
				maxElev = +20;
				initElev = 0;
				inGunnerMayFire = 1;
				class HitPoints
				{
					class HitTurret
					{
						armor = 0.9;
						material = -1;
						name = "otocvez";
						visual = "vez";
						passThrough = 0;
						minimalHit = 0.3333333;
						explosionShielding = 0.15;
						radius = 0.15;
					};
					class HitGun
					{
						armor = 0.9;
						material = -1;
						name = "otocvez";
						visual = "";
						passThrough = 0;
						minimalHit = 0.333333;
						explosionShielding = 0.01;
						radius = 0.15;
					};
				};
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] =
			{
				"3as\3as_aat\data\aat.rvmat",
				"3as\3as_aat\data\aat.rvmat",
				"A3\armor_f_gamma\MBT_01\Data\MBT_01_body_destruct.rvmat",
			};
		};
		class AnimationSources //:AnimationSources
		{
			class muzzle_rot_cannon
			{
				source = "ammorandom";
				weapon = "3AS_AAT_Repeater";
			};
			class recoil_source
			{
				source = "reload";
				weapon = "3AS_AATCannon";
			};
			class muzzle_rot_coax
			{
				source = "ammorandom";
				weapon = "3AS_AAT_Repeater";
			};
		};
		animationList[] =
		{
			"showCamonetCannon",
			0,
			"showCamonetPlates1",
			0,
			"showCamonetPlates2",
			0,
			"showCamonetTurret",
			0,
			"showCamonetHull",
			0
		};
	};
	//----------Faction Base----------
	class DBA_CIS_AAT_base_F : DBA_AAT_base_F
	{
		author = "$STR_3as_Studio";
		_generalMacro = "DBA_CIS_AAT_base_F";
		features = "Randomization: No						<br />Camo selections: 2 - hull, main turret						<br />Script door sources: None						<br />Script animations: None						<br />Executed scripts: None						<br />Firing from vehicles: No						<br />Slingload: No						<br />Cargo proxy indexes: 1 to 6";
		crew = "O_DBA_CIS_B1_Crew_Droid_F";
		side = 0;
		faction = "O_DBA_CIS_F";
	};
	//----------Faction Vehicles----------
	class DBA_CIS_AAT_F : DBA_CIS_AAT_base_F //scope=0
	{
		author = "Vulgar";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_MBT_01_cannon_F.jpg";
		scope = 0;
		driverAction = "driver_apcwheeled2_out";
		driverInAction = "driver_apcwheeled2_in";
		viewDriverInExternal = 0;
		forcehideDriver = true;
		displayName = "[DBA] AAT";
		hiddenSelections[] =
		{
			"Camo1"
		};
		hiddenSelectionsTextures[] =
		{
			"3AS\3AS_AAT\data\CIS_AAT_CO.paa"
		};
		class TextureSources
		{
			class Tan
			{
				displayName = "Trade Federation";
				author = "3AS Mod Team";
				textures[] = {"3AS\3AS_AAT\data\Tan_AAT_CO.paa"};
				factions[] = {"O_DBA_CIS_F"};
			};
			class CIS
			{
				displayName = "CIS";
				author = "3AS Mod Team";
				textures[] = {"3AS\3AS_AAT\data\CIS_AAT_CO.paa"};
				factions[] = {"O_DBA_CIS_F"};
			};
			class Green
			{
				displayName = "Green";
				author = "3AS Mod Team";
				textures[] = {"3AS\3AS_AAT\data\Green_AAT_CO.paa"};
				factions[] = {"O_DBA_CIS_F"};
			};
			class Red
			{
				displayName = "Red";
				author = "3AS Mod Team";
				textures[] = {"3AS\3AS_AAT\data\Red_AAT_CO.paa"};
				factions[] = {"O_DBA_CIS_F"};
			};
		};
	};
	class O_DBA_CIS_King_AAT_F : DBA_CIS_AAT_F{
		scope = 2;
		scopeCurator = 2;
		displayName = "[DBA] King AAT";
		forceingarage = 1;
		armor = 1150;
		armorStructural = 9;
		enginePower = 985;
		maxOmega = 314.159265;
		maxSpeed = 48;
		peakTorque = 2850;
		torqueCurve[] =
		{
			{0, 0},
			{0.163077, 0.277015},
			{0.231154, 0.614065},
			{0.306154, 0.932247},
			{0.358846, 0.975},
			{0.615000, 1},
			{0.973846, 0.895026},
			{1.281920, 0.827273}
		};
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				class Turrets : Turrets
				{
					class CommanderOptics : CommanderOptics
					{
						weapons[] =
						{
						"DBA_G13_Coaxial",
						"SmokeLauncher"
						};
						magazines[] =
						{
						"DBA_792_M5A_x400_mag",
						"DBA_792_M5A_x400_mag",
						"SmokeLauncherMag"
						};
					};
				};
				weapons[] =
				{
					"DBA_130mw_HH30_Cannon"
				};
				magazines[] =
				{
					"DBA_130mm_R13_AP_x15_mag",
					"DBA_130mm_UR11_HE_x20_mag"
				};
				maxHorizontalRotSpeed = 0.4444444444;
				maxVerticalRotSpeed = 0.6667;
			};
		};
		thrustDelay = 0.5;
		clutchStrength = 115;
		brakeIdleSpeed = 5;
		latency = 0.1;
		tankTurnForce = 475000;
		idleRpm = 600;
		redRpm = 3000;
		engineLosses = 20;
		epeImpulseDamageCoef = 0.15;
		displayname = "[DBA] King AAT";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"3AS\3AS_AAT\data\CIS_AAT_CO.paa"};
		editorPreview = "\3as\3as_AAT\images\3AS_AAT.jpg";
		class TextureSources
		{
			class Tan
			{
				displayName = "Trade Federation";
				author = "3AS Mod Team";
				textures[] = {"3AS\3AS_AAT\data\Tan_AAT_CO.paa"};
				factions[] = {"3AS_CIS"};
			};
			class CIS
			{
				displayName = "CIS";
				author = "3AS Mod Team";
				textures[] = {"3AS\3AS_AAT\data\CIS_AAT_CO.paa"};
				factions[] = {"3AS_CIS"};
			};
			class Green
			{
				displayName = "Green";
				author = "3AS Mod Team";
				textures[] = {"3AS\3AS_AAT\data\Green_AAT_CO.paa"};
				factions[] = {"3AS_CIS"};
			};
			class Red
			{
				displayName = "Red";
				author = "3AS Mod Team";
				textures[] = {"3AS\3AS_AAT\data\Red_AAT_CO.paa"};
				factions[] = {"3AS_CIS"};
			};
		};
		accuracy = 1000;
	};
	class O_DBA_CIS_Recon_AAT_Tan_F : DBA_CIS_AAT_F{
		scope = 2;
		scopeCurator = 2;
		forceingarage = 1;
		armor = 500;
		armorStructural = 7;
		displayname = "[DBA] Recon AAT";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = { "3AS\3AS_AAT\data\Tan_AAT_CO.paa" };
		editorPreview = "\3as\3as_AAT\images\3AS_AAT.jpg";
		accuracy = 1000;
		enginePower = 1500;
		maxOmega = 592;
		maxSpeed = 80;
		peakTorque = 4870.024;
		thrustDelay = 0.5;
		clutchStrength = 175;
		brakeIdleSpeed = 1.78;
		latency = 0.1;
		tankTurnForce = 650000;
		idleRpm = 2200;
		redRpm = 5652;
		engineLosses = 5;
		epeImpulseDamageCoef = 0.15;
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				class Turrets : Turrets
				{
					class CommanderOptics : CommanderOptics
					{
						weapons[] =
						{
						"DBA_G13_Coaxial",
						"SmokeLauncher"
						};
						magazines[] =
						{
						"DBA_792_M5A_x400_mag",
						"DBA_792_M5A_x400_mag",
						"SmokeLauncherMag"
						};
					};
				};
				weapons[] =
				{
					"DBA_57mw_Cannon"
				};
				magazines[] =
				{
					"DBA_57mm_hef_x6_mag",
					"DBA_57mm_hef_x6_mag",
					"DBA_57mm_hef_x6_mag",
					"DBA_57mm_hef_x6_mag",
					"DBA_57mm_hef_x6_mag",
					"DBA_57mm_hef_x6_mag",
					"DBA_57mm_hef_x6_mag",
					"DBA_57mm_hef_x6_mag",
					"DBA_57mm_hef_x6_mag",
					"DBA_57mm_hef_x6_mag",
					"DBA_57mm_ap_x6_mag",
					"DBA_57mm_ap_x6_mag",
					"DBA_57mm_ap_x6_mag",
					"DBA_57mm_ap_x6_mag",
					"DBA_57mm_ap_x6_mag",
					"DBA_57mm_ap_x6_mag",
					"DBA_57mm_ap_x6_mag"
				};
				maxHorizontalRotSpeed = 0.8;
				maxVerticalRotSpeed = 0.6667;
			};
		};

	};
	class O_DBA_CIS_Medium_AAT_Tropic_F : DBA_CIS_AAT_F
	{
		scope = 2;
		scopeCurator = 2;
		forceingarage = 1;
		displayname = "[DBA] Medium AAT (Tropic)";
		armor = 800;
		armorStructural = 8;
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"3AS\3AS_AAT\data\CIS_AAT_CO.paa"};
		editorPreview = "\3as\3as_AAT\images\3AS_AAT.jpg";
		enginePower = 522;
		maxOmega = 314;
		maxSpeed = 55;
		peakTorque = 2550;
		torqueCurve[] =
		{
			{0, 0},
			{0.163077, 0.277015},
			{0.231154, 0.614065},
			{0.306154, 0.932247},
			{0.358846, 0.975},
			{0.615000, 1},
			{0.973846, 0.895026},
			{1.281920, 0.827273}
		};
		thrustDelay = 0.5;
		clutchStrength = 150;
		brakeIdleSpeed = 1.78;
		latency = 0.1;
		tankTurnForce = 600000;
		idleRpm = 600;
		redRpm = 3000;
		engineLosses = 5;
		epeImpulseDamageCoef = 0.15;
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				class Turrets : Turrets
				{
					class CommanderOptics : CommanderOptics
					{
						weapons[] =
						{
						"DBA_G13_Coaxial",
						"SmokeLauncher"
						};
						magazines[] =
						{
						"DBA_792_M5A_x400_mag",
						"DBA_792_M5A_x400_mag",
						"DBA_792_M5A_x400_mag",
						"SmokeLauncherMag"
						};
					};
				};
				weapons[] =
				{
					"DBA_115mw_B5TC_Cannon"
				};
				magazines[] =
				{
					"DBA_115mm_B3M_AP_x8_mag",
					"DBA_115mm_KB4_HEAT_x10_mag",
					"DBA_115mm_UB11_HEF_x20_mag"
				};
				maxHorizontalRotSpeed = 0.8;
				maxVerticalRotSpeed = 0.6667;
			};
		};
	};
	class O_DBA_CIS_AAT_IAV_F : DBA_CIS_AAT_F {
		displayName="[DBA] IAV AAT (Red)";
		hiddenSelectionsTextures[] = {"3AS\3AS_AAT\data\Red_AAT_CO.paa"};
		armor=500;
		ejectDamageLimit = 0.95;
		armorStructural=15;
		side=0;
		scope = 2;
		scopeCurator = 2;
		forceingarage = 1;
		faction="O_DBA_CIS_F";
		editorPreview="101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_AAT_F.jpg";
		enginePower=1500;
		maxOmega=592;
		maxSpeed=70;
		peakTorque=4870.024;
		thrustDelay=0.5;
		clutchStrength=175;
		brakeIdleSpeed=1.78;
		latency=0.1;
		tankTurnForce=650000;
		idleRpm=2200;
		redRpm=5652;
		engineLosses=5;
		epeImpulseDamageCoef=0.15;
		class HitPoints
		{
			class HitHull
			{
            armor = 4.5;
            material = -1;
            name = "telo";
            visual = "zbytek";
            passThrough = 1;
            minimalHit = 0.2;
            explosionShielding = 0.2;
            radius = 0.12;
			};
			class HitFuel
			{
            armor = 1.5;
            material = -1;
            name = "palivo";
            passThrough = 0.1;
            minimalHit = 0.1;
            explosionShielding = 0.6;
            radius = 0.25;
            visual = "motor";
			};
			class HitEngine
			{
            armor = 0.75;
            material = -1;
            name = "motor";
            passThrough = 0.2;
            minimalHit = 0.24;
            explosionShielding = 0.2;
            radius = 0.33;
            visual = "motor";
			};
			class HitLTrack
			{
            armor = 4.5;
            material = -1;
            name = "track_l_hit";
            passThrough = 0;
            minimalHit = 0.08;
            explosionShielding = 0.01;
            radius = 0.3;
            visual = "pas_L";
			};
			class HitRTrack
			{
            armor = 4.5;
            material = -1;
            name = "track_r_hit";
            passThrough = 0;
            minimalHit = 0.08;
            explosionShielding = 0.01;
            radius = 0.3;
            visual = "pas_P";
			};
		};
		class Turrets : Turrets
        {
            class MainTurret : MainTurret
            {				
				class Turrets : Turrets
				{
					class CommanderOptics : CommanderOptics
					{
						weapons[]=
						{
						"DBA_UKAS_MG",
						"SmokeLauncher"
						};
						magazines[]=
						{
						"DBA_762_REC_x2600_mag",
						"DBA_762_REC_x2600_mag",
						"SmokeLauncherMag"
						};
						startEngine = false;
						stabilizedInAxes = 3;
					};
				};
				weapons[] =
				{
					"DBA_88mw_B18S_Cannon"
				};
				magazines[] =
				{
					"DBA_88mm_CR13_x20_mag",
					"DBA_88mm_CR13_x20_mag",
					"DBA_88mm_CR13_x20_mag",
					"DBA_88mm_CR13_x20_mag",
				};
				startEngine = false;
				stabilizedInAxes = 3;
				maxHorizontalRotSpeed=1.4444444444;
				maxVerticalRotSpeed=0.6667;
				class HitPoints
				{
                class HitTurret
                {
                    armor = 0.9;
                    material = -1;
                    name = "otocvez";
                    visual = "vez";
                    passThrough = 0;
                    minimalHit = 0.3333333;
                    explosionShielding = 0.15;
                    radius = 0.15;
                };
                class HitGun
                {
                    armor = 0.9;
                    material = -1;
                    name = "otocvez";
                    visual = "";
                    passThrough = 0;
                    minimalHit = 0.333333;
                    explosionShielding = 0.01;
                    radius = 0.15;
                };
				};
            };
        };
	};
	// Varients
	class O_DBA_CIS_Medium_AAT_Snow_F : O_DBA_CIS_Medium_AAT_Tropic_F
	{
		displayname = "[DBA] Medium AAT (Snow)";
		hiddenSelections[] = { "camo1" };
		editorPreview = "\3as\3as_AAT\images\3AS_AAT.jpg";
		hiddenSelectionsTextures[] = { "3AS\3AS_AAT\data\AAT_Color_Snow.paa" };
	};
	class O_DBA_CIS_King_AAT_Red_F : O_DBA_CIS_King_AAT_F
	{
		displayname = "[DBA] King AAT (Red)";
		hiddenSelections[] = {"camo1"};
		editorPreview = "\3as\3as_AAT\images\3AS_AAT.jpg";
		hiddenSelectionsTextures[] = { "3AS\3AS_AAT\data\Red_AAT_CO.paa" };

	};
};