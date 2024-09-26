/*
singleton
- 해당 객체의 메모리를 정적으로 할당하여 하나의 객체에만 접근하는 방법
- 오직 한개의 인스턴스만을 갖도록 보장
- 즉 아무리 많은 객체를 생성해도 단 하나의 인스턴스만을 생성한 것과 동일
- 클래스의 객체가 복사가 되면 안됨
*/


#include<iostream>

using namespace std;

class Singleton
{
private:
	Singleton()
	{
		cout << "싱글톤 인스턴스 생성" << endl;
	}
	~ Singleton(){}

	//복사생성자와 대입연산자 방어
	Singleton(const Singleton&) = delete;
	Singleton& operator = (const Singleton&) = delete;

public:

	static Singleton& GetInstance()
	{
		static Singleton inst;
		return inst;
	}

	void Print()
	{
		cout << "나는 싱글톤이야" << endl;
	}

};


int main()
{
	Singleton& s1 = Singleton::GetInstance();
	s1.Print();

	Singleton& s2 = Singleton::GetInstance();
	s2.Print();

	if (&s1 == &s2)
	{
		cout << "s1과 s2는 같다" << endl;
	}
}

//오늘의 과제! 코드 짜기 없음~!~!
//싱글톤 패턴 장단점 요약(자세히)
//OOP에 대해 자세히! 정리할 것
//깃허브 사용법

//앞으로의 C#과제는 C++ 과제를 C#으로 변경시키는 것

