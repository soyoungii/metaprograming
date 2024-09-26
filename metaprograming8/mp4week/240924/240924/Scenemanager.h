#pragma once
#include"singleton.h"
#include"Scene.h"
#include<iostream>
#include<map>

using namespace std;

class Scenemanager : public CSingleton<Scenemanager>
{
private:
	map<string, Scene*>scenes;
	Scene* currentScene = nullptr;

public:
	Scenemanager();
	~Scenemanager();

	void AddScene(const string& name, string& desc);
	void SetCurrentScene(const string& name);
	void ShowCurrentScene()const;

};

