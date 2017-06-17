// Generated by unRap v1.06 by Kegetys

class CfgAmmo {
	class Default;	// External class reference
	class BulletCore;	// External class reference
	class BulletBase;	// External class reference
	class B_9x19_SD;	// External class reference
	
	class RH_50_AE_Ball : BulletBase {
		hit = 9.5;
		cartridge = "FxCartridge_Small";
		cost = 1;
		typicalSpeed = 421;
		airFriction = -0.00165;
		caliber = 0.7;
	};
	
	class RH_32ACP : BulletBase {
		hit = 6.5;
		cost = 1;
		cartridge = "FxCartridge_Small";
		typicalSpeed = 300;
		airFriction = -0.0015;
		caliber = 0.3;
	};
	
	class RH_45ACP : BulletBase {
		hit = 8.5;
		cost = 1;
		cartridge = "FxCartridge_Small";
		typicalSpeed = 260;
		airFriction = -0.0015;
		caliber = 0.3;
	};
	
	class RH_44mag_ball : BulletBase {
		hit = 8.5;
		cost = 1;
		cartridge = "FxCartridge_Small";
		typicalSpeed = 260;
		airFriction = -0.0015;
		caliber = 0.5;
	};
	
	class RH_357mag_ball : BulletBase {
		hit = 8.9;
		cost = 1;
		cartridge = "FxCartridge_Small";
		typicalSpeed = 260;
		airFriction = -0.0015;
		caliber = 0.3;
	};
	
	class RH_762x25 : BulletBase {
		hit = 7.5;
		cost = 1;
		cartridge = "FxCartridge_Small";
		typicalSpeed = 420;
		airFriction = -0.003;
		caliber = 0.3;
	};
	
	class RH_B_9x19_Ball : BulletBase {
		cartridge = "FxCartridge_Small";
		cost = 5;
		typicalSpeed = 360;
		airFriction = -0.0017;
		hit = 7.5;
		caliber = 0.3;
	};
	
	class RH_B_9x19_SD : BulletBase {
		cartridge = "FxCartridge_Small";
		visibleFire = 0.035;	// how much is visible when this weapon is fired
		audibleFire = 0.035;
		visibleFireTime = 2;	// how long is it visible
		cost = 1;
		typicalSpeed = 278;
		airFriction = -0.000955;
		hit = 7.5;
		caliber = 0.3;
	};
	
	class RH_B_22LR_SD : BulletBase {
		cartridge = "FxCartridge_Small";
		visibleFire = 0.035;	// how much is visible when this weapon is fired
		audibleFire = 0.035;
		visibleFireTime = 2;	// how long is it visible
		cost = 1;
		typicalSpeed = 278;
		airFriction = -0.0015;
		hit = 6.0;
		caliber = 0.1;
	};
};
