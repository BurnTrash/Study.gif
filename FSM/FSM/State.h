#pragma once
#include "Cha_Worrior.h"
#include "Cha_Magician.h"
#include "iostream"

using namespace std;

class State //인페
{
public:
	virtual void Attack() = 0; 
	virtual void Skill() = 0;
};

class Worrior : public State
{
	Cha_Worrior * worrior;
public:
	Worrior(Cha_Worrior *worrior)
	{
		this->worrior = worrior;
	}
	virtual void Attack()
	{
		cout << "전사의 공격!" << worrior->Attack() << endl;
	}
	virtual void Skill()
	{
		cout << "전사가 스킬 사용!" << worrior->Skill() << endl;
	}
};
class Magician : public State
{
	Chara_Magician * magician;
public:
	Magician(Chara_Magician *magician)
	{
		this->magician = magician;
	}
	virtual void Attack()
	{
		cout << "마법사의 공격!" << magician->Attack() << endl;
	}
	virtual void Skill()
	{
		cout << "마법사의 스킬사용!" << magician->Skill() << endl;
	}
};