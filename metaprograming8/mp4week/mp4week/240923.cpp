/*
Map
- ���� �����̳� �� ����ϰ� ��� / ������ ����
   �� key, value ������ ����(pair)
   �� key(����)�� �����̳ʿ� �ߺ� ���� �Ұ�


*/



#include<iostream>
#include<map>
using namespace std;

int main()
{
	map<string, int>data;

	//�ݺ���
	map<string, int>::iterator iter;

	//1. value-type�� �̿��� ���
	//�⺻���� Ű-�� �� Ÿ���� ��Ÿ��. �� ����� ��������� pair ��ü�� �����Ͽ� insert�� ����
	//�������� �ټ� ������
	data.insert(map<string, int>::value_type("�ٺ�", 1));

	//2.make_pair�� �̿��� ���
	//pair ��ü�� �����ϴ� �Լ� ���ø�
	//(make_pair("������", 5))�� std::pair<string, int>Ÿ���� ��ü�� ����. ������ �����
	//���ø� ���ڸ� �ڵ����� �߷��ϹǷ� Ÿ���� ��Ȯ���� ���� �� ����
	//������ Ÿ���� �ٷ� ���� ������� Ÿ�Լ����� �ʿ��� �� ����
	data.insert(make_pair("������", 5));

	//3.pair�� �̿��� ���
	//Ű-�� ���� ��������� �����Ͽ� ����
	//��Ȯ�� Ÿ�� ������ ���� �������� ���� �� ����
	data.insert(pair<string, int>("ȭ����", 10));
	data.insert(pair<string, int>("������", 30));
	data.insert(pair<string, int>("�����", 50));
	data.insert(pair<string, int>("�ݿ���", 100));


	//4.��ü�� ���� �����ϴ� ���
	//pair�� ���ø� ���ڴ� map�� key�� valueŸ�԰� ��ġ�ؾ���
	//��ü�� ������ �� insert�� �ϱ⶧���� �ʿ信 ���� ��ü�� �����ϰų� ���� �� �� ����
	pair<string, int>pt1("�����", 300);
	data.insert(pt1);
	data.erase("�����");

	
	for (auto& pair : data)
	{
		cout << "Ű��: " << pair.first << ", ������: " << pair.second << endl;
	}

	/*
	find: �־��� Ű�� ã�� iterator�� ��ȯ. Ű�� �������� ������ end�� ��ȯ
	clear: map�� ��� ��� ����
	at: �־��� Ű�� �ش��ϴ� ���� ����
	*/


	//1. map�� ��������
	map<string, int>myMap;

	//.insert�� ����Ͽ� ������ �߰�
	myMap.insert(make_pair("���", 1));
	myMap.insert(make_pair("����", 2));
	myMap.insert(make_pair("����", 3));
	myMap.insert(make_pair("�ٳ���", 4));

	for (auto it = myMap.begin(); it != myMap.end(); ++it)
	{
		cout << "Ű: " << it->first << ", ��: " << it->second << endl;
	}

	for (auto rit = myMap.rbegin(); rit != myMap.rend(); ++rit)
	{
		cout << "Ű: " << rit->first << ", ��: " << rit->second << endl;
	} //���: 3, 1, 4, 2
}