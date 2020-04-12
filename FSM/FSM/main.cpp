#pragma once
#include "Player.h"
//ÂüÁ¶ https://boycoding.tistory.com/110

int main()
{
	Player * player = new Player();
	player->Player_Attack();
	player->Player_Skill();

	delete player;
	return 0;
}