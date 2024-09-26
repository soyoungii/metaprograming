#include "Scenemanager.h"

using namespace std;

Scenemanager::Scenemanager()
{
	cout << "�� �Ŵ��� �ν��Ͻ� ����" << endl;
}

Scenemanager::~Scenemanager()
{
	for (auto& pair : scenes)
	{
		delete pair.second;
	}
}

void Scenemanager::AddScene(const string& name, string& desc)
{
	scenes[name] = new Scene(name, desc);
}

void Scenemanager::SetCurrentScene(const string& name)
{
	if (scenes.find(name) != scenes.end())
	{
		currentScene = scenes[name];
		cout << "���� ���� " << name << " ����" << endl;
	}
	else
	{
		cout << "ã�� �� ����" << endl;
	}
}

void Scenemanager::ShowCurrentScene() const
{
	if (currentScene)
	{
		currentScene->Print();
	}
	else
	{
		cout << "������ ���� �����ϴ�" << endl;
	}
}
