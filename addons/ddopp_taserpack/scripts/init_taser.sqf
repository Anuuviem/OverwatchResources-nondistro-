/*****************************************************************
Copyright © 2013 Double Doppler

File: init_taser.sqf
Date: 21/1/2013
Author: Double Doppler/D.Doppler
Contact: doubledoppler@live.co.uk
Description: N/A.
Parameter(s): None.

UNAUTHORIZED USE OR REPRODUCTION OF THIS MATERIAL WITHOUT THE 
PERMISSION OF THE AUTHOR IS PROHIBITED.
*****************************************************************/
// COPYPASTA!!
/*
AI:
removeallweapons this; this addmagazine "DDOPP_3Rnd_X3"; this addmagazine "DDOPP_3Rnd_X3"; this addweapon "DDOPP_X3";
this addmagazine "DDOPP_3Rnd_X3";

PLAYER:
removeallweapons player; player addmagazine "DDOPP_3Rnd_X3"; player addmagazine "DDOPP_3Rnd_X3"; player addweapon "DDOPP_X3";
player addmagazine "DDOPP_3Rnd_X3";
*/

#include "\ddopp_taserpack\DDOPP_TaserConfig.hpp";

// REQUIRED COMMON VARS
if (isNil "isClient") then { // Future Proof
	isClient              	 = (if (isMultiplayer) then {!isServer} else {true}); // SP Proof
};
DDOPP_taser_version      	 = "v1.1 (23/2/2013)";


// Originally client-only, but now server needs to know these functions in order to operate on AI.
{call compile preprocessfile _x;} forEach [
	"\DDOPP_taserPack\scripts\fnc_network.sqf", // Priority #1
	"\DDOPP_taserPack\scripts\fnc_victim.sqf",
	"\DDOPP_taserPack\scripts\fnc_shooter.sqf",
	"\DDOPP_taserPack\scripts\fnc_global.sqf"
];

// Player initialization

if (isClient) then {
	/*
		MouseButtonDown:		
		_this select 1 = ID of mouse button pressed
		_this select 1 == 0 = Right Mouse Button
		_this select 1 == 1 = Left Mouse Button
		_this select 1 == 2 = Middle Mouse Button
	*/
	[] spawn {
		sleep 3;
		if (isNil "drive_stun_hotkey") then {
			drive_stun_hotkey = (findDisplay 46) displayAddEventHandler ["MouseButtonDown", "if(_this select 1 == 0) then {[] spawn DDOPP_taser_driveStun}"];
		};
	};
	//(findDisplay 46) displayRemoveEventHandler ["MouseButtonDown",drive_stun_hotkey];
	
};

// Server initialization

if (isServer || !isMultiplayer) then {

	
	[] spawn DDOPP_taser_babel;
};