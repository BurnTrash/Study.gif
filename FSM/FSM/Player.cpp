//Player 헤더 구현
#pragma once
#include "Player.h"

Player::Player()
{
	magician = new Chara_Magician();
	worrior = new Cha_Worrior();
	states[0] = new Magician(magician);
	states[1] = new Worrior(worrior);
	statenum = 0;
}

Player::~Player()
{
	delete states[0];
	delete states[1];
	delete magician;
	delete worrior;
}

void Player::Player_Attack()
{
	states[statenum]->Attack();
}
void Player::Player_Skill()
{
	states[statenum]->Skill();
}

