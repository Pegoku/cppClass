#include "bits/stdc++.h"

int main() {
    int age;

    std::cout << "Quants anys tens?" << std::endl;
    std::cin >> age;
    // std::cout << age << std::endl;

    if (age == 18) {
        std::cout << "Tens 18 anys" << std::endl;
    } else if (age > 18){
        std::cout << "Ets major d'edat" << std::endl;
    } else {
        std::cout << "Ets menor d'edat" << std::endl;
    }

    return 0;
}