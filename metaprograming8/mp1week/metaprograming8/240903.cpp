#include<iostream>

int main()
{
	// ũ�⸦ ����� �� ����ϴ� ���
	std::cout << "int�� ũ��: " << sizeof(int) << "byte" << std::endl;
	std::cout << "short�� ũ��: " << sizeof(short) << "byte" << std::endl;


	int num1 = 56;
	int num2 = 11;
	
	float num3 = 56;
	float num4 = 11;

	std::cout << "num1 + num2 = " << num1 + num2 << std::endl;
	std::cout << "num1 / num2 = " << num1 / num2 << std::endl; // �������̶� 5�� ����
	std::cout << "num1 % num2 = " << num1 % num2 << std::endl; 

	std::cout << "num3 / num4 = " << num3 / num4 << std::endl;


	//����������(�����ʿ�ڡڡڡڡ�)

	int num = 7;
	
	std::cout << "++num�� ���� " << ++num << std::endl; // 8 / ���� 8
	std::cout << "num++�� ���� " << num++ << std::endl; // 9 / ���� 8
	std::cout << "--num�� ���� " << --num << std::endl; // 8 / ���� 8
	std::cout << "num--�� ����" << num-- << std::endl; // 7 / ���� 8

	//���迬����

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

	std::cout << "result�� ���: " << result << std::endl;
	std::cout << "result1�� ���: " << result1 << std::endl;
	std::cout << "result2�� ���: " << result2 << std::endl;
	std::cout << "result3�� ���: " << result3 << std::endl;


	//��������

	int xo1 = 2;
	int xa2 = 9;
	
	int result11, result12, result13, result14;

	result11 = (xo1 > xa2) && (xo1 == xa2); // 0, 0
	result12 = (xo1 >= xa2) || (xo1 <= xa2); // 0, 1
	result13 = (xo1 < xa2) && (xo1 != xa2); // 1, 1
	result14 = (xo1 != xa2) || (xo1 > xa2); //1, 0

	std::cout << "result11�� ���: " << result11 << std::endl; // 0
	std::cout << "result12�� ���: " << result12 << std::endl; // 1
	std::cout << "result13�� ���: " << result13 << std::endl; // 1
	std::cout << "result14�� ���: " << result14 << std::endl; // 1

	
	



}