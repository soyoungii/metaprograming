/*
함수(Function)
<함수구성>
- 반환형 함수이름(매개변수){함수내용}

<반환형(Return Type)>
- 함수의 결과(출력) 데이터의 자료형
- 함수의 결과 데이터가 없는 반환형 void

<return>
- 함수가 끝나기 전까지 반드시 return으로 반환형에 맞는 데이터를 return해야함.
- 함수 진행중 return을 만났을 경우 그 결과 데이터를 반환하고 함수를 탈출
- void 반환형 함수의 return은 생략 가능


*/

#include<iostream>
//
//int intReturn()
//{
//	std::cout << "return 전" << std::endl;
//	return 10;
//	std::cout << "return 후" << std::endl;
//
//}
//
//void Func4_2()
//{                                                        //1
//	std::cout << "끝!" << std::endl;                     //2
//}                                                       //3
//void Func4_1()
//{                                                       //4
//	Func4_2();                                         //↓
//}
//void Main()
//{
//	Func4_1();
//}
////함수호출 순서: 7 > 8 > 4 > 5 > 1 > 2 > 3 > 6 > 9
//
////<함수 전방선언>
////함수를 구현하기 전에 함수의 선언만 우선 진행
////컴파일 시 함수의 호출은 함수의 구현을 필요로 하며 구현이 없는 경우 사용 불가
////전방선언을 진행하는 경우 함수의 구현을 호출 이후에 진행하도록 구현 가능
//
//void Main6() 
//{
//	Func6_1();
//	Func6_3();
//	// Func6_2(); // 함수의 호출이 함수의 구현보다 먼저 진행되었기에 오류 발생
//}
//
//void Func6_2() 
//{
//
//}
//
//int main() 
//{
//   // Main();
//	Main6();
//}
//
////<기본 매개변수>
//// - 매개변수에 기본값을 지정하여 함수 호출시 매개변수 전달하지 않으면 기본값으로 처리
//// - 기본 매개변수는 뒤에서부터 지정해야함
//// 
//
//
////함수의 호출이 구현보다 먼저 발생되는 경우 에러 발생
//void Func6_2()
//{
//
//}
//void Func6_1();
//{
////구현은 여기서?
//}


/*
<함수 오버로딩>
- 동일한 함수이름을 사용하여 매개변수의 타입, 갯수, 또는 순서를 다르게 정의하는 것
- 가독성 및 편의성 향상
  ㄴ 비슷한 작업을 수행하는 여러 함수가 있을 때 각 함수에 다른 이름을 부여하는 대신 함수 오버로딩을 
     사용하면 코드의 가독성이 향상되며 사용자는 하나의 함수 이름으로 다양한 형태의 함수 호출 가능
- 일관성 유지
   ㄴ 비슷한 작업의 함수들이 많은 경우 함수 오버로딩을 사용하면 각 함수들이 ~ 코드의 일관성을 유지
- 중복코드 제거
   ㄴ 여러 함수간의 공통된 기능이 있을 때 중복 코드를 제거하고 코드의 재사용성을 높일 수 있다.

***함수 오버로딩 성립 조건***
1. 함수 이름이 동일해야함
2. 리턴 타입은 고려대상이 아님
3. 매개변수의 데이터 타입이 다르거나 갯수가 달라야 한다

*/

//void PrintValue(int value)
//{
//	std::cout << "정수 값 : " << value << std::endl;
//}
//
//void PrintValue(double value) 
//{
//	std::cout << "실수 값 : " << value << std::endl;
//}
//
//int Sum(int a, int b)
//{
//
//}
//
//double Sum1(double a, double b) 
//{
//	return a + b;
//}
//
//int Multi(int left, int right) 
//{
//	return left * right;
//}
//
//float Multi(float left, float right)
//{
//	return left * right;
//}
//
//double Multi(double left, double right)
//{
//	return left * right;
//}

//#include<iostream>
//
//int main()
//{
//	PrintValue(10);		// 매개변수가 정수 타입인 함수를 호출
//	PrintValue(10.5);	// 매개변수가 실수 타입인 함수를 호출
//	std::cout << Multi(5, 3);
//	std::cout << Multi(5.1, 3.2);
//}

/*================================*/
int main() {
	// int arr[4];

	int arr[4][3];

	arr[0][0] = 1;
	arr[0][1] = 2;
	arr[0][2] = 3;

	arr[1][0] = 4;
	arr[1][1] = 5;
	arr[1][2] = 6;

	arr[2][0] = 7;
	arr[2][1] = 8;
	arr[2][2] = 9;

	arr[3][0] = 10;
	arr[3][1] = 11;
	arr[3][2] = 12;

	std::cout << " " << arr[0][0] << " , " << arr[0][1] << " , " << arr[0][2] << std::endl;
	std::cout << " " << arr[1][0] << " , " << arr[1][1] << " , " << arr[1][2] << std::endl;
	std::cout << " " << arr[2][0] << " , " << arr[2][1] << " , " << arr[2][2] << std::endl;
	std::cout << " " << arr[3][0] << " , " << arr[3][1] << " , " << arr[3][2] << std::endl;

	std::cout << "===========================================" << std::endl;
	std::cout << " " << &arr[0][0] << " , " << &arr[0][1] << " , " << &arr[0][2] << std::endl;
	std::cout << " " << &arr[1][0] << " , " << &arr[1][1] << " , " << &arr[1][2] << std::endl;

	int arr1[4][3] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	int arr2[4][3] = { 1,2,3,4,5 };

	for (int i = 0; i < 4; i++) 
	{
		std::cout << std::endl;
		for (int k = 0; k < 3; k++)
		{
			std::cout << arr1[i][k] << " ";
		}
	}

	std::cout << "===========================================" << std::endl;

	for (int i = 0; i < 4; i++) 
	{
		std::cout << std::endl;
		for (int k = 0; k < 3; k++) 
		{
			std::cout << arr2[i][k] << " ";
		}
	}

	std::cout << "===========================================" << std::endl;

	int arr3[4][3] = { {1,2},{3},{4},{5} };
	int arr4[4][3] = { {1,2,3},{4,5,6},{7,8,9},{10} };

	for (int i = 0; i < 4; i++)
	{
		std::cout << std::endl;
		for (int k = 0; k < 3; k++) 
		{
			std::cout << arr3[i][k] << " ";
		}
	}
	std::cout << "===========================================" << std::endl;

	for (int i = 0; i < 4; i++) 
	{
		std::cout << std::endl;
		for (int k = 0; k < 3; k++) 
		{
			std::cout << arr4[i][k] << " ";
		}
	}
}

