#include<iostream>

int main()
{

	//과제1
	//1. 두 수의 입력을 받는다.
	//2. 두 수를 입력한 사칙연산을 한다.
	//3. 연산결과를 출력한다.
	//ex) 1, 2 -> 3

	int num1, num2;

	std::cin >> num1 >> num2;

	std::cout << num1<<"더하기 " << num2 <<"는"<<(num1+num2)<<"다"<< std::endl;
	std::cout << num1<<"곱하기" <<  num2 <<"는"<<(num1*num2)<<"다" <<std::endl;
	std::cout << num1 << "빼기" << num2 << "는" << (num1- num2) << "다" <<std::endl;
	std::cout << num1 << "나누기" << num2 << "는" << (num1 / num2) << "다" <<std::endl;

	//과제2
	//1. 두수의 입력을 받는다
	//2. 입력한 수를 비교하는 예제를 자유롭게 만들어라.
	//ex) input = 3, input = 1

	int num3 = 29;
	int num4 = 17;

	int result1;
	int result2;
	int result3;
	int result4;
	int result5;
	int result6;


    result1 = (num3 > num4); // 1(true)
	result2 = (num3 < num4); // 0(false)
	result3 = (num3 >= num4); // 1(true)
	result4 = (num3 <= num4); // 0(false)
	result5 = (num3 == num4); // 0(false)
	result6 = (num3 != num4); // 1(true)

	std::cout << "result1의 결과는? " << result1 << std::endl;
	std::cout << "result2의 결과는? " << result2 << std::endl;
	std::cout << "result3의 결과는? " << result3 << std::endl;
	std::cout << "result4의 결과는? " << result4 << std::endl;
	std::cout << "result5의 결과는? " << result5 << std::endl;
	std::cout << "result6의 결과는? " << result6 << std::endl;




	//과제3
	//온도 변환 만들기
	//섭씨온도(입력)->화씨로 변화하기
	//(0도씨 * 9 / 5) + 32 (섭씨를 화씨로 바꾸는 공식)

	float tem = (27.8 * 9/5) + 32;
	std::cout << "27.8℃ → " << tem <<"℉" <<std::endl;

	int temi = (49 * 9 / 5) + 32;
	std::cout << "49℃ → " << temi << "℉" << std::endl;


	//과제4
	//무작위 발표
	//메모리구조(ppt)



}