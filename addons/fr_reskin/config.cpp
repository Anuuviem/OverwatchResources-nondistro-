#define TEast		0
#define TWest		1
#define TGuerrila		2
#define TCivilian		3
#define TSideUnknown		4
#define TEnemy		5
#define TFriendly		6
#define TLogic		7

#define true	1
#define false	0

class CfgFactionClasses {
	class frb {
		displayName = "Force Recon Black";
		priority = 8;
		side = 1;
	};
};

class CfgPatches {
	class frb {
		units[] = {"frb_tl","frb_tl_mask","frb_gl","frb_gl_mask","frb_mg","frb_mg_mask","frb_mark","frb_mark_mask","frb_stealth_tl","frb_stealth_rifleman","frb_stealth_sabot","frb_stealth_mark",};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {};
	};
};


class CfgVehicleClasses {
	class frb
              {
		displayName = "Black Force Recon";
	};

};

class CfgVehicles {
	class All {};
	
	class AllVehicles : All {};
	
	class Land : AllVehicles {};
	
	class Man : Land {};
	
	class Soldier : Man {};
	
	class Civilian : Man {};

	class FR_TL;	// External class reference
	
	class frb_tl : FR_TL {
		displayName = "Team Leader";
		model = "\FR_reskin\FR_diraction1";
		faceType = "Man";
		identityTypes[] = {"Head_USMC_CO", "FR_Glasses"};
                faction = "frb";
		vehicleClass = "frb";
		weapons[] = {"RH_hk416aim", M9SD, "ItemGPS", "NVGoggles", "Binocular", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "HandGrenade_West", "SmokeShellYellow", "SmokeShellPurple", "HandGrenade_West", "HandGrenade_West", "15Rnd_9x19_M9", "15Rnd_9x19_M9", "1Rnd_HE_M203", "1Rnd_HE_M203", "1Rnd_HE_M203", "1Rnd_HE_M203", "1Rnd_HE_M203", "FlareRed_M203"};
		respawnweapons[] = {"RH_hk416aim", M9SD, "ItemGPS", "NVGoggles", "Binocular", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "HandGrenade_West", "SmokeShellYellow", "SmokeShellPurple", "HandGrenade_West", "HandGrenade_West", "15Rnd_9x19_M9", "15Rnd_9x19_M9", "1Rnd_HE_M203", "1Rnd_HE_M203", "1Rnd_HE_M203", "1Rnd_HE_M203", "1Rnd_HE_M203", "FlareRed_M203"};
		
		class Wounds {
			tex[] = {};
			mat[] = {"Ca\characters2\USMC\DATA\FR_DA2.rvmat", "Ca\characters2\USMC\DATA\W1_FR_DA2.rvmat", "Ca\characters2\USMC\DATA\W2_FR_DA2.rvmat"};
		};
	};

	class frb_tl_mask : frb_tl {
		displayName = "Team Leader Mask";
		faceType = "HeadMask1Black";
		identityTypes[] = {"Head_USMC_CO", "FR_Glasses"};
	};
	
	class frb_gl : FR_TL {
		displayName = "Grenadier";
		faceType = "Man";
		identityTypes[] = {"Head_USMC_CO", "FR_Glasses"};
		model = "\FR_reskin\FR_diraction1";
		faction = "frb";
		vehicleClass = "frb";
		weapons[] = {"RH_hk416gleotech", "M9", "ItemGPS", "NVGoggles", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "HandGrenade_West", "SmokeShellYellow", "SmokeShellPurple", "HandGrenade_West", "HandGrenade_West", "15Rnd_9x19_M9", "15Rnd_9x19_M9", "1Rnd_HE_M203", "1Rnd_HE_M203", "1Rnd_HE_M203", "1Rnd_HE_M203", "1Rnd_HE_M203", "1Rnd_SmokeRed_M203"};
		respawnweapons[] = {"RH_hk416glaeotech", "M9", "ItemGPS", "NVGoggles", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "HandGrenade_West", "SmokeShellYellow", "SmokeShellPurple", "HandGrenade_West", "HandGrenade_West", "15Rnd_9x19_M9", "15Rnd_9x19_M9", "1Rnd_HE_M203", "1Rnd_HE_M203", "1Rnd_HE_M203", "1Rnd_HE_M203", "1Rnd_HE_M203", "1Rnd_SmokeRed_M203"};
		
		class Wounds {
			tex[] = {};
			mat[] = {"Ca\characters2\USMC\DATA\FR_DA2.rvmat", "Ca\characters2\USMC\DATA\W1_FR_DA2.rvmat", "Ca\characters2\USMC\DATA\W2_FR_DA2.rvmat"};
		};
	};

	class frb_gl_mask : frb_gl {
		displayName = "Grenadier Mask";
		faceType = "HeadMask1Black";
		identityTypes[] = {"Head_USMC_CO", "FR_Glasses"};

        };

	class frb_mg : FR_TL {
		displayName = "Machinegunner";
		faceType = "Man";
		identityTypes[] = {"Head_USMC_CO", "FR_Glasses"};
		model = "\FR_reskin\FR_diraction1";
		faction = "frb";
		vehicleClass = "frb";
		weapons[] = {M240, "M9", "ItemGPS", "NVGoggles", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		magazines[] = {"100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","HandGrenade_West", "SmokeShellYellow", "SmokeShellPurple", "HandGrenade_West", "HandGrenade_West", "15Rnd_9x19_M9", "15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9"};
		respawnweapons[] = {"M240", "M9", "ItemGPS", "NVGoggles", "Laserdesignator", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnMagazines[] = {"100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","HandGrenade_West", "SmokeShellYellow", "SmokeShellPurple", "HandGrenade_West", "HandGrenade_West"};

		class Wounds {
			tex[] = {};
			mat[] = {"Ca\characters2\USMC\DATA\FR_DA2.rvmat", "Ca\characters2\USMC\DATA\W1_FR_DA2.rvmat", "Ca\characters2\USMC\DATA\W2_FR_DA2.rvmat"};
                };

        };

	class frb_mg_mask : frb_mg {
		displayName = "Machinegunner Mask";
		faceType = "HeadMask1Black";
		identityTypes[] = {"Head_USMC_CO", "FR_Glasses"};
        };


	class frb_mark : FR_TL {
		displayName = "Designated marksman";
		faceType = "Man";
		identityTypes[] = {"Head_USMC_CO", "FR_Glasses"};
		weapons[] = {"RH_hk417sp", "M9", "ItemGPS", "NVGoggles", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		magazines[] = {"20Rnd_762x51_DMR","20Rnd_762x51_DMR","20Rnd_762x51_DMR","20Rnd_762x51_DMR","20Rnd_762x51_DMR","20Rnd_762x51_DMR", "HandGrenade_West", "SmokeShellYellow", "SmokeShellPurple", "HandGrenade_West", "HandGrenade_West", "15Rnd_9x19_M9", "15Rnd_9x19_M9", "1Rnd_HE_M203", "1Rnd_HE_M203", "1Rnd_HE_M203", "1Rnd_HE_M203", "1Rnd_HE_M203", "1Rnd_SmokeRed_M203"};
		respawnweapons[] = {"RH_hk417sp", "M9", "ItemGPS", "NVGoggles", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnmagazines[] = {"20Rnd_762x51_DMR","20Rnd_762x51_DMR","20Rnd_762x51_DMR","20Rnd_762x51_DMR","20Rnd_762x51_DMR","20Rnd_762x51_DMR", "HandGrenade_West", "SmokeShellYellow", "SmokeShellPurple", "HandGrenade_West", "HandGrenade_West", "15Rnd_9x19_M9", "15Rnd_9x19_M9", "1Rnd_HE_M203", "1Rnd_HE_M203", "1Rnd_HE_M203", "1Rnd_HE_M203", "1Rnd_HE_M203", "1Rnd_SmokeRed_M203"};
        };

	class frb_mark_mask : frb_tl {
		displayName = "Designated marksman Mask";
		faceType = "HeadMask1Black";
		identityTypes[] = {"Head_USMC_CO", "FR_Glasses"};
        };


	class frb_stealth_tl : frb_tl {
		displayName = "Stealth Teamleader";
		faceType = "HeadMask1Black";
		identityTypes[] = {"Head_USMC_CO", "FR_Glasses"};
		weapons[] = {"RH_hk416sdgl", "M9", "ItemGPS", "NVGoggles", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "HandGrenade_West", "SmokeShellYellow", "SmokeShellPurple", "HandGrenade_West", "HandGrenade_West", "15Rnd_9x19_M9", "15Rnd_9x19_M9", "1Rnd_HE_M203", "1Rnd_HE_M203", "1Rnd_HE_M203", "1Rnd_HE_M203", "1Rnd_HE_M203", "1Rnd_SmokeRed_M203"};

        };


	class frb_stealth_rifleman : frb_tl {
		displayName = "Stealth Assault";
		faceType = "HeadMask1Black";
		identityTypes[] = {"Head_USMC_CO", "FR_Glasses"};
		weapons[] = {"RH_hk416sdaim", "M9", "ItemGPS", "NVGoggles", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "HandGrenade_West", "SmokeShellYellow", "SmokeShellPurple", "HandGrenade_West", "HandGrenade_West", "15Rnd_9x19_M9", "15Rnd_9x19_M9", "1Rnd_HE_M203", "1Rnd_HE_M203", "1Rnd_HE_M203", "1Rnd_HE_M203", "1Rnd_HE_M203", "1Rnd_SmokeRed_M203"};

        };


	class frb_stealth_sabot : frb_tl {
		displayName = "Stealth Saboteur";
		faceType = "HeadMask1Black";
		identityTypes[] = {"Head_USMC_CO", "FR_Glasses"};
		weapons[] = {"RH_hk416sdgleotech", "M9", "ItemGPS", "NVGoggles", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "HandGrenade_West", "SmokeShellYellow", "SmokeShellPurple", "HandGrenade_West", "HandGrenade_West", "15Rnd_9x19_M9", "15Rnd_9x19_M9", "1Rnd_HE_M203", "1Rnd_HE_M203", "1Rnd_HE_M203", "1Rnd_HE_M203", "1Rnd_HE_M203", "1Rnd_SmokeRed_M203", "piepebomb", "pipebomb"};

        };



	class frb_stealth_mark : frb_tl {
		displayName = "Stealth marksman";
		faceType = "HeadMask1Black";
		identityTypes[] = {"Head_USMC_CO", "FR_Glasse"};
		weapons[] = {"RH_hk417sdsp", "M9", "ItemGPS", "NVGoggles", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		magazines[] = {"20Rnd_762x51_DMR","20Rnd_762x51_DMR","20Rnd_762x51_DMR","20Rnd_762x51_DMR","20Rnd_762x51_DMR","20Rnd_762x51_DMR", "HandGrenade_West", "SmokeShellYellow", "SmokeShellPurple", "HandGrenade_West", "HandGrenade_West", "15Rnd_9x19_M9", "15Rnd_9x19_M9", "1Rnd_HE_M203", "1Rnd_HE_M203", "1Rnd_HE_M203", "1Rnd_HE_M203", "1Rnd_HE_M203", "1Rnd_SmokeRed_M203"};

        };

};












