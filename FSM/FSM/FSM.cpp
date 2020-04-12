
#include <iostream>
using namespace std;
//2015032036 남성용
//FSM 으로 캐릭터 스왑 구현//붕괴3식

//enum Chara_Class {
//	CHARA_WORRIOR,
//	CHARA_MAGICIAN,
//	CHARA_ARCHER
//};

class IChara{ //인터페이스
public:
	virtual ~IChara();//소멸자
	virtual void HandleInput(Chara &chara, int input) {};//순수 가상함수
};

class Chara {
public:
	virtual void HandleInput(int input) {
		chara->HandleInput(*this, input);
	}
private:
	IChara * chara;
};
class Chara_Class {
public:
	static  Chara_Worrior worrior;
	static  Chara_Magician magician;

};
class Chara_Worrior :public IChara {
public:
	virtual void HandleInput(int input)
	{
		if (input == 0)
		{
			cout << "전사캐릭터로 스왑완료" << endl;
		}
	}
};
class Chara_Magician :public IChara {
public:
	virtual void HandleInput(int input)
	{
		if (input == 1)
		{
			cout << "전사캐릭터로 스왑완료" << endl;
		}
	}
};

int main()
{

}




//void Chara::HandleInput(int input)
//{
//
//	int m_curChara = 0;//현재 캐릭
//	switch (m_curChara)
//	{
//	case CHARA_WORRIOR:
//		if (input == CHARA_MAGICIAN)
//		{
//			m_curChara = CHARA_MAGICIAN;
//			cout << "법사로 변경됨" << endl;
//		}
//		else if (input == CHARA_ARCHER)
//		{
//			m_curChara = CHARA_ARCHER;
//			cout << "궁수로 변경됨" << endl;
//		}
//		break;
//	case CHARA_MAGICIAN:
//		if (input == CHARA_WORRIOR)
//		{
//			m_curChara = CHARA_WORRIOR;
//			cout << "전사로 변경됨" << endl;
//		}
//		else if (input == CHARA_ARCHER)
//		{
//			m_curChara = CHARA_ARCHER;
//			cout << "궁수로 변경됨" << endl;
//		}
//		break;
//
//	case CHARA_ARCHER:
//		if (input == CHARA_WORRIOR)
//		{
//			m_curChara = CHARA_WORRIOR;
//			cout << "전사로 변경됨" << endl;
//		}
//		else if (input == CHARA_MAGICIAN)
//		{
//			m_curChara = CHARA_MAGICIAN;
//			cout << "법사로 변경됨" << endl;
//		}
//		break;
//
//
//	}
//}
