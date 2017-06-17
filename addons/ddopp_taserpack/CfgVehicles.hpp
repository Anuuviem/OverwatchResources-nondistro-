// Generated by unRap v1.06 by Kegetys

class CfgVehicles {
	class Logic;	// External class reference
	class All;	// External class reference
	class Strategic;	// External class reference
	class Land;	// External class reference
	class ReammoBox_EP1;	// External class reference
	class USBasicAmmunitionBox_EP1;	// External class reference
	
	class DDOPP_TaserBox : USBasicAmmunitionBox_EP1 {
		displayName = "Taser Box";
		model = "\ca\weapons\AmmoBoxes\USBasicAmmo.p3d";
		
		class TransportMagazines {
			class xx_X26 {
				magazine = "DDOPP_1Rnd_X26";
				count = 75;
			};
			
			class xx_X3 {
				magazine = "DDOPP_3Rnd_X3";
				count = 50;
			};
		};
		
		class TransportWeapons {
			class xx_X3_b {
				weapon = "DDOPP_X3_b";
				count = 5;
			};
			
			class xx_X3 {
				weapon = DDOPP_X3;
				count = 5;
			};
			
			class xx_X26_b {
				weapon = "DDOPP_X26_b";
				count = 10;
			};
			
			class xx_X26 {
				weapon = DDOPP_X26;
				count = 10;
			};
		};
	};
	
	class DDOPP_TaserInit : Logic {
		vehicleClass = "DDOPP_TaserLogic";
		displayName = "Initialize Taser Scripts";
		model = "\ca\weapons\empty";
		Icon = "\DDOPP_taserPack\data\icon_init.paa";
		
		class EventHandlers {
			init = "[] execVM""\DDOPP_taserPack\scripts\init_taser.sqf"";";
		};
	};
};
