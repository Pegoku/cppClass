#include <bits/stdc++.h>

#define True true
#define False false

bool es_vocal(char c)
{
    switch (c)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            return True;
        default:
            return False;
    }
}

int main()
{
    std::string input1;
    std::cout << "Caracters: ";
    std::cin >> input1;
    for (char c : input1) {
        std::cout << c << " ---> " << (es_vocal(c) ? "" : "no ") << "es vocal" << std::endl;
    }

    return 0;
}