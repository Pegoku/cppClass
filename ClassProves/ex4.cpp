#include <bits/stdc++.h>

int main()
{
    int h, m, s;
    std::cin >> h >> m >> s;

    int timeTotal = h * 3600 + m * 60 + s + 1;
    int h1 = timeTotal / 3600;
    int m1 = (timeTotal % 3600) / 60;
    int s1 = timeTotal % 60;
    std::cout << h1 << "h : " << m1 << "m : " << s1 << "s" << std::endl;

    return 0;
}