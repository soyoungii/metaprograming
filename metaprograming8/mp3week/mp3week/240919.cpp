/*
===============================================================
static
- 클래스 내의 static 변수 및 함수
1. 클래스 정적 멤버 변수: 모든 클래스 인스턴스가 공유하는 변수
    ㄴ 클래스의 모든 인스턴스가 해당 변수에 접근이 가능. 
	   하나의 인스턴스에서 변수를 수정하면 다른 인스턴스에도 반영

2. 클래스 정적 멤버 함수: 클래스의 인스턴스 없이 호출할 수 있는 함수
    ㄴ 정적 멤버 함수는 클래스의 정적 멤버 변수에만 접근이 가능.
	   인스턴스 멤버변수나 함수에는 접근 불가


===============================================================









*/




#include<iostream>
using namespace std;



class Count
{
private:
	int num; //멤버변수

	static int count; //정적 멤버변수

public:
	Count()
	{
		count++;
	}

	void Print()
	{

	}
	static int GetCount() //정적 멤버함수
	{
		//인스턴스 멤버변수는 접근 불가
		//num = 1;
		//멤버함수 접근 불가
		//Print();
		return count;
	}
};

//초기화
int Count::count = 0;


int main()
{
	Count c1;
	Count c2;
	Count c3;

	cout << Count::GetCount() << endl; //결과: 3

}