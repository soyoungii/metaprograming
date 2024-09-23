#include<iostream>
using namespace std;


//���¸� ��Ÿ���� ������
enum class STATE
{
	ATTACK,
	RUN,
	JUMP
};

//void RunState();
//void JumpState();
//void AttackState();


//Ŭ������ ����ٸ�?
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
		cout << "���� ���·� ����!" << endl;
	}
	void InputEvent()override
	{
		cout << "���� �߿� Ű �Է��� �޴´�" << endl;
	}
	void Update() override
	{
		cout << "���� �߿� ��ġ ����" << endl;
	}
	void ExitState()override
	{
		cout << "���� ��!<" << endl;
	}
};

class RunState : public IState
{
public: 
	void EnterState()override
	{
		cout << "�޸��� ���·� ����!" << endl;
	}
	void InputEvent()override
	{
		cout << "�޸��� �߿� Ű �Է��� �޴´�" << endl;
	}
	void Update() override
	{
		cout << "�޸��� ��! �޸��� �ӵ��� ������Ʈ �Ѵ�." << endl;
	}
	void ExitState()override
	{
		cout << "�޸��� ��!" << endl;
	}
};

class AttackState : public IState
{
public:
	void EnterState()override
	{
		cout << "�����ϴ� ���·� ����!" << endl;
	}
	void InputEvent()override
	{
		cout << "�����ϴ� �߿� Ű �Է��� �޴´�" << endl;
	}
	void Update() override
	{
		cout << "�����ϴ� ��! ���ݼӵ��� ������Ʈ �Ѵ�." << endl;
	}
	void ExitState()override
	{
		cout << "���� ��!" << endl;
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
		curState->ExitState(); //���� ���� ����
		curState = s; //���� ����
		curState->EnterState(); //����
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
//	cout << "�޸��� �ִ�!" << endl;
//	//�޸��� ���� �� ���𰡸� ó��
//}
//void JumpState()
//{
//	cout << "������!" << endl;
//}
//void AttackState()
//{
//	cout << "������!" << endl;
//}


/*
�ܼ� ������Ʈ�� 9�� 27��(��)���� ���� / 10�� 4��(��) ��ǥ...~
1. ��ɸ���(26�ϱ��� ���۵���̺꿡 ���ε�
   - ��������
   - ��ɱ��� ���
       �� ������ ����(�������� Ȱ��)

2. ������Ʈ ������ ����
    - �������� X
	- �ٽ� ��ɸ� �����Ű�� ��
	- �����̾� ũ�� ��� X / OBS Studio ���
 */