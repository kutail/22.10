#include <iostream>
#include <Windows.h>
#include <cmath>
#include <string.h>

bool Visokosniy_or_not(int year)
{
    return (year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0));
}

void Zadanie1()
{
    int day1, mouth1, year1;
    std::cout << "Дата" << "\nМесяц" << "\nГод";
    std::cin >> day1;
    std::cin >> mouth1;
    std::cin >> year1;
    Visokosniy_or_not(year1);
    int day2, mouth2, year2;
    std::cout << "\nДата" << "\nМесяц" << "\nГод";
    std::cin >> day2;
    std::cin >> mouth2;
    std::cin >> year2;
    Visokosniy_or_not(year2);
    int M_Visokosniy[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    int M_Not[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
    // Доделаю чуть попозже, мама уже спать сказала идти(
}

void Zadanie2(int arr[], const int size)
{
    double srarr = 0;
    for (int i = 0; i < size; i++)
    {
        srarr += arr[i];
    }
    std::cout << srarr / size;
}

void Zadanie3(int arr[], const int size)
{
    int minus = 0;
    int plus = 0;
    int nol = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            minus += 1;
        }
        else if (arr[i] == 0)
        {
            nol += 1;
        }
        else
        {
            plus += 1;
        }
    }
    std::cout << "\nКоличество положительных элементов: " << plus << "\nКоличество отрицательных элементов: " << minus << "\nКоличество нулевых элементов: " << nol;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int size = 5;
    int arr[size]{ 1, 3, 2, 1, 3 };

    //Zadanie1();
    Zadanie2(arr, size);
    Zadanie3(arr, size);
    return 0;
}
