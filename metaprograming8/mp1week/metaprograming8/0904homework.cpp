#include<iostream>

int main()

{

	// ���� ������
int season;

std::cin >> season;

if (season >= 3 && season <= 5)
{
	std::cout << "��" << std::endl;
}
else if (season >= 6 && season <= 8)
{
	std::cout <<"����" << std::endl;
}
else if (season >= 9 && season <= 11 )
{
	std::cout <<"����" << std::endl;
}
else if (season>=1 && season<=2 || season==12 )
{
	std::cout << "�ܿ�" << std::endl;
}
/* ���� else if (season>=1 && season<=2 || season==12 )
   ���� else if (season>=1 && season<=2 && season==12 )
    �� �̹� 1�� 2������ ������ �������ִ� ���¿��� 1, 2�� ������ �ٸ� ���ڸ� �־������ ������ ���� ����� ������ �ʴ´�.
       ���� &&(AND) ��� ||(OR)�� �����ؾ� �Ѵ�. */
else
{
	std::cout << "�����ϴ� ���� �Է����ּ���." << std::endl;
}


	int go;

	std::cout << "������������ �����ϰڽ��ϴ�. � �� ���ðڽ��ϱ�? (1: ����, 2: ����, 3: ���ڱ�)" << std::endl;
	std::cin >> go; // ��ȣ�� ������ ���ϴ� �� ��
    

	std::srand(std::time(NULL));
	int com = std::rand() % 3 + 1;
	switch (com)
	{
	case 1:
		std::cout << "��ǻ��: ����" << std::endl;
		break;
	case 2:
		std::cout << "��ǻ��: ����" << std::endl;
		break;
	case 3:
		std::cout << "��ǻ��: ���ڱ�" << std::endl;
		break;
	}

		if (go == com)
		{
			std::cout << "�����ϴ�.";
		}
		else if ( go - com == 1 || go - com == -2)
		{
			std::cout << "�̰���ϴ�!";
		}
		else
		{
			std::cout << "���߽��ϴ�.";
		}

 


}