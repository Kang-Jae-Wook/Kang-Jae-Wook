
#include <iostream>
#include <time.h>
int main()
{
    {
        int count;

        std::cin >> count;

        for (int i = 0; i < count; i++) {
            for (int j = 0; j < count; j++) {
                std::cout << "*";
            }
            std::cout << "" << std::endl;
        }
        std::cout << "" << std::endl;
    }

    srand(time(NULL));
    int rotto[7] = { 0, };

    for(int i = 0; i < 6; i++) 
    {
        int value = rand() % 45 +1;
        for (int j = 0; j < 6; j++) 
        {
            if (value == rotto[j])
            {
                value = rand() % 45 +1;
                j = -1;
            }
        }   
        rotto[i] = value;
        std::cout << rotto[i] << std::endl;
    }

    // Easy - 숙제 못하신분
    // 이중 포문 이용해서 구구단 추력하기
    // int count = 0;
    // cin >> count;
    // 3x1 = 3
    //...

    // 3x0 = 27
    int gugudan = 0;

    std::cin >> gugudan;

    for (int i = 1; i <= gugudan; i++) 
    {
        for (int j = 1; j < 10; j++)
        {
            std::cout << i << "\tx\t" << j << "\t=\t" << i * j << std::endl;
        }
        std::cout << std::endl;
    }

    return 0;

}