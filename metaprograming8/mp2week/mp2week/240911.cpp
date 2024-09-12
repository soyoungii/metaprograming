/*
문자배열
- 말 그대로 문자를 저장하는 배열
  문자를 저장할 때 배열의 마지막에 null 문자를 추가하여 문자열의 끝을 표시해야함

**C 스타일의 문자열 함수 종류**
- strlen(const char* str): 문자열의 길이를 반환
- strcpy(char* dest, char* src): 문자열 복사
- strcat: 문자열을 연결
- strcmp: 문자열 비교



*/


#include<iostream>
using namespace std;

int main()
{
	char str[6];
	char str1[6] = { 'H', 'E', 'L', 'L', 'O', '\0' };

	for (size_t i = 0; i < 6; i++)
	{
		cout << str1[i];
	} //출력 결과: HELLO

	char str2[] = "Hello"; //배열의 크기가 자동으로 6으로 잡힘(null(\0) 포함)
	for (size_t i = 0; i < str2[i]!='\0'; i++)
	{
		
	}
	char str3[] = "한글"; //배열의 크기가 5로 잡힘

	char str4[20] = "Hello";
	char str5[10] = "kyungil";
	char str6[10];

	cout << "str1의 길이: " << strlen(str4) << endl; //5
	cout << "str2의 길이: " << strlen(str5) << endl; //7

	strcpy_s(str6, str4);
	cout << "strcpy_s: " << str6 << endl; //strcpy만 썼을 시 오류(C4996-보안에 취약하니 지양)
	strcat_s(str4, str5);
	cout << "strcat_s: " << str4 << endl; //연결할 땐 크기가 충분해야함 -> 크기가 작을 시 오류










}