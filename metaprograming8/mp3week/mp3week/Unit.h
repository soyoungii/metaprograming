//���⸦ �߻�Ŭ������ ������

#pragma once
#include<iostream>
class Unit
{
protected:
	std::string name;
	int health;
public:
	Unit(const std::string& n, const int h);
	~Unit();

public:
	//���� �����Լ�
	virtual void Attack() const = 0;


};

