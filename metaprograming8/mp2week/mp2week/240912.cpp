/*
========================================
Class
- 객체지향기법은 소프트웨어 설계에 있어서 많은 장점을 제공하는 강력한 기술
   ㄴ 개념을 이해하기가 까다롭다.
- 객체
   ㄴ 클래스는 객체를 정의하는 틀이자 설계도
   ㄴ 객체는 설계도를 기반으로 실체화를 시키는 것
   ㄴ 인스턴스화: 클래스를 사용하여 객체를 생성하는 과정을 의미

========================================
class 자동차
{
private:
// 멤버변수(속성 -> 부품 -> 숨겨야함)


public:
// 멤버함수(기능 -> 브레이크, 페달, 엑셀, 방향지시등 등 -> 우리가 이용 -> 노출)
}
========================================
접근제어지시자
- private: 숨겨야 할 멤버변수 등을 이곳에 사용
   ㄴ 클래스의 디폴트
- public: 외부에서 자유롭게 참조 가능
   ㄴ 외부에서 직접적으로 멤버들을 조작할 수 있기 때문에 공개할 기능들은 이 곳에 사용
- protected: 상속관계

접근제어================클래스내부================클래스외부================상속클래스
private                    O                         X                        X
public                     O                         O                        O
protected
========================================


*/

#include<iostream>
using namespace std;



struct Circle
{
	//접근제어지시자 디폴트: public
int radius;
string color;

double calcArea()
{
	return 3.14 * radius * radius;
}
};

class Ccircle
{
	//접근제어지시자 디폴트: private
	int radius;
	string color;

	double calcArea()
	{
		return 3.14 * radius * radius;
	}
};

class Student
{
public: 
	    Student();//생성자
		~Student();//소멸자

		//멤버함수

public:

	//멤버함수
	void Print()
	{
		cout << "스튜던트 클래스의 프린트 함수";
	}
	void Print(int a, int b)
	{
		cout << a << " , " << b << endl;
	}
	void Print(string str = "디폴트 매개변수")
	{
		cout << str << endl;
	}

	//클래스 내부에 원형만 선언
	int Sum(int a, int b);


private://통상적으로 아래에 씀
	//멤버변수
	

};



int main()
{
	Circle c;
	c.radius = 5;
	c.calcArea();

	Ccircle cc;
	{
		//cc. 구현 불가
	 
	}


}

int Student::Sum(int a, int b)
{
	return a + b;
}

