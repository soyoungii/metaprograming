/*
���Ⱑ Vehicle�� �������
//�����

������ / �������� / ���뼺�� ���̱� ���ؼ�
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
