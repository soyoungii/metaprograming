#include<iostream>

int main()
{
	// 크기를 사용할 때 사용하는 출력
	std::cout << "int형 크기: " << sizeof(int) << "byte" << std::endl;
	std::cout << "short형 크기: " << sizeof(short) << "byte" << std::endl;


	int num1 = 56;
	int num2 = 11;
	
	float num3 = 56;
	float num4 = 11;

	std::cout << "num1 + num2 = " << num1 + num2 << std::endl;
	std::cout << "num1 / num2 = " << num1 / num2 << std::endl; // 정수형이라 5가 나옴
	std::cout << "num1 % num2 = " << num1 % num2 << std::endl; 

	std::cout << "num3 / num4 = " << num3 / num4 << std::endl;


	//증감연산자(이해필요★★★★★)

	int num = 7;
	
	std::cout << "++num의 값은 " << ++num << std::endl; // 8 / 정답 8
	std::cout << "num++의 값은 " << num++ << std::endl; // 9 / 정답 8
	std::cout << "--num의 값은 " << --num << std::endl; // 8 / 정답 8
	std::cout << "num--의 값은" << num-- << std::endl; // 7 / 정답 8

	//관계연산자

	int xo = 7;
	int xa = 9;

	int result;
	int result1;
	int result2;
	int result3;

	result = (xo < xa); // 1(true)
	result1 = (xo >= xa); // 0(false)
	result2 = (xo == xa); // 0(false)
	result3 = (xo != xa); // 1(true)

	std::cout << "result의 결과: " << result << std::endl;
	std::cout << "result1의 결과: " << result1 << std::endl;
	std::cout << "result2의 결과: " << result2 << std::endl;
	std::cout << "result3의 결과: " << result3 << std::endl;


	//논리연산자

	int xo1 = 2;
	int xa2 = 9;
	
	int result11, result12, result13, result14;

	result11 = (xo1 > xa2) && (xo1 == xa2); // 0, 0
	result12 = (xo1 >= xa2) || (xo1 <= xa2); // 0, 1
	result13 = (xo1 < xa2) && (xo1 != xa2); // 1, 1
	result14 = (xo1 != xa2) || (xo1 > xa2); //1, 0

	std::cout << "result11의 결과: " << result11 << std::endl; // 0
	std::cout << "result12의 결과: " << result12 << std::endl; // 1
	std::cout << "result13의 결과: " << result13 << std::endl; // 1
	std::cout << "result14의 결과: " << result14 << std::endl; // 1

	
	



}