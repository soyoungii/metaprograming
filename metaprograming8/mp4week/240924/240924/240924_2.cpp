/*
singleton
- �ش� ��ü�� �޸𸮸� �������� �Ҵ��Ͽ� �ϳ��� ��ü���� �����ϴ� ���
- ���� �Ѱ��� �ν��Ͻ����� ������ ����
- �� �ƹ��� ���� ��ü�� �����ص� �� �ϳ��� �ν��Ͻ����� ������ �Ͱ� ����
- Ŭ������ ��ü�� ���簡 �Ǹ� �ȵ�
*/


#include<iostream>

using namespace std;

class Singleton
{
private:
	Singleton()
	{
		cout << "�̱��� �ν��Ͻ� ����" << endl;
	}
	~ Singleton(){}

	//��������ڿ� ���Կ����� ���
	Singleton(const Singleton&) = delete;
	Singleton& operator = (const Singleton&) = delete;

public:

	static Singleton& GetInstance()
	{
		static Singleton inst;
		return inst;
	}

	void Print()
	{
		cout << "���� �̱����̾�" << endl;
	}

};


int main()
{
	Singleton& s1 = Singleton::GetInstance();
	s1.Print();

	Singleton& s2 = Singleton::GetInstance();
	s2.Print();

	if (&s1 == &s2)
	{
		cout << "s1�� s2�� ����" << endl;
	}
}

//������ ����! �ڵ� ¥�� ����~!~!
//�̱��� ���� ����� ���(�ڼ���)
//OOP�� ���� �ڼ���! ������ ��
//����� ����

//�������� C#������ C++ ������ C#���� �����Ű�� ��

