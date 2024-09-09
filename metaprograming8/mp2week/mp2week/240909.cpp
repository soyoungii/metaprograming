/*
열거형
- 상수집합에 이름을 붙여 사용하는 데이터 타입
- 코드의 가독성을 높인다
- 기본적으로 정수 타입으로 처리되며 자동으로 0부터 1씩 증가한다
- 명시적으로 값을 지정할 수 있다

(switch 와 많이 활용)

	구버전(C++11 이전)
	enum MyEnum
	{

	};

	범위 기반 열거형(C++11부터 지원)
	enum class MyEnumClass
	{

	};
	- 이름 충돌을 방지
	- 타입에 대한 안정성을 높임

* 여기서 잠깐!
C에서는 두가지 형변환이 주로 사용됨
- 묵시적 형변환(TypeCating)
   ㄴ 컴파일러가 자동으로 수행함
       ex) int a = 5;
           float b = 3.14;
           float res = a+b; ==> a를 알아서 float 타입으로 변환
- 명시적 형반환
   ㄴ 사용자(프로그래머)가 직접 변환을 명시한다.
       ex) int a = 5;
		   float b = 3.14;
		   int res = a+(int)b; ==> b를 알아서 int 타입으로 변환


C++
- static_cast<double>(a)  ==>  일반적인 형변환


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

	//Location loc = Inven; ===> 오류
	Location loc = Location::Inven;

	switch (c)
	{
	case Red:
		cout << "빨간색" << endl;
		break;
	case Green:
		break;
	case Black:
		break;
	default:
		break;
	}

	// 구버전 enum
	int dirSelect;
	cin >> dirSelect;
	switch (dirSelect)
	{
	case Direction::Left:
		cout << "왼쪽으로 튀튀" << endl;   // <=== 1을 입력하면 이게 출력
		break;
	case Direction::Right:
		cout << "오른쪽으로 튀튀" << endl;
		break;
	case Direction::Up:
		cout << "위로 튀튀" << endl;
		break;
	case Direction::Down:
		cout << "아래로 튀튀" << endl;
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

	// 범위기반 enum class ==> 암묵적으로 변환 X, 즉 타입에 대한 안정성 ↑
	// enum class 는 형변환을 해야함
	int chSelect;
	cin >> chSelect;

	Character SelectCh = static_cast<Character>(chSelect); 
	switch (SelectCh)
	{
	case Character::Knight:
		cout << "성기사(Knight) 선택" << endl;
		break;
	case Character::Archer:
		cout << "궁수(Archer) 선택" << endl;
		break;
	case Character::Mage:
		cout << "마법사(Mage) 선택" << endl;
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