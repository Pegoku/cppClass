#include <bits/stdc++.h>


int main()
{
    while (true)
    {
        int repeat;
        std::cin >> repeat;

        if (repeat == 0)
        {
            return 0;
        }
        else
        {
            int total = 0;
            for (int i = 0; i < repeat; i++)
            {
                int capt, ncapt;
                std::cin >> capt >> ncapt;
                total += capt - ncapt;
            }
            std::cout << total << std::endl;
        }
    }
    return 0;
}