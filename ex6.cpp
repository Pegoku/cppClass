#include "bits/stdc++.h"

float addition(){
    float a; float b;
    std::cout << "n1 + n2" << std::endl;
    std::cout << "Introdueix el primer nombre: ";
    std::cin >> a;
    std::cout << "Introdueix el segon nombre: ";
    std::cin >> b;

    return a + b;
}

float subtraction(){
    float a; float b;
    std::cout << "n1 - n2" << std::endl;
    std::cout << "Introdueix el primer nombre: ";
    std::cin >> a;
    std::cout << "Introdueix el segon nombre: ";
    std::cin >> b;
    return a - b;
}

float multiplication(){
    float a; float b;
    std::cout << "n1 * n2" << std::endl;
    std::cout << "Introdueix el primer nombre: ";
    std::cin >> a;
    std::cout << "Introdueix el segon nombre: ";
    std::cin >> b;
    return a * b;
}

float division(){
    float a; float b;
    std::cout << "n1 / n2" << std::endl;
    std::cout << "Introdueix el primer nombre: ";
    std::cin >> a;
    std::cout << "Introdueix el segon nombre: ";
    std::cin >> b;
    return a / b;
}

float modulus(){
    int a; int b;
    std::cout << "n1 % n2" << std::endl;
    std::cout << "Introdueix el primer nombre: ";
    std::cin >> a;
    std::cout << "Introdueix el segon nombre: ";
    std::cin >> b;
    return a % b;
}

float increment(){
    float a;
    std::cout << "n1" << std::endl;
    std::cout << "Introdueix el primer nombre: ";
    std::cin >> a;
    return a++;
}   

float decrement(){
    float a;
    std::cout << "n1 + n2" << std::endl;
    std::cout << "Introdueix el primer nombre: ";
    std::cin >> a;
    return a--;
}   





int main(){
    int operation;
    
    std::cout << "(1) Sumar" << std::endl;    
    std::cout << "(2) Restar" << std::endl;
    std::cout << "(3) Multiplicar" << std::endl;
    std::cout << "(4) Dividir" << std::endl;
    std::cout << "(5) Modul" << std::endl;
    std::cout << "(6) Incrementar" << std::endl;  
    std::cout << "(7) Decrementar" << std::endl;

    std::cout << "Que vols fer?" << std::endl;
    std::cin >> operation;

    switch (operation){
        case 1:
            std::cout << addition() << std::endl;
            break;
        case 2:
            std::cout << subtraction() << std::endl;
            break;
        case 3:
            std::cout << multiplication() << std::endl;
            break;
        case 4:
            std::cout << division() << std::endl;
            break;
        case 5:
            std::cout << modulus() << std::endl;
            break;
        case 6:
            std::cout << increment() << std::endl;
            break;
        case 7:
            std::cout << decrement() << std::endl;
            break;
        default:
            std::cout << "Operació no vàlida" << std::endl;
            break;
    }
    return 0;
}