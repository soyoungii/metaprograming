
#include"Vehicle.h"
//���� �ڽ� Ŭ����
#pragma once

class Car:public Vehicle
{
public:
	Car(const std::string& n);
	~Car();

	void Move()const override;
};


