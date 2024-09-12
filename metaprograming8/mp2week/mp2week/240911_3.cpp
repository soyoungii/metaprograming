/*
===========================================
연산자 재정의(Operator Overloading)
- 사용자 정의 자료형이나 클래스의 연산자를 재정의하여 여러 의미로 사용
- 객체간의 산술연산, 비교, 대입 등을 가능하게 해줌
- 단, 일부 연산자는 오버로딩을 할 수 없음

<연산자 재정의>
반환형 operator 연산자기호(매개변수){함수내용}
기본 연산자의 연산을 함수로 재정의하여 기능 구현
ex)

===========================================

const
*/


#include<iostream>
using namespace std;
const int MAX = 10; // 이런 식으로 사용하라고 권장, #define 지양

struct Point
{
	float x;
	float y;

	//생성자 -> 나중에 배움
	Point(float x, float y)
	{
		this->x = x;
		this->y = y;
	}

	//1. 멤버함수를 통한 연산자 재정의
	Point operator+(Point& other)
	{
		return Point(this->x + other.x, this->y + other.y);
	}

	void Test()const
	{

	}

	//Point 구조체의 멤버함수
	void Print()const
	{
		Test(); // 컨스트를 붙인 내부함수에서 const가 붙지 않은 함수를 넣을 시 오류
		cout << "(" << x << " , " << y << ")";
	}
	float GetX()const
	{
		return this->x; //읽기전용 함수로 만듦
	}

};

//2. 전역함수를 통한 연산자 재정의
Point operator-(Point& left, Point& right)
{
	return Point(left.x - right.x, left.y - right.y);
}

void PrintArr(/*const*/int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}
	arr[0] = 5; // int 앞에 const를 붙일 시 배열 변경 불가
}


int main()
{
	// const int num = 10;
	// num = 20; -> 오류(const는 상수화 시켜주기 때문)


	Point vec1 = Point(2, 1);
	Point vec2 = Point(3, 1);

	Point add = vec1 + vec2; // 연산자 재정의를 하지 않았을 경우 + 오류 
	Point sub = vec1 - vec2; 

    
	add.Print();
	sub.Print();


	/*
	1. 연산자 오버로딩을 이용하여 * 만들기
	2. 스트링 클래스를 이용하여 문자열 뒤집기(뒤집는 함수가 있음)
         ex) in: abcde -> out: edcba
	3. 문자열 내 특정 문자 갯수 찾기
	     ex) in: aabbccddddd 
	         내가 찾으려고 하는 문자: d
			 out: 5
 	  1) 입력을 받는다.
	  2) 내가 찾으려고 하는 문자를 입력받는다.
	  3) 찾는 로직을 만든다.
	  4) 1번에서 입력한 문자열의 길이만큼
	  5) 만약 내가 찾으려고 하는 문자와 ??와 같다면
         같은 문자를 카운팅을 해주는 뭔가를 하면 되지않을까...?
	 */
}