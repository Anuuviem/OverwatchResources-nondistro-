#define true 1
#define false 0

#define VSoft 0
#define VArmor 1
#define VAir 2

#define private 0
#define protected 1
#define public 2

#define TEast 0
#define TWest 1
#define TGuerrila 2
#define TCivilian 3
#define TSideUnknown 4
#define TEnemy 5
#define TFriendly 6
#define TLogic 7

#define ReadAndWrite 0
#define ReadAndCreate 1
#define ReadOnly 2
#define ReadOnlyVerified 3

class CfgPatches {

	class Danish_Army_UNITSPEC {
		units[] = {"DANEG", "DANEG1", "DANEG2", "DANEG3", "DANEG4", "DANEG5", "DANEG6", "DANEG7", "DANEG8", "DANEG9", "DANEG10"};
                weapons[] = {};
		requiredVersion = 0.100000;
		requiredAddons[] = {"CAData", "CACharacters", "CACharacters2", "CAWeapons", "CAWeapons_Colt1911"};
	};
};

class CfgFactionClasses {
	class Danish_Army
	{
		displayName = "Danish_Army";
		priority = 100;
		side = 1;
	};
};

class CfgVehicleClasses
{
	class Danish_Temperate
	{
		displayName = "Danish_Temperate";
	};
};

class CfgVehicles {

	/*extern*/ class USMC_Soldier;
	class DANEG: USMC_Soldier {
		displayName = "Rifleman";
		model = "\a2020_danetmp\usmc_soldier";
		faction = "Danish_Army";
		vehicleClass = "Danish_Temperate";
		weapons[] = {"m16a4","NVGoggles","Colt1911","Throw","Put","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911"};
		respawnweapons[] = {"m16a4","NVGoggles","Colt1911","Throw","Put","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911"};
                enableGPS = 1;
                identityTypes[] = {"Head_CZ", "FR_Glasses"};

		class Wounds {
			tex[] = {};
			mat[] = {};
		};
		/*extern*/ class EventHandlers;
	};

	/*extern*/ class USMC_Soldier_TL;
	class DANEG1: USMC_Soldier_TL {
		displayName = "Squad Leader";
		model = "\a2020_danetmp\usmc_soldier_tl";
		faction = "Danish_Army";
		vehicleClass = "Danish_Temperate";
		weapons[] = {"m16a4","NVGoggles","Binocular","Colt1911","Throw","Put","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911"};
		respawnweapons[] = {"m16a4","NVGoggles","Binocular","Colt1911","Throw","Put","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911"};
                enableGPS = 1;
                identityTypes[] = {"Head_CZ", "FR_Glasses"};

		class Wounds {
			tex[] = {};
			mat[] = {};
		};
		/*extern*/ class EventHandlers;
	};

	/*extern*/ class USMC_Soldier_MG;
	class DANEG2: USMC_Soldier_MG {
		displayName = "Squad Support";
		model = "\a2020_danetmp\usmc_soldier_mg";
		faction = "Danish_Army";
		vehicleClass = "Danish_Temperate";
		enableGPS = 1;
                weapons[] = {"mg51_eotech","NVGoggles","Binocular","Colt1911","Throw","Put","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"120Rnd_75x55_GP11", "120Rnd_75x55_GP11", "120Rnd_75x55_GP11", "120Rnd_75x55_GP11", "120Rnd_75x55_GP11", "120Rnd_75x55_GP11", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911"};
		respawnweapons[] = {"mg51_eotech","NVGoggles","Binocular","Colt1911","Throw","Put","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"120Rnd_75x55_GP11", "120Rnd_75x55_GP11", "120Rnd_75x55_GP11", "120Rnd_75x55_GP11", "120Rnd_75x55_GP11", "120Rnd_75x55_GP11", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911"};
                identityTypes[] = {"Head_CZ", "FR_Glasses"};

		class Wounds {
			tex[] = {};
			mat[] = {};
		};
		/*extern*/ class EventHandlers;
	};

	/*extern*/ class USMC_Soldier_AT;
	class DANEG3: USMC_Soldier_AT {
		displayName = "AT Rifleman";
		model = "\a2020_danetmp\usmc_soldier_mg";
		faction = "Danish_Army";
		vehicleClass = "Danish_Temperate";
		weapons[] = {"m16a4","Colt1911","ItemGPS","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","M136"};
		magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "M136", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911"};
		respawnweapons[] = {"m16a4","Colt1911","ItemGPS","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio", "M136"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "M136", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911"};
                enableGPS = 1;
                identityTypes[] = {"Head_CZ", "FR_Glasses"};

		class Wounds {
			tex[] = {};
			mat[] = {};
		};
		/*extern*/ class EventHandlers;
	};

	/*extern*/ class USMC_Soldier2 ;
	class DANEG4: USMC_Soldier2 {
		displayName = "Close Support";
		model = "\a2020_danetmp\usmc_soldier";
		faction = "Danish_Army";
		vehicleClass = "Danish_Temperate";
		enableGPS = 1;
                identityTypes[] = {"Head_CZ", "FR_Glasses"};

		class Wounds {
			tex[] = {};
			mat[] = {};
		};
		/*extern*/ class EventHandlers;
	};

	/*extern*/ class USMC_Soldier_Light;
	class DANEG5: USMC_Soldier_Light {
		displayName = "Unarmed";
		model = "\a2020_danetmp\usmc_soldier";
		faction = "Danish_Army";
		vehicleClass = "Danish_Temperate";
		enableGPS = 1;
                identityTypes[] = {"Head_CZ", "FR_Glasses"};

		class Wounds {
			tex[] = {};
			mat[] = {};
		};
		/*extern*/ class EventHandlers;
	};

	/*extern*/ class USMC_SoldierS_Engineer;
	class DANEG6: USMC_SoldierS_Engineer {
		displayName = "Engineer";
		model = "\a2020_danetmp\usmc_soldier";
		faction = "Danish_Army";
		vehicleClass = "Danish_Temperate";
		enableGPS = 1;
                identityTypes[] = {"Head_CZ", "FR_Glasses"};

		class Wounds {
			tex[] = {};
			mat[] = {};
		};
		/*extern*/ class EventHandlers;
	};
        
        /*extern*/ class FR_Assault_R;
	class DANEG7: FR_Assault_R {
		displayName = "LSV Rifleman";
		model = "\a2020_danetmp\usmc_soldier";
		faction = "Danish_Army";
		vehicleClass = "Danish_Temperate";
		weapons[] = {"m16a4_acg","NVGoggles","Colt1911","Throw","Put","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911"};
		respawnweapons[] = {"m16a4_acg","NVGoggles","Colt1911","Throw","Put","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911"};
                enableGPS = 1;
                identityTypes[] = {"Head_CZ", "FR_Glasses"};

		class Wounds {
			tex[] = {};
			mat[] = {};
		};
		/*extern*/ class EventHandlers;
	};  


        /*extern*/ class FR_Assault_GL;
	class DANEG8: FR_Assault_GL {
		displayName = "Grenadier";
		model = "\a2020_danetmp\usmc_soldier";
		faction = "Danish_Army";
		vehicleClass = "Danish_Temperate";
		enableGPS = 1;
                identityTypes[] = {"Head_CZ", "FR_Glasses"};

		class Wounds {
			tex[] = {};
			mat[] = {};
		};
		/*extern*/ class EventHandlers;
	};

        /*extern*/ class USMC_Soldier_Medic;
	class DANEG9: USMC_Soldier_Medic {
		displayName = "Medic";
		model = "\a2020_danetmp\usmc_soldier_tl";
		faction = "Danish_Army";
		vehicleClass = "Danish_Temperate";
		weapons[] = {"m16a4","NVGoggles","Colt1911","Throw","Put","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911"};
		respawnweapons[] = {"m16a4","NVGoggles","Colt1911","Throw","Put","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911"};
                enableGPS = 1;
                identityTypes[] = {"Head_CZ", "FR_Glasses"};

		class Wounds {
			tex[] = {};
			mat[] = {};
		};
		/*extern*/ class EventHandlers;
	};

        /*extern*/ class USMC_SoldierM_Marksman;
	class DANEG10: USMC_SoldierM_Marksman {
		displayName = "Marksman";
		model = "\a2020_danetmp\usmc_soldier_co";
		faction = "Danish_Army";
		vehicleClass = "Danish_Temperate";
		enableGPS = 1;
                identityTypes[] = {"Head_CZ", "FR_Glasses"};

		class Wounds {
			tex[] = {};
			mat[] = {};
		};
		/*extern*/ class EventHandlers;
	};
};

class CfgGroups {
	class West {
		name=$STR_WEST;
		
		class Danish_Army {
			name="Danish_Army";
			
			class Infantry {
				name="Danish_Army";
				
				class Temp_Squad {
					name="Temp_Squad";
					faction="Danish_Army";
					rarityGroup=0.8;
					
					class Unit0 {
						side=1;
						vehicle="DANEG1";
						rank=LIEUTENANT;
						position[]={0, 5, 0};
					};
					
					class Unit1 {
						side=1;
						vehicle="DANEG";
						rank=SERGEANT;
						position[]={3, 0, 0};
					};
					
					class Unit2 {
						side=1;
						vehicle="DANEG3";
						rank=SERGEANT;
						position[]={5, 0, 0};
					};
					
					class Unit3 {
						side=1;
						vehicle="DANEG9";
						rank=SERGEANT;
						position[]={7, 0, 0};
					};
					
					class Unit4 {
						side=1;
						vehicle="DANEG7";
						rank=SERGEANT;
						position[]={9, 0, 0};
					};
					
					class Unit5 {
						side=1;
						vehicle="DANEG7";
						rank=SERGEANT;
						position[]={11, 0, 0};
					};
                                        
                                     
				};	
      };
    };
  };
};

