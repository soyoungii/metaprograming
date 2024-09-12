/*
==========================================================
생성자 멤버초기화 리스트
- 멤버변수가 생성자 본문 안에서 초기화 되기 전에 직접 초기화
- 멤버 변수가 먼저 생성되고 나중에 값을 변경하는 것보다 효율적
생성자 매개변수 뒤에 삽입하고 콜론(:)으로 시작한 다음 초기화 할 각 변수들을 쉼표로 구분하여 나열

상수, 참조 멤버변수가 있다면
 ㄴ 반드시 멤버초기화 리스트를 활용하여 초기화 진행
 ㄴ 생성자 본문에서는 불가
 ==========================================================
 destructor
 - 객체가 소멸될 때 자동으로 호출되는 특별한 멤버함수
 - 동적 메모리할당 해제할 때...
 - 매개변수를 가질 수 없다 / 반환값 X 오버로딩 불가
*/


#include<iostream>
using namespace std;

class exam
{

public:
	//const
	const int num;

	//참조
	int& score;

	//exam()
	//{
	//	//num=1;  //-> 오류
	//	score = 2;  //-> 오류
	//}

	//상수와 참조멤버들은 반드시 아래와 같이 초기화리스트를 활용

};


class monster
{
private:
	string name;
	int mAtk;
	int mHealth;


public:
	//생성자 선언 및 멤버 초기화 리스트
	monster(const string& monsterName, int monsterAtk, int monsterHealth)
		:name(monsterName), mAtk(monsterAtk), mHealth(monsterHealth)
	{
		//여기서 할 필요 X
	};
};