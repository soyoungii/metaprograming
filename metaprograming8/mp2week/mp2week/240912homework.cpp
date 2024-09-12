
//실습
//- 사각형 클래스 만들고
//- 가로, 세로
//- 면적을 출력하는 함수를 만들어라
//과제(둘 중 하나 선택...)
//1. 남뽕
//2. 빙고

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
//	cout<<name<<"의 면적은 " << calcArea() << "㎡ 이다." << endl;
//}
//
//double square::calcArea()
//{
//	return width* height;
//}

class Game
{
private:
	int shape[4]; //모양
	int useCard[3]; //판당 사용되는 카드 개수
	int card[52]; //총 카드 개수
	int sour, dest, temp; //셔플용 변수
	int bet; //베팅 금액
	int money; // 소지금


public:
	void shuffCard(int card[52])
	{
		this->card[52] = card[52];
		srand(time(0));

		for (int i = 0; i < 52; i++) // 카드 52장
		{
			card[i] = i;
		}

		for (int i = 0; i < 500; i++) //500번 셔플
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


				cout << "현재 보유금액: ";
				cout << "얼마를 베팅하시겠습니까?";
				cin >> bet;

				if(1000>bet)
				{
					cout << "최소 베팅금액은 1000원입니다."; break;
					continue;
				}
				if (money < bet)
				{
					cout << "보유금액보다 큰 금액은 베팅할 수 없습니다."; break;
					continue;
				}







			}
		}
	

};


class Nambbong {
private:
	//여기에 변수들(멤버변수)

public:
	//여기에 함수들
};



int main()
{
	/*square s1;

	s1.name = "사각형";
	s1.width = 24.7;
	s1.height = 10.3;

	s1.calcArea();

	s1.area();*/


}


