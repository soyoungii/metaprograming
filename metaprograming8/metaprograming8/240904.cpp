#include<iostream>

int main()
{
	//�ǽ�
	//1. �Է��� �ΰ��� �޴´�.
	//2. ��Ģ���� �� �ϳ� ����
	//���� 1���� ������ ���ϱ� / 2�� ������ ����/ 3�� ���� / 4�� ������

	int input, input1;

	std::cout << "1~4������ ��ȣ�� ��� �����ÿ�." << std::endl;
	std::cin >> input >> input1;

	if(input==input+input1)
	{
		std::cout << input <<" + "<<input <<" = "<<(input+input)<<std::endl;
	}

	



/*
 - ������� �������� ���� ������ �� �ϳ��� �����ϴ� ��Ȳ���� ����ϱ� ��
-�ڵ��� �������� ���� ȿ������ ������ �� ������ ǥ������ ������ �ִ�.

 break?
 ��	�ݺ����̳� switch���� ������ �� ���
 ��break�� ����Ǹ� �ش� ������ switch���� �����ϰ� break �������� �̵��Ͽ� �����.
 �� ���� switch�� ��ø �ݺ��������� break�� �ִ� �ش� �������� ����������.
 
 */

		
	/*
	std::cout << "������ �����Ͻÿ�." << std::endl;
	std::cout << "1. ������ġ" << std::endl;
	std::cout << "2. �߷ζ�Ʈ" << std::endl;
	std::cout << "3. ��" << std::endl;
	std::cout << "4. ��Ÿũ����Ʈ" << std::endl;
	std::cout << "5. �ν�Ʈ��ũ" << std::endl;

	int Choice;
	std::cin >> Choice;
	switch (Choice)
	{
	case 1: 
		std::cout << "������ġ�� ����!" << std::endl;
		break;

	case 2:
		std::cout << "�߷ζ�Ʈ�� ����!" << std::endl;
		break;

	case 3: 
			std::cout << "���� ����!" << std::endl;
			break;
	case 4: 
			std::cout << "��Ÿũ����Ʈ�� ����!" << std::endl;
			break;

	case 5: 
			std::cout << "�ν�Ʈ��ũ�� ����!" << std::endl;
			break;

	}

	int jobSelect, SkillSelect;
	std::cout << "������ �����Ͻÿ�.(1: ������. 2: ���, 3: �����)";
		std::cin >> jobSelect;

		switch (jobSelect)
		{
		case 1:
			std::cout << "�����縦 �����ߴ�. � ��ų�� ����ұ�?(1: ���̾, 2: ���̽���)" << std::endl;
			std::cin >> SkillSelect;
			switch (SkillSelect)
			{
		case 1:
			std::cout << "���̾ ����!" << std::endl;
			break;
		case 2:
			std::cout << "���̽��� ����!" << std::endl;
			break;

			}
			break;
		case 2:
			std::cout << "��縦 �����ߴ�. � ��ų�� ����ұ�?(1: ���а���, 2: �⺻����)" << std::endl;
			std::cin >> SkillSelect;
			switch (SkillSelect)
			{
			case 1:
				std::cout << "���а��� ����!" <<std::endl;
				break;
			case 2:
				std::cout << "�⺻���� ����!" << std::endl;
				break;
			}
			break;

			if���� ����ؼ� ���� ������
			���� 1~12���� / n�� �Է��ϸ� �´� ������ ������

			���������� ���� ����� / ������ ó��
			1. ���� 2. ���� 3. ���ڱ�
			������ 1. �̰�� 2. ���� 3. ����. 
			*/
	}

