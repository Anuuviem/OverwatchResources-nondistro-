private["_ent"];
_ent = _this select 3;
player removeAction s_player_dance;
s_player_dance = -1;
 
player playMove "ActsPercMstpSnonWnonDnon_DancingDuoIvan";
 
cutText ["Let the party begin!","PLAIN DOWN"];
 
r_interrupt = false;
_animState = animationState player;
r_doLoop = true;
_started = false;
_finished = false;
 
    while {r_doLoop} do {
        _animState = animationState player;
        _isDancing = ["ActsPercMstpSnonWnonDnon_DancingDuoIvan",_animState] call fnc_inString;
        if (_isDancing) then {
            _started = true;
        };
        if (_started and !_isDancing) then {
            r_doLoop = false;
            _finished = true;
        };
        if (r_interrupt) then {
            r_doLoop = false;
        };
        sleep 0.1;
    };
    r_doLoop = false;
 
if (_finished) then {
 
cutText ["Awesome performance mate!","PLAIN DOWN"];
 
} else {
r_interrupt = false;
[objNull, player, rSwitchMove,""] call RE;
player playActionNow "stop";
cutText ["Dance Canceled","PLAIN DOWN"];
};