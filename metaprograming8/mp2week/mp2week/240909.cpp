/*
������
- ������տ� �̸��� �ٿ� ����ϴ� ������ Ÿ��
- �ڵ��� �������� ���δ�
- �⺻������ ���� Ÿ������ ó���Ǹ� �ڵ����� 0���� 1�� �����Ѵ�
- ��������� ���� ������ �� �ִ�

(switch �� ���� Ȱ��)

	������(C++11 ����)
	enum MyEnum
	{

	};

	���� ��� ������(C++11���� ����)
	enum class MyEnumClass
	{

	};
	- �̸� �浹�� ����
	- Ÿ�Կ� ���� �������� ����

* ���⼭ ���!
C������ �ΰ��� ����ȯ�� �ַ� ����
- ������ ����ȯ(TypeCating)
   �� �����Ϸ��� �ڵ����� ������
       ex) int a = 5;
           float b = 3.14;
           float res = a+b; ==> a�� �˾Ƽ� float Ÿ������ ��ȯ
- ����� ����ȯ
   �� �����(���α׷���)�� ���� ��ȯ�� ����Ѵ�.
       ex) int a = 5;
		   float b = 3.14;
		   int res = a+(int)b; ==> b�� �˾Ƽ� int Ÿ������ ��ȯ


C++
- static_cast<double>(a)  ==>  �Ϲ����� ����ȯ


*/


#include<iostream>
using namespace std;

enum Color
{
	Red,           //0
	Green,         //1
	Black          //2

};

enum Direction
{
	Left = 1,
	Right,
	Up,
	Down
};

enum class Location
{
	Inven,
	Town,
	Shop
};

enum class Character
{
	Knight=1,
	Archer,
	Mage,
	None
};

Character GetCh(int n)
{
	switch (n)
	{
	case 1: return Character::Knight;
	case 2: return Character::Archer;
	case 3: return Character::Mage;
	}

}
int main()
{
	Color c = Red;
	cout << c << endl;

	//Location loc = Inven; ===> ����
	Location loc = Location::Inven;

	switch (c)
	{
	case Red:
		cout << "������" << endl;
		break;
	case Green:
		break;
	case Black:
		break;
	default:
		break;
	}

	// ������ enum
	int dirSelect;
	cin >> dirSelect;
	switch (dirSelect)
	{
	case Direction::Left:
		cout << "�������� ƢƢ" << endl;   // <=== 1�� �Է��ϸ� �̰� ���
		break;
	case Direction::Right:
		cout << "���������� ƢƢ" << endl;
		break;
	case Direction::Up:
		cout << "���� ƢƢ" << endl;
		break;
	case Direction::Down:
		cout << "�Ʒ��� ƢƢ" << endl;
		break;

	}

	switch (loc)
	{
	case Location::Inven:
		break;
	case Location::Town:
		break;
	case Location::Shop:
		break;
	default:
		break;
	}

	// ������� enum class ==> �Ϲ������� ��ȯ X, �� Ÿ�Կ� ���� ������ ��
	// enum class �� ����ȯ�� �ؾ���
	int chSelect;
	cin >> chSelect;

	Character SelectCh = static_cast<Character>(chSelect); 
	switch (SelectCh)
	{
	case Character::Knight:
		cout << "�����(Knight) ����" << endl;
		break;
	case Character::Archer:
		cout << "�ü�(Archer) ����" << endl;
		break;
	case Character::Mage:
		cout << "������(Mage) ����" << endl;
		break;
	default:
		break;
	}

	int input;
	cin >> input;
	Character ch = Character::None;
	ch = GetCh(input);
	
	switch (ch)
	{
	case Character::Knight:
		break;
	case Character::Archer:
		break;
	case Character::Mage:
		break;
	case Character::None:
		break;
	default:
		break;
	}


}