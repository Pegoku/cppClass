#include <iostream>

int main()
{
    int nombres1[3][2];
    int nombres2[3][2];
    int nombres3[3][2];

    std::cout << "matriu 1" << std::endl;
    for (int j = 0; j < 2; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            std::cin >> nombres1[i][j];
        }
    }

    std::cout << "matriu 2" << std::endl;
    for (int j = 0; j < 2; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            std::cin >> nombres2[i][j];
        }
    }


    for (int j = 0; j < 2; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            nombres3[i][j] = nombres1[i][j] + nombres2[i][j];
            std::cout << nombres3[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // for (int j = 0; j < 2; j++)
    // {
    //     for (int i = 0; i < 5; i++)
    //     {
            
    //     }
    //     std::cout << std::endl;
    // }

    std::cout << std::endl;
    return 0;
}
