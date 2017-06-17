#define SPEED_STATIC 1e10
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		BRDM2_Driver = "BRDM2_Driver";
		BRDM2_Gunner = "BRDM2_Gunner";
		BRDM2_Cargo01 = "BRDM2_Cargo01";
		BRDM2_Cargo02 = "BRDM2_Cargo02";
		CityBus_Driver = "CityBus_Driver";
		Datsun_Driver = "Datsun_Driver";
		Hatchback_Driver = "Hatchback_Driver";
		Hatchback_Cargo01 = "Hatchback_Cargo01";
		Hilux_Driver = "Hilux_Driver";
		Hilux_Cargo01 = "Hilux_Cargo01";
		HMMWV_Driver = "HMMWV_Driver";
		HMMWV_Gunner01 = "HMMWV_Gunner01";
		HMMWV_Gunner02 = "HMMWV_Gunner02";
		HMMWV_Gunner03 = "HMMWV_Gunner03";
		HMMWV_Cargo01 = "HMMWV_Cargo01";
		Landrover_Driver = "Landrover_Driver";
		Landrover_Gunner = "Landrover_Gunner";
		Landrover_Cargo01 = "Landrover_Cargo01";
		Landrover_Cargo02 = "Landrover_Cargo02";
		Landrover_Cargo03 = "Landrover_Cargo03";
		Sedan_Driver = "Sedan_Driver";
		Skodovka_Driver = "Skodovka_Driver";
		Skodovka2_Driver = "Skodovka2_Driver";
		Skodovka_Cargo01 = "Skodovka_Cargo01";
		Stryker_Driver = "Stryker_Driver";
		Stryker_DriverOut = "Stryker_DriverOut";
		Stryker_Gunner = "Stryker_Gunner";
		Stryker_GunnerOut = "Stryker_GunnerOut";
		Stryker_Cargo01 = "Stryker_Cargo01";
		Tractor_Driver = "Tractor_Driver";
		Truck_Driver = "Truck_Driver";
		Truck_Gunner = "Truck_Gunner";
		Truck_Cargo01 = "Truck_Cargo01";
		Truck_Cargo02 = "Truck_Cargo02";
		Truck_Cargo03 = "Truck_Cargo03";
		Truck_Cargo04 = "Truck_Cargo04";
		UAZ_Driver = "UAZ_Driver";
		UAZ_Gunner01 = "UAZ_Gunner01";
		UAZ_Gunner02 = "UAZ_Gunner02"; //AGS Gunner
		UAZ_Cargo01 = "UAZ_Cargo01";
		AH1Z_Pilot = "AH1Z_Pilot";
		AH1Z_Gunner = "AH1Z_Gunner";
		AH6_Pilot = "AH6_Pilot";
		AH6_Gunner = "AH6_Gunner";
		MH6_Cargo01 = "MH6_Cargo01";
		MH6_Cargo02 = "MH6_Cargo02";
		MH6_Cargo03 = "MH6_Cargo03";
		UH60_Pilot = "UH60_Pilot";
		UH60_Gunner = "UH60_Gunner";
		UH60_Cargo01 = "UH60_Cargo01";
		UH60_Cargo02 = "UH60_Cargo02";
		AV8B_Pilot = "AV8B_Pilot";
		KA50_Pilot = "KA50_Pilot";
		Mi17_Pilot = "Mi17_Pilot";
		Mi17_Gunner = "Mi17_Gunner";
		Mi17_Cargo01 = "Mi17_Cargo01";
		Mi17_Cargo02 = "Mi17_Cargo02";
		Camel_Pilot = "Camel_Pilot";
		Para_Pilot = "Para_Pilot";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	#define AnimPath \ca\wheeled\Data\Anim
	class States
	{
		class Stryker_Dead: DefaultDie
		{
			actions = DeadActions;
			speed = 0.5;
			looped=false;
			terminal = 1;
			file=\ca\Anims\characters\data\anim\sdr\Mov\Sit\stp\non\non\AmovPsitMstpSnonWnonDnon_basic.rtm;
			connectTo[] = {DeadState,0.1};
		};
		class Crew;
		class KIA_BRDM2_Driver:DefaultDie
		{
			actions = DeadActions;
			speed = 0.5;
			looped=false;
			terminal = 1;
			file=AnimPath\KIA_BRDM2_Driver.rtm;
			connectTo[] = {DeadState,0.1};
		};
		class BRDM2_Driver: Crew
		{
			file=AnimPath\BRDM2_Driver.rtm;
			interpolateTo[]={KIA_BRDM2_Driver,1};
		};
		class KIA_BRDM2_Gunner:DefaultDie
		{
			actions = DeadActions;
			speed = 0.5;
			looped=false;
			terminal = 1;
			file=AnimPath\KIA_BRDM2_Gunner.rtm;
			soundEnabled=0;
			connectTo[] = {DeadState,0.1};
		};
		class BRDM2_Gunner: Crew
		{
			file=AnimPath\BRDM2_Gunner.rtm;
			interpolateTo[]={KIA_BRDM2_Gunner,1};
		};
		class KIA_BRDM2_Cargo01:DefaultDie
		{
			actions = DeadActions;
			speed = 0.5;
			looped=false;
			terminal = 1;
			file=AnimPath\KIA_BRDM2_Cargo01.rtm;
			soundEnabled=0;
			connectTo[] = {DeadState,0.1};
		};
		class BRDM2_Cargo01: Crew
		{
			file=AnimPath\BRDM2_Cargo01.rtm;
			interpolateTo[]={KIA_BRDM2_Cargo01,1};
		};
		class KIA_BRDM2_Cargo02:DefaultDie
		{
			actions = DeadActions;
			speed = 0.5;
			looped=false;
			terminal = 1;
			file=AnimPath\KIA_BRDM2_Cargo02.rtm;
			soundEnabled=0;
			connectTo[] = {DeadState,0.1};
		};
		class BRDM2_Cargo02: Crew
		{
			file=AnimPath\BRDM2_Cargo02.rtm;
			interpolateTo[]={KIA_BRDM2_Cargo02,1};
		};
		class KIA_Bus_city_Driver: Crew
		{
			actions = DeadActions;
			speed = 0.5;
			looped=false;
			terminal = 1;
			file=AnimPath\KIA_Bus_city_Driver.rtm;
			soundEnabled=0;
			connectTo[] = {DeadState,0.1};
		};
		class CityBus_Driver: Crew
		{
			file=AnimPath\CityBus_Driver.rtm;
			interpolateTo[]={KIA_Bus_city_Driver,1};
		};
		class KIA_Datsun_Driver: Crew
		{
			actions = DeadActions;
			speed = 0.5;
			looped=false;
			terminal = 1;
			file=AnimPath\KIA_Datsun_Driver.rtm;
			soundEnabled=0;
			connectTo[] = {DeadState,0.1};
		};
		class Datsun_Driver: Crew
		{
			file=AnimPath\Datsun_Driver.rtm;
			interpolateTo[]={KIA_Datsun_Driver,1};
		};
		class KIA_Hatchback_Driver: Crew
		{
			actions = DeadActions;
			speed = 0.5;
			looped=false;
			terminal = 1;
			file=AnimPath\KIA_Hatchback_Driver.rtm;
			soundEnabled=0;
			connectTo[] = {DeadState,0.1};
		};
		class Hatchback_Driver: Crew
		{
			file=AnimPath\Hatchback_Driver.rtm;
			interpolateTo[]={KIA_Hatchback_Driver,1};
		};
		class KIA_Hatchback_Cargo01: Crew
		{
			actions = DeadActions;
			speed = 0.5;
			looped=false;
			terminal = 1;
			file=AnimPath\KIA_Hatchback_Cargo01.rtm;
			soundEnabled=0;
			connectTo[] = {DeadState,0.1};
		};
		class Hatchback_Cargo01: Crew
		{
			file=AnimPath\Hatchback_Cargo01.rtm;
			interpolateTo[]={KIA_Hatchback_Cargo01,1};
		};
		class KIA_Hilux_Driver: Crew
		{
			actions = DeadActions;
			file=AnimPath\KIA_Hilux_Driver.rtm;
			speed = 0.5;
			looped=false;
			terminal = 1;
			connectTo[] = {DeadState,0.1};
			soundEnabled=0;
		};
		class Hilux_Driver: Crew
		{
			file=AnimPath\Hilux_Driver.rtm;
			interpolateTo[]={KIA_Hilux_Driver,1};
		};
		class KIA_Hilux_Cargo01: Crew
		{
			actions = DeadActions;
			file=AnimPath\KIA_Hilux_Cargo01.rtm;
			speed = 0.5;
			looped=false;
			terminal = 1;
			connectTo[] = {DeadState,0.1};
			soundEnabled=0;
		};
		class Hilux_Cargo01: Crew
		{
			file=AnimPath\Hilux_Cargo01.rtm;
			interpolateTo[]={KIA_Hilux_Cargo01,1};
		};
		class KIA_HMMWV_Driver: DefaultDie
		{
			actions = DeadActions;
			file=AnimPath\KIA_HMMWV_Driver.rtm;
			speed = 0.5;
			looped=false;
			terminal = 1;
			connectTo[] = {DeadState,0.1};
			soundEnabled=0;
		};
		class HMMWV_Driver: Crew
		{
			file=AnimPath\HMMWV_Driver.rtm;
			interpolateTo[]={KIA_HMMWV_Driver,1};
		};
		class KIA_HMMWV_Gunner: KIA_HMMWV_Driver
		{
			file=AnimPath\KIA_hmmwv_gunnerOUT.rtm;
		};
		class HMMWV_Gunner01: Crew
		{
			file=AnimPath\hmmwv_M2gunnerOUT.rtm;
			interpolateTo[]={KIA_HMMWV_Gunner,1};
		};
		class HMMWV_Gunner02: Crew
		{
			file=AnimPath\hmmwv_mk19gunnerOUT.rtm;
			interpolateTo[]={KIA_HMMWV_Gunner,1};
		};
		class HMMWV_Gunner03: Crew
		{
			file=AnimPath\hmmwv_TOW_gunnerOUT.rtm;
			interpolateTo[]={KIA_HMMWV_Gunner,1};
		};
		class KIA_HMMWV_Cargo01: KIA_HMMWV_Driver
		{
			file=AnimPath\KIA_HMMWV_Cargo01.rtm;
		};
		class HMMWV_Cargo01: Crew
		{
			file=AnimPath\hmmwv_Cargo01_V0.rtm;
			interpolateTo[]={KIA_HMMWV_Cargo01,0.1};
			connectTo[]={HMMWV_Cargo01,0.1,HMMWV_Cargo01_V1,0.1,HMMWV_Cargo01_V2,0.1};
			equivalentTo="HMMWV_Cargo01";
			variantsAI[]={HMMWV_Cargo01,0.6,HMMWV_Cargo01_V1,0.2,HMMWV_Cargo01_V2,0.2};
			variantAfter[]={5,10,20};
      head = headNo; //no head movement
			speed = 0.3;
		};
		class HMMWV_Cargo01_V1: HMMWV_Cargo01
		{
			file=AnimPath\hmmwv_Cargo01_V1.rtm;
			interpolateTo[]={KIA_HMMWV_Cargo01,0.1};
			connectTo[]={HMMWV_Cargo01,0.1};
			variantAfter[]={5,5,5};
			speed = 0.197;
		};
		class HMMWV_Cargo01_V2: HMMWV_Cargo01
		{
			file=AnimPath\hmmwv_Cargo01_V2.rtm;
			interpolateTo[]={KIA_HMMWV_Cargo01,0.1};
			connectTo[]={HMMWV_Cargo01,0.1};
			variantAfter[]={5,5,5};
			speed = 0.197;
		};
		class KIA_Landrover_Driver: DefaultDie
		{
			actions = DeadActions;
			speed = 0.5;
			looped=false;
			terminal = 1;
			file=AnimPath\KIA_Landrover_Driver.rtm;
			connectTo[] = {DeadState,0.1};
		};
		class Landrover_Driver: Crew
		{
			file=AnimPath\Landrover_Driver.rtm;
			interpolateTo[]={KIA_Landrover_Driver,1};
		};
		class Landrover_Gunner: Crew
		{
			file=AnimPath\Landrover_Gunner.rtm;
			interpolateTo[]={Stryker_Dead,1};		//dies outside vehicle
		};
		class KIA_Landrover_Cargo01: DefaultDie
		{
			actions = DeadActions;
			file=AnimPath\KIA_Landrover_Cargo01.rtm;
			speed = 0.5;
			looped=false;
			terminal = 1;
			connectTo[] = {DeadState,0.1};
			soundEnabled=0;
		};
		class Landrover_Cargo01: Crew
		{
			file=AnimPath\Landrover_Cargo01_V1.rtm;
			interpolateTo[]={KIA_landrover_Cargo01,1};
		};
		class KIA_Landrover_Cargo02: DefaultDie
		{
			actions = DeadActions;
			file=AnimPath\KIA_landrover_Cargo02.rtm;
			speed = 0.5;
			looped=false;
			terminal = 1;
			connectTo[] = {DeadState,0.1};
			soundEnabled=0;
		};
		class Landrover_Cargo02: Crew
		{
			file=AnimPath\Landrover_Cargo02_V0.rtm;
			interpolateTo[]={KIA_landrover_Cargo02,0.1};
			connectTo[]={Landrover_Cargo02,0.1,Landrover_Cargo02_V1,0.1,Landrover_Cargo02_V2,0.1,Landrover_Cargo02_V3,0.1,Landrover_Cargo02_V4,0.1,Landrover_Cargo02_V5,0.1};
			equivalentTo="Landrover_Cargo02";
			variantsAI[]={Landrover_Cargo02,0.60,Landrover_Cargo02_V1,0.07,Landrover_Cargo02_V2,0.07,Landrover_Cargo02_V3,0.07,Landrover_Cargo02_V4,0.07,Landrover_Cargo02_V5,0.07};
			variantAfter[]={5,10,20};
      head = headNo;
			speed = 0.3;
		};
		class Landrover_Cargo02_V1: Landrover_Cargo02
		{
			file=AnimPath\Landrover_Cargo02_V1.rtm;
			interpolateTo[]={KIA_landrover_Cargo02,0.1};
			connectTo[]={Landrover_Cargo02,0.1};
			speed = 0.196;
			variantAfter[]={5,5,5};
		};
		class Landrover_Cargo02_V2: Landrover_Cargo02
		{
			file=AnimPath\Landrover_Cargo02_V2.rtm;
			interpolateTo[]={KIA_landrover_Cargo02,0.1};
			connectTo[]={Landrover_Cargo02,0.1};
			speed = 0.196;
			variantAfter[]={5,5,5};
		};
		class Landrover_Cargo02_V3: Landrover_Cargo02
		{
			file=AnimPath\Landrover_Cargo02_V3.rtm;
			interpolateTo[]={KIA_landrover_Cargo02,0.1};
			connectTo[]={Landrover_Cargo02,0.1};
			speed = 0.462;
			variantAfter[]={2,2,2};
		};
		class Landrover_Cargo02_V4: Landrover_Cargo02
		{
			file=AnimPath\Landrover_Cargo02_V4.rtm;
			interpolateTo[]={KIA_landrover_Cargo02,0.1};
			connectTo[]={Landrover_Cargo02,0.1};
			speed = 0.666;
			variantAfter[]={1.5,1.5,1.5};
		};
		class Landrover_Cargo02_V5: Landrover_Cargo02
		{
			file=AnimPath\Landrover_Cargo02_V5.rtm;
			interpolateTo[]={KIA_landrover_Cargo02,0.1};
			connectTo[]={Landrover_Cargo02,0.1};
			speed = 0.214;
			variantAfter[]={4.5,4.5,4.5};
		};
		class Landrover_Cargo03: Crew
		{
			file=AnimPath\Landrover_Cargo03_V0.rtm;
			interpolateTo[]={KIA_landrover_Cargo02,0.1};
			connectTo[]={Landrover_Cargo03,0.1,Landrover_Cargo03_V1,0.1,Landrover_Cargo03_V2,0.1};
			equivalentTo="Landrover_Cargo03";
			variantsAI[]={Landrover_Cargo03,0.6,Landrover_Cargo03_V1,0.2,Landrover_Cargo03_V2,0.2};
			variantAfter[]={5,10,20};
      head = headNo;
			speed = 0.3;
		};
		class Landrover_Cargo03_V1: Landrover_Cargo03
		{
			file=AnimPath\Landrover_Cargo03_V1.rtm;
			interpolateTo[]={KIA_landrover_Cargo02,0.1};
			connectTo[]={Landrover_Cargo03,0.1};
			speed = 0.196;
			variantAfter[]={5,5,5};
		};
		class Landrover_Cargo03_V2: Landrover_Cargo03_V1
		{
			file=AnimPath\Landrover_Cargo03_V2.rtm;
			interpolateTo[]={KIA_landrover_Cargo02,0.1};
			connectTo[]={Landrover_Cargo03,0.1};
			variantAfter[]={5,5,5};
		};
		class KIA_Sedan_Driver: DefaultDie
		{
			actions = DeadActions;
			file=AnimPath\KIA_Sedan_Driver.rtm;
			speed = 0.5;
			looped=false;
			terminal = 1;
			connectTo[] = {DeadState,0.1};
			soundEnabled=0;
		};
		class Sedan_Driver: Crew
		{
			file=AnimPath\Sedan_Driver.rtm;
			interpolateTo[]={KIA_Sedan_Driver,1};
		};
		class KIA_Skodovka_Driver: DefaultDie
		{
			actions = DeadActions;
			file=AnimPath\KIA_Skodovka_Driver.rtm;
			speed = 0.5;
			looped=false;
			terminal = 1;
			connectTo[] = {DeadState,0.1};
			soundEnabled=0;
		};
		class Skodovka_Driver: Crew
		{
			file=AnimPath\Skodovka_Driver.rtm;
			interpolateTo[]={KIA_Skodovka_Driver,1};
		};
		class KIA_Skodovka2_Driver: DefaultDie
		{
			actions = DeadActions;
			file=AnimPath\KIA_Skodovka2_Driver.rtm;
			speed = 0.5;
			looped=false;
			terminal = 1;
			connectTo[] = {DeadState,0.1};
			soundEnabled=0;
		};
		class Skodovka2_Driver: Crew
		{
			file=AnimPath\Skodovka2_Driver.rtm;
			interpolateTo[]={KIA_Skodovka2_Driver,1};
		};
		class KIA_Skodovka_Cargo01: DefaultDie
		{
			actions = DeadActions;
			file=AnimPath\KIA_Skodovka_Cargo01.rtm;
			speed = 0.5;
			looped=false;
			terminal = 1;
			connectTo[] = {DeadState,0.1};
			soundEnabled=0;
		};
		class Skodovka_Cargo01: Crew
		{
			file=AnimPath\Skodovka_Cargo01.rtm;
			interpolateTo[]={KIA_Skodovka_Cargo01,1};
		};
		class KIA_Stryker_Driver: DefaultDie
		{
			actions = DeadActions;
			file=AnimPath\KIA_Stryker_Driver.rtm;
			speed = 0.5;
			looped=false;
			terminal = 1;
			connectTo[] = {DeadState,0.1};
			soundEnabled=0;
		};
		class Stryker_Driver: Crew
		{
			file=AnimPath\Stryker_Driver.rtm;
			interpolateTo[]={KIA_Stryker_Driver,1};
		};
		class Stryker_DriverOut: Crew
		{
			file=AnimPath\Stryker_DriverOut.rtm;
			interpolateTo[]={KIA_Stryker_Driver,1};
		};
		class KIA_Stryker_Gunner: KIA_Stryker_Driver
		{
			file=AnimPath\KIA_Stryker_Gunner.rtm;
		};
		class Stryker_Gunner: Crew
		{
			file=AnimPath\Stryker_Gunner.rtm;
			interpolateTo[]={KIA_Stryker_Gunner,1};
		};
		class Stryker_GunnerOut: Crew
		{
			file=AnimPath\Stryker_GunnerOut.rtm;
			interpolateTo[]={KIA_Stryker_Gunner,1};
		};
		class KIA_Stryker_Cargo01: KIA_Stryker_Driver
		{
			file=AnimPath\KIA_Stryker_Cargo01.rtm;
		};
		class Stryker_Cargo01: Crew
		{
			file=AnimPath\Stryker_Cargo01_V0.rtm;
			interpolateTo[]={KIA_Stryker_Cargo01,0.1};
			connectTo[]={Stryker_Cargo01,0.1,Stryker_Cargo01_V1,0.1,Stryker_Cargo01_V2,0.1,Stryker_Cargo01_V3,0.1,Stryker_Cargo01_V4,0.1};
			equivalentTo="Stryker_Cargo01";
			variantsAI[]={Stryker_Cargo01,0.6,Stryker_Cargo01_V1,0.1,Stryker_Cargo01_V2,0.1,Stryker_Cargo01_V3,0.1,Stryker_Cargo01_V4,0.1};
			variantAfter[]={5,10,20};
      head = headNo;
			speed = 0.3;
		};
		class Stryker_Cargo01_V1: Stryker_Cargo01
		{
			file=AnimPath\Stryker_Cargo01_V1.rtm;
			interpolateTo[]={KIA_Stryker_Cargo01,0.1};
			connectTo[]={Stryker_Cargo01,0.1};
			speed = 0.236;
			variantAfter[]={4,4,4};
		};
		class Stryker_Cargo01_V2: Stryker_Cargo01
		{
			file=AnimPath\Stryker_Cargo01_V2.rtm;
			interpolateTo[]={KIA_Stryker_Cargo01,0.1};
			connectTo[]={Stryker_Cargo01,0.1};
			speed = 0.169;
			variantAfter[]={6,6,6};
		};
		class Stryker_Cargo01_V3: Stryker_Cargo01
		{
			file=AnimPath\Stryker_Cargo01_V3.rtm;
			interpolateTo[]={KIA_Stryker_Cargo01,0.1};
			connectTo[]={Stryker_Cargo01,0.1};
			speed = 0.197;
			variantAfter[]={5,5,5};
		};
		class Stryker_Cargo01_V4: Stryker_Cargo01
		{
			file=AnimPath\Stryker_Cargo01_V4.rtm;
			interpolateTo[]={KIA_Stryker_Cargo01,0.1};
			connectTo[]={Stryker_Cargo01,0.1};
			speed = 0.197;
			variantAfter[]={5,5,5};
		};
		class KIA_Tractor_Driver: DefaultDie
		{
			actions = DeadActions;
			file=AnimPath\KIA_Tractor_Driver.rtm;
			speed = 0.5;
			looped=false;
			terminal = 1;
			connectTo[] = {DeadState,0.1};
			soundEnabled=0;
		};
		class Tractor_Driver: Crew
		{
			file=AnimPath\Tractor_Driver.rtm;
			interpolateTo[]={KIA_Tractor_Driver,1};
		};
		class KIA_Truck_Driver: DefaultDie
		{
			actions = DeadActions;
			speed = 0.5;
			looped=false;
			terminal = 1;
			file=AnimPath\KIA_Truck_Driver.rtm;
			connectTo[] = {DeadState,0.1};
		};
		class Truck_Driver: Crew
		{
			file=AnimPath\Truck_Driver.rtm;
			interpolateTo[]={KIA_Truck_Driver,1};
		};
		class KIA_Truck_Cargo01: KIA_Truck_Driver
		{
			file=AnimPath\KIA_Truck_Cargo01.rtm;
		};
		class Truck_Gunner: Crew
		{
			file=AnimPath\Truck_Gunner.rtm;
			interpolateTo[]={KIA_Truck_Cargo01,1};
		};
		class Truck_Cargo01: Crew
		{
			file=AnimPath\Truck_Cargo01.rtm;
			interpolateTo[]={KIA_Truck_Cargo01,1};
		};
		class KIA_Truck_Cargo02: KIA_Truck_Driver
		{
			file=AnimPath\KIA_Truck_Cargo02.rtm;
		};
		class Truck_Cargo02: Crew
		{
			file=AnimPath\Truck_Cargo02_V0.rtm;
			interpolateTo[]={KIA_Truck_Cargo02,0.1};
			connectTo[]={Truck_Cargo02,0.1,Truck_Cargo02_V1,0.1,Truck_Cargo02_V2,0.1,Truck_Cargo02_V3,0.1,Truck_Cargo02_V4,0.1};
			equivalentTo="Truck_Cargo02";
			variantsAI[]={Truck_Cargo02,0.6,Truck_Cargo02_V1,0.1,Truck_Cargo02_V2,0.1,Truck_Cargo02_V3,0.1,Truck_Cargo02_V4,0.1};
			variantAfter[]={5,10,20};
      head = headNo;
			speed = 0.3;
		};
		class Truck_Cargo02_V1: Truck_Cargo02
		{
			file=AnimPath\Truck_Cargo02_V1.rtm;
			interpolateTo[]={KIA_Truck_Cargo02,0.1};
			connectTo[]={Truck_Cargo02,0.1};
			speed = 0.197;
			variantAfter[]={5,5,5};
		};
		class Truck_Cargo02_V2: Truck_Cargo02
		{
			file=AnimPath\Truck_Cargo02_V2.rtm;
			interpolateTo[]={KIA_Truck_Cargo02,0.1};
			connectTo[]={Truck_Cargo02,0.1};
			speed = 0.517;
			variantAfter[]={2,2,2};
		};
		class Truck_Cargo02_V3: Truck_Cargo02
		{
			file=AnimPath\Truck_Cargo02_V3.rtm;
			interpolateTo[]={KIA_Truck_Cargo02,0.1};
			connectTo[]={Truck_Cargo02,0.1};
			speed = 0.24;
			variantAfter[]={4,4,4};
		};
		class Truck_Cargo02_V4: Truck_Cargo02_V1
		{
			file=AnimPath\Truck_Cargo02_V4.rtm;
			interpolateTo[]={KIA_Truck_Cargo02,0.1};
			connectTo[]={Truck_Cargo02,0.1};
			speed = 0.197;
		};
		class KIA_Truck_Cargo03: KIA_Truck_Driver
		{
			file=AnimPath\KIA_Truck_Cargo03.rtm;
		};
		class Truck_Cargo03: Crew
		{
			file=AnimPath\Truck_Cargo03_V0.rtm;
			interpolateTo[]={KIA_Truck_Cargo03,0.1};
			connectTo[]={Truck_Cargo03,0.1,Truck_Cargo03_V1,0.1,Truck_Cargo03_V2,0.1};
			equivalentTo="Truck_Cargo03";
			variantsAI[]={Truck_Cargo03,0.6,Truck_Cargo03_V1,0.2,Truck_Cargo03_V2,0.2};
			variantAfter[]={5,10,20};
      head = headNo;
			speed = 0.3;
		};
		class Truck_Cargo03_V1: Truck_Cargo03
		{
			file=AnimPath\Truck_Cargo03_V1.rtm;
			interpolateTo[]={KIA_Truck_Cargo03,0.1};
			connectTo[]={Truck_Cargo03,0.1};
			variantAfter[]={5,5,5};
			speed = 0.197;
		};
		class Truck_Cargo03_V2: Truck_Cargo03
		{
			file=AnimPath\Truck_Cargo03_V2.rtm;
			interpolateTo[]={KIA_Truck_Cargo03,0.1};
			connectTo[]={Truck_Cargo03,0.1};
			variantAfter[]={4,4,4};
			speed = 0.238;
		};
		class KIA_Truck_Cargo04: KIA_Truck_Driver
		{
			file=AnimPath\KIA_Truck_Cargo04.rtm;
		};
		class Truck_Cargo04: Crew
		{
			file=AnimPath\Truck_Cargo04_V0.rtm;
			interpolateTo[]={KIA_Truck_Cargo04,0.1};
			connectTo[]={Truck_Cargo04,0.1,Truck_Cargo04_V1,0.1,Truck_Cargo04_V2,0.1,Truck_Cargo04_V3,0.1};
			equivalentTo="Truck_Cargo04";
			variantsAI[]={Truck_Cargo04,0.6,Truck_Cargo04_V1,0.13,Truck_Cargo04_V2,0.13,Truck_Cargo04_V3,0.13};
			variantAfter[]={5,10,20};
      head = headNo;
			speed = 0.3;
		};
		class Truck_Cargo04_V1: Truck_Cargo04
		{
			file=AnimPath\Truck_Cargo04_V1.rtm;
			interpolateTo[]={KIA_Truck_Cargo04,0.1};
			connectTo[]={Truck_Cargo04,0.1};
			variantAfter[]={7,7,7};
			speed = 0.141;
		};
		class Truck_Cargo04_V2: Truck_Cargo04
		{
			file=AnimPath\Truck_Cargo04_V2.rtm;
			interpolateTo[]={KIA_Truck_Cargo04,0.1};
			connectTo[]={Truck_Cargo04,0.1};
			variantAfter[]={5,5,5};
			speed = 0.196;
		};
		class Truck_Cargo04_V3: Truck_Cargo04
		{
			file=AnimPath\Truck_Cargo04_V3.rtm;
			interpolateTo[]={KIA_Truck_Cargo04,0.1};
			connectTo[]={Truck_Cargo04,0.1};
			variantAfter[]={5,5,5};
			speed = 0.195;
		};
		class KIA_UAZ_Driver: DefaultDie
		{
			actions = DeadActions;
			file=AnimPath\KIA_UAZ_Driver.rtm;
			speed = 0.5;
			looped=false;
			terminal = 1;
			connectTo[] = {DeadState,0.1};
			soundEnabled=0;
		};
		class UAZ_Driver: Crew
		{
			file=AnimPath\UAZ_Driver.rtm;
			interpolateTo[]={KIA_UAZ_Driver,1};
		};
		class UAZ_Gunner01: Crew
		{
			file=AnimPath\UAZ_Gunner01.rtm;
			interpolateTo[]={Stryker_Dead,1};		//die outside vehicle
		};
		class UAZ_Gunner02: Crew
		{
			file=AnimPath\UAZ_Gunner02.rtm;
			interpolateTo[]={Stryker_Dead,1};		//die outside vehicle
		};
		class KIA_UAZ_Cargo01: DefaultDie
		{
			actions = DeadActions;
			file=AnimPath\KIA_UAZ_Cargo01.rtm;
			speed = 0.5;
			looped=false;
			terminal = 1;
			connectTo[] = {DeadState,0.1};
			soundEnabled=0;
		};
		class UAZ_Cargo01: Crew
		{
			file=AnimPath\UAZ_Cargo01_V0.rtm;
			interpolateTo[]={KIA_UAZ_Cargo01,0.1};
			connectTo[]={UAZ_Cargo01,0.1,UAZ_Cargo01_V1,0.1,UAZ_Cargo01_V2,0.1,UAZ_Cargo01_V3,0.1};
			equivalentTo="UAZ_Cargo01";
			variantsAI[]={UAZ_Cargo01,0.6,UAZ_Cargo01_V1,0.1,UAZ_Cargo01_V2,0.15,UAZ_Cargo01_V3,0.07};
			variantAfter[]={5,10,20};
      head = headNo;
			speed = 0.3;
		};
		class UAZ_Cargo01_V1:UAZ_Cargo01
		{
			file=AnimPath\UAZ_Cargo01_V1.rtm;
			interpolateTo[]={KIA_UAZ_Cargo01,0.1};
			connectTo[]={UAZ_Cargo01,0.1};
			variantAfter[]={4,4,4};
			speed = 0.246;
		};
		class UAZ_Cargo01_V2:UAZ_Cargo01
		{
			file=AnimPath\UAZ_Cargo01_V2.rtm;
			interpolateTo[]={KIA_UAZ_Cargo01,0.1};
			connectTo[]={UAZ_Cargo01,0.1};
			variantAfter[]={2.5,2.5,2.5};
			speed = 0.39;
		};
		class UAZ_Cargo01_V3:UAZ_Cargo01
		{
			file=AnimPath\UAZ_Cargo01_V3.rtm;
			interpolateTo[]={KIA_UAZ_Cargo01,0.1};
			connectTo[]={UAZ_Cargo01,0.1};
			variantAfter[]={5,5,5};
			speed = 0.197;
		};
		class KIA_AH1Z_Pilot:DefaultDie
		{
			actions = DeadActions;
			speed = 0.5;
			looped=false;
			terminal = 1;
			file=AnimPath\KIA_AH1Z_Pilot.rtm;
			connectTo[] = {DeadState,0.1};
		};
		class AH1Z_Pilot: Crew
		{
			file=AnimPath\AH1Z_Pilot.rtm;
			interpolateTo[]={KIA_AH1Z_Pilot,1};
		};
		class KIA_AH1Z_Gunner:DefaultDie
		{
			actions = DeadActions;
			speed = 0.5;
			looped=false;
			terminal = 1;
			file=AnimPath\KIA_AH1Z_Gunner.rtm;
			connectTo[] = {DeadState,0.1};
		};
		class AH1Z_Gunner: Crew
		{
			file=AnimPath\AH1Z_Gunner.rtm;
			interpolateTo[]={KIA_AH1Z_Gunner,1};
		};
		class KIA_AH6_Pilot:DefaultDie
		{
			actions = DeadActions;
			speed = 0.5;
			looped=false;
			terminal = 1;
			file=AnimPath\KIA_AH6_Pilot.rtm;
			connectTo[] = {DeadState,0.1};
		};
		class AH6_Pilot: Crew
		{
			file=AnimPath\AH6_Pilot.rtm;
			interpolateTo[]={KIA_AH6_Pilot,1};
		};
		class KIA_AH6_Gunner:DefaultDie
		{
			actions = DeadActions;
			speed = 0.5;
			looped=false;
			terminal = 1;
			file=AnimPath\KIA_AH6_gunner.rtm;
			connectTo[] = {DeadState,0.1};
		};
		class AH6_Gunner: Crew
		{
			file=AnimPath\AH6_Gunner.rtm;
			interpolateTo[]={KIA_AH6_Gunner,1};
		};
		class MH6_Cargo01: Crew
		{
			file=AnimPath\MH6_Cargo01.rtm;
			interpolateTo[]={AH1Z_Dead,1}; //needs to be ejected from vehicle after death
			speed=0.09174;
		};
		class MH6_Cargo02: Crew
		{
			file=AnimPath\MH6_Cargo02.rtm;
			interpolateTo[]={AH1Z_Dead,1}; //needs to be ejected from vehicle after death
			speed=0.1083;
		};
		class MH6_Cargo03: Crew
		{
			file=AnimPath\MH6_Cargo03.rtm;
			interpolateTo[]={AH1Z_Dead,1}; //needs to be ejected from vehicle after death
			speed=0.1038;
		};
		class KIA_UH60_Pilot: DefaultDie
		{
			actions = DeadActions;
			file=AnimPath\KIA_UH60_Pilot.rtm;
			speed = 0.5;
			looped=false;
			terminal = 1;
			soundEnabled=0;
			connectTo[] = {DeadState,0.1};
		};
		class UH60_Pilot: Crew
		{
			file=AnimPath\UH60_Pilot.rtm;
			interpolateTo[]={KIA_UH60_Pilot,1};
		};
		class KIA_UH60_Gunner: DefaultDie
		{
			actions = DeadActions;
			file=AnimPath\KIA_UH60_Gunner.rtm;
			speed = 0.5;
			looped=false;
			terminal = 1;
			soundEnabled=0;
			connectTo[] = {DeadState,0.1};
		};
		class UH60_Gunner: Crew
		{
			file=AnimPath\UH60_Gunner.rtm;
			interpolateTo[]={KIA_UH60_Gunner,1};
		};
		class KIA_UH60_Cargo01: DefaultDie
		{
			actions = DeadActions;
			file=AnimPath\KIA_UH60_Cargo01.rtm;
			speed = 0.5;
			looped=false;
			terminal = 1;
			soundEnabled=0;
			connectTo[] = {DeadState,0.1};
		};
		class UH60_Cargo01: Crew
		{
			file=AnimPath\UH60_Cargo01.rtm;
			interpolateTo[]={KIA_UH60_Cargo01,1};
		};
		class KIA_UH60_Cargo02: DefaultDie
		{
			actions = DeadActions;
			file=AnimPath\KIA_UH60_Cargo02.rtm;
			speed = 0.5;
			looped=false;
			terminal = 1;
			soundEnabled=0;
			connectTo[] = {DeadState,0.1};
		};
		class UH60_Cargo02: Crew
		{
			file=AnimPath\UH60_Cargo02_V0.rtm;
			interpolateTo[]={KIA_UH60_Cargo02,1};
			connectTo[]={UH60_Cargo02,0.1,UH60_Cargo02_V1,0.1,UH60_Cargo02_V2,0.1,UH60_Cargo02_V3,0.1,UH60_Cargo02_V4,0.1,UH60_Cargo02_V5,0.1};
			equivalentTo="UH60_Cargo02";
			variantsAI[]={UH60_Cargo02,0.5,UH60_Cargo02_V1,0.1,UH60_Cargo02_V2,0.1,UH60_Cargo02_V3,0.1,UH60_Cargo02_V4,0.1,UH60_Cargo02_V5,0.1};
			variantAfter[]={5,10,20};
			speed=0.3;
		};
		class UH60_Cargo02_V1: UH60_Cargo02
		{
			file=AnimPath\UH60_Cargo02_V1.rtm;
			interpolateTo[]={KIA_UH60_Cargo02,1};
			connectTo[]={UH60_Cargo02,0.1};
			speed = 0.197;
			variantAfter[]={5,5,5};
		};
		class UH60_Cargo02_V2: UH60_Cargo02
		{
			file=AnimPath\UH60_Cargo02_V2.rtm;
			interpolateTo[]={KIA_UH60_Cargo02,1};
			connectTo[]={UH60_Cargo02,0.1};
			speed = 0.294;
			variantAfter[]={3.5,3.5,3.5};
		};
		class UH60_Cargo02_V3: UH60_Cargo02
		{
			file=AnimPath\UH60_Cargo02_V3.rtm;
			interpolateTo[]={KIA_UH60_Cargo02,1};
			connectTo[]={UH60_Cargo02,0.1};
			speed = 0.299;
			variantAfter[]={3.5,3.5,3.5};
		};
		class UH60_Cargo02_V4: UH60_Cargo02
		{
			file=AnimPath\UH60_Cargo02_V4.rtm;
			interpolateTo[]={KIA_UH60_Cargo02,1};
			connectTo[]={UH60_Cargo02,0.1};
			speed = 0.395;
			variantAfter[]={2.5,2.5,2.5};
		};
		class UH60_Cargo02_V5: UH60_Cargo02
		{
			file=AnimPath\UH60_Cargo02_V5.rtm;
			interpolateTo[]={KIA_UH60_Cargo02,1};
			connectTo[]={UH60_Cargo02,0.1};
			speed = 0.263;
			variantAfter[]={4,4,4};
		};
		class KIA_AV8B_Pilot: DefaultDie
		{
			actions = DeadActions;
			file=AnimPath\KIA_AV8B_Pilot.rtm;
			speed = 0.5;
			looped=false;
			terminal = 1;
			soundEnabled=0;
			connectTo[] = {DeadState,0.1};
		};
		class AV8B_Pilot: Crew
		{
			file=AnimPath\AV8B_Pilot.rtm;
			interpolateTo[]={KIA_AV8B_Pilot,1};
		};
		class KIA_KA50_Pilot: DefaultDie
		{
			actions = DeadActions;
			file=AnimPath\KIA_KA50_Pilot.rtm;
			speed = 0.5;
			looped=false;
			terminal = 1;
			soundEnabled=0;
			connectTo[] = {DeadState,0.1};
		};
		class KA50_Pilot: Crew
		{
			file=AnimPath\KA50_Pilot.rtm;
			interpolateTo[]={KIA_KA50_Pilot,1};
		};
		class KIA_Mi17_Pilot: DefaultDie
		{
			actions = DeadActions;
			file=AnimPath\KIA_Mi17_Pilot.rtm;
			speed = 0.5;
			looped=false;
			terminal = 1;
			soundEnabled=0;
			connectTo[] = {DeadState,0.1};
		};
		class Mi17_Pilot: Crew
		{
			file=AnimPath\Mi17_Pilot.rtm;
			interpolateTo[]={KIA_Mi17_Pilot,1};
		};
		class KIA_Mi17_Gunner: DefaultDie
		{
			actions = DeadActions;
			file=AnimPath\KIA_Mi17_Gunner.rtm;
			speed = 0.5;
			looped=false;
			terminal = 1;
			soundEnabled=0;
			connectTo[] = {DeadState,0.1};
		};
		class Mi17_Gunner: Crew
		{
			file=AnimPath\Mi17_Gunner.rtm;
			interpolateTo[]={KIA_Mi17_Gunner,1};
		};

	};
	#undef AnimPath
};