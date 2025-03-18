#include <bits/stdc++.h>

int main()
{
    while (true)
    {
        int repeat;
        std::cin >> repeat;
        int nYoung = 0, nAdulto = 0;
        std::unordered_map<std::string, int> young = {};
        std::unordered_map<std::string, int> adulto = {};

        if (repeat == 0)
        {
            return 0;
        }
        else
        {
            for (int i = 0; i < repeat; i++)
            {
                std::string nom = "";
                std::cin >> nom;
                // std::cout << nom << std::endl;
                if (tolower(nom[1]) == nom[1])
                {
                    // young

                    young[nom] += 1;
                }
                else
                {
                    adulto[nom] += 1;
                }
            }
        }
    }

    return 0;
}