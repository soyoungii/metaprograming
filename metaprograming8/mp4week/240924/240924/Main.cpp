#include"Game.h"
#include"Scenemanager.h"

using namespace std;

int main()
{
	/*Game g;
	g.Run();*/

	Scenemanager::GetInstance().AddScene("�޴�", "����, �ɼ�, ����"); //����
	Scenemanager::GetInstance().AddScene("����1", "���� 1 ����"); //����

	Scenemanager::GetInstance().SetCurrentScene("����1");
	Scenemanager::GetInstance().ShowCurrentScene();


}