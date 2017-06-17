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

	class USSOF_US_Navy_SEALs {
		units[] = {"USSOF_US_Navy_SEALs_Leader", "USSOF_US_Navy_SEALs_Grenadier", "USSOF_US_Navy_SEALs_Machinegunner", "USSOF_US_Navy_SEALs_Antitank", "USSOF_US_Navy_SEALs_Corpsman", "USSOF_US_Navy_SEALs_Marksman", "USSOF_US_Navy_SEALs_Sapper", "USSOF_US_Navy_SEALs_Saboteur", "USSOF_US_Navy_SEALs_Saboteur_SD"};
		weapons[] = {"USSOF_M16A3GL", "USSOF_Mk_48"};
		requiredVersion = 0.100000;
		requiredAddons[] = {"CAData", "CACharacters", "CACharacters2", "CAWeapons", "CAWeapons_Colt1911"};
	};
};

class CfgWeapons {

	/*extern*/ class M16A2;
	/*extern*/ class M203Muzzle;

	class USSOF_M16A3GL: M16A2 {
		displayName = "M16A3 M203";
		model = "\ca\weapons\m16\m16a4_gl";
		muzzles[] = {"this", "M203Muzzle"};
		picture = "\CA\weapons\data\equip\w_m16m203_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\M16GL.rtm"};
		dexterity = 1.460000;
		modes[] = {"M16A3_Single", "M16A3_FullAuto"};

		/*extern*/ class Single;
		/*extern*/ class FullAuto;

		class M16A3_Single: Single {
			displayName = "$STR_DN_MODE_SEMIAUTO";
			begin1[] = {"ca\sounds\weapons\rifles\m16_single1", 1.778279, 1, 1000};
			begin2[] = {"ca\sounds\weapons\rifles\m16_single2", 1.778279, 1, 1000};
			soundBegin[] = {"begin1", 0.500000, "begin2", 0.500000};
			reloadTime = 0.075000;
			recoil = "recoil_single_primary_3outof10";
			recoilProne = "recoil_single_primary_prone_3outof10";
			dispersion = 0.001000;
			minRange = 2;
			minRangeProbab = 0.300000;
			midRange = 250;
			midRangeProbab = 0.700000;
			maxRange = 600;
			maxRangeProbab = 0.050000;
		};

		class M16A3_FullAuto: FullAuto {
			displayName = "$STR_DN_MODE_FULLAUTO";
			begin1[] = {"ca\sounds\weapons\rifles\m16_single1", 1.778279, 1, 1000};
			begin2[] = {"ca\sounds\weapons\rifles\m16_single2", 1.778279, 1, 1000};
			soundBegin[] = {"begin1", 0.500000, "begin2", 0.500000};
			reloadTime = 0.090000;
			recoil = "recoil_auto_primary_3outof10";
			recoilProne = "recoil_auto_primary_prone_3outof10";
			dispersion = 0.001750;
			minRange = 0;
			minRangeProbab = 0.100000;
			midRange = 30;
			midRangeProbab = 0.700000;
			maxRange = 150;
			maxRangeProbab = 0.050000;
		};

		class Library {
			libTextDesc = "M16A3 M203";
		};
		descriptionShort = "$STR_DSS_M16A2_GL";
	};

	/*extern*/ class Mk_48;
	class USSOF_Mk_48: Mk_48 {
		model = "\USSOF_US_Navy_SEALs\USSOF_Mk_48";
		picture = "\USSOF_US_Navy_SEALs\data\W_MK48_mod_CA.paa";
		handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\Mk48.rtm"};
		displayName = "$STR_DN_MK48";
		dexterity = 0.670000;
	};
};

class CfgFactionClasses {
	class USSOF
	{
		displayName = "USSOF";
	};
};

class CfgVehicleClasses
{
	class USSOF_US_Navy_SEALs_Men
	{
		displayName = "Men (Navy SEALs)";
	};
};

class CfgVehicles {

	/*extern*/ class FR_TL;
	class USSOF_US_Navy_SEALs_Leader: FR_TL {
		displayName = "$STR_DN_FR_TL";
		model = "\USSOF_US_Navy_SEALs\Navy_SEALs_GL";
		faction = "USSOF";
		vehicleClass = "USSOF_US_Navy_SEALs_Men";
		enableGPS = 1;
		weapons[] = {"M4A1_RCO_GL", "Colt1911", "ItemGPS", "NVGoggles", "Binocular", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "HandGrenade_West", "HandGrenade_West", "SmokeShell", "SmokeShell", "1Rnd_SmokeRed_M203", "1Rnd_SmokeGreen_M203", "FlareRed_M203", "FlareGreen_M203", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911"};
		respawnweapons[] = {"M4A1_RCO_GL", "Colt1911", "ItemGPS", "NVGoggles", "Binocular", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "1Rnd_SmokeRed_M203", "1Rnd_SmokeGreen_M203", "FlareRed_M203", "FlareGreen_M203", "HandGrenade_West", "SmokeShell", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911"};

		class Wounds {
			tex[] = {};
			mat[] = {"Ca\characters2\USMC\DATA\FR_Scout2_Body.RVmat", "Ca\characters2\USMC\DATA\W1_FR_Scout2_body.rvmat", "Ca\characters2\USMC\DATA\W2_FR_Scout2_body.rvmat", "Ca\characters2\USMC\DATA\FR_Scout2_Gear.RVmat", "Ca\characters2\USMC\DATA\W1_FR_Scout2_Gear.RVmat", "Ca\characters2\USMC\DATA\W2_FR_Scout2_Gear.RVmat"};
		};
		/*extern*/ class EventHandlers;
	};

	/*extern*/ class FR_GL;
	class USSOF_US_Navy_SEALs_Grenadier: FR_GL {
		displayName = "$STR_DN_GRENADIER";
		model = "\USSOF_US_Navy_SEALs\Navy_SEALs_GL";
		faction = "USSOF";
		vehicleClass = "USSOF_US_Navy_SEALs_Men";
		enableGPS = 1;
		weapons[] = {"M4A1_HWS_GL", "Colt1911", "ItemGPS", "NVGoggles", "Binocular", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "HandGrenade_West", "HandGrenade_West", "SmokeShell", "SmokeShellPurple", "1Rnd_HE_M203", "1Rnd_HE_M203", "1Rnd_HE_M203", "1Rnd_HE_M203", "1Rnd_HE_M203", "1Rnd_Smoke_M203", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911"};
		respawnweapons[] = {"M4A1_HWS_GL", "Colt1911", "ItemGPS", "NVGoggles", "Binocular", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "HandGrenade_West", "SmokeShell", "SmokeShellPurple", "1Rnd_HE_M203", "1Rnd_HE_M203", "1Rnd_HE_M203", "1Rnd_Smoke_M203", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911"};

		class Wounds {
			tex[] = {};
			mat[] = {"Ca\characters2\USMC\DATA\FR_Scout2_Body.RVmat", "Ca\characters2\USMC\DATA\W1_FR_Scout2_body.rvmat", "Ca\characters2\USMC\DATA\W2_FR_Scout2_body.rvmat", "Ca\characters2\USMC\DATA\FR_Scout2_Gear.RVmat", "Ca\characters2\USMC\DATA\W1_FR_Scout2_Gear.RVmat", "Ca\characters2\USMC\DATA\W2_FR_Scout2_Gear.RVmat"};
		};
		/*extern*/ class EventHandlers;
	};

	/*extern*/ class FR_AR;
	class USSOF_US_Navy_SEALs_Machinegunner: FR_AR {
		displayName = "$STR_DN_MGUNNER";
		model = "\USSOF_US_Navy_SEALs\Navy_SEALs_Hvy";
		faction = "USSOF";
		vehicleClass = "USSOF_US_Navy_SEALs_Men";
		enableGPS = 1;
		weapons[] = {"USSOF_Mk_48", "Colt1911", "ItemGPS", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "Binocular", "NVgoggles"};
		magazines[] = {"100Rnd_762x51_M240", "100Rnd_762x51_M240", "100Rnd_762x51_M240", "100Rnd_762x51_M240", "HandGrenade_West", "HandGrenade_West", "SmokeShell", "SmokeShell", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911"};
		respawnweapons[] = {"USSOF_Mk_48", "Colt1911", "ItemGPS", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "Binocular", "NVgoggles"};
		respawnMagazines[] = {"100Rnd_762x51_M240", "100Rnd_762x51_M240", "HandGrenade_West", "SmokeShell", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911"};

		class Wounds {
			tex[] = {};
			mat[] = {"Ca\characters2\USMC\DATA\FR_Scout1_Body.RVmat", "Ca\characters2\USMC\DATA\W1_FR_Scout1_body.rvmat", "Ca\characters2\USMC\DATA\W2_FR_Scout1_body.rvmat", "Ca\characters2\USMC\DATA\FR_Scout1_Gear.RVmat", "Ca\characters2\USMC\DATA\W1_FR_Scout1_Gear.RVmat", "Ca\characters2\USMC\DATA\W2_FR_Scout1_Gear.RVmat"};
		};
		/*extern*/ class EventHandlers;
	};

	/*extern*/ class FR_R;
	class USSOF_US_Navy_SEALs_Antitank: FR_R {
		displayName = "Anti-tank Rifleman";
		model = "\USSOF_US_Navy_SEALs\Navy_SEALs_AT";
		faction = "USSOF";
		vehicleClass = "USSOF_US_Navy_SEALs_Men";
		enableGPS = 1;
		weapons[] = {"M4A1_AIM", "Colt1911", "ItemGPS", "NVGoggles", "Binocular", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "M136"};
		magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "M136", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911"};
		respawnweapons[] = {"M4A1_AIM", "Colt1911", "ItemGPS", "NVGoggles", "Binocular", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "M136"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "M136", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911"};

		class Wounds {
			tex[] = {};
			mat[] = {"Ca\characters2\USMC\DATA\FR_Scout3_Body.RVmat", "Ca\characters2\USMC\DATA\W1_FR_Scout3_body.rvmat", "Ca\characters2\USMC\DATA\W2_FR_Scout3_body.rvmat", "Ca\characters2\USMC\DATA\FR_Scout3_Gear.RVmat", "Ca\characters2\USMC\DATA\W1_FR_Scout3_Gear.RVmat", "Ca\characters2\USMC\DATA\W2_FR_Scout3_Gear.RVmat"};
		};
		/*extern*/ class EventHandlers;
	};

	/*extern*/ class FR_Corpsman;
	class USSOF_US_Navy_SEALs_Corpsman: FR_Corpsman {
		displayName = "$STR_DN_Medic";
		model = "\USSOF_US_Navy_SEALs\Navy_SEALs_Med";
		faction = "USSOF";
		vehicleClass = "USSOF_US_Navy_SEALs_Men";
		enableGPS = 1;
		weapons[] = {"M4A1", "NVGoggles", "ItemGPS", "Colt1911", "Binocular", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "SmokeShell", "SmokeShellRed", "SmokeShellGreen", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911"};
		respawnweapons[] = {"M4A1", "NVGoggles", "ItemGPS", "Colt1911", "Binocular", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "SmokeShell", "SmokeShellRed", "SmokeShellGreen", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911"};

		class Wounds {
			tex[] = {};
			mat[] = {"Ca\characters2\USMC\DATA\FR_Corpsman_Body.RVmat", "Ca\characters2\USMC\DATA\W1_FR_Corpsman_body.rvmat", "Ca\characters2\USMC\DATA\W2_FR_Corpsman_body.rvmat", "Ca\characters2\USMC\DATA\FR_Corpsman_Gear.RVmat", "Ca\characters2\USMC\DATA\W1_FR_Corpsman_Gear.RVmat", "Ca\characters2\USMC\DATA\W2_FR_Corpsman_Gear.RVmat"};
		};
		/*extern*/ class EventHandlers;
	};

	/*extern*/ class FR_Marksman;
	class USSOF_US_Navy_SEALs_Marksman: FR_Marksman {
		displayName = "$STR_DN_FR_MARKSMAN";
		model = "\USSOF_US_Navy_SEALs\Navy_SEALs_MK";
		faction = "USSOF";
		vehicleClass = "USSOF_US_Navy_SEALs_Men";
		enableGPS = 1;
		weapons[] = {"M4SPR", "Colt1911", "ItemGPS", "NVGoggles", "Binocular", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		magazines[] = {"20Rnd_556x45_Stanag", "20Rnd_556x45_Stanag", "20Rnd_556x45_Stanag", "20Rnd_556x45_Stanag", "20Rnd_556x45_Stanag", "20Rnd_556x45_Stanag", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911", "HandGrenade_West", "SmokeShell", "SmokeShellYellow", "SmokeShellPurple"};
		respawnweapons[] = {"M4SPR", "Colt1911", "ItemGPS", "NVGoggles", "Binocular", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnMagazines[] = {"20Rnd_556x45_Stanag", "20Rnd_556x45_Stanag", "20Rnd_556x45_Stanag", "20Rnd_556x45_Stanag", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911", "HandGrenade_West", "SmokeShell", "SmokeShellPurple"};

		class Wounds {
			tex[] = {};
			mat[] = {"Ca\characters2\USMC\DATA\FR_Marksman_Body.RVmat", "Ca\characters2\USMC\DATA\W1_FR_Marksman_body.rvmat", "Ca\characters2\USMC\DATA\W2_FR_Marksman_body.rvmat", "Ca\characters2\USMC\DATA\FR_Marksman_Gear.RVmat", "Ca\characters2\USMC\DATA\W1_FR_Marksman_Gear.RVmat", "Ca\characters2\USMC\DATA\W2_FR_Marksman_Gear.RVmat"};
		};
		/*extern*/ class EventHandlers;
	};

	/*extern*/ class FR_Sapper;
	class USSOF_US_Navy_SEALs_Sapper: FR_Sapper {
		displayName = "Sapper";
		model = "\USSOF_US_Navy_SEALs\Navy_SEALs_Hvy";
		faction = "USSOF";
		vehicleClass = "USSOF_US_Navy_SEALs_Men";
		enableGPS = 1;
		weapons[] = {"M1014", "Colt1911", "ItemGPS", "NVGoggles", "Binocular", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		magazines[] = {"8Rnd_B_Beneli_74Slug", "8Rnd_B_Beneli_74Slug", "8Rnd_B_Beneli_74Slug", "8Rnd_B_Beneli_74Slug", "8Rnd_B_Beneli_74Slug", "8Rnd_B_Beneli_74Slug", "Mine", "Mine", "PipeBomb", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911"};
		respawnweapons[] = {"M1014", "Colt1911", "ItemGPS", "NVGoggles", "Binocular", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnMagazines[] = {"8Rnd_B_Beneli_74Slug", "8Rnd_B_Beneli_74Slug", "8Rnd_B_Beneli_74Slug", "8Rnd_B_Beneli_74Slug", "Mine", "PipeBomb", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911"};

		class Wounds {
			tex[] = {};
			mat[] = {"Ca\characters2\USMC\DATA\FR_Scout1_Body.RVmat", "Ca\characters2\USMC\DATA\W1_FR_Scout1_body.rvmat", "Ca\characters2\USMC\DATA\W2_FR_Scout1_body.rvmat", "Ca\characters2\USMC\DATA\FR_Scout1_Gear.RVmat", "Ca\characters2\USMC\DATA\W1_FR_Scout1_Gear.RVmat", "Ca\characters2\USMC\DATA\W2_FR_Scout1_Gear.RVmat"};
		};
		/*extern*/ class EventHandlers;
	};

	class USSOF_US_Navy_SEALs_Saboteur: FR_Sapper {
		displayName = "Saboteur";
		model = "\USSOF_US_Navy_SEALs\Navy_SEALs_Hvy";
		faction = "USSOF";
		vehicleClass = "USSOF_US_Navy_SEALs_Men";
		enableGPS = 1;
		weapons[] = {"MP5A5", "Colt1911", "ItemGPS", "NVGoggles", "Binocular", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		magazines[] = {"30Rnd_9x19_MP5", "30Rnd_9x19_MP5", "30Rnd_9x19_MP5", "30Rnd_9x19_MP5", "30Rnd_9x19_MP5", "30Rnd_9x19_MP5", "PipeBomb", "PipeBomb", "PipeBomb", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911"};
		respawnweapons[] = {"MP5A5", "Colt1911", "ItemGPS", "NVGoggles", "Binocular", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnMagazines[] = {"30Rnd_9x19_MP5", "30Rnd_9x19_MP5", "30Rnd_9x19_MP5", "30Rnd_9x19_MP5", "PipeBomb", "PipeBomb", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911"};

		class Wounds {
			tex[] = {};
			mat[] = {"Ca\characters2\USMC\DATA\FR_Scout1_Body.RVmat", "Ca\characters2\USMC\DATA\W1_FR_Scout1_body.rvmat", "Ca\characters2\USMC\DATA\W2_FR_Scout1_body.rvmat", "Ca\characters2\USMC\DATA\FR_Scout1_Gear.RVmat", "Ca\characters2\USMC\DATA\W1_FR_Scout1_Gear.RVmat", "Ca\characters2\USMC\DATA\W2_FR_Scout1_Gear.RVmat"};
		};
		/*extern*/ class EventHandlers;
	};

	class USSOF_US_Navy_SEALs_Saboteur_SD: FR_Sapper {
		displayName = "Saboteur (SD)";
		model = "\USSOF_US_Navy_SEALs\Navy_SEALs_Hvy";
		faction = "USSOF";
		vehicleClass = "USSOF_US_Navy_SEALs_Men";
		enableGPS = 1;
		weapons[] = {"MP5SD", "Colt1911", "ItemGPS", "NVGoggles", "Binocular", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		magazines[] = {"30Rnd_9x19_MP5SD", "30Rnd_9x19_MP5SD", "30Rnd_9x19_MP5SD", "30Rnd_9x19_MP5SD", "30Rnd_9x19_MP5SD", "30Rnd_9x19_MP5SD", "PipeBomb", "PipeBomb", "PipeBomb", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911"};
		respawnweapons[] = {"MP5SD", "Colt1911", "ItemGPS", "NVGoggles", "Binocular", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnMagazines[] = {"30Rnd_9x19_MP5SD", "30Rnd_9x19_MP5SD", "30Rnd_9x19_MP5SD", "30Rnd_9x19_MP5SD", "PipeBomb", "PipeBomb", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911"};

		class Wounds {
			tex[] = {};
			mat[] = {"Ca\characters2\USMC\DATA\FR_Scout1_Body.RVmat", "Ca\characters2\USMC\DATA\W1_FR_Scout1_body.rvmat", "Ca\characters2\USMC\DATA\W2_FR_Scout1_body.rvmat", "Ca\characters2\USMC\DATA\FR_Scout1_Gear.RVmat", "Ca\characters2\USMC\DATA\W1_FR_Scout1_Gear.RVmat", "Ca\characters2\USMC\DATA\W2_FR_Scout1_Gear.RVmat"};
		};
		/*extern*/ class EventHandlers;
	};

};

class CfgGroups 
{
	
	class West 
	{
		
		name = $STR_WEST;
		
		
		class USSOF
		{
			
			name = "USSOF";
			
			
			class Infantry 
			{
				
				name = "Infantry";
				
				
				class USSOF_US_Navy_SEALs_Team 
				{
					
					name = "SEALs Team";
					
					faction = USSOF;
					
					rarityGroup = 0.01;
					
					
					class Unit0 
					{
						
						side = TWest;
						
						vehicle = "USSOF_US_Navy_SEALs_Leader";
						
						rank = LIEUTENANT;
						
						position[] = {0, 5, 0};
					
					};
					
					
					class Unit1 
					{
						
						side = TWest;
						
						vehicle = "USSOF_US_Navy_SEALs_Grenadier";
						
						rank = SERGEANT;
						
						position[] = {3, 0, 0};
					
					};
					
					
					class Unit2 
					{
						
						side = TWest;
						
						vehicle = "USSOF_US_Navy_SEALs_Machinegunner";
						
						rank = SERGEANT;
						
						position[] = {5, 0, 0};
					
					};
					
					
					class Unit3 
					{
						
						side = TWest;
						
						vehicle = "USSOF_US_Navy_SEALs_Antitank";
						
						rank = SERGEANT;
						
						position[] = {7, 0, 0};
					
					};
					
					
					class Unit4 
					{
						
						side = TWest;
						
						vehicle = "USSOF_US_Navy_SEALs_Corpsman";
						
						rank = SERGEANT;
						
						position[] = {9, 0, 0};
					
					};

					class Unit5 
					{
						
						side = TWest;
						
						vehicle = "USSOF_US_Navy_SEALs_Marksman";
						
						rank = SERGEANT;
						
						position[] = {11, 0, 0};
					
					};

					class Unit6 
					{
						
						side = TWest;
						
						vehicle = "USSOF_US_Navy_SEALs_Saboteur";
						
						rank = SERGEANT;
						
						position[] = {13, 0, 0};
					
					};

				};
			};
		};
	};
};