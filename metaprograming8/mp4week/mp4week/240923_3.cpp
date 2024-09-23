#include<iostream>
using namespace std;


//상태를 나타내는 열거형
enum class STATE
{
	ATTACK,
	RUN,
	JUMP
};

//void RunState();
//void JumpState();
//void AttackState();


//클래스로 만든다면?
class IState
{
public:
	virtual void EnterState() = 0;
	virtual void InputEvent() = 0;
	virtual void Update() = 0;
	virtual void ExitState() = 0;

};

class JumpState : public IState
{
public:
	void EnterState()override
	{
		cout << "점프 상태로 진입!" << endl;
	}
	void InputEvent()override
	{
		cout << "점프 중에 키 입력을 받는다" << endl;
	}
	void Update() override
	{
		cout << "점프 중에 위치 변경" << endl;
	}
	void ExitState()override
	{
		cout << "점프 끝!<" << endl;
	}
};

class RunState : public IState
{
public: 
	void EnterState()override
	{
		cout << "달리는 상태로 진입!" << endl;
	}
	void InputEvent()override
	{
		cout << "달리는 중에 키 입력을 받는다" << endl;
	}
	void Update() override
	{
		cout << "달리는 중! 달리는 속도를 업데이트 한다." << endl;
	}
	void ExitState()override
	{
		cout << "달리기 끝!" << endl;
	}
};

class AttackState : public IState
{
public:
	void EnterState()override
	{
		cout << "공격하는 상태로 진입!" << endl;
	}
	void InputEvent()override
	{
		cout << "공격하는 중에 키 입력을 받는다" << endl;
	}
	void Update() override
	{
		cout << "공격하는 중! 공격속도를 업데이트 한다." << endl;
	}
	void ExitState()override
	{
		cout << "공격 끝!" << endl;
	}
};


class Character
{
private:
	IState* curState;

public:
	Character() 
	{
		curState = new RunState();
	}
	void SetCurState(IState* s)
	{
		curState->ExitState(); //이전 상태 종료
		curState = s; //상태 변경
		curState->EnterState(); //진입
	}
	void InputEvent()
	{
		curState->InputEvent();
	}
	void Update()
	{
		curState->Update();
	}
};



int main()
{
	//STATE state = STATE::ATTACK;

	//switch (state)
	//{
	//case STATE::ATTACK:
	//	AttackState();
	//	break;
	//case STATE::JUMP:
	//	JumpState();
	//	break;
	//case STATE::RUN:
	//	RunState();
	//	break;
	//}


	Character c;
	c.InputEvent();
	c.Update();

	c.SetCurState(new JumpState());
	c.InputEvent();
	c.Update();

	c.SetCurState(new AttackState());
	c.InputEvent();
	c.Update();
}


//void RunState()
//{
//	cout << "달리고 있다!" << endl;
//	//달리고 있을 때 무언가를 처리
//}
//void JumpState()
//{
//	cout << "점프중!" << endl;
//}
//void AttackState()
//{
//	cout << "공격중!" << endl;
//}


/*
콘솔 프로젝트는 9월 27일(금)부터 진행 / 10월 4일(금) 발표...~
1. 기능명세서(26일까지 구글드라이브에 업로드
   - 주제선정
   - 기능구현 목록
       ㄴ ㅇㅇㅇ 구현(ㅇㅇㅇ을 활용)

2. 프로젝트 영상을 찍어라
    - 구구절절 X
	- 핵심 기능만 노출시키면 됨
	- 프리미어 크랙 사용 X / OBS Studio 사용
 */