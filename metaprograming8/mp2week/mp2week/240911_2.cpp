
/*
string
- C++에서 제공하는 문자열을 다루기 위한 클래스
- C 스타일의 문자배열. 쉽고 안전하고 유용
- 문자열의 크기를 자동으로 조절
- 문자열 비교, 연결, 추출, 검색, 수정 등 다양한 멤버함수 지원
- 




*/

#include<iostream>
using namespace std;

int main()
{
	string str = "Hello";
	string name = "kyungil";
	string result;

	cout << "스트링 클래스를 활용한 출력: " << str << endl;

	cout << "======================================" << endl;

	//문자열의 길이계산(길이 반환)
	cout << "str의 길이: " << str.length() << endl; //출력 결과: 5
	cout << "str의 길이: " << str.size() << endl; //출력 결과: 5 (length와 동일)

	cout << "======================================" << endl;

	//문자열 연결
	result = str + ", " + name + "!!";
	cout << "연결 결과: " << result << endl; //출력결과: Hello, kyungil!!

	cout << "======================================" << endl;

	//substr: 부분 문자열을 추출
	//         ㄴ 특정 위치(0)에서 지정된 길이(5)만큼 부분문자열을 추출
	string sub = result.substr(0, 5);
	cout << sub << endl; //출력 결과: Hello

	cout << "======================================" << endl;

	//문자열 교체: 문자열의 특정 부분을 다른 문자열로 교체
	result.replace(0, 3, "Hi");
	cout << result << endl; //출력결과: Hilo, kyungil!!

	cout << "======================================" << endl;

	//해당 문자열이 비어있는지 확인
	if (str.empty())
	{
		cout << "비어있음";
	}
	else
	{
		cout << "비어있지 않음";
	}

	cout << "======================================" << endl;

	//문자열의 끝에 다른 문자열 추가
	result.append("game");
	cout << result << endl;

	cout << "======================================" << endl;

	string test = "Hello World";
	test.insert(5, "-");
	cout << "insert: " << test << endl; //출력결과: Hello- World
	test.erase(5, 2);
	cout << "insert: " << test << endl;//출력결과: HelloWorld



}