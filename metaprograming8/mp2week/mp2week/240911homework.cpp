
// 실습


#include<iostream>
using namespace std;

/*



class 클래스이름
{
접근제어지시자: 
	          멤버변수;
			  멤버함수();
};




*/


class Student
{
public:
	string name;
	string major;
	string pNumber;
	int age;

	void show();
};

/* 


상속받는 법

class 상속 받는 클래스 이름 : public protected를 상속할 클래스 이름
{
public: 


};


*/

void Student :: show()
{
	cout << "학생의 이름: " << name << endl;
	cout << "학생의 전공: " << major << endl;
	cout << "학생의 전화번호: " << pNumber << endl;
	cout << "학생의 나이: " << age << endl;
}


int main()
{

	Student per1;
	
	per1.name = "장소영";
	per1.major = "영상시각디자인";
	per1.pNumber = "010-0000-0000";
	per1.age = 24;

	per1.show();

	
}






// 과제 
// 1. 클래스란 무엇인가?
// ppt 발표 하
//

