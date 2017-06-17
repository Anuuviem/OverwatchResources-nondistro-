comment "safe script by ColonelSandersLite";

_u = _this select 0;
_ammo = _u ammo (_this select 1);
_b = nearestObject [_u, _this select 4];
if (((_ammo mod 2) == 0) and (_b isKindOf "B_77x56_Ball")) then 
{
//_offset1 = [-0.25,3.0,0.46];
_offset1 = [-0.25,3.0,0.46];
_wpos1 = _u modelToWorld _offset1;
_b setpos _wpos1;
};