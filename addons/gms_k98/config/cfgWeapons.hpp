// Generated by unRap v1.06 by Kegetys

class cfgWeapons {
	class GrenadeLauncher;	// External class reference
	class Rifle;	// External class reference
	
	class gms_k98 : Rifle {
		scope = public;
		displayName = $STR_DN_K98;
		dexterity = 2;
		picture = "\gms_k98\data\equip\w_k98_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		cursor = "MGCursor";
		cursoraim = "\ca\Weapons\Data\w_lock";
		handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\M24.rtm"};
		modes[] = {"Single"};
		
		class Single : Mode_SemiAuto {
			begin1[] = {"\gms_k98\data\sounds\kar98.wav", 1.77828, 1, 1000};
			soundBegin[] = {"begin1", 1};
			soundContinuous = 0;
			reloadTime = 1.5;
			ffCount = 1;
			recoil = "recoil_single_primary_5outof10";
			recoilProne = "recoil_single_primary_prone_4outof10";
			aiRateOfFire = 0.001;	// delay between shots at given distance
			dispersion = 0.007;
			minRange = 2;
			minRangeProbab = 0.2;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.05;
		};
		aiDispersionCoefY = 7.0;
		aiDispersionCoefX = 7.0;
		magazines[] = {"gms_k98_mag"};
		
		class Library {
			libTextDesc = $STR_LIB_K98;
		};
		model = "\gms_k98\gms_k98.p3d";
		descriptionShort = $STR_DSS_K98;
	};
	
	class gms_k98_rg : gms_k98 {
		picture = "\gms_k98\data\equip\w_riflegrenade_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_mg_CA.paa";
		muzzles[] = {"k98Muzzle", "k98RGMuzzle"};
		
		class k98Muzzle : gms_k98 {};
		
		class k98RGMuzzle : GrenadeLauncher {
			displayName = $STR_DN_K98RG;
			reloadMagazineSound[] = {"\ca\Weapons\Data\Sound\flare_reload", 0.000316228, 1};
			magazines[] = {"panzergrenade"};
			magazineReloadTime = 3;
			reloadTime = 0.1;
			optics = true;
			modelOptics = "-";
			cameraDir = "GL look";
			memoryPointCamera = "GL eye";
			opticsZoomMin = 0.22;
			opticsZoomMax = 0.95;
			opticsZoomInit = 0.42;
			model = "\gms_k98\gms_k98_gl.p3d";
		};
		model = "\gms_k98\gms_k98.p3d";
	};
	
	class gms_k98_knife : gms_k98 {
		picture = "\gms_k98\data\equip\w_bayonet_ca.paa";
		model = "\gms_k98\gms_k98_knife.p3d";
	};
	
	class gms_k98zf39 : gms_k98_knife {
		picture = "\gms_k98\data\equip\w_zf39_ca.paa";
		model = "\gms_k98\gms_k98zf39.p3d";
		modelOptics = "\gms_k98\optika_zf39";
		opticsFlare = true;
		opticsDisablePeripherialVision = true;
		opticsZoomMin = 0.0425;
		opticsZoomMax = 0.0425;
		distanceZoomMin = 200;
		distanceZoomMax = 200;
		
		class Single : Mode_SemiAuto {
			begin1[] = {"\gms_k98\data\sounds\kar98.wav", 1.77828, 1, 1000};
			soundBegin[] = {"begin1", 1};
			soundContinuous = 0;
			reloadTime = 2;
			ffCount = 1;
			recoil = "recoil_single_primary_5outof10";
			recoilProne = "recoil_single_primary_prone_4outof10";
			aiRateOfFire = 0.001;	// delay between shots at given distance
			dispersion = 0.003;
			minRange = 2;
			minRangeProbab = 0.2;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.05;
		};
		descriptionShort = $STR_DSS_K98ZF39;
	};
};
