
//�ǽ�
//- �簢�� Ŭ���� �����
//- ����, ����
//- ������ ����ϴ� �Լ��� ������
//����(�� �� �ϳ� ����...)
//1. ����
//2. ����

#include<iostream>
using namespace std;


//class square
//{
//public:
//	string name;
//	double width;
//	double height;
//
//	void area();
//
//
//	double calcArea();
//};
//
//void square::area()
//{
//	cout<<name<<"�� ������ " << calcArea() << "�� �̴�." << endl;
//}
//
//double square::calcArea()
//{
//	return width* height;
//}

class Game
{
private:
	int shape[4]; //���
	int useCard[3]; //�Ǵ� ���Ǵ� ī�� ����
	int card[52]; //�� ī�� ����
	int sour, dest, temp; //���ÿ� ����
	int bet; //���� �ݾ�
	int money; // ������


public:
	void shuffCard(int card[52])
	{
		this->card[52] = card[52];
		srand(time(0));

		for (int i = 0; i < 52; i++) // ī�� 52��
		{
			card[i] = i;
		}

		for (int i = 0; i < 500; i++) //500�� ����
		{
			sour = rand() % 52;
			dest = rand() % 52;

			temp = card[dest];
			card[dest] = card[sour];
			card[sour] = temp;
		}
	};

	void gamestart()
		{
			while(true)
			{


				cout << "���� �����ݾ�: ";
				cout << "�󸶸� �����Ͻðڽ��ϱ�?";
				cin >> bet;

				if(1000>bet)
				{
					cout << "�ּ� ���ñݾ��� 1000���Դϴ�."; break;
					continue;
				}
				if (money < bet)
				{
					cout << "�����ݾ׺��� ū �ݾ��� ������ �� �����ϴ�."; break;
					continue;
				}







			}
		}
	

};


class Nambbong {
private:
	//���⿡ ������(�������)

public:
	//���⿡ �Լ���
};



int main()
{
	/*square s1;

	s1.name = "�簢��";
	s1.width = 24.7;
	s1.height = 10.3;

	s1.calcArea();

	s1.area();*/


}


