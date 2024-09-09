/*
함수
- 특정 작업을 수행하는 코드의 집합
- 코드의 안정성, 에러를 수정하기 쉽다.
- 볼륨이 커지는 프로그램일수록 수정, 유지보수가 어렵다.
   ㄴ 기능별로 세분화 시키는 것이 필요
-  코드의 재사용성이 좋다.


기본적으로 함수는 매개변수(파라미터) 유무와 반환값(리턴값)의 유무에 따라 함수를 네개의 형태로 나눌 수 있다.
1. 매개변수와 반환값이 모두 있는 경우
2. 매개변수가 있고 반환값이 없는 경우
3. 매개변수가 없고 반환값이 있는 경우
4. 매개변수와 반환값이 모두 없는 경우

*/

/*
1. 지역변수
- 중괄호 내에 선언되는 변수는 모두 지역변수다.
- 활동영역은 변수가 선언된 블록 내에서만 유효하다.

* 전역변수는 최대한 지양

*/
//1번 예시
//  함수명 / 매개변수(파라미터)
int Sum(int a, int b)
{
	int res = a + b;
	return res;
	// 반환값(리턴값) / int -> 반환의 타입 / int 타입에 맞는 걸 반환해줘야함
}
#include<iostream>
//local(지역변수) global(전역변수)

//2번 예시
void MyPrint(int num)
{
	std::cout << num << std::endl;
	// return num; //오류뜨는 이유: 반환 값이 타입과 맞지 않아서
}

//3번 예시
int ReamNum()
{
	int num;
	std::cin >> num;
	return num;
}

//4번 예시
void Print()
{
	std::cout << "아무것도 없다" << std::endl;
}

void LocalVariable()
{
	//지역변수
	int num = 1;
	{
		num = 5; // -> 지역변수 내에 있으니 가능
	}

	std::cout << num << std::endl;
}

int main()
{
	//1.
	int result;
	result = Sum(1, 2);
	std::cout << "Sum() 함수 호출 결과: " << result << std::endl;

	//2.
	MyPrint(5);
	//ex) int a;
	//    a = MyPrint(5); // 오류 뜨는 이유: 반환값이 없음




}