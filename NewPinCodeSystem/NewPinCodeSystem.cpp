#include <iostream>
#include <windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    int sum = 0;
    {
        int count = 1;
        int num;

        while (count < 5) {
            std::cout << "Введите " << count << "ое число: ";
            std::cin >> num;
            sum += num;
            count++;
        }
    }

    if (sum == 42) {
        std::cout << "Ввод корректный\n";
    }
    else {
        std::cout << "Ввод некорректный\n";
    }
}