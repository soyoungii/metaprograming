/*
Stack
LIFO(Last In First Out) ���Լ���

push: ���ÿ� ���ο� �߰��ϴ� ����
pop: �ֻ�� ��Ҹ� �����ϰ� ��ȯ
top(Peek): ������ �ֻ�� ��Ҹ� ��ȯ
Empty: ������ ����ִ���
*/

#include<iostream>
using namespace std;


template<typename T>
class Stack
{
private:
	static const int MAX_VALUES = 5;
	int top;
	T value[MAX_VALUES];

public:
	Stack() : top(-1)
	{
		for (int i = 0; i < MAX_VALUES; ++i)
		{
			value[i] = T();
		}
	}

	void Push(T val)
	{
		//assert
		//���α׷����� ġ������ �� �ִ� �������� ���α׷��� �ߴ��ϰ� ������ ǥ��
		//���α׷��� �ߴܽ�Ű�� ������ ǥ���ϱ� ������ �������� ����뿡 ����
		assert(top + 1 < MAX_VALUES); //������ �����÷ο� ���� �ʵ��� Ȯ��

		value[++top] = val;
	}

	T Pop()
	{
		assert(!Empty()); //������ �ֻ��� ���� �ӽ÷� �����ϰ�
		value[top--] = T();

		return val;
	}

	T Top() 
	{
		return value[top];
	}

	bool Empty()const
	{
		return top < 0;
	}

};


int main()
{
	Stack<int> stack;
	stack.Push(10);
	stack.Push(20);
	stack.Push(30);

	cout << "top: " << stack.Top() << endl;
	cout << "pop: " << stack.Pop() << endl;
	cout << "pop: " << stack.Pop() << endl;
	cout << "top: " << stack.Top() << endl;

	//��� ���: 30, 30, 20 ,10


};