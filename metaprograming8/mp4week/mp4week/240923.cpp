/*
Map
- 연관 컨테이너 중 빈번하게 사용 / 비선형적 구조
   ㄴ key, value 쌍으로 저장(pair)
   ㄴ key(고유)는 컨테이너에 중복 저장 불가


*/



#include<iostream>
#include<map>
using namespace std;

int main()
{
	map<string, int>data;

	//반복자
	map<string, int>::iterator iter;

	//1. value-type을 이용한 방법
	//기본적인 키-값 쌍 타입을 나타냄. 이 방법은 명시적으로 pair 객체를 생성하여 insert에 전달
	//가독성이 다소 떨어짐
	data.insert(map<string, int>::value_type("바보", 1));

	//2.make_pair를 이용한 방법
	//pair 객체를 생성하는 함수 템플릿
	//(make_pair("월요일", 5))는 std::pair<string, int>타입의 객체를 생성. 간결한 방법임
	//템플릿 인자를 자동으로 추론하므로 타입이 명확하지 않을 수 있음
	//복잡한 타입을 다룰 때는 명시적인 타입선언이 필요할 수 있음
	data.insert(make_pair("월요일", 5));

	//3.pair를 이용한 방법
	//키-값 쌍을 명시적으로 생성하여 삽입
	//명확한 타입 선언을 통해 가독성을 높일 수 있음
	data.insert(pair<string, int>("화요일", 10));
	data.insert(pair<string, int>("수요일", 30));
	data.insert(pair<string, int>("목요일", 50));
	data.insert(pair<string, int>("금요일", 100));


	//4.객체를 직접 생성하는 방법
	//pair의 템플릿 인자는 map의 key와 value타입과 일치해야함
	//객체를 생성한 후 insert를 하기때문에 필요에 따라 객체를 수정하거나 재사용 할 수 있음
	pair<string, int>pt1("토요일", 300);
	data.insert(pt1);
	data.erase("토요일");

	
	for (auto& pair : data)
	{
		cout << "키값: " << pair.first << ", 데이터: " << pair.second << endl;
	}

	/*
	find: 주어진 키를 찾아 iterator를 반환. 키가 존재하지 않으면 end를 반환
	clear: map의 모든 요소 삭제
	at: 주어진 키에 해당하는 값을 리턴
	*/


	//1. map을 선언하자
	map<string, int>myMap;

	//.insert를 사용하여 데이터 추가
	myMap.insert(make_pair("사과", 1));
	myMap.insert(make_pair("딸기", 2));
	myMap.insert(make_pair("수박", 3));
	myMap.insert(make_pair("바나나", 4));

	for (auto it = myMap.begin(); it != myMap.end(); ++it)
	{
		cout << "키: " << it->first << ", 값: " << it->second << endl;
	}

	for (auto rit = myMap.rbegin(); rit != myMap.rend(); ++rit)
	{
		cout << "키: " << rit->first << ", 값: " << rit->second << endl;
	} //결과: 3, 1, 4, 2
}