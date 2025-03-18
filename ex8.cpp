#include <bits/stdc++.h>

int gran(int num1, int num2)
{
    return std::max(num1, num2);
}

int gran_sense_std(int num1, int num2)
{
    return num1 > num2 ? num1 : num2;
}

int main()
{
    int input1, input2;
    std::cout << "Nombre 1: ";
    std::cin >> input1;
    std::cout << "Nombre 2: ";
    std::cin >> input2;
    std::cout << gran(input1, input2) << std::endl;

    return 0;
}