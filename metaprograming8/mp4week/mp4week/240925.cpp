/*
LinkedList
- �迭�� �ٸ��� ��������� �̷���� ����
- ��尡 ���� ��忡 ���� �����͸� ������ ����(data)
   �� ���: ������ ��忡�� �����Ϳ� ���� ��忡 ���� ������ ����
   �� ���: ����Ʈ�� ù��° ���
   �� ����(����): ����Ʈ�� ������ ���

   
��屸��(���ô� �����ڷ� ����)
data, pointer
*/



#include<iostream>
#include"SLL.h"
using namespace std;

int main()
{
	SLL s;

	s.Insert(1);
	s.Insert(2);
	s.Insert(3);
	s.Insert(4);
	s.Insert(5);

	s.Print();
}