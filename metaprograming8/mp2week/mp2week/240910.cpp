

#include <iostream>

int main()
{
	// ������� 5x5 ==> ������ ��� ���ص� ��
	// ��ŷǥ��(����� ����) 35? ���� 35?
	// �������� 3�� �ϼ�
	// 

	using namespace std;

	int bingomap[25]; 
	int input; // �Է��� ����
	int arr[5][5] = { rand() % 25 + 1 };
	int row, col; //���� ����
	int dest, sour, temp;
	int bingo=0; // ���� ī��Ʈ
	bool dup = true; // �ߺ��� ���� �Ÿ���
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
					cout << "��\t";
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
			cout << "3 Bingo �ϼ�! ������ �����մϴ�" << endl; break;
		}
		bingo = 0;


		}

	// array ����
	//for (int i = 0; i < 5; i++)
	//{
	//	std::cout << std::endl;

	//	for (int k = 0; k < 5; k++)
	//	{
	//		std::cout << arr[i][k] << "\t";
	//	}
	//}

}