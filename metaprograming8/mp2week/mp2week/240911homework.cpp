
// �ǽ�


#include<iostream>
using namespace std;

/*



class Ŭ�����̸�
{
��������������: 
	          �������;
			  ����Լ�();
};




*/


class Student
{
public:
	string name;
	string major;
	string pNumber;
	int age;

	void show();
};

/* 


��ӹ޴� ��

class ��� �޴� Ŭ���� �̸� : public protected�� ����� Ŭ���� �̸�
{
public: 


};


*/

void Student :: show()
{
	cout << "�л��� �̸�: " << name << endl;
	cout << "�л��� ����: " << major << endl;
	cout << "�л��� ��ȭ��ȣ: " << pNumber << endl;
	cout << "�л��� ����: " << age << endl;
}


int main()
{

	Student per1;
	
	per1.name = "��ҿ�";
	per1.major = "����ð�������";
	per1.pNumber = "010-0000-0000";
	per1.age = 24;

	per1.show();

	
}






// ���� 
// 1. Ŭ������ �����ΰ�?
// ppt ��ǥ ��
//

