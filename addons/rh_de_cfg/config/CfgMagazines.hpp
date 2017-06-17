// Generated by unRap v1.06 by Kegetys

class CfgMagazines {
	class Default;	// External class reference
	class CA_Magazine;	// External class reference
	
	class RH_7Rnd_50_AE : CA_Magazine {
		scope = public;
		displayName = ".50 AE";
		picture = "\RH_de\inv\m_de.paa";
		model = "\RH_de\mags\mag_de.p3d";
		type = 16;
		ammo = "RH_50_AE_Ball";
		count = 7;
		initSpeed = 421;
	};
	
	class RH_6Rnd_44_Mag : CA_Magazine {
		scope = public;
		displayName = ".44 Magnum";
		picture = "\RH_de\inv\m_44m.paa";
		type = 16;
		ammo = "RH_44mag_ball";
		count = 6;
		initSpeed = 421;
	};
	
	class RH_6Rnd_357_Mag : CA_Magazine {
		scope = public;
		displayName = ".357 Magnum";
		picture = "\RH_de\inv\m_44m.paa";
		type = 16;
		ammo = "RH_357mag_ball";
		count = 6;
		initSpeed = 421;
	};
	
	class RH_8Rnd_9x19_Mk : CA_Magazine {
		scope = public;
		displayName = "Mk22 mag";
		model = "\RH_de\mags\mag_mk22.p3d";
		type = 16;
		picture = "\RH_de\inv\m_mk22.paa";
		ammo = "RH_B_9x19_Ball";
		count = 8;
		initSpeed = 365;
	};
	
	class RH_13Rnd_9x19_bhp : CA_Magazine {
		scope = public;
		displayName = "Browning HP mag";
		model = "\RH_de\mags\mag_mk22.p3d";
		type = 16;
		picture = "\RH_de\inv\m_mk22.paa";
		ammo = "RH_B_9x19_Ball";
		count = 13;
		initSpeed = 365;
	};
	
	class RH_19Rnd_9x19_g18 : CA_Magazine {
		scope = public;
		displayName = "Glock 18 mag";
		model = "\RH_de\mags\mag_g18.p3d";
		type = 16;
		picture = "\RH_de\inv\m_g18.paa";
		ammo = "RH_B_9x19_Ball";
		count = 19;
		initSpeed = 365;
	};
	
	class RH_17Rnd_9x19_g17 : CA_Magazine {
		scope = public;
		displayName = "Glock 17 mag";
		model = "\RH_de\mags\mag_g17.p3d";
		type = 16;
		picture = "\RH_de\inv\m_g18.paa";
		ammo = "RH_B_9x19_Ball";
		count = 17;
		initSpeed = 365;
	};
	
	class RH_17Rnd_9x19_g17SD : CA_Magazine {
		scope = public;
		displayName = "Glock 17 SD mag";
		model = "\RH_de\mags\mag_g17.p3d";
		type = 16;
		picture = "\RH_de\inv\m_g18.paa";
		count = 17;
		ammo = "RH_B_9x19_SD";
		initSpeed = 278;
	};
	
	class RH_33Rnd_9x19_g18 : CA_Magazine {
		scope = public;
		displayName = "Glock 18 33Rnd mag";
		model = "\RH_de\mags\mag_g18.p3d";
		type = 16;
		picture = "\RH_de\inv\m_g18.paa";
		ammo = "RH_B_9x19_Ball";
		count = 33;
		initSpeed = 365;
	};
	
	class RH_20Rnd_9x19_M93 : CA_Magazine {
		scope = public;
		displayName = "M93R mag";
		model = "\RH_de\mags\mag_m93r.p3d";
		type = 16;
		picture = "\RH_de\inv\m_m93.paa";
		ammo = "RH_B_9x19_Ball";
		count = 20;
		initSpeed = 365;
	};
	
	class RH_32Rnd_9x19_Muzi : CA_Magazine {
		scope = public;
		displayName = "MUzi mag";
		model = "\RH_de\mags\mag_muzi.p3d";
		type = 16;
		picture = "\RH_de\inv\m_muzi.paa";
		ammo = "RH_B_9x19_Ball";
		count = 32;
		initSpeed = 360;
	};
	
	class RH_30Rnd_9x19_tec : CA_Magazine {
		scope = public;
		displayName = "Tec9 mag";
		model = "\RH_de\mags\mag_tec9.p3d";
		type = 16;
		picture = "\RH_de\inv\m_tec9.paa";
		ammo = "RH_B_9x19_Ball";
		count = 30;
		initSpeed = 360;
	};
	
	class RH_8Rnd_9x19_Mksd : RH_8Rnd_9x19_Mk {
		displayName = "Mk22sd mag";
		model = "\RH_de\mags\mag_mk22.p3d";
		type = 16;
		picture = "\RH_de\inv\m_mk22.paa";
		ammo = "RH_B_9x19_SD";
		initSpeed = 278;
	};
	
	class RH_8Rnd_9x19_P38 : CA_Magazine {
		scope = public;
		displayName = "P38 mag";
		model = "\RH_de\mags\mag_p38.p3d";
		type = 16;
		picture = "\RH_de\inv\m_p38.paa";
		ammo = "RH_B_9x19_Ball";
		count = 8;
		initSpeed = 365;
	};
	
	class RH_15Rnd_9x19_usp : CA_Magazine {
		scope = public;
		displayName = "Usp mag (9 mm)";
		model = "\RH_de\mags\mag_usp.p3d";
		type = 16;
		picture = "\RH_de\inv\m_usp.paa";
		ammo = "RH_B_9x19_Ball";
		count = 15;
		initSpeed = 365;
	};
	
	class RH_15Rnd_9x19_uspsd : RH_15Rnd_9x19_usp {
		displayName = "Uspsd mag (9 mm)";
		model = "\RH_de\mags\mag_usp.p3d";
		type = 16;
		picture = "\RH_de\inv\m_usp.paa";
		ammo = "RH_B_9x19_SD";
		initSpeed = 278;
	};
	
	class RH_20Rnd_32cal_vz61 : CA_Magazine {
		scope = public;
		displayName = "Vz61 mag";
		picture = "\RH_de\inv\m_vz61.paa";
		model = "\RH_de\mags\mag_vz61.p3d";
		type = 16;
		ammo = RH_32ACP;
		count = 20;
		initSpeed = 300;
	};
	
	class RH_7Rnd_32cal_ppk : CA_Magazine {
		scope = public;
		displayName = "PPK mag";
		picture = "\RH_de\inv\m_ppk.paa";
		model = "\RH_de\mags\mag_ppk.p3d";
		type = 16;
		ammo = RH_32ACP;
		count = 7;
		initSpeed = 300;
	};
	
	class RH_12Rnd_45cal_usp : CA_Magazine {
		scope = public;
		displayName = "Usp mag (.45)";
		picture = "\RH_de\inv\m_usp.paa";
		model = "\RH_de\mags\mag_uspm.p3d";
		type = 16;
		ammo = RH_45ACP;
		count = 12;
		initSpeed = 260;
	};
	
	class RH_8Rnd_45cal_m1911 : CA_Magazine {
		scope = public;
		displayName = "M1911 mag";
		picture = "\RH_de\inv\m_colt.paa";
		model = "\RH_de\mags\mag_kim.p3d";
		type = 16;
		ammo = RH_45ACP;
		count = 8;
		initSpeed = 260;
	};
	
	class RH_8Rnd_762_tt33 : CA_Magazine {
		scope = public;
		displayName = "TT33 mag";
		picture = "\RH_de\inv\m_tt33.paa";
		model = "\RH_de\mags\mag_tt33.p3d";
		type = 16;
		ammo = "RH_762x25";
		count = 8;
		initSpeed = 420;
	};
	
	class RH_10Rnd_22LR_mk2 : CA_Magazine {
		scope = public;
		displayName = "MK2 mag";
		picture = "\RH_de\inv\m_mk2.paa";
		model = "\RH_de\mags\mag_mk2.p3d";
		type = 16;
		ammo = RH_B_22LR_SD;
		count = 10;
		initSpeed = 290;
	};
};
