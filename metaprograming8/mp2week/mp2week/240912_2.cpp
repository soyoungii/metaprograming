/*
constructor
- ��ü�� ������ �� �ڵ����� ȣ��Ǵ� Ư���� ����Լ�
- ��ü�� �ʱ�ȭ�� ����ϰ� Ŭ������ ������ �̸��� ������ ��ȯ���� ����
- ������ �⺻������, �Ű������� �ִ� ������, ��������� ���� ����

1. �⺻������
- �Ű������� ���� ������. ��������� �������� ������ �����Ϸ��� �ڵ����� ����




*/

#include<iostream>
using namespace std;

class Player
{
private:
	string mName;
	int mAtk;
	int mDef;

public:
	//�⺻������
	Player()
	{
		mName = "ȫ�浿";
		mAtk = 10;
		mDef = 200;

	}
	//�Ű������� ���� ������
	Player(const string&playerName, const int palterAtk, const int playerDef)
	{
		mName = playerName;
		mAtk = palterAtk;
		mDef = playerDef;
	}

	void PrintInfo()const;
};

//Player::Player() // -> ���� �� ����?
//{
//	cout << "���� ������" << endl;
//}

void Player::PrintInfo() const
{
	cout << "�̸�: " << mName << endl;
	cout << "���ܷ�: " << mAtk << endl;
	cout << "����: " << mDef << endl;
}

int main()
{
	//�����Ҵ�?
	Player p;

    //�����Ҵ�
	Player* player = new Player();//�����, ()�� ��� ��� ����
	player->PrintInfo();
	Player* player1 = new Player("ī����", 10, 20);
	player1->PrintInfo();


	delete player;
	delete player1;

	player = nullptr;
	player1 = nullptr;
}

/*
�ǽ�
- �簢�� Ŭ���� �����
- ����, ����
- ������ ����ϴ� �Լ��� ������



*/