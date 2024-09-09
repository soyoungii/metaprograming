#include<iostream>

int main()

{

	// 계절 맞히기
int season;

std::cin >> season;

if (season >= 3 && season <= 5)
{
	std::cout << "봄" << std::endl;
}
else if (season >= 6 && season <= 8)
{
	std::cout <<"여름" << std::endl;
}
else if (season >= 9 && season <= 11 )
{
	std::cout <<"가을" << std::endl;
}
else if (season>=1 && season<=2 || season==12 )
{
	std::cout << "겨울" << std::endl;
}
/* 정답 else if (season>=1 && season<=2 || season==12 )
   오답 else if (season>=1 && season<=2 && season==12 )
    ㄴ 이미 1과 2사이의 범위로 좁혀져있는 상태에서 1, 2를 제외한 다른 숫자를 넣어버리면 조건이 꼬여 결과가 나오지 않는다.
       따라서 &&(AND) 대신 ||(OR)로 설정해야 한다. */
else
{
	std::cout << "존재하는 달을 입력해주세요." << std::endl;
}


	int go;

	std::cout << "가위바위보를 시작하겠습니다. 어떤 걸 내시겠습니까? (1: 가위, 2: 바위, 3: 보자기)" << std::endl;
	std::cin >> go; // 번호를 선택해 원하는 걸 냄
    

	std::srand(std::time(NULL));
	int com = std::rand() % 3 + 1;
	switch (com)
	{
	case 1:
		std::cout << "컴퓨터: 가위" << std::endl;
		break;
	case 2:
		std::cout << "컴퓨터: 바위" << std::endl;
		break;
	case 3:
		std::cout << "컴퓨터: 보자기" << std::endl;
		break;
	}

		if (go == com)
		{
			std::cout << "비겼습니다.";
		}
		else if ( go - com == 1 || go - com == -2)
		{
			std::cout << "이겼습니다!";
		}
		else
		{
			std::cout << "패했습니다.";
		}

 


}