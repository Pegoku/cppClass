#include <bits/stdc++.h>

int calcula_longitud(std::string str)
{
    return str.length();
}

int main()
{
    std::string input1;
    std::cout << "Paraula: ";
    std::cin >> input1;
    std::cout << calcula_longitud(input1) << std::endl;

    return 0;
}