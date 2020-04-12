#pragma once
#include "Cha_Worrior.h"
#include "Cha_Magician.h"
#include "iostream"

using namespace std;

class State //����
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
		cout << "������ ����!" << worrior->Attack() << endl;
	}
	virtual void Skill()
	{
		cout << "���簡 ��ų ���!" << worrior->Skill() << endl;
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
		cout << "�������� ����!" << magician->Attack() << endl;
	}
	virtual void Skill()
	{
		cout << "�������� ��ų���!" << magician->Skill() << endl;
	}
};