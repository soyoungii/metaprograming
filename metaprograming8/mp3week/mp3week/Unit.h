//여기를 추상클래스로 만들자

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
	//순수 가상함수
	virtual void Attack() const = 0;


};

