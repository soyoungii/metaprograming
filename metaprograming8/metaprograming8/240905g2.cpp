/*
while
- ������ ��(true)�� ���� Ư���ڵ带 �ݺ������ϱ� ���� �ݺ���
- ������ ������ �ɶ����� ��� �ݺ�
- �Ϲ������� �ݺ�Ƚ���� �̸� �������� �ʾҰų� Ư�������� ������ ������
  �ݺ��ؾߵ� ��� ���
   while (true)
    {
      //�� ������ �����ϸ� ����
      //��, ���������� �־�߸� �ش� while�� �����
    }

 do-while
 - ������ ������ ���ο� ������� �ڵ���� �ּ� �� ���� �����ؾ��� �� ���
 - �ٸ� �ݺ������� �ٸ��� ������ ���߿� �˻��ϴ� �� Ư¡
   do
   {
   //������ �ڵ�
   } while (����);  --> do ����� ����� �Ŀ� ������ �˻�
   - ������ ���̸� �ڵ带 �ٽ� �����ϰ� �����̸� ����

while�� ������
- do-while�� ������ ���߿� �˻��ϹǷ� �ڵ���� �ּ� �� ���� ����
- while�� ������ ���� �˻��ϱ� ������ ó������ �����̸� �ڵ���� �� ���� �������� ���� �� ���� 

*/

#include<iostream>

int main()
{
    /*while (true)
    {
        std::cout << "���������� ������ ���ѷ����� �������� �� ����" << std::endl;

    } -> ���������� ���� ����ϸ� ���ѹݺ�
    */

    //int num = 0;
    ////num�� 10���� ������(���� ������ �ݺ�)
    //while (num < 10)
    //{
    //    num++; // 1�� ����
    //    std::cout << num << std::endl;
    //}

    int num = 0;
    while (true)
    {
        if (num == 10)break; // ��������
        num++; // 1�� ����
        std::cout << num << std::endl;
    }

    //std::cout << "�ƹ� ���ڳ� �Է��غ��ÿ�." << std::endl;
    //while (true)
    //{
    //    int inputNum;
    //    std::cin >> inputNum;

    //    std::cout << "���� �Է��ϴ� ���ڰ�: " << inputNum << std::endl;

    //    if (inputNum < 1 || inputNum>10)break;
    //}

    /* while�� �̿��ؼ� �Է��Ѹ�ŭ ����ϱ�
       ex)3�� �Է��ϸ�
       Hello World Hello World Hello World
    */

    /*
    std::cout << "���ڸ� �Է��ض�: ";
        int inputNum;
        std::cin >> inputNum; //�Է¿� ����

        int count = 0; // ī��Ʈ�� ����

        while (count < inputNum)
        {
            std::cout << "�ʰ� �Է��� ��ŭ ����� ��" << std::endl;
            count++;
        }

        int Num1;
        int total = 0;

        do
        {
            std::cout << "0���� ū ���ڸ� �Է��Ͻÿ�.";
            std::cin >> Num1;
            total += Num1;
        } while (Num1!=0); // 0�� �ԷµǸ� ����

        std::cout << "�հ�: " << total << std::endl;

        int num2 = 0;
        while (num2 > 0)
        {
            std::cout << "����� ������� �ʴ´�." << std::endl;
        }
        // ������ ó������ false�̱� ������ ������� ����

        do
        {
            std::cout << "����� �ּ� �� ���� ����ȴ�." << std::endl;
        } while (num2 > 0);
        // ������ false ���� do ����� ���� �����

        */


}