

#include <iostream>

int main()
{
	// 빙고게임 5x5 ==> 포인터 사용 안해도 됨
	// 마킹표시(모양은 자유) 35? 뭐가 35?
	// 종료조건 3줄 완성
	// 

	using namespace std;

	int bingomap[25]; 
	int input; // 입력할 숫자
	int arr[5][5] = { rand() % 25 + 1 };
	int row, col; //가로 세로
	int dest, sour, temp;
	int bingo=0; // 빙고 카운트
	bool dup = true; // 중복된 숫자 거르기
	srand((unsigned int)time(NULL));


	for (int i = 0; i < 25; ++i)
	{
		bingomap[i] = i + 1;
	}

	for (int i = 0; i < 100; ++i)
	{
		dest = rand() % 25 + 1;
		sour = rand() % 25 + 1;

		temp = bingomap[dest];
		bingomap[dest] = bingomap[sour];
		bingomap[sour] = temp;
	}

	while (true)
		{
		for (int i = 0; i < 5; ++i)
		{
			for (int j = 0; j < 5; ++j)
			{
				if (bingomap[i * 5 + j] = INT_MAX)
				{
					cout << "★\t";
				}
				else
				{
					cout << bingomap[i * 5 + j] << "\t";
				}
				cout << endl;
			}
		}

		cout << endl << bingo << "Bingo!" << endl;

		if (bingo >= 3)
		{
			cout << "3 Bingo 완성! 게임을 종료합니다" << endl; break;
		}
		bingo = 0;


		}

	// array 수업
	//for (int i = 0; i < 5; i++)
	//{
	//	std::cout << std::endl;

	//	for (int k = 0; k < 5; k++)
	//	{
	//		std::cout << arr[i][k] << "\t";
	//	}
	//}

}