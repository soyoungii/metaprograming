#pragma once
#include<iostream>

using namespace std;

class Scene
{
private:
	string name;
	string desc;

public:
	Scene(const string&name, const string& desc)
		:name(name), desc(desc){}

	void Print()const
	{
		cout << "�̸�: " << name << endl;
		cout << "�� ����: " << desc << endl;
	}

};

