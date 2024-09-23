#include<iostream>
#include<map>
using namespace std;

class Armor
{
private:
	string name;
	int def;

public:
	Armor():name(""), def(0){} //생성자
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
	map<string, Scene*>scenes;//씬의 이름을 키로 하고 씬 포인터를 값으로 저장하는 map
	Scene* currentScene;//현재 씬을 가리키는 포인터
	string currentSceneName; //현재 씬의 이름

public:
	SceneManager():currentScene(nullptr),currentSceneName(""){}
	~SceneManager()
	{
		for (auto& pair : scenes) //map에 저장된 모든 씬을 돌면서 삭제
		{
			delete pair.second;
		}
	}
	
public:

	//씬을 추가하는 함수
	void AddScene(const string& name, Scene* scene)
	{
		scenes[name] = scene; //씬의 이름을 키값으로 하고 포인터를 값으로 조장
	}

	//씬을 삭제하는 함수
	void RemoveScene(const string& name)
	{
		auto it = scenes.find(name); //씬 이름으로 map에서 찾음

		if (it != scenes.end())//씬이 존재하면
		{
			delete it->second; //동적으로 할당된 씬 객체 해제
			scenes.erase(it); //map에서 삭제
		}
	}

	//현재 씬을 설정하는 함수
	void SetCurrentScene(const string& name)
	{
		auto it = scenes.find(name); //씬 이름을 map에서 찾음

		if (it != scenes.end())//현재 씬이 맵에 있다면
		{
			currentScene = it->second;
			currentSceneName = name;
		}
		else
		{
			cout << "씬을 찾을 수 없음" << endl;
		}
	}

	//출력하는 함수
	void ShowCurrentScene()const
	{
		if (currentSceneName.empty())
		{
			cout << "설정되지 않음" << endl;
			return;
		}
		cout << "현재 씬: " << currentSceneName << endl;
		cout << "씬 설명: " << currentScene->GetDesc() << endl;
	}
};

int main()
{
	////키는 문자열, 값은 Armor라는 객체
	//map<string, Armor>armorMap;

	//armorMap.insert(make_pair("helmet", Armor("철모자", 5)));
	//armorMap.insert(make_pair("shield", Armor("나무방패", 1)));
	//armorMap.insert(make_pair("greaves", Armor("신발", 3)));
	//armorMap.insert(make_pair("000", Armor("갑옷", 35)));

	//cout << "전체 방어구 목록: " << endl;
	//for (const auto& pair : armorMap)
	//{
	//	cout << "키값: " << pair.first << endl;
	//	cout << "방어구 이름: " << pair.second.GetName() << endl;
	//	cout << "방어력: " << pair.second.GetDef() << endl;
	//}

	//cout << "\n==================================================\n" << endl;

	//string searchKey;
	//cout << "검색할 방어구의 키를 입력하시오." << endl;
	//cin >> searchKey;

	//auto it = armorMap.find(searchKey);

	//if (it != armorMap.end())
	//{
	//	cout << "찾은 방어구: " << endl;
	//	cout << "이름: " << it->second.GetName() << endl;
	//	cout << "방어력: " << it->second.GetDef() << endl;
	//}
	//else
	//{
	//	cout << "방어구를 찾을 수 없습니다." << endl;
	//}

	cout << "\n==================================================\n" << endl;

	SceneManager* sceneManager = new SceneManager();

	sceneManager->AddScene("MainMenu", new Scene("메인메뉴: 시작, 옵션, 종료"));
	sceneManager->AddScene("Level 1", new Scene("레벨 1: 첫번째 레벨"));

	sceneManager->SetCurrentScene("MainMenu"); //현재 씬 설정
	sceneManager->ShowCurrentScene();

	sceneManager->SetCurrentScene("Level 1");
	sceneManager->ShowCurrentScene();

	sceneManager->RemoveScene("MainMenu");
	/*sceneManager->ShowCurrentScene();*/

	sceneManager->SetCurrentScene("ㅇㅇㅇㅇ");
	sceneManager->ShowCurrentScene();
}

