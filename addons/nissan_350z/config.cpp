#include "CrewAnimations.hpp"

class CfgPatches
{
	class nissan_350z
	{
		units[] = {};
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};

class CfgVehicleClasses
{
	class car_pl
	{
		displayName = "Car Pack";
	};
};

class CfgVehicles {
	class All {
			
};
	
	class AllVehicles : All {};
	
	class Land : AllVehicles {};
	
	class LandVehicle : Land {};
	
	class Car : LandVehicle {
		class UserActions;
		class Exhausts;	// External class reference
		class AnimationSources;	// External class reference
		
		class HitPoints {
			class HitLFWheel;	// External class reference
			class HitLBWheel;	// External class reference
			class HitLMWheel;	// External class reference
			class HitLF2Wheel;	// External class reference
			class HitRFWheel;	// External class reference
			class HitRBWheel;	// External class reference
			class HitRMWheel;	// External class reference
			class HitRF2Wheel;	// External class reference
		};
	};
		
	class 350zBase: Car {
		scope = 0;
		picture = "\Ca\wheeled\data\ico\skodovka_CA.paa";
		Icon = "\Ca\wheeled\data\map_ico\icomap_skoda_CA.paa";
		mapSize = 6;
		faction = "CIV";
		crew = "RU_Hooker4";
		typicalCargo[] = {"RU_Hooker4"};
		wheelCircumference = 1.988000;
		maxSpeed = 210;
		side = 3;
		displayName = "Nissan 350z";
		accuracy = 0.500000;
		extCameraPosition[] = {0.500000, 2, -10};
		armor = 20;
		damageResistance = 0.018210;
		cost = 2000;
		fuelCapacity = 40;
		transportSoldier = 1;
		transportAmmo = 0;
		terrainCoef=.500000;
		turnCoef=2;
		soundGear[] = {"", 0.000177828, 1};
		insideSoundCoef = 0.9;
		SoundGetIn[] = {"ca\sounds\Vehicles\wheeled\GOLF\ext\ext-golf-getout", 0.562341, 1};
		SoundGetOut[] = {"ca\sounds\Vehicles\wheeled\GOLF\ext\ext-golf-getout", 0.562341, 1, 40};
		soundEngineOnInt[] = {"ca\sounds\Vehicles\Wheeled\GOLF\int\int-golf-start-1", 0.562341, 1.0};
		soundEngineOnExt[] = {"ca\sounds\Vehicles\Wheeled\GOLF\ext\ext-golf-start-1", 0.562341, 1.0, 250};
		soundEngineOffInt[] = {"ca\sounds\vehicles\Wheeled\GOLF\int\int-golf-stop-1", 0.562341, 1.0};
		soundEngineOffExt[] = {"ca\sounds\vehicles\Wheeled\GOLF\ext\ext-golf-stop-1", 0.562341, 1.0, 250};
		buildCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_building_01", 0.707946, 1, 200};
		buildCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_building_02", 0.707946, 1, 200};
		buildCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_building_03", 0.707946, 1, 200};
		buildCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_building_04", 0.707946, 1, 200};
		soundBuildingCrash[] = {"buildCrash0", 0.25, "buildCrash1", 0.25, "buildCrash2", 0.25, "buildCrash3", 0.25};
		WoodCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_01", 0.707946, 1, 200};
		WoodCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_02", 0.707946, 1, 200};
		WoodCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_03", 0.707946, 1, 200};
		WoodCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_04", 0.707946, 1, 200};
		WoodCrash4[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_05", 0.707946, 1, 200};
		WoodCrash5[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_06", 0.707946, 1, 200};
		soundWoodCrash[] = {"woodCrash0", 0.166, "woodCrash1", 0.166, "woodCrash2", 0.166, "woodCrash3", 0.166, "woodCrash4", 0.166, "woodCrash5", 0.166};
		ArmorCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_01", 0.707946, 1, 200};
		ArmorCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_02", 0.707946, 1, 200};
		ArmorCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_03", 0.707946, 1, 200};
		ArmorCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_04", 0.707946, 1, 200};
		soundArmorCrash[] = {"ArmorCrash0", 0.25, "ArmorCrash1", 0.25, "ArmorCrash2", 0.25, "ArmorCrash3", 0.25};
		
		class SoundEvents {
			class AccelerationIn {
				sound[] = {"ca\sounds\Vehicles\Wheeled\GOLF\int\int-golf-acce-1", 0.891251, 1.0};
				limit = 0.15;
				expression = "engineOn*(1-camPos)*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
			
			class AccelerationOut {
				sound[] = {"ca\sounds\Vehicles\Wheeled\GOLF\ext\ext-golf-acce-1", 0.562341, 1.0, 250};
				limit = 0.15;
				expression = "engineOn*camPos*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
		};
		
		class Sounds {
			class Engine {
				sound[] = {"ca\sounds\Vehicles\Wheeled\GOLF\ext\ext-golf-low-1", 0.398107, 1.0, 300};
				frequency = "(randomizer*0.05+1.25)*rpm";
				volume = "camPos*engineOn*((rpm factor[0.25, 0.4]) min (rpm factor[0.6, 0.45]))";
			};
			
			class EngineHighOut {
				sound[] = {"ca\sounds\Vehicles\Wheeled\GOLF\ext\ext-golf-high-1", 0.398107, 0.8, 450};
				frequency = "(randomizer*0.05+1.1)*rpm";
				volume = "camPos*engineOn*(rpm factor[0.5, 0.9])";
			};
			
			class IdleOut {
				sound[] = {"ca\sounds\Vehicles\Wheeled\GOLF\ext\ext-golf-idle-1", 0.316228, 1.0, 100};
				frequency = "1";
				volume = "engineOn*camPos*(rpm factor[0.4, 0])";
			};
			
			class TiresRockOut {
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2", 0.0562341, 1.0, 40};
				frequency = "1";
				volume = "camPos*rock*(speed factor[4, 20])";
			};
			
			class TiresSandOut {
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2", 0.0562341, 1.0, 40};
				frequency = "1";
				volume = "camPos*sand*(speed factor[4, 20])";
			};
			
			class TiresGrassOut {
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass3", 0.0562341, 1.0, 40};
				frequency = "1";
				volume = "camPos*grass*(speed factor[4, 20])";
			};
			
			class TiresMudOut {
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2", 0.0562341, 1.0, 40};
				frequency = "1";
				volume = "camPos*mud*(speed factor[4, 20])";
			};
			
			class TiresGravelOut {
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2", 0.0562341, 1.0, 40};
				frequency = "1";
				volume = "camPos*gravel*(speed factor[4, 20])";
			};
			
			class TiresAsphaltOut {
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3", 0.0562341, 1.0, 40};
				frequency = "1";
				volume = "camPos*asphalt*(speed factor[4, 20])";
			};
			
			class NoiseOut {
				sound[] = {"ca\sounds\Vehicles\Wheeled\Noises\ext\noise2", 0.0562341, 1.0, 40};
				frequency = "1";
				volume = "camPos*(damper0 max 0.036)*(speed factor[0, 8])";
			};
			
			class EngineLowIn {
				sound[] = {"ca\sounds\Vehicles\Wheeled\GOLF\int\int-golf-low-1", 0.707946, 1.0};
				frequency = "(randomizer*0.05+1.3)*rpm";
				volume = "(1-camPos)*engineOn*((rpm factor[0.3, 0.5]) min (rpm factor[0.7, 0.52]))";
			};
			
			class EngineHighIn {
				sound[] = {"ca\sounds\Vehicles\Wheeled\GOLF\int\int-golf-high-1", 0.707946, 0.95};
				frequency = "(randomizer*0.05+1.2)*rpm";
				volume = "(1-camPos)*engineOn*(rpm factor[0.6, 1.0])";
			};
			
			class IdleIn {
				sound[] = {"ca\sounds\Vehicles\Wheeled\GOLF\int\int-golf-idle-1", 0.562341, 1.0};
				frequency = "1";
				volume = "(1-camPos)*engineOn*(rpm factor[0.4, 0])";
			};
			
			class TiresRockIn {
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-rock2", 0.0707946, 1.0};
				frequency = "1";
				volume = "(1-camPos)*rock*(speed factor[2, 20])";
			};
			
			class TiresSandIn {
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-sand2", 0.0707946, 1.0};
				frequency = "1";
				volume = "(1-camPos)*sand*(speed factor[2, 20])";
			};
			
			class TiresGrassIn {
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-grass3", 0.0707946, 1.0};
				frequency = "1";
				volume = "(1-camPos)*grass*(speed factor[2, 20])";
			};
			
			class TiresMudIn {
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-mud2", 0.0707946, 1.0};
				frequency = "1";
				volume = "(1-camPos)*mud*(speed factor[2, 20])";
			};
			
			class TiresGravelIn {
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-gravel2", 0.0707946, 1.0};
				frequency = "1";
				volume = "(1-camPos)*gravel*(speed factor[2, 20])";
			};
			
			class TiresAsphaltIn {
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-asphalt3", 0.0562341, 1.0};
				frequency = "1";
				volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			
			class NoiseIn {
				sound[] = {"ca\sounds\Vehicles\Wheeled\Noises\int\int-noise2", 0.1, 1.0};
				frequency = "1";
				volume = "(damper0 max 0.03)*(speed factor[0, 8])*(1-camPos)";
			};
			
			class Movement {
				sound = "soundEnviron";
				frequency = "1";
				volume = "0";
			};
		};
		weapons[] = {"SportCarHorn"};
		magazines[] = {};
		driverAction = "Skodovka_Driver";
		cargoAction[] = {"Skodovka_Cargo01"};
		cargoIsCoDriver[] = {1, 0};
		hasGunner = 0;

		class Turrets {};

		class Library {libTextDesc = "$STR_LIB_SKODA"};
		rarityUrban = 0.500000;
		class UserActions
		{
	
			};
			class Afterburner
			{
				displayName ="Turbo On";
				position = "pilotcontrol";
				radius =15;
				condition = "speed this >50 and this animationPhase ""ABSwitch"" <= 0.1";
				statement = "this execvm ""\nissan_350z\script\turbo.sqf""; ";
				onlyforplayer = False;
			};
			class Afterburner_1
			{
				displayName ="Turbo Off";
				position = "pilotcontrol";
				radius =15;
				condition = "this animationPhase ""ABSwitch"" >= 0.9";
				statement = "this animate [""ABSwitch"",0]";
				onlyforplayer = False;
			};
		};
	class 350z: 350zBase {
		scope = 2;
		accuracy = 1000;
		crew = "Citizen1";
		faction = "CIV";
		vehicleClass = "car_pl";
		typicalCargo[] = {"Citizen1"};
		model = "\nissan_350z\350z";
		picture = "\Ca\wheeled\data\ico\skodovka_CA.paa";
		Icon = "\Ca\wheeled\data\map_ico\icomap_skoda_CA.paa";
		mapSize = 6;
		displayName = "Nissan 350z (Orange)";
		displayNameShort = "350z";

		class HitPoints : HitPoints {
			class HitEngine {
				armor = 0.4;
				material = 60;
				name = "motor";
				visual = "motor";
				passThrough = 1;
			};
			
			class HitBody {
				armor = 1;
				material = 51;
				name = "karoserie";
				visual = "karoserie";
				passThrough = 1;
			};
			
			class HitFuel {
				armor = 0.3;
				material = 51;
				name = "palivo";
				passThrough = 1;
			};
			
			class HitLFWheel {
				armor = 0.38;
				material = -1;
				name = "levy predni tlumic";
				visual = "levy predni tlumic";
				passThrough = 0;
			};
			
			class HitRFWheel {
				armor = 0.38;
				material = -1;
				name = "pravy predni tlumic";
				visual = "pravy predni tlumic";
				passThrough = 0;
			};
			
			class HitLBWheel {
				armor = 0.38;
				material = -1;
				name = "levy zadni tlumic";
				visual = "levy zadni tlumic";
				passThrough = 0;
			};
			
			class HitRBWheel {
				armor = 0.38;
				material = -1;
				name = "pravy zadni tlumic";
				visual = "pravy zadni tlumic";
				passThrough = 0;
			};
			
			class HitGlass1 {
				armor = 0.05;
				material = -1;
				name = "sklo predni L";
				visual = "sklo predni L";
				passThrough = 0;
			};
			
			class HitGlass2 : HitGlass1 {
				name = "sklo predni P";
				visual = "sklo predni P";
			};
		};
		dammageHalf[] = {"\nissan_350z\textures\350z\glass_ca.paa", "\nissan_350z\textures\350z\broke_glass.paa"};
		dammageFull[] = {"\nissan_350z\textures\350z\glass_ca.paa", "\nissan_350z\textures\350z\broken_glass.paa"};
		
		class Damage {
			tex[] = {};
			mat[] = {"nissan_350z\textures\350z\skin_1.rvmat", "nissan_350z\textures\350z\skin_1.rvmat", "nissan_350z\textures\350z\destruct.rvmat"};
		};
		rarityUrban = 0.250000;
	};
	class 350z_red: 350z
        {
	scope = 2;
	faction = CIV;
   	displayName = "Nissan 350z (Red)";
	hiddenSelections[] = {"skin1","licence"};
	hiddenSelectionsTextures[] = {"\nissan_350z\textures\350z\skin_red.paa","\nissan_350z\textures\licence1.paa"};
	};
	class 350z_kiwi: 350z
        {
	scope = 2;
	faction = CIV;
	model = "\nissan_350z\350z_kiwi";
   	displayName = "Nissan 350z (Kiwi Thunder)";
	};
	class 350z_black: 350z
        {
	scope = 2;
	faction = CIV;
	model = "\nissan_350z\350z";
   	displayName = "Nissan 350z (Black)";
	hiddenSelections[] = {"skin1","licence"};
	hiddenSelectionsTextures[] = {"\nissan_350z\textures\350z\skin_black.paa","\nissan_350z\textures\licence2.paa"};
	};
	class 350z_silver: 350z
        {
	scope = 2;
	faction = CIV;
   	displayName = "Nissan 350z (Silver)";
	hiddenSelections[] = {"skin1","licence"};
	hiddenSelectionsTextures[] = {"\nissan_350z\textures\350z\skin_silver.paa","\nissan_350z\textures\licence3.paa"};
	};
	class 350z_green: 350z
        {
	scope = 2;
	faction = CIV;
   	displayName = "Nissan 350z (Green)";
	hiddenSelections[] = {"skin1","licence"};
	hiddenSelectionsTextures[] = {"\nissan_350z\textures\350z\skin_green.paa","\nissan_350z\textures\licence4.paa"};
	};
	class 350z_blue: 350z
        {
	scope = 2;
	faction = CIV;
   	displayName = "Nissan 350z (Blue)";
	hiddenSelections[] = {"skin1","licence"};
	hiddenSelectionsTextures[] = {"\nissan_350z\textures\350z\skin_blue.paa","\nissan_350z\textures\licence5.paa"};
	};
	class 350z_gold: 350z
        {
	scope = 2;
	faction = CIV;
   	displayName = "Nissan 350z (Gold)";
	hiddenSelections[] = {"skin1","licence"};
	hiddenSelectionsTextures[] = {"\nissan_350z\textures\350z\skin_gold.paa","\nissan_350z\textures\licence6.paa"};
	};
	class 350z_white: 350z
        {
	scope = 2;
	faction = CIV;
   	displayName = "Nissan 350z (White)";
	hiddenSelections[] = {"skin1","licence"};
	hiddenSelectionsTextures[] = {"\nissan_350z\textures\350z\skin_white.paa","\nissan_350z\textures\licence7.paa"};
	};
	class 350z_pink: 350z
        {
	scope = 2;
	faction = CIV;
   	displayName = "Nissan 350z (Hello Kitty)";
	hiddenSelections[] = {"skin1","licence"};
	hiddenSelectionsTextures[] = {"\nissan_350z\textures\350z\skin_pink.paa","\nissan_350z\textures\licence8.paa"};
	};
	class 350z_mod: 350z
        {
	scope = 2;
	faction = CIV;
	model = "\nissan_350z\350z_kiwi";
   	displayName = "Nissan 350z (Emery's Car)";
	hiddenSelections[] = {"skin1","licence"};
	hiddenSelectionsTextures[] = {"\nissan_350z\textures\350z\skin_emery.paa","\nissan_350z\textures\licence9.paa"};
	};
	class 350z_ruben: 350z
        {
	scope = 2;
	faction = CIV;
	model = "\nissan_350z\350z_kiwi";
   	displayName = "Nissan 350z (Ruben's Car)";
	hiddenSelections[] = {"skin1","licence"};
	hiddenSelectionsTextures[] = {"\nissan_350z\textures\350z\skin_ruben.paa","\nissan_350z\textures\licence10.paa"};
	};
	class 350z_v: 350z
        {
	scope = 2;
	faction = CIV;
	model = "\nissan_350z\350z";
   	displayName = "Nissan 350z (V For Vendetta)";
	hiddenSelections[] = {"skin1","licence"};
	hiddenSelectionsTextures[] = {"\nissan_350z\textures\350z\skin_v.paa","\nissan_350z\textures\licence11.paa"};
	};
	class 350z_city: 350z
        {
	scope = 2;
	faction = CIV;
   	displayName = "Nissan 350z (City Life)";
	hiddenSelections[] = {"skin1","licence"};
	hiddenSelectionsTextures[] = {"\nissan_350z\textures\350z\skin_city.paa","\nissan_350z\textures\licence12.paa"};
	};
	class 350z_yellow: 350z
        {
	scope = 2;
	faction = CIV;
   	displayName = "Nissan 350z (Yellow)";
	hiddenSelections[] = {"skin1","licence"};
	hiddenSelectionsTextures[] = {"\nissan_350z\textures\350z\skin_yellow.paa","\nissan_350z\textures\licence13.paa"};
	};
};