#include<iostream>

int main()
{
	//실습
	//1. 입력을 두개를 받는다.
	//2. 사칙연산 중 하나 선택
	//만약 1번을 누르면 더하기 / 2번 누르면 빼기/ 3번 곱셉 / 4번 나눗셈

	int input, input1;

	std::cout << "1~4까지의 번호를 골라 누르시오." << std::endl;
	std::cin >> input >> input1;

	if(input==input+input1)
	{
		std::cout << input <<" + "<<input <<" = "<<(input+input)<<std::endl;
	}

	



/*
 - 상수값을 기준으로 여러 선택지 중 하나를 선택하는 상황에서 사용하기 편리
-코드의 가독성을 높이 효율성을 개선할 수 있지만 표현식의 제한이 있다.

 break?
 ㄴ	반복문이나 switch문을 제어할 때 사용
 ㄴbreak가 실행되면 해당 루프나 switch문을 종료하고 break 다음으로 이동하여 실행됨.
 ㄴ 다중 switch나 중첩 반복문에서는 break가 있는 해당 스코프만 빠져나간다.
 
 */

		
	/*
	std::cout << "게임을 선택하시요." << std::endl;
	std::cout << "1. 오버워치" << std::endl;
	std::cout << "2. 발로란트" << std::endl;
	std::cout << "3. 롤" << std::endl;
	std::cout << "4. 스타크래프트" << std::endl;
	std::cout << "5. 로스트아크" << std::endl;

	int Choice;
	std::cin >> Choice;
	switch (Choice)
	{
	case 1: 
		std::cout << "오버워치를 선택!" << std::endl;
		break;

	case 2:
		std::cout << "발로란트를 선택!" << std::endl;
		break;

	case 3: 
			std::cout << "롤을 선택!" << std::endl;
			break;
	case 4: 
			std::cout << "스타크래프트를 선택!" << std::endl;
			break;

	case 5: 
			std::cout << "로스트아크를 선택!" << std::endl;
			break;

	}

	int jobSelect, SkillSelect;
	std::cout << "직업을 선택하시오.(1: 마법사. 2: 기사, 3: 드워프)";
		std::cin >> jobSelect;

		switch (jobSelect)
		{
		case 1:
			std::cout << "마법사를 선택했다. 어떤 스킬을 사용할까?(1: 파이어볼, 2: 아이스볼)" << std::endl;
			std::cin >> SkillSelect;
			switch (SkillSelect)
			{
		case 1:
			std::cout << "파이어볼 시전!" << std::endl;
			break;
		case 2:
			std::cout << "아이스볼 시전!" << std::endl;
			break;

			}
			break;
		case 2:
			std::cout << "기사를 선택했다. 어떤 스킬을 사용할까?(1: 방패공격, 2: 기본공격)" << std::endl;
			std::cin >> SkillSelect;
			switch (SkillSelect)
			{
			case 1:
				std::cout << "방패공격 시전!" <<std::endl;
				break;
			case 2:
				std::cout << "기본공격 시전!" << std::endl;
				break;
			}
			break;

			if문을 사용해서 계절 맞히기
			월은 1~12까지 / n을 입력하면 맞는 계절이 나오게

			가위바위보 게임 만들기 / 정수로 처리
			1. 가위 2. 바위 3. 보자기
			결과출력 1. 이겼다 2. 졌다 3. 비겼다. 
			*/
	}

