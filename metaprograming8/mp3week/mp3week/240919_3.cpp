/*
===================================================
깊은 복사
- 객체의 모든 멤버를 복사.
  포인터가 가리키는 메모리 공간도 새로운 메모리 공간에 복사
- 원본객체와 복사된 객체가 독립적으로 메모리를 사용하게 됨


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

	//깊은복사
	MyArray(const MyArray& other);
	~MyArray();

	int* GetDataArr() {return data;}
};


MyArray::MyArray(int size) // 왜 오류?
{
	this->size = size;
	data = new int[size];
}

//복사생성자 정의(깊은 복사)
MyArray::MyArray(const MyArray& other)
{
	cout << "복사 생성자 호출" << endl;
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
	깊은 복사로 정의하지 않으면 기본복사 생성자에서 단순히 멤버값을 다른객체로 복사(메모리
	ㄴ 클론을 위한 새로운 공간이 할당되지 않았고 동일한 공간을 서로 공유하기 때문
	
	*/
	MyArray arr(10);
	
	arr.GetDataArr()[0] = 1;
	cout << arr.GetDataArr()[0] << endl; //결과: 1?

	MyArray clone = arr; //clone(arr)과 같음
	clone.GetDataArr()[0] = 2;
	cout << clone.GetDataArr()[0] << endl; //결과: 2?

	cout << arr.GetDataArr() << endl;
	cout << clone.GetDataArr() << endl; //위의 결과와 주소가 다름

	arr.GetDataArr()[0] = 10;
	cout << "arr 값 변경 후(원복객체)" << endl;
	cout << arr.GetDataArr()[0] << endl; //결과: 10
	cout << clone.GetDataArr()[0] << endl; //결과: 2
}