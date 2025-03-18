#include <bits/stdc++.h>

int main()
{
    int input1;
    std::cout << "Data en segons: ";
    std::cin >> input1;

    int h = input1 / 3600;
    int m = (input1 % 3600) / 60;
    int s = input1 % 60;
    std::cout << h << "h : " << m << "m : " << s << "s" << std::endl;

    return 0;
}