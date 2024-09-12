
/*
string
- C++���� �����ϴ� ���ڿ��� �ٷ�� ���� Ŭ����
- C ��Ÿ���� ���ڹ迭. ���� �����ϰ� ����
- ���ڿ��� ũ�⸦ �ڵ����� ����
- ���ڿ� ��, ����, ����, �˻�, ���� �� �پ��� ����Լ� ����
- 




*/

#include<iostream>
using namespace std;

int main()
{
	string str = "Hello";
	string name = "kyungil";
	string result;

	cout << "��Ʈ�� Ŭ������ Ȱ���� ���: " << str << endl;

	cout << "======================================" << endl;

	//���ڿ��� ���̰��(���� ��ȯ)
	cout << "str�� ����: " << str.length() << endl; //��� ���: 5
	cout << "str�� ����: " << str.size() << endl; //��� ���: 5 (length�� ����)

	cout << "======================================" << endl;

	//���ڿ� ����
	result = str + ", " + name + "!!";
	cout << "���� ���: " << result << endl; //��°��: Hello, kyungil!!

	cout << "======================================" << endl;

	//substr: �κ� ���ڿ��� ����
	//         �� Ư�� ��ġ(0)���� ������ ����(5)��ŭ �κй��ڿ��� ����
	string sub = result.substr(0, 5);
	cout << sub << endl; //��� ���: Hello

	cout << "======================================" << endl;

	//���ڿ� ��ü: ���ڿ��� Ư�� �κ��� �ٸ� ���ڿ��� ��ü
	result.replace(0, 3, "Hi");
	cout << result << endl; //��°��: Hilo, kyungil!!

	cout << "======================================" << endl;

	//�ش� ���ڿ��� ����ִ��� Ȯ��
	if (str.empty())
	{
		cout << "�������";
	}
	else
	{
		cout << "������� ����";
	}

	cout << "======================================" << endl;

	//���ڿ��� ���� �ٸ� ���ڿ� �߰�
	result.append("game");
	cout << result << endl;

	cout << "======================================" << endl;

	string test = "Hello World";
	test.insert(5, "-");
	cout << "insert: " << test << endl; //��°��: Hello- World
	test.erase(5, 2);
	cout << "insert: " << test << endl;//��°��: HelloWorld



}