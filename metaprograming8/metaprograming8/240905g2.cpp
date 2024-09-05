/*
while
- 조건이 참(true)인 동안 특정코드를 반복실행하기 위한 반복문
- 조건이 거짓이 될때까지 계속 반복
- 일반적으로 반복횟수가 미리 정해지지 않았거나 특정조건을 만족할 때까지
  반복해야될 경우 사용
   while (true)
    {
      //위 조건을 만족하면 실행
      //단, 종료조건이 있어야만 해당 while이 종료됨
    }

 do-while
 - 조건이 참인지 여부와 관계없이 코드블럭을 최소 한 번은 실행해야할 때 사용
 - 다른 반복문과는 다르게 조건을 나중에 검사하는 게 특징
   do
   {
   //실행할 코드
   } while (조건);  --> do 블록이 실행된 후에 조건을 검사
   - 조건이 참이면 코드를 다시 실행하고 거짓이면 종료

while과 차이점
- do-while은 조건을 나중에 검사하므로 코드블럭을 최소 한 번은 실행
- while은 조건을 먼저 검사하기 때문에 처음부터 거짓이면 코드블럭을 한 번도 실행하지 않을 수 있음 

*/

#include<iostream>

int main()
{
    /*while (true)
    {
        std::cout << "종료조건이 없으면 무한루프를 빠져나올 수 없어" << std::endl;

    } -> 종료조건이 없어 출력하면 무한반복
    */

    //int num = 0;
    ////num이 10보다 작으면(작을 때까지 반복)
    //while (num < 10)
    //{
    //    num++; // 1씩 증가
    //    std::cout << num << std::endl;
    //}

    int num = 0;
    while (true)
    {
        if (num == 10)break; // 종료조건
        num++; // 1씩 증가
        std::cout << num << std::endl;
    }

    //std::cout << "아무 숫자나 입력해보시오." << std::endl;
    //while (true)
    //{
    //    int inputNum;
    //    std::cin >> inputNum;

    //    std::cout << "내가 입력하는 숫자가: " << inputNum << std::endl;

    //    if (inputNum < 1 || inputNum>10)break;
    //}

    /* while을 이용해서 입력한만큼 출력하기
       ex)3을 입력하면
       Hello World Hello World Hello World
    */

    /*
    std::cout << "숫자를 입력해라: ";
        int inputNum;
        std::cin >> inputNum; //입력용 변수

        int count = 0; // 카운트용 변수

        while (count < inputNum)
        {
            std::cout << "너가 입력한 만큼 출력이 됨" << std::endl;
            count++;
        }

        int Num1;
        int total = 0;

        do
        {
            std::cout << "0보다 큰 숫자를 입력하시오.";
            std::cin >> Num1;
            total += Num1;
        } while (Num1!=0); // 0이 입력되면 종료

        std::cout << "합계: " << total << std::endl;

        int num2 = 0;
        while (num2 > 0)
        {
            std::cout << "여기는 실행되지 않는다." << std::endl;
        }
        // 조건이 처음부터 false이기 때문에 실행되지 않음

        do
        {
            std::cout << "여기는 최소 한 번은 실행된다." << std::endl;
        } while (num2 > 0);
        // 조건은 false 지만 do 블록이 먼저 실행됨

        */


}