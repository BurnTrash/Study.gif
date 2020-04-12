#pragma once
#include "State.h"

class Player
{
	State *states[2];
	Chara_Magician * magician;
	Cha_Worrior *worrior;
	int statenum;
public:
	Player();
	~Player();
	void Player_Attack();
	void Player_Skill();
};


