#include "SLL.h"

SLL::SLL() : pHead(nullptr){}

SLL::~SLL()
{

	//널 포인터가 아닐 때가지 돌면서
	while (pHead != nullptr)
	{
		//현재 노드를 가리키는 포인터를 임시 노드에 저장
		node* temp = pHead;

		//다음 노드를 현재 노드로 설정
		pHead = pHead->pNext;

		//이전 노드를 삭제
		delete temp;
	}
}

void SLL::Insert(int num)
{
	//새로운 노드를 만들고
	node* newNode = new node(num);

	//만약 비어있다면(헤드가 없으면)
	if (pHead == nullptr)
	{
		//위에서 만든 새로운 노드를 첫 노드로 설정
		pHead = newNode;
		return;
	}

	//아니면 돌면서 연결
	else
	{
		//요 녀석으로 돌림(리스트를 순회)
		node* temp = pHead;

		//리스트를 순회할 포인터 nullptr이 아닐 때까지 돌면서
		while (temp->pNext != nullptr)
		{
			temp = temp->pNext;
		}
		temp->pNext = newNode;
	}
}

void SLL::Delete(int num)
{
	//채우세요(과제)
	//현재 노드를 가리키는 포인터
	//다음 노드를 가리키는 포인터

	//첫번째 노드가 삭제하려는 노드라면 (if문)
	//헤드를 다음 노드로 이동시키고
	//삭제

	//리스트를 돌면서 삭제할 노드를 찾아야함 (반복문)
	//현재 노드를 다음 노드로 이동
	//다음 노드를 그 다음 노드로 이동
	//못찾으면 종료

	//이전 노드를 다음 노드에 연결

	//삭제
}

void SLL::Print()
{
	node* temp = pHead;
	std::cout << "=============출력==============" << std::endl;

	while (temp != nullptr)
	{
		std::cout << temp->value << " ";

	}
}
