/*
���ڹ迭
- �� �״�� ���ڸ� �����ϴ� �迭
  ���ڸ� ������ �� �迭�� �������� null ���ڸ� �߰��Ͽ� ���ڿ��� ���� ǥ���ؾ���

**C ��Ÿ���� ���ڿ� �Լ� ����**
- strlen(const char* str): ���ڿ��� ���̸� ��ȯ
- strcpy(char* dest, char* src): ���ڿ� ����
- strcat: ���ڿ��� ����
- strcmp: ���ڿ� ��



*/


#include<iostream>
using namespace std;

int main()
{
	char str[6];
	char str1[6] = { 'H', 'E', 'L', 'L', 'O', '\0' };

	for (size_t i = 0; i < 6; i++)
	{
		cout << str1[i];
	} //��� ���: HELLO

	char str2[] = "Hello"; //�迭�� ũ�Ⱑ �ڵ����� 6���� ����(null(\0) ����)
	for (size_t i = 0; i < str2[i]!='\0'; i++)
	{
		
	}
	char str3[] = "�ѱ�"; //�迭�� ũ�Ⱑ 5�� ����

	char str4[20] = "Hello";
	char str5[10] = "kyungil";
	char str6[10];

	cout << "str1�� ����: " << strlen(str4) << endl; //5
	cout << "str2�� ����: " << strlen(str5) << endl; //7

	strcpy_s(str6, str4);
	cout << "strcpy_s: " << str6 << endl; //strcpy�� ���� �� ����(C4996-���ȿ� ����ϴ� ����)
	strcat_s(str4, str5);
	cout << "strcat_s: " << str4 << endl; //������ �� ũ�Ⱑ ����ؾ��� -> ũ�Ⱑ ���� �� ����










}