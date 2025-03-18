#include <bits/stdc++.h>

#define True true
#define False false

int sumar_llista(std::vector<int> list)
{
    int sum = 0;
    for (int i = 0; i < list.size(); i++)
    {
        sum += list[i];
    } 
    return sum;
}

int main()
{
    std::vector<int> input1;
    std::cout << "Introdueix els nombres que vulguis operar, escriu '.' per aturar: " << std::endl;
    while (true) {
        std::string str;
        std::cin >> str;
        if (str == ".") {
            break;
        }
        // std::cout << str << std::endl;
        input1.push_back(std::stoi(str));

    
    }
    std::cout << sumar_llista(input1) << std::endl;
    std::cout << sumar_llista(input1) << std::endl;
    return 0;

}