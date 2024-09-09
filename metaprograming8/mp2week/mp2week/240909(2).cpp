/*
<구조체>
Struct
- 구조체는 여러개의 변수를 묶어 하나의 데이터 단위로 정의하는 사용자 정의 데이터 형식
- 구조체는 각각의 변수를 멤버로 가지고, 이러한 멤버들은 서로 다른 데이터 타입일 수 있다.
- C++에서는 함수도 포함이 가능

struct MyStruct
	{

	};
*/

#include<iostream>
using namespace std;

//키워드 구조체 이름
struct Student
{
	string name; // 학생이름
	int age;
	int phoneNumber;
};
struct Test
{
	short a;  // 2byte
	int b;    // 4byte
	char c;   // 1byte
};

struct Point
{
	int x;
	int y;
	void Print(); // C++에서는 함수도 멤버로 가능
};

struct Person
{
	string name;
	string phoneNumber;
	int age;
};

//좌표를 나타내는 구조체 정의
struct Point1
{
	double x;
	double y;
};

// 두 점 사이를 계산하는 함수
double CalculateDistance(Point1 p1, Point1 p2)
{
	double deltaX = p2.x - p1.x;
	double deltaY = p2.y - p1.y;

	return sqrt(deltaX * deltaX + deltaY * deltaY); // sqrt ==> 제곱근을 구해줌
};

//실습

struct nas
{
	string name;
	int age;
	int Es;
	int Ss;
	int Ms;
};

double NA(double a, double b, double c)
{
	double npsA = (a + b + c) / 3;
	return npsA;
};


int main()
{

	Test t;
	cout << sizeof(t) << endl;  // int 가 2번째에 있으면 출력값이 12, 3번째에 있으면 8

	// 구조체 변수 생성
	Student st;

	//구조체 멤버의 값을 할당
	st.name = "홍길동"; //==> 구조체 멤버에 접근할 시 .을 사용
	st.age = 10;
	st.phoneNumber = 12345678; // ==> 앞에 010을 넣을시 오류(잘못된 8진수). 왜?

	//멤버에 할당된 데이터 출력
	cout << "이름: " << st.name << endl;
	cout << "나이: " << st.age << endl;
	cout << "전화번호: " << st.phoneNumber << endl;

	cout << "=============================================" << endl;
	Point p;
	p.x = 10;
	p.y = 20;
	cout << "구조체 p.x의 값: " << p.x << endl;
	cout << "구조체 p.y의 값: " << p.y << endl;
	p.Print();

	Point p1 = { 50,120 };
	cout << "구조체 p.x의 값: " << p1.x << endl;
	cout << "구조체 p.y의 값: " << p1.y << endl;

	cout << "=============================================" << endl;
	Person per[3];
	per[0].name = "경일";
	per[0].phoneNumber = "010-4567-1234";
	per[0].age = 10;

	per[1].name = "장소영";
	per[1].phoneNumber = "010-1234-4567";
	per[1].age = 24;

	per[2].name = "김경일";
	per[2].phoneNumber = "010-1234-6789";
	per[2].age = 30;

	//구조체 배열의 0번째 인덱스
	cout << per[0].name << per[0].phoneNumber << per[0].age << endl;

	Person st1[3] =
	{
		{"세종대왕", "1234-6789", 50},
		{"세종대왕2", "1111-2222", 10},
		{"세종대왕3", "7896-7896", 30}
	};

	for (int i = 0; i < 3; i++)
	{
		cout << st1[i].name << st1[i].phoneNumber << st1[i].age << endl;
	}

	cout << "=============================================" << endl;

	Point1 point1 = { 1.0,2.0 };
	Point1 point2 = { 4.0,6.0 };

	double distance = CalculateDistance(point1, point2);
	cout << "두점 사이의 거리: " << distance << endl; //결과: 5

	cout << "=============================================" << endl;


	//실습
	//학생 정보 관리 만들어보기(구조체)
	//이름, 나이, 점수(영어, 수학, 과학)
	//평균을 구하는 함수 만들기
	//ex) 홍길동 20
	//영어: 20
	//수학: 30
	//과학: 50
	//각 과목의 합계와 평균 출력

	nas Nas1[3];

	Nas1[0].name = "마이크";
	Nas1[0].age = 28;
	Nas1[0].Es = 91;
	Nas1[0].Ms = 84;
	Nas1[0].Ss = 95;

	Nas1[1].name = "래미";
	Nas1[1].age = 20;
	Nas1[1].Es = 24;
	Nas1[1].Ms = 37;
	Nas1[1].Ss = 18;

	Nas1[2].name = "장소영";
	Nas1[2].age = 24;
	Nas1[2].Es = 60;
	Nas1[2].Ms = 30;
	Nas1[2].Ss = 90;

	for (int i = 0; i < 3; i++)
	{
		double Averange = NA(Nas1[i].Es, Nas1[i].Ms, Nas1[i].Ss);

		cout << "학생의 이름 : " << Nas1[i].name << endl;
		cout << "학생의 나이: " << Nas1[i].age << endl;
		cout << "각 과목의 합계: " << Nas1[i].Es + Nas1[i].Ms + Nas1[i].Ss << endl;
		cout<< "각 과목의 평균 : "<< Averange << endl;
	}

	cout << "=============================================" << endl;
	


}

void Point::Print()  // Point 구조체의 멤버합이 Print이다
{
	cout << "나는 Point 구조체의 멤버 함수" << endl;
}

