/*
===================================================
���� ����
- ��ü�� ��� ����� ����.
  �����Ͱ� ����Ű�� �޸� ������ ���ο� �޸� ������ ����
- ������ü�� ����� ��ü�� ���������� �޸𸮸� ����ϰ� ��


===================================================



*/

#include<iostream>
using namespace std;

class MyArray
{
private:
	int* data;
	int size;

public:
	MyArray(int size);

	//��������
	MyArray(const MyArray& other);
	~MyArray();

	int* GetDataArr() {return data;}
};


MyArray::MyArray(int size) // �� ����?
{
	this->size = size;
	data = new int[size];
}

//��������� ����(���� ����)
MyArray::MyArray(const MyArray& other)
{
	cout << "���� ������ ȣ��" << endl;
	this->size = other.size;
	this->data = new int[other.size];

	for (int i = 0; i < size; i++)
	{
		this->data[i] = other.data[i];
	}
}


MyArray::~MyArray()
{
	if (data != nullptr)delete[] this->data;
	data = nullptr;
}









int main()
{
	/*
	���� ����� �������� ������ �⺻���� �����ڿ��� �ܼ��� ������� �ٸ���ü�� ����(�޸�
	�� Ŭ���� ���� ���ο� ������ �Ҵ���� �ʾҰ� ������ ������ ���� �����ϱ� ����
	
	*/
	MyArray arr(10);
	
	arr.GetDataArr()[0] = 1;
	cout << arr.GetDataArr()[0] << endl; //���: 1?

	MyArray clone = arr; //clone(arr)�� ����
	clone.GetDataArr()[0] = 2;
	cout << clone.GetDataArr()[0] << endl; //���: 2?

	cout << arr.GetDataArr() << endl;
	cout << clone.GetDataArr() << endl; //���� ����� �ּҰ� �ٸ�

	arr.GetDataArr()[0] = 10;
	cout << "arr �� ���� ��(������ü)" << endl;
	cout << arr.GetDataArr()[0] << endl; //���: 10
	cout << clone.GetDataArr()[0] << endl; //���: 2
}