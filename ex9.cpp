#include <bits/stdc++.h>

int gran_de_tres(int num1, int num2, int num3)
{
    return std::max(num1, std::max(num2, num3));
}

int main()
{
    int input1, input2, input3;
    std::cout << "Nombre 1: ";
    std::cin >> input1;
    std::cout << "Nombre 2: ";
    std::cin >> input2;
    std::cout << "Nombre 3: ";
    std::cin >> input3;
    std::cout << gran_de_tres(input1, input2, input3) << std::endl;

    return 0;
}