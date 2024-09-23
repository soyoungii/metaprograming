#include<iostream>
#include<map>
using namespace std;

class Armor
{
private:
	string name;
	int def;

public:
	Armor():name(""), def(0){} //������
	Armor(const string& n, int d) : name(n), def(d){}

	string GetName()const { return name; }
	int GetDef()const { return def; }
};


class Scene
{
private:
	string desc;

public:
	Scene():desc(""){}
	Scene(const string& d) : desc(d){}

	string GetDesc()const { return desc; }
};

class SceneManager
{
private:
	map<string, Scene*>scenes;//���� �̸��� Ű�� �ϰ� �� �����͸� ������ �����ϴ� map
	Scene* currentScene;//���� ���� ����Ű�� ������
	string currentSceneName; //���� ���� �̸�

public:
	SceneManager():currentScene(nullptr),currentSceneName(""){}
	~SceneManager()
	{
		for (auto& pair : scenes) //map�� ����� ��� ���� ���鼭 ����
		{
			delete pair.second;
		}
	}
	
public:

	//���� �߰��ϴ� �Լ�
	void AddScene(const string& name, Scene* scene)
	{
		scenes[name] = scene; //���� �̸��� Ű������ �ϰ� �����͸� ������ ����
	}

	//���� �����ϴ� �Լ�
	void RemoveScene(const string& name)
	{
		auto it = scenes.find(name); //�� �̸����� map���� ã��

		if (it != scenes.end())//���� �����ϸ�
		{
			delete it->second; //�������� �Ҵ�� �� ��ü ����
			scenes.erase(it); //map���� ����
		}
	}

	//���� ���� �����ϴ� �Լ�
	void SetCurrentScene(const string& name)
	{
		auto it = scenes.find(name); //�� �̸��� map���� ã��

		if (it != scenes.end())//���� ���� �ʿ� �ִٸ�
		{
			currentScene = it->second;
			currentSceneName = name;
		}
		else
		{
			cout << "���� ã�� �� ����" << endl;
		}
	}

	//����ϴ� �Լ�
	void ShowCurrentScene()const
	{
		if (currentSceneName.empty())
		{
			cout << "�������� ����" << endl;
			return;
		}
		cout << "���� ��: " << currentSceneName << endl;
		cout << "�� ����: " << currentScene->GetDesc() << endl;
	}
};

int main()
{
	////Ű�� ���ڿ�, ���� Armor��� ��ü
	//map<string, Armor>armorMap;

	//armorMap.insert(make_pair("helmet", Armor("ö����", 5)));
	//armorMap.insert(make_pair("shield", Armor("��������", 1)));
	//armorMap.insert(make_pair("greaves", Armor("�Ź�", 3)));
	//armorMap.insert(make_pair("000", Armor("����", 35)));

	//cout << "��ü �� ���: " << endl;
	//for (const auto& pair : armorMap)
	//{
	//	cout << "Ű��: " << pair.first << endl;
	//	cout << "�� �̸�: " << pair.second.GetName() << endl;
	//	cout << "����: " << pair.second.GetDef() << endl;
	//}

	//cout << "\n==================================================\n" << endl;

	//string searchKey;
	//cout << "�˻��� ���� Ű�� �Է��Ͻÿ�." << endl;
	//cin >> searchKey;

	//auto it = armorMap.find(searchKey);

	//if (it != armorMap.end())
	//{
	//	cout << "ã�� ��: " << endl;
	//	cout << "�̸�: " << it->second.GetName() << endl;
	//	cout << "����: " << it->second.GetDef() << endl;
	//}
	//else
	//{
	//	cout << "���� ã�� �� �����ϴ�." << endl;
	//}

	cout << "\n==================================================\n" << endl;

	SceneManager* sceneManager = new SceneManager();

	sceneManager->AddScene("MainMenu", new Scene("���θ޴�: ����, �ɼ�, ����"));
	sceneManager->AddScene("Level 1", new Scene("���� 1: ù��° ����"));

	sceneManager->SetCurrentScene("MainMenu"); //���� �� ����
	sceneManager->ShowCurrentScene();

	sceneManager->SetCurrentScene("Level 1");
	sceneManager->ShowCurrentScene();

	sceneManager->RemoveScene("MainMenu");
	/*sceneManager->ShowCurrentScene();*/

	sceneManager->SetCurrentScene("��������");
	sceneManager->ShowCurrentScene();
}

