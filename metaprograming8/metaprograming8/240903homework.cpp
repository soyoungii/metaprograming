#include<iostream>

int main()
{

	//����1
	//1. �� ���� �Է��� �޴´�.
	//2. �� ���� �Է��� ��Ģ������ �Ѵ�.
	//3. �������� ����Ѵ�.
	//ex) 1, 2 -> 3

	int num1, num2;

	std::cin >> num1 >> num2;

	std::cout << num1<<"���ϱ� " << num2 <<"��"<<(num1+num2)<<"��"<< std::endl;
	std::cout << num1<<"���ϱ�" <<  num2 <<"��"<<(num1*num2)<<"��" <<std::endl;
	std::cout << num1 << "����" << num2 << "��" << (num1- num2) << "��" <<std::endl;
	std::cout << num1 << "������" << num2 << "��" << (num1 / num2) << "��" <<std::endl;

	//����2
	//1. �μ��� �Է��� �޴´�
	//2. �Է��� ���� ���ϴ� ������ �����Ӱ� ������.
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

	std::cout << "result1�� �����? " << result1 << std::endl;
	std::cout << "result2�� �����? " << result2 << std::endl;
	std::cout << "result3�� �����? " << result3 << std::endl;
	std::cout << "result4�� �����? " << result4 << std::endl;
	std::cout << "result5�� �����? " << result5 << std::endl;
	std::cout << "result6�� �����? " << result6 << std::endl;




	//����3
	//�µ� ��ȯ �����
	//�����µ�(�Է�)->ȭ���� ��ȭ�ϱ�
	//(0���� * 9 / 5) + 32 (������ ȭ���� �ٲٴ� ����)

	float tem = (27.8 * 9/5) + 32;
	std::cout << "27.8�� �� " << tem <<"��" <<std::endl;

	int temi = (49 * 9 / 5) + 32;
	std::cout << "49�� �� " << temi << "��" << std::endl;


	//����4
	//������ ��ǥ
	//�޸𸮱���(ppt)



}