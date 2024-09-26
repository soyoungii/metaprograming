/*
LinkedList
- 배열과 다르게 노드기반으로 이루어져 있음
- 노드가 다음 노드에 대한 포인터를 가지고 있음(data)
   ㄴ 노드: 각각의 노드에는 데이터와 다음 노드에 대한 참조를 포함
   ㄴ 헤드: 리스트의 첫번째 노드
   ㄴ 꼬리(테일): 리스트의 마지막 노드

   
노드구성(예시는 수업자료 참조)
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