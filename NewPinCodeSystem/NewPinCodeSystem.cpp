#include <iostream>
#include <windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    int sum = 0;
    {
        int number;
        std::cout << "Введите число: ";
        std::cin >> number;
        while (number != 0) {
            sum += number % 10;
            number /= 10;
        }
    }

    if (sum == 42) {
        std::cout << "Ввод корректный\n";
    }
    else {
        std::cout << "Ввод некорректный\n";
    }
}