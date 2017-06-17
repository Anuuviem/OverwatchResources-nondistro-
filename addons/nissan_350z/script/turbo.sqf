private ["_MaxIntensity","_Boost","_leftengine","_emitters","_Intensity","_looptime", "_plane", "_timestamp"];

_MaxIntensity = 1;
_Boost = 0.95;
_Intensity = 0.4;


_maxspeed = 200;
_plane = _this;
_plane animate ["ABSwitch",1];
sleep 0.5;

_timestamp = time;
_leftengine = "#particlesource" createVehicle position _plane;
_emitters = [_leftengine];
{_x setParticleRandom [0.05,[0.05,0.05,0.05],[0.05,0.05,0.05],0,0.8,[0.1,0.1,0.1,0],0,0]} foreach _emitters;
{_x setDropInterval 0} foreach _emitters;
_looptime = 0.1;
_runtime = 200;
while {(alive _plane) and (_plane animationphase "ABSwitch" >= 0.1)} do {
	if (isengineon _plane) then {
		if (time >= (_timestamp + 0.8)) then {
			_timestamp = time;
		};
		if (_Intensity < _MaxIntensity) then {_Intensity = _Intensity + 0.1*(15*_looptime)};
		if ((speed _plane) < _maxspeed) then {_plane setVelocity [(velocity _plane select 0)+((vectordir _plane) select 0)*((_Boost*_Intensity/2)*(15*_looptime)),(velocity _plane select 1)+((vectordir _plane) select 1)*((_Boost*_Intensity/2)*(15*_looptime)),(velocity _plane select 2)+((vectordir _plane) select 2)*((_Boost*_Intensity/2)*(15*_looptime))]};
		if (fuel _plane > 0) then {_plane setFuel ((fuel _plane)-((1/18000)*(3*_looptime)))};
	} 
	else {if (_Intensity > 0) then {_Intensity = _Intensity - 0.2*(15*_looptime)}};
	_leftengine setParticleParams ["\Ca\data\cl_exp","","Billboard",1,0.07,[0,-6.5,-0.9],[(velocity _plane select 0) - ((vectordir _plane) select 0)*20,(velocity _plane select 1) - ((vectordir _plane) select 1)*20,(velocity _plane select 2) - ((vectordir _plane) select 2)*20],1,1.2745,1,0,[0.4+(2*(speed _plane/_maxspeed)),0.5+(10*(speed _plane/_maxspeed))],[[0.040,0.100,0.900,0.1500*_Intensity],[0.200,0.200,0.800,0.1000*_Intensity],[0.500,0.200,0.000,0.0250*_Intensity],[0.000,0.000,0.000,0.0000*_Intensity]],[0],0,0,"","",_plane];
	{_x setpos (getpos _plane)} foreach _emitters;
	if (_Intensity > 0) then {{_x setDropInterval 0.001} foreach _emitters} else {{_x setDropInterval 0} foreach _emitters};

	sleep 0.05; // mod by Crowe

	_runtime = _runtime - 1;
};
deleteVehicle _leftengine;
sleep 3;




