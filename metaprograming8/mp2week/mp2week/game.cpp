// 월남뽕, 숫자야구
// 함수, 구조체, 열거타입 etc
// 카드의 구조체?(월남뽕 업그레이드...)
// ex) 카드를 나타내는 구조체
// ex) 문양을 나타내는 열거형



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
		case 0: std::cout << "♠" << std::endl; break;
		case 1: std::cout << "♥" << std::endl; break;
		case 2: std::cout << "♣" << std::endl; break;
		case 3: std::cout << "◆" << std::endl; break;
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

			std::cout << "베팅할 금액을 입력해주세요." << std::endl;
			std::cin >> bet;

			if (bet > money)
			{
				std::cout << "보유한 금액이 베팅 금액보다 적어 게임을 종료합니다." << std::endl; break;
				continue;
			}
			if (bet < 1000)
			{
				std::cout << "최소 베팅금액은 1000원입니다. 다시 입력해주세요." << std::endl; break;
				continue;
			}

			for (int i = 0; i < 3; i++)
			{
				std::cout << ShuffleCard << std::endl;
			}

			
			
		}
	}
