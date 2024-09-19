/*
여기가 Vehicle의 헤더파일
//선언부

가독성 / 유지보수 / 재사용성을 높이기 위해서
*/

#include<iostream>
#pragma once
class Vehicle
{
protected:
	std::string name;
public:
	Vehicle(const std::string& n);
	virtual ~Vehicle();

	virtual void Move()const;

};
