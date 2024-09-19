#include "Vehicle.h"
/*
실제 구현부
#include "사용자가 만들어낸 것"
#include <이미 구현된 것?>


다형성
- 객체의 속성이나 기능이 상황에 따라 여러가지 형태를 가질 수 있는 성질을 의미?

가상함수
-상속관계에 있는 클래스에서 부모클래스의 함수를 자식클래스에서 재정의(오버라이딩)
 하고 부모클래스의 포인터나 참조를 통해 자식클래스의 메서드를 호출

오버라이딩
- 자식클래스가 부모클래스의 메서드를 재정의

virtual(가상함수)
- 부모클래스 함수에 virtual 키워드를 붙여야 클래스에서 오버라이딩된 함수가 호출

override
- 자식클래스에서 부모클래스의 함수를 정확히 오버라이딩 했는지 확인
- 안붙여도 되지만 명시적으로 붙여줌으로써 부모클래스에서 오버라이딩 했는지 확인 가능

상속관계에서는 부모클래스 타입의 포인터로 자식 객체를 참조할 수 있다
*/

Vehicle::Vehicle(const std::string& n)
{
	std::cout << "부모 클래스 생성자 호출" << std::endl;
}

Vehicle::~Vehicle()
{
	std::cout << "부모 클래스 소멸자 호출" << std::endl;
}

void Vehicle::Move() const
{
	std::cout << name << "의 부모클래스의 함수 호출" << std::endl;
}

#include"Bike.h"
#include"Car.h"
int main()
{
	Vehicle* v;

	v = new Car("현기차");
	v->Move();

	delete v;

	v = new Bike("혼다 오토바이");
	v->Move();

	delete v;

}