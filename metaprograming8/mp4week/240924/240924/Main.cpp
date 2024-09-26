#include"Game.h"
#include"Scenemanager.h"

using namespace std;

int main()
{
	/*Game g;
	g.Run();*/

	Scenemanager::GetInstance().AddScene("메뉴", "시작, 옵션, 종료"); //오류
	Scenemanager::GetInstance().AddScene("던전1", "던전 1 시작"); //오류

	Scenemanager::GetInstance().SetCurrentScene("던전1");
	Scenemanager::GetInstance().ShowCurrentScene();


}