#include "Scenemanager.h"

using namespace std;

Scenemanager::Scenemanager()
{
	cout << "씬 매니저 인스턴스 생성" << endl;
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
		cout << "현재 씬이 " << name << " 설정" << endl;
	}
	else
	{
		cout << "찾을 수 없다" << endl;
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
		cout << "설정된 씬이 없습니다" << endl;
	}
}
