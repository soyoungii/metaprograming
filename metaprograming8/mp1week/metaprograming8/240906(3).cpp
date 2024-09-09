

/*
240906 실습
1. 사용자가 입력한 양의 정수의 각 자리수의 합(함수)
    ㄴ ex) 15248 -> 1+5+2+4+8
2. 사용자가 입력한 최대값과 최소값 맞히기(함수)
    ㄴ ex) 5,1 입력
	ㄴ     출력 -> 최대값: 5 최소값: 1

240906 과제
1. 숫자야구게임 만들기
    ㄴ 랜덤하게 숫자를 3개 뽑는다.(1~10 / 0~9)
	ㄴ 1, 5, 3
	ㄴ 1, 3, 5 입력시 결과는 1 strike 2 ball / OUT
	ㄴ 종료조건: 3strike / OUT

2. 카드게임(월남뽕)
    ㄴ 총 카드는 52장 / A:1 ~ K:13
	ㄴ 보여지는 카드: 3장
	ㄴ 3장을 뽑고 1장을 확인 -> 확인하지 않은 카드의 숫자 사이에 확인한 카드의 숫자가 있으면 승리
	ㄴ 한 번 뽑은 카드는 다시 나올 수 없음(배열 써야함 / ex) 0,1,2 인덱스에 접근을 했으면 0,1,2 사용 X)
	ㄴ 종료조건: 파산 / 베팅금액 > 보유금액 / 17판 끝
	ㄴ 



*/
#include<iostream>

int main()
{
	std::srand(time(NULL));

	int number[10];
	int dest, sour, temp;

	//배열 초기화
	for (int i = 0; i < 10; i++)
	{
		number[i] = i + 1;
	}
	std::cout << "셔플 전: " << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::cout << "number[" << i << "]인덱스: " << number[i] << std::endl;
	}

	//섞는다면?
	for (int i = 0; i < 1000; i++)
	{
		dest = rand() % 10; //0~9
		sour = rand() % 10;

		//선택된 두 인덱스(dest, sour)에 해당하는 배열 요소를 교환
		//temp 변수를 사용해서 값을 임시로 저장
		temp = number[dest];
		number[dest] = number[sour];
		number[sour] = temp;
	}
	std::cout << "셔플 후! " << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::cout << "number[" << i << "]인덱스: " << number[i] << std::endl;
	}


}