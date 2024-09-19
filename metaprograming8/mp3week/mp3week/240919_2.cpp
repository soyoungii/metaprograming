/*
C# ���� 253p �����ϸ� ����
=========================================================
��������

=========================================================


*/

#include<iostream>
using namespace std;


class MyArray
{
private:
	int size; // �������
	int* data; // ������ �������

public:
	MyArray(int size):size(size), data(new int[size]) {}

	//�⺻���� ������(��������) -> �ڵ����� �־���
	//MyArray(const MyArray& other) :size(other.size), data(other.data)
	//{
	//	cout << "���� ���� ������ ȣ��" << endl;
	//}

	~MyArray()
	{
		//delete[] data;
	}

public:
	void SetValue(int index, int value) { data[index] = value; }
	int GetValue(int index) { return data[index]; }

	int* GetDataAddr() { return data; }


};





int main()
{
	MyArray arr1(10);
	arr1.SetValue(0, 42);

	MyArray arr2(arr1); //���� ���� �����ڸ� ȣ��

	cout << "arr1�� ù��° ��: " << arr1.GetValue(0) << endl; //���: 42
	cout << "arr2�� ù��° ��: " << arr2.GetValue(0) << endl; //���� ����

	arr1.SetValue(0, 84);

	cout << "arr1�� �� ���� ��: " << arr1.GetValue(0) << endl; //���: 84
	cout << "arr2�� ù��° ��(arr1 ���� ��): " << arr2.GetValue(0) << endl; //���� ����

	
}