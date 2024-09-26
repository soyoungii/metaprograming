#include "SLL.h"

SLL::SLL() : pHead(nullptr){}

SLL::~SLL()
{

	//�� �����Ͱ� �ƴ� ������ ���鼭
	while (pHead != nullptr)
	{
		//���� ��带 ����Ű�� �����͸� �ӽ� ��忡 ����
		node* temp = pHead;

		//���� ��带 ���� ���� ����
		pHead = pHead->pNext;

		//���� ��带 ����
		delete temp;
	}
}

void SLL::Insert(int num)
{
	//���ο� ��带 �����
	node* newNode = new node(num);

	//���� ����ִٸ�(��尡 ������)
	if (pHead == nullptr)
	{
		//������ ���� ���ο� ��带 ù ���� ����
		pHead = newNode;
		return;
	}

	//�ƴϸ� ���鼭 ����
	else
	{
		//�� �༮���� ����(����Ʈ�� ��ȸ)
		node* temp = pHead;

		//����Ʈ�� ��ȸ�� ������ nullptr�� �ƴ� ������ ���鼭
		while (temp->pNext != nullptr)
		{
			temp = temp->pNext;
		}
		temp->pNext = newNode;
	}
}

void SLL::Delete(int num)
{
	//ä�켼��(����)
	//���� ��带 ����Ű�� ������
	//���� ��带 ����Ű�� ������

	//ù��° ��尡 �����Ϸ��� ����� (if��)
	//��带 ���� ���� �̵���Ű��
	//����

	//����Ʈ�� ���鼭 ������ ��带 ã�ƾ��� (�ݺ���)
	//���� ��带 ���� ���� �̵�
	//���� ��带 �� ���� ���� �̵�
	//��ã���� ����

	//���� ��带 ���� ��忡 ����

	//����
}

void SLL::Print()
{
	node* temp = pHead;
	std::cout << "=============���==============" << std::endl;

	while (temp != nullptr)
	{
		std::cout << temp->value << " ";

	}
}
