#include "Car.h"

Car::Car(const std::string& n) : Vehicle(n)
{
	std::cout << "�ڽ�(Car) ������ ȣ��" << std::endl;
}

Car::~Car()
{
	std::cout << "Car �Ҹ��� ȣ��" << std::endl;
}

void Car::Move() const
{
	std::cout << name << "�� �ڽ�Ŭ���� �ڵ��� �Լ� ȣ��" << std::endl;
}