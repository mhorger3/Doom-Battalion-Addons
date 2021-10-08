		attenuationEffectType = "TankAttenuation";

		soundGetIn[] = {"A3\sounds_f\vehicles\armor\noises\get_in_out", 0.562341, 1};
		soundGetOut[] = {"A3\sounds_f\vehicles\armor\noises\get_in_out", 0.562341, 1, 20};
		soundDammage[] = {"", 0.562341, 1};
		soundEngineOnInt[] = {"3as\3as_gat\sounds\GATStart.wss", 2, 1}; //0.630957
		soundEngineOnExt[] = {"3as\3as_gat\sounds\GATStart.wss", 4, 1, 200}; //0.794328
		soundEngineOffInt[] = {"3as\3as_gat\sounds\GATOff.wss", 2, 1}; //0.630957
		soundEngineOffExt[] = {"3as\3as_gat\sounds\GATOff.wss", 4, 1, 200}; //0.794328
		
		////////CRASHES START////////
		
		buildCrash0[] = {"A3\sounds_f\Vehicles\crashes\crash_08", 1, 1, 200};
		buildCrash1[] = {"A3\sounds_f\Vehicles\crashes\crash_09", 1, 1, 200};
		buildCrash2[] = {"A3\sounds_f\Vehicles\crashes\crash_10", 1, 1, 200};
		buildCrash3[] = {"A3\sounds_f\Vehicles\crashes\crash_11", 1, 1, 200};
		soundBuildingCrash[] = {"buildCrash0", 0.25, "buildCrash1", 0.25, "buildCrash2", 0.25, "buildCrash3", 0.25};

		WoodCrash0[] = {"A3\sounds_f\Vehicles\crashes\crash_08", 1, 1, 200};
		WoodCrash1[] = {"A3\sounds_f\Vehicles\crashes\crash_09", 1, 1, 200};
		WoodCrash2[] = {"A3\sounds_f\Vehicles\crashes\crash_10", 1, 1, 200};
		WoodCrash3[] = {"A3\sounds_f\Vehicles\crashes\crash_11", 1, 1, 200};
		WoodCrash4[] = {"A3\sounds_f\Vehicles\crashes\crash_01", 1, 1, 200};
		WoodCrash5[] = {"A3\sounds_f\Vehicles\crashes\crash_08", 1, 1, 200};
		soundWoodCrash[] = {"woodCrash0", 0.166, "woodCrash1", 0.166, "woodCrash2", 0.166, "woodCrash3", 0.166, "woodCrash4", 0.166, "woodCrash5", 0.166};

		ArmorCrash0[] = {"A3\sounds_f\Vehicles\crashes\crash_08", 1, 1, 200};
		ArmorCrash1[] = {"A3\sounds_f\Vehicles\crashes\crash_09", 1, 1, 200};
		ArmorCrash2[] = {"A3\sounds_f\Vehicles\crashes\crash_10", 1, 1, 200};
		ArmorCrash3[] = {"A3\sounds_f\Vehicles\crashes\crash_11", 1, 1, 200};
		soundArmorCrash[] = {"ArmorCrash0", 0.25, "ArmorCrash1", 0.25, "ArmorCrash2", 0.25, "ArmorCrash3", 0.25};

		/* ---- CRASHES  END ---- */

		class Sounds {
		  class Idle_ext {
		   sound[] = {"3as\3as_gat\sounds\GATIdle.wss", 4, 1, 200}; //0.794328
		   frequency = "0.95	+	((rpm/	2640) factor[(400/	2640),(900/	2640)])*0.15";
		   volume = "engineOn*camPos*(((rpm/	2640) factor[(100/	2640),(200/	2640)])	*	((rpm/	2640) factor[(900/	2640),(700/	2640)]))";
		  };
		  class Engine {
		   sound[] = {"3as\3as_gat\sounds\GATIdle.wss", 4.48808, 1, 240}; //0.891251
		   frequency = "0.8	+	((rpm/	2640) factor[(700/	2640),(1100/	2640)])*0.2";
		   volume = "engineOn*camPos*(((rpm/	2640) factor[(705/	2640),(850/	2640)])	*	((rpm/	2640) factor[(1100 /	2640),(950/	2640)]))";
		  };
		  class Engine1_ext {
		   sound[] = {"3as\3as_gat\sounds\GATIdle.wss", 5.65016, 1, 280}; //1.12202
		   frequency = "0.8	+	((rpm/	2640) factor[(950/	2640),(1400/	2640)])*0.2";
		   volume = "engineOn*camPos*(((rpm/	2640) factor[(900/	2640),(1050/	2640)])	*	((rpm/	2640) factor[(1400/	2640),(1200/	2640)]))";
		  };
		  class Engine2_ext {
		   sound[] = {"3as\3as_gat\sounds\GATIdle.wss", 6.3396, 1, 320}; //1.25893
		   frequency = "0.8	+	((rpm/	2640) factor[(1200/	2640),(1700/	2640)])*0.2";
		   volume = "engineOn*camPos*(((rpm/	2640) factor[(1170/	2640),(1380/	2640)])	*	((rpm/	2640) factor[(1700/	2640),(1500/	2640)]))";
		  };
		  class Engine3_ext {
		   sound[] = {"3as\3as_gat\sounds\GATIdle.wss", 7.11313, 1, 360}; //1.41254
		   frequency = "0.8	+	((rpm/	2640) factor[(1500/	2640),(2100/	2640)])*0.1";
		   volume = "engineOn*camPos*(((rpm/	2640) factor[(1500/	2640),(1670/	2640)])	*	((rpm/	2640) factor[(2100/	2640),(1800/	2640)]))";
		  };
		  class Engine4_ext {
		   sound[] = {"3as\3as_gat\sounds\GATIdle.wss", 7.98104, 1, 400}; //1.58489
		   frequency = "0.8	+	((rpm/	2640) factor[(1800/	2640),(2300/	2640)])*0.1";
		   volume = "engineOn*camPos*(((rpm/	2640) factor[(1780/	2640),(2060/	2640)])	*	((rpm/	2640) factor[(2450/	2640),(2200/	2640)]))";
		  };
		  class Engine5_ext {
		   sound[] = {"3as\3as_gat\sounds\GATIdle.wss", 8.95489, 1, 440}; //1.77828
		   frequency = "0.8	+	((rpm/	2640) factor[(2100/	2640),(2640/	2640)])*0.1";
		   volume = "engineOn*camPos*((rpm/	2640) factor[(2150/	2640),(2500/	2640)])";
		  };
		  class IdleThrust {
		   sound[] = {"3as\3as_gat\sounds\GATIdle.wss", 5.65016, 1, 200}; //1.12202
		   frequency = "0.8	+	((rpm/	2640) factor[(400/	2640),(900/	2640)])*0.15";
		   volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(100/	2640),(200/	2640)])	*	((rpm/	2640) factor[(900/	2640),(700/	2640)]))";
		  };
		  class EngineThrust {
		   sound[] = {"3as\3as_gat\sounds\GATIdle.wss", 7.11313, 1, 200}; //1.41254
		   frequency = "0.8	+	((rpm/	2640) factor[(700/	2640),(1100/	2640)])*0.2";
		   volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(705/	2640),(850/	2640)])	*	((rpm/	2640) factor[(1100 /	2640),(950/	2640)]))";
		  };
		  class Engine1_Thrust_ext {
		   sound[] = {"3as\3as_gat\sounds\GATIdle.wss", 8.95489, 1, 230}; //1.77828
		   frequency = "0.8	+	((rpm/	2640) factor[(950/	2640),(1400/	2640)])*0.2";
		   volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(900/	2640),(1050/	2640)])	*	((rpm/	2640) factor[(1400/	2640),(1200/	2640)]))";
		  };
		  class Engine2_Thrust_ext {
		   sound[] = {"3as\3as_gat\sounds\GATIdle.wss", 10.0475, 1, 290}; //1.99526
		   frequency = "0.8	+	((rpm/	2640) factor[(1200/	2640),(1700/	2640)])*0.2";
		   volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(1170/	2640),(1380/	2640)])	*	((rpm/	2640) factor[(1700/	2640),(1500/	2640)]))";
		  };
		  class Engine3_Thrust_ext {
		   sound[] = {"3as\3as_gat\sounds\GATIdle.wss", 8.95489, 1, 350}; //1.77828
		   frequency = "0.8	+	((rpm/	2640) factor[(1500/	2640),(2100/	2640)])*0.1";
		   volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(1500/	2640),(1670/	2640)])	*	((rpm/	2640) factor[(2100/	2640),(1800/	2640)]))";
		  };
		  class Engine4_Thrust_ext {
		   sound[] = {"3as\3as_gat\sounds\GATIdle.wss", 11.27353, 1, 400}; //2.23872
		   frequency = "0.8	+	((rpm/	2640) factor[(1800/	2640),(2300/	2640)])*0.1";
		   volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(1780/	2640),(2060/	2640)])	*	((rpm/	2640) factor[(2450/	2640),(2200/	2640)]))";
		  };
		  class Engine5_Thrust_ext {
		   sound[] = {"3as\3as_gat\sounds\GATIdle.wss", 12.64913, 1, 450}; //2.51189
		   frequency = "0.8	+	((rpm/	2640) factor[(2100/	2640),(2640/	2640)])*0.1";
		   volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2640) factor[(2150/	2640),(2500/	2640)])";
		  };
		  class Idle_int {
		   sound[] = {"3as\3as_gat\sounds\GATIdle.wss", 2, 1}; //0.501187
		   frequency = "0.8	+	((rpm/	2640) factor[(400/	2640),(900/	2640)])*0.15";
		   volume = "engineOn*(1-camPos)*(((rpm/	2640) factor[(100/	2640),(200/	2640)])	*	((rpm/	2640) factor[(900/	2640),(700/	2640)]))";
		  };
		  class Engine_int {
		   sound[] = {"3as\3as_gat\sounds\GATIdle.wss", 1.41589, 1}; //0.354813
		   frequency = "0.8	+	((rpm/	2640) factor[(700/	2640),(1100/	2640)])*0.2";
		   volume = "engineOn*(1-camPos)*(((rpm/	2640) factor[(705/	2640),(850/	2640)])	*	((rpm/	2640) factor[(1100 /	2640),(950/	2640)]))";
		  };
		  class Engine1_int {
		   sound[] = {"3as\3as_gat\sounds\GATIdle.wss", 1.58866, 1}; //0.398107
		   frequency = "0.8	+	((rpm/	2640) factor[(950/	2640),(1400/	2640)])*0.2";
		   volume = "engineOn*(1-camPos)*(((rpm/	2640) factor[(900/	2640),(1050/	2640)])	*	((rpm/	2640) factor[(1400/	2640),(1200/	2640)]))";
		  };
		  class Engine2_int {
		   sound[] = {"3as\3as_gat\sounds\GATIdle.wss", 1.78250, 1}; //0.446684
		   frequency = "0.8	+	((rpm/	2640) factor[(1200/	2640),(1700/	2640)])*0.2";
		   volume = "engineOn*(1-camPos)*(((rpm/	2640) factor[(1170/	2640),(1380/	2640)])	*	((rpm/	2640) factor[(1700/	2640),(1500/	2640)]))";
		  };
		  class Engine3_int {
		   sound[] = {"3as\3as_gat\sounds\GATIdle.wss", 2, 1}; //0.501187
		   frequency = "0.8	+	((rpm/	2640) factor[(1500/	2640),(2100/	2640)])*0.1";
		   volume = "engineOn*(1-camPos)*(((rpm/	2640) factor[(1500/	2640),(1670/	2640)])	*	((rpm/	2640) factor[(2100/	2640),(1800/	2640)]))";
		  };
		  class Engine4_int {
		   sound[] = {"3as\3as_gat\sounds\GATIdle.wss", 2.24404, 1}; //0.562341
		   frequency = "0.8	+	((rpm/	2640) factor[(1800/	2640),(2300/	2640)])*0.1";
		   volume = "engineOn*(1-camPos)*(((rpm/	2640) factor[(1780/	2640),(2060/	2640)])	*	((rpm/	2640) factor[(2450/	2640),(2200/	2640)]))";
		  };
		  class Engine5_int {
		   sound[] = {"3as\3as_gat\sounds\GATIdle.wss", 2.51785, 1}; //0.630957
		   frequency = "0.8	+	((rpm/	2640) factor[(2100/	2640),(2640/	2640)])*0.1";
		   volume = "engineOn*(1-camPos)*((rpm/	2640) factor[(2150/	2640),(2500/	2640)])";
		  };
		  class IdleThrust_int {
		   sound[] = {"3as\3as_gat\sounds\GATIdle.wss", 2.51785, 1}; //0.630957
		   frequency = "0.8	+	((rpm/	2640) factor[(400/	2640),(900/	2640)])*0.15";
		   volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(100/	2640),(200/	2640)])	*	((rpm/	2640) factor[(900/	2640),(700/	2640)]))";
		  };
		  class EngineThrust_int {
		   sound[] = {"3as\3as_gat\sounds\GATIdle.wss", 1.58866, 1}; //0.398107
		   frequency = "0.8	+	((rpm/	2640) factor[(700/	2640),(1100/	2640)])*0.2";
		   volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(705/	2640),(850/	2640)])	*	((rpm/	2640) factor[(1100 /	2640),(950/	2640)]))";
		  };
		  class Engine1_Thrust_int {
		   sound[] = {"3as\3as_gat\sounds\GATIdle.wss", 1.78250, 1}; //0.446684
		   frequency = "0.8	+	((rpm/	2640) factor[(950/	2640),(1400/	2640)])*0.2";
		   volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(900/	2640),(1050/	2640)])	*	((rpm/	2640) factor[(1400/	2640),(1200/	2640)]))";
		  };
		  class Engine2_Thrust_int {
		   sound[] = {"3as\3as_gat\sounds\GATIdle.wss", 1.78250, 1}; //0.446684
		   frequency = "0.8	+	((rpm/	2640) factor[(1200/	2640),(1700/	2640)])*0.2";
		   volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(1170/	2640),(1380/	2640)])	*	((rpm/	2640) factor[(1700/	2640),(1500/	2640)]))";
		  };
		  class Engine3_Thrust_int {
		   sound[] = {"3as\3as_gat\sounds\GATIdle.wss", 2, 1}; //0.501187
		   frequency = "0.8	+	((rpm/	2640) factor[(1500/	2640),(2100/	2640)])*0.1";
		   volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(1500/	2640),(1670/	2640)])	*	((rpm/	2640) factor[(2100/	2640),(1800/	2640)]))";
		  };
		  class Engine4_Thrust_int {
		   sound[] = {"3as\3as_gat\sounds\GATIdle.wss", 2.24404, 1}; //0.562341
		   frequency = "0.8	+	((rpm/	2640) factor[(1800/	2640),(2300/	2640)])*0.1";
		   volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(1780/	2640),(2060/	2640)])	*	((rpm/	2640) factor[(2450/	2640),(2200/	2640)]))";
		  };
		  class Engine5_Thrust_int {
		   sound[] = {"3as\3as_gat\sounds\GATIdle.wss", 2.51785, 1}; //0.630957
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
