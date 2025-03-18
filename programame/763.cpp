#include <bits/stdc++.h>

int main()
{   
    int repeat;
    std::cin >> repeat;

    for (int i = 0; i < repeat; i++)
    {
        std::string input;
        std::cin >> input;
        std::string output = "";
        for (int j = 0; j < input.size(); j++)
        {
            output += tolower(input[j]);
        }
        if (output == "colgadas")
        {
            std::cout << "Bien" << std::endl;
            
        } else
        {
            std::cout << "Mal" << std::endl;
        }
    }

    return 0;
}