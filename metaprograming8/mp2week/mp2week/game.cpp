// ������, ���ھ߱�
// �Լ�, ����ü, ����Ÿ�� etc
// ī���� ����ü?(������ ���׷��̵�...)
// ex) ī�带 ��Ÿ���� ����ü
// ex) ������ ��Ÿ���� ������



#include<iostream>

enum Shape
{
	Dia,
	Heart,
	Clover,
	Spade
};

enum Number
{

num = 1,
num2,
num3,
num4, num5, num6, num7, num8, num9, num10, num11, num12, num13

};

struct Card
{
	Shape s;
	Number n;
};

void ShuffleCard(Card card[])
{
	Shape s = Dia;
	{
		switch (s)
		{
		case 0: std::cout << "��" << std::endl; break;
		case 1: std::cout << "��" << std::endl; break;
		case 2: std::cout << "��" << std::endl; break;
		case 3: std::cout << "��" << std::endl; break;
		}
	}

	Number n = num;
	{
		switch (n)
		{
		case 1: std::cout << "A" << std::endl; break;
		case 11: std::cout << "Q" << std::endl; break;
		case 12: std::cout << "J" << std::endl; break;
		case 13: std::cout << "K" << std::endl; break;
		default: std::cout << n << std::endl; break;
		}
	}

	int dest, sour;
	Card temp;
	for (int i = 0; i <= 52; i++)
	{
		dest = rand() % 52+1;
		sour = rand() % 52+1;

		temp = card[dest];
		card[dest] = card[sour];
		card[sour] = temp;
	}

}


	int main()
	{
		Card card;

		int bet;
		int money = 10000;\

		while (true)
		{
			Card card;

			std::cout << "������ �ݾ��� �Է����ּ���." << std::endl;
			std::cin >> bet;

			if (bet > money)
			{
				std::cout << "������ �ݾ��� ���� �ݾ׺��� ���� ������ �����մϴ�." << std::endl; break;
				continue;
			}
			if (bet < 1000)
			{
				std::cout << "�ּ� ���ñݾ��� 1000���Դϴ�. �ٽ� �Է����ּ���." << std::endl; break;
				continue;
			}

			for (int i = 0; i < 3; i++)
			{
				std::cout << ShuffleCard << std::endl;
			}

			
			
		}
	}
