/*
===========================================
������ ������(Operator Overloading)
- ����� ���� �ڷ����̳� Ŭ������ �����ڸ� �������Ͽ� ���� �ǹ̷� ���
- ��ü���� �������, ��, ���� ���� �����ϰ� ����
- ��, �Ϻ� �����ڴ� �����ε��� �� �� ����

<������ ������>
��ȯ�� operator �����ڱ�ȣ(�Ű�����){�Լ�����}
�⺻ �������� ������ �Լ��� �������Ͽ� ��� ����
ex)

===========================================

const
*/


#include<iostream>
using namespace std;
const int MAX = 10; // �̷� ������ ����϶�� ����, #define ����

struct Point
{
	float x;
	float y;

	//������ -> ���߿� ���
	Point(float x, float y)
	{
		this->x = x;
		this->y = y;
	}

	//1. ����Լ��� ���� ������ ������
	Point operator+(Point& other)
	{
		return Point(this->x + other.x, this->y + other.y);
	}

	void Test()const
	{

	}

	//Point ����ü�� ����Լ�
	void Print()const
	{
		Test(); // ����Ʈ�� ���� �����Լ����� const�� ���� ���� �Լ��� ���� �� ����
		cout << "(" << x << " , " << y << ")";
	}
	float GetX()const
	{
		return this->x; //�б����� �Լ��� ����
	}

};

//2. �����Լ��� ���� ������ ������
Point operator-(Point& left, Point& right)
{
	return Point(left.x - right.x, left.y - right.y);
}

void PrintArr(/*const*/int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}
	arr[0] = 5; // int �տ� const�� ���� �� �迭 ���� �Ұ�
}


int main()
{
	// const int num = 10;
	// num = 20; -> ����(const�� ���ȭ �����ֱ� ����)


	Point vec1 = Point(2, 1);
	Point vec2 = Point(3, 1);

	Point add = vec1 + vec2; // ������ �����Ǹ� ���� �ʾ��� ��� + ���� 
	Point sub = vec1 - vec2; 

    
	add.Print();
	sub.Print();


	/*
	1. ������ �����ε��� �̿��Ͽ� * �����
	2. ��Ʈ�� Ŭ������ �̿��Ͽ� ���ڿ� ������(������ �Լ��� ����)
         ex) in: abcde -> out: edcba
	3. ���ڿ� �� Ư�� ���� ���� ã��
	     ex) in: aabbccddddd 
	         ���� ã������ �ϴ� ����: d
			 out: 5
 	  1) �Է��� �޴´�.
	  2) ���� ã������ �ϴ� ���ڸ� �Է¹޴´�.
	  3) ã�� ������ �����.
	  4) 1������ �Է��� ���ڿ��� ���̸�ŭ
	  5) ���� ���� ã������ �ϴ� ���ڿ� ??�� ���ٸ�
         ���� ���ڸ� ī������ ���ִ� ������ �ϸ� ����������...?
	 */
}