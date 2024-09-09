/*
<����ü>
Struct
- ����ü�� �������� ������ ���� �ϳ��� ������ ������ �����ϴ� ����� ���� ������ ����
- ����ü�� ������ ������ ����� ������, �̷��� ������� ���� �ٸ� ������ Ÿ���� �� �ִ�.
- C++������ �Լ��� ������ ����

struct MyStruct
	{

	};
*/

#include<iostream>
using namespace std;

//Ű���� ����ü �̸�
struct Student
{
	string name; // �л��̸�
	int age;
	int phoneNumber;
};
struct Test
{
	short a;  // 2byte
	int b;    // 4byte
	char c;   // 1byte
};

struct Point
{
	int x;
	int y;
	void Print(); // C++������ �Լ��� ����� ����
};

struct Person
{
	string name;
	string phoneNumber;
	int age;
};

//��ǥ�� ��Ÿ���� ����ü ����
struct Point1
{
	double x;
	double y;
};

// �� �� ���̸� ����ϴ� �Լ�
double CalculateDistance(Point1 p1, Point1 p2)
{
	double deltaX = p2.x - p1.x;
	double deltaY = p2.y - p1.y;

	return sqrt(deltaX * deltaX + deltaY * deltaY); // sqrt ==> �������� ������
};

//�ǽ�

struct nas
{
	string name;
	int age;
	int Es;
	int Ss;
	int Ms;
};

double NA(double a, double b, double c)
{
	double npsA = (a + b + c) / 3;
	return npsA;
};


int main()
{

	Test t;
	cout << sizeof(t) << endl;  // int �� 2��°�� ������ ��°��� 12, 3��°�� ������ 8

	// ����ü ���� ����
	Student st;

	//����ü ����� ���� �Ҵ�
	st.name = "ȫ�浿"; //==> ����ü ����� ������ �� .�� ���
	st.age = 10;
	st.phoneNumber = 12345678; // ==> �տ� 010�� ������ ����(�߸��� 8����). ��?

	//����� �Ҵ�� ������ ���
	cout << "�̸�: " << st.name << endl;
	cout << "����: " << st.age << endl;
	cout << "��ȭ��ȣ: " << st.phoneNumber << endl;

	cout << "=============================================" << endl;
	Point p;
	p.x = 10;
	p.y = 20;
	cout << "����ü p.x�� ��: " << p.x << endl;
	cout << "����ü p.y�� ��: " << p.y << endl;
	p.Print();

	Point p1 = { 50,120 };
	cout << "����ü p.x�� ��: " << p1.x << endl;
	cout << "����ü p.y�� ��: " << p1.y << endl;

	cout << "=============================================" << endl;
	Person per[3];
	per[0].name = "����";
	per[0].phoneNumber = "010-4567-1234";
	per[0].age = 10;

	per[1].name = "��ҿ�";
	per[1].phoneNumber = "010-1234-4567";
	per[1].age = 24;

	per[2].name = "�����";
	per[2].phoneNumber = "010-1234-6789";
	per[2].age = 30;

	//����ü �迭�� 0��° �ε���
	cout << per[0].name << per[0].phoneNumber << per[0].age << endl;

	Person st1[3] =
	{
		{"�������", "1234-6789", 50},
		{"�������2", "1111-2222", 10},
		{"�������3", "7896-7896", 30}
	};

	for (int i = 0; i < 3; i++)
	{
		cout << st1[i].name << st1[i].phoneNumber << st1[i].age << endl;
	}

	cout << "=============================================" << endl;

	Point1 point1 = { 1.0,2.0 };
	Point1 point2 = { 4.0,6.0 };

	double distance = CalculateDistance(point1, point2);
	cout << "���� ������ �Ÿ�: " << distance << endl; //���: 5

	cout << "=============================================" << endl;


	//�ǽ�
	//�л� ���� ���� ������(����ü)
	//�̸�, ����, ����(����, ����, ����)
	//����� ���ϴ� �Լ� �����
	//ex) ȫ�浿 20
	//����: 20
	//����: 30
	//����: 50
	//�� ������ �հ�� ��� ���

	nas Nas1[3];

	Nas1[0].name = "����ũ";
	Nas1[0].age = 28;
	Nas1[0].Es = 91;
	Nas1[0].Ms = 84;
	Nas1[0].Ss = 95;

	Nas1[1].name = "����";
	Nas1[1].age = 20;
	Nas1[1].Es = 24;
	Nas1[1].Ms = 37;
	Nas1[1].Ss = 18;

	Nas1[2].name = "��ҿ�";
	Nas1[2].age = 24;
	Nas1[2].Es = 60;
	Nas1[2].Ms = 30;
	Nas1[2].Ss = 90;

	for (int i = 0; i < 3; i++)
	{
		double Averange = NA(Nas1[i].Es, Nas1[i].Ms, Nas1[i].Ss);

		cout << "�л��� �̸� : " << Nas1[i].name << endl;
		cout << "�л��� ����: " << Nas1[i].age << endl;
		cout << "�� ������ �հ�: " << Nas1[i].Es + Nas1[i].Ms + Nas1[i].Ss << endl;
		cout<< "�� ������ ��� : "<< Averange << endl;
	}

	cout << "=============================================" << endl;
	


}

void Point::Print()  // Point ����ü�� ������� Print�̴�
{
	cout << "���� Point ����ü�� ��� �Լ�" << endl;
}

