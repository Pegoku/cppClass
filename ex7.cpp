#include <iostream>
#include <bitset>

float addition()
{
    float a;
    float b;
    std::cout << "n1 + n2" << std::endl;
    std::cout << "Introdueix el primer nombre: ";
    std::cin >> a;
    std::cout << "Introdueix el segon nombre: ";
    std::cin >> b;

    return a + b;
}

float subtraction()
{
    float a;
    float b;
    std::cout << "n1 - n2" << std::endl;
    std::cout << "Introdueix el primer nombre: ";
    std::cin >> a;
    std::cout << "Introdueix el segon nombre: ";
    std::cin >> b;
    return a - b;
}

float multiplication()
{
    float a;
    float b;
    std::cout << "n1 * n2" << std::endl;
    std::cout << "Introdueix el primer nombre: ";
    std::cin >> a;
    std::cout << "Introdueix el segon nombre: ";
    std::cin >> b;
    return a * b;
}

float division()
{
    float a;
    float b;
    std::cout << "n1 / n2" << std::endl;
    std::cout << "Introdueix el primer nombre: ";
    std::cin >> a;
    std::cout << "Introdueix el segon nombre: ";
    std::cin >> b;
    return a / b;
}

float modulus()
{
    int a;
    int b;
    std::cout << "n1 % n2" << std::endl;
    std::cout << "Introdueix el primer nombre: ";
    std::cin >> a;
    std::cout << "Introdueix el segon nombre: ";
    std::cin >> b;
    return a % b;
}

float increment()
{
    float a;
    std::cout << "n1" << std::endl;
    std::cout << "Introdueix el primer nombre: ";
    std::cin >> a;
    return a++;
}

float decrement()
{
    float a;
    std::cout << "n1 + n2" << std::endl;
    std::cout << "Introdueix el primer nombre: ";
    std::cin >> a;
    return a--;
}

std::bitset<8> to_bin()
{
    int a;
    std::cout << "dec a binari" << std::endl;
    std::cin >> a;
    std::bitset<8> b(a);
    return b;
}

float to_oct()
{
    int a;
    std::cout << "dec a octal" << std::endl;
    std::cin >> a;

    int b = 0, i = 1;
    while (a != 0)
    {
        b += (a % 8) * i;
        a /= 8;
        i *= 10;
    }

    return b;
}

std::string to_hex()
{
    int a;
    std::cout << "dec a hex" << std::endl;
    std::cin >> a;

    std::string hex = "";
    while (a != 0)
    {
        int temp = a % 16;
        if (temp < 10)
        {
            hex.push_back(temp + 48);
        }
        else
        {
            hex.push_back(temp + 55);
        }
        a /= 16; // a = a / 16;
    }
    return hex;
}


int main()
{
    int operation;

    std::cout << "(1) Sumar" << std::endl;
    std::cout << "(2) Restar" << std::endl;
    std::cout << "(3) Multiplicar" << std::endl;
    std::cout << "(4) Dividir" << std::endl;
    std::cout << "(5) Modul" << std::endl;
    std::cout << "(6) Incrementar" << std::endl;
    std::cout << "(7) Decrementar" << std::endl;
    std::cout << "(8) To bin" << std::endl;
    std::cout << "(9) To oct" << std::endl;
    std::cout << "(10) To dec" << std::endl;
    std::cout << "(11) To hex" << std::endl;

    std::cout << "Que vols fer?" << std::endl;
    std::cin >> operation;

    switch (operation)
    {
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
    case 8:
        std::cout << to_bin() << std::endl;
        break;
    case 9:
        std::cout << to_oct() << std::endl;
        break;
    case 10:
        float a;
        std::cout << "dec a dec" << std::endl;
        std::cin >> a;
        std::cout << a << std::endl;
        break;
    case 11:
        std::cout << to_hex() << std::endl;
        break;
    default:
        std::cout << "Operació no vàlida" << std::endl;
        break;
    }
    return 0;
}