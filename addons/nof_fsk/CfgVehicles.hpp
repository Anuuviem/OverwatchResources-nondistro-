class CfgVehicles 
{

	class Man;		
	class CAManBase : Man 
	{
		
		class TalkTopics;			
		
		class HitPoints 
		{
			
			class HitHead;			
			class HitBody;		
		};
	
	};
	
	
	class SoldierWB : CAManBase 
	{
		
		class TalkTopics : TalkTopics {};
	
	};
	
	class nof_fsk_base : SoldierWB 
	{
		
		scope = private;
		
		faction = nof_fsk;
		
		genericNames = "nof_NorwegianMen";
		
		
		class SpeechVariants 
		{
			
			class Default 
			{
				
				speechSingular[] = {"veh_SpecialForce"};
				
				speechPlural[] = {"veh_SpecialForces"};
			
			};
			
			
			class EN : Default {};
			
			
			class CZ 
			{
				
				speechSingular[] = {"veh_SpecialForce_CZ"};
				
				speechPlural[] = {"veh_SpecialForces_CZ"};
			
			};
			
			
			class CZ_Akuzativ 
			{
				
				speechSingular[] = {"veh_SpecialForce_CZ4P"};
				
				speechPlural[] = {"veh_SpecialForces_CZ4P"};
			
			};
			
			
			class RU 
			{
				
				speechSingular[] = {"veh_SpecialForce_RU"};
				
				speechPlural[] = {"veh_SpecialForces_RU"};
			
			};
		
		};
		
		TextPlural = "$STR_DN_SpecialForces";
		
		TextSingular = "$STR_DN_SpecialForce";
		
		nameSound = "veh_SpecialForce";
		
		canHideBodies = true;
		
		canDeactivateMines = true;
		
		picture = "\nof_fsk\text\i_fsk_ca.paa";
		
		icon = "\Ca\characters2\data\icon\i_special_CA.paa";
		
		nightVision = true;
		
		enableGPS = 1;
		
		camouflage = 0.8;		// how dificult to spot - bigger - better spotable
		
		sensitivity = 3.8;		// sensor sensitivity
		
		minFireTime = 2.5;		// minimal time spent firing on single target
		
		accuracy = 2.0;			// accuracy needed to recognize type of this target
		
		cost = 300000;
		
				
		threat[] = {1, 0.5, 0.1};

	// threat (VSoft, VArmor, VAir), how threatening vehicle is to unit types
		
		vehicleClass = "nof_menfsk";
		
		
		class HitPoints : HitPoints 
		{
			
			class HitHead : HitHead 
			{
				
				armor = 0.6;
			
			};
			
			
			class HitBody : HitBody 
			{
				
				armor = 1;
				
				passThrough = 0.8;
			
			};
		
		};
		
		identityTypes[] = {"Head_USMC_Camo", "FR_Glasses"};
		
		faceType = "Man";
		
		model = "\nof_fsk\fsk_co";
		
		portrait = "\Ca\characters\data\portraits\comBarHead_fr_soldier_ca";
		
		weapons[] = {"M4A1_Aim_camo", "NVGoggles", "Binocular", "ItemGPS", M9SD, "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "HandGrenade_West", "HandGrenade_West", "SmokeShell", "SmokeShellRed", "15Rnd_9x19_M9", "15Rnd_9x19_M9", "15Rnd_9x19_M9", "15Rnd_9x19_M9"};
		
		respawnWeapons[] = {"M4A1_Aim_camo", "NVGoggles", "Binocular", "ItemGPS", M9, "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		respawnMagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "HandGrenade_West", "SmokeShell", "15Rnd_9x19_M9", "15Rnd_9x19_M9"};
		
		
		class Wounds 
		{
			
			tex[] = {};
			
			mat[] = {"Ca\characters2\USMC\DATA\FR_CO_Body.RVmat", "Ca\characters2\USMC\DATA\W1_FR_co_body.rvmat", "Ca\characters2\USMC\DATA\W2_FR_co_body.rvmat", "Ca\characters2\USMC\DATA\FR_CO_Gear.RVmat", "Ca\characters2\USMC\DATA\W1_FR_CO_Gear.RVmat", "Ca\characters2\USMC\DATA\W2_FR_CO_Gear.RVmat"};
		
		};
		
		class EventHandlers;	// External class reference
		
		
		class TalkTopics : TalkTopics 
		{
			
			core_en = "Core_Full";
			
			core_ru = "Core_Full";
			
			core_cz = "Core_Full";
		
		};
		
		languages[] = {"EN", "CZ", "RU"};
	
	};
	
	
	class nof_fsk_tl : nof_fsk_base 
	{
		
		scope = public;
		
		displayName = "Team Leader";
		
		accuracy = 3.6;	// accuracy needed to recognize type of this target
		
		sensitivity = 3.9;	// sensor sensitivity
		
		cost = 600000;
		
		weapons[] = {"M4A1_Aim_camo", M9, "ItemGPS", "NVGoggles", "Binocular", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "HandGrenade_West", "HandGrenade_West", "SmokeShell", "SmokeShellRed", "15Rnd_9x19_M9", "15Rnd_9x19_M9", "15Rnd_9x19_M9", "15Rnd_9x19_M9"};

		
		respawnWeapons[] = {"M4A1_Aim_camo", M9, "ItemGPS", "NVGoggles", "Binocular", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		respawnMagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "HandGrenade_West", "HandGrenade_West", "SmokeShell", "SmokeShellRed", "15Rnd_9x19_M9", "15Rnd_9x19_M9", "15Rnd_9x19_M9", "15Rnd_9x19_M9"};

	
	};

	class nof_fsk_marksman : nof_fsk_base 
	{
		
		scope = public;
		
		accuracy = 3.9;	// accuracy needed to recognize type of this target
		
		displayName = "Marksman";
		
		cost = 500000;
		
		model = "\nof_fsk\fsk_marksman";
		
		
		class SpeechVariants 
		{
			
			class Default 
			{
				
				speechSingular[] = {"veh_Sniper"};
				
				speechPlural[] = {"veh_Snipers"};
			
			};
			
			
			class EN : Default {};
			
			
			class CZ 
			{
				
				speechSingular[] = {"veh_Sniper_CZ"};
				
				speechPlural[] = {"veh_Snipers_CZ"};
			
			};
			
			
			class CZ_Akuzativ 
			{
				
				speechSingular[] = {"veh_Sniper_CZ4P"};
				
				speechPlural[] = {"veh_Snipers_CZ4P"};
			
			};
			
			
			class RU 
			{
				
				speechSingular[] = {"veh_Sniper_RU"};
				
				speechPlural[] = {"veh_Snipers_RU"};
			
			};
		
		};
		
		TextPlural = "$STR_DN_Snipers";
		
		TextSingular = "$STR_DN_Sniper";
		
		nameSound = "veh_Sniper";
		
		camouflage = 0.6;	// how dificult to spot - bigger - better spotable
		
		sensitivity = 4.2;	// sensor sensitivity
		
		weapons[] = {M4SPR, M9, "ItemGPS", "NVGoggles", "Binocular", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "15Rnd_9x19_M9", "15Rnd_9x19_M9", "15Rnd_9x19_M9", "15Rnd_9x19_M9", "HandGrenade_West", "SmokeShell", "SmokeShellYellow", "SmokeShellPurple"};
		
		respawnWeapons[] = {M4SPR, "ItemGPS", "NVGoggles", "Binocular", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		respawnMagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "15Rnd_9x19_M9", "15Rnd_9x19_M9", "15Rnd_9x19_M9", "15Rnd_9x19_M9", "HandGrenade_West", "SmokeShell", "SmokeShellYellow", "SmokeShellPurple"};		
		
		class Wounds 
		{
			
			tex[] = {};
			
			mat[] = {"Ca\characters2\USMC\DATA\FR_Marksman_Body.RVmat", "Ca\characters2\USMC\DATA\W1_FR_Marksman_body.rvmat", "Ca\characters2\USMC\DATA\W2_FR_Marksman_body.rvmat", "Ca\characters2\USMC\DATA\FR_Marksman_Gear.RVmat", "Ca\characters2\USMC\DATA\W1_FR_Marksman_Gear.RVmat", "Ca\characters2\USMC\DATA\W2_FR_Marksman_Gear.RVmat"};
		
		};
		
		class EventHandlers;	// External class reference
	
	};

	class nof_fsk_grenadier : nof_fsk_base 
	{
		
		scope = public;
		
		accuracy = 3.9;	// accuracy needed to recognize type of this target
		
		displayName = "Grenadier";
		
		cost = 325000;
		
		model = "\nof_fsk\fsk_grenadier";
		
		camouflage = 0.6;	// how dificult to spot - bigger - better spotable
		
		weapons[] = {"M4A1_HWS_GL_camo", M9, "ItemGPS", "NVGoggles", "Binocular", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};

		magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "1Rnd_HE_M203", "1Rnd_HE_M203", "1Rnd_HE_M203", "1Rnd_HE_M203", "1Rnd_HE_M203", "1Rnd_HE_M203", "1Rnd_HE_M203", "1Rnd_HE_M203", "15Rnd_9x19_M9", "15Rnd_9x19_M9"};

		respawnWeapons[] = {"M4A1_HWS_GL_camo", M9, "ItemGPS", "NVGoggles", "Binocular", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "1Rnd_HE_M203", "1Rnd_HE_M203", "1Rnd_HE_M203", "1Rnd_HE_M203", "1Rnd_HE_M203", "15Rnd_9x19_M9", "15Rnd_9x19_M9"};
		
		
		class Wounds 
		{
			
			tex[] = {};
			
			mat[] = {"Ca\characters2\USMC\DATA\FR_Scout3_Body.RVmat", "Ca\characters2\USMC\DATA\W1_FR_Scout3_body.rvmat", "Ca\characters2\USMC\DATA\W2_FR_Scout3_body.rvmat", "Ca\characters2\USMC\DATA\FR_Scout3_Gear.RVmat", "Ca\characters2\USMC\DATA\W1_FR_Scout3_Gear.RVmat", "Ca\characters2\USMC\DATA\W2_FR_Scout3_Gear.RVmat"};
		
		};
	
	};
	class nof_fsk_heavy : nof_fsk_base 
	{
		
		scope = public;
		
		displayName = "Heavy Gunner";
		
		
		class SpeechVariants 
		{
			
			class Default 
			{
				
				speechSingular[] = {"veh_mgunner"};
				
				speechPlural[] = {"veh_mgunners"};
			
			};
			
			
			class EN : Default {};
			
			
			class CZ 
			{
				
				speechSingular[] = {"veh_mgunner_CZ"};
				
				speechPlural[] = {"veh_mgunners_CZ"};
			
			};
			
			
			class CZ_Akuzativ 
			{
				
				speechSingular[] = {"veh_mgunner_CZ4P"};
				
				speechPlural[] = {"veh_mgunners_CZ4P"};
			
			};
			
			
			class RU 
			{
				
				speechSingular[] = {"veh_mgunner_RU"};
				
				speechPlural[] = {"veh_mgunners_RU"};
			
			};
		
		};
		
		TextPlural = "$STR_DN_mgunners";
		
		TextSingular = "$STR_DN_mgunner";
		
		nameSound = "veh_mgunner";
		
		accuracy = 3.7;	// accuracy needed to recognize type of this target
		
		camouflage = 0.9;	// how dificult to spot - bigger - better spotable
		
		cost = 400000;
		
		model = "\nof_fsk\fsk_marksman";
		
		Icon = "\Ca\characters2\data\icon\i_machinegunner_CA.paa";
		
		weapons[] = {"Mk_48", M9, "ItemGPS", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "Binocular", "NVgoggles"};
		
		magazines[] = {"100Rnd_762x51_M240", "100Rnd_762x51_M240", "100Rnd_762x51_M240", "100Rnd_762x51_M240", "HandGrenade_West", "HandGrenade_West", "SmokeShell", "SmokeShell", "15Rnd_9x19_M9", "15Rnd_9x19_M9", "15Rnd_9x19_M9", "15Rnd_9x19_M9"};
		
		
		threat[] = {1, 0.5, 0.4};

	// threat (VSoft, VArmor, VAir), how threatening vehicle is to unit types
				
		respawnWeapons[] = {"Mk_48", M9, "ItemGPS", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "Binocular", "NVgoggles"};
		
		respawnMagazines[] = {"100Rnd_762x51_M240", "100Rnd_762x51_M240", "HandGrenade_West", "SmokeShell", "15Rnd_9x19_M9", "15Rnd_9x19_M9"};
		
		
		class Wounds 
		{
			
			tex[] = {};
			
			mat[] = {"Ca\characters2\USMC\DATA\FR_Marksman_Body.RVmat", "Ca\characters2\USMC\DATA\W1_FR_Marksman_body.rvmat", "Ca\characters2\USMC\DATA\W2_FR_Marksman_body.rvmat", "Ca\characters2\USMC\DATA\FR_Marksman_Gear.RVmat", "Ca\characters2\USMC\DATA\W1_FR_Marksman_Gear.RVmat", "Ca\characters2\USMC\DATA\W2_FR_Marksman_Gear.RVmat"};
		
		};		
		class EventHandlers;	// External class reference
	
	};

	class nof_fsk_corpsman : nof_fsk_base 
	{
		
		scope = public;
		
		attendant = true;
		
		
		class SpeechVariants 
		{
			
			class Default 
			{
				
				speechSingular[] = {"veh_Medic"};
				
				speechPlural[] = {"veh_Medics"};
			
			};
			
			
			class EN : Default {};
			
			
			class CZ 
			{
				
			speechSingular[] = {"veh_Medic_CZ"};
				
			speechPlural[] = {"veh_Medics_CZ"};
			
			};
			
			
			class CZ_Akuzativ 
			{
				
				speechSingular[] = {"veh_Medic_CZ4P"};
				
				speechPlural[] = {"veh_Medics_CZ4P"};
			
			};
			
			
			class RU 
			{
				
				speechSingular[] = {"veh_Medic_RU"};
				
				speechPlural[] = {"veh_Medics_RU"};
			
			};
		
		};
		
		TextPlural = "$STR_DN_Medics";
		
		TextSingular = "$STR_DN_Medic";
		
		nameSound = "veh_Medic";
		
		accuracy = 3.7;	// accuracy needed to recognize type of this target
		
		cost = 350000;
		
		displayName = "Medic";
		
		picture = "\Ca\characters\data\Ico\i_Med_CA.paa";
		
		icon = "\Ca\characters2\data\icon\i_medic_CA.paa";
		
		model = "\nof_fsk\fsk_corpsman";
		
		weapons[] = {"M4A1_Aim_camo", "NVGoggles", "ItemGPS", M9, "Binocular", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "SmokeShell", "SmokeShellRed", "SmokeShellGreen", "15Rnd_9x19_M9", "15Rnd_9x19_M9", "15Rnd_9x19_M9", "15Rnd_9x19_M9"};
		
		respawnWeapons[] = {"M4A1_Aim_camo", "NVGoggles", "ItemGPS", M9, "Binocular", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		respawnMagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "SmokeShell", "SmokeShellRed", "SmokeShellGreen", "15Rnd_9x19_M9", "15Rnd_9x19_M9"};
		
		
		class Wounds 
		{
			
			tex[] = {};
			
			mat[] = {"Ca\characters2\USMC\DATA\FR_Corpsman_Body.RVmat", "Ca\characters2\USMC\DATA\W1_FR_Corpsman_body.rvmat", "Ca\characters2\USMC\DATA\W2_FR_Corpsman_body.rvmat", "Ca\characters2\USMC\DATA\FR_Corpsman_Gear.RVmat", "Ca\characters2\USMC\DATA\W1_FR_Corpsman_Gear.RVmat", "Ca\characters2\USMC\DATA\W2_FR_Corpsman_Gear.RVmat"};
		
		};
		
		class EventHandlers;	// External class reference
	
	};
	
		
		

};