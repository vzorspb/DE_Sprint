// Задание 2 по теме 1.7
// 2. Написать программу, которая проверяет является ли год високосным.

#include <iostream>

bool IsLeapYear(int year=2022)
{
    bool res=false;
    if (year%4==0)
    res=true;
    if (year%100==0)
    res=false;
    if (year%400==0)
    res=true;
    return res;
}

int main()
{
   int year;
   std::cout << "Введите год: ";
   std::cin >> year;
   if (IsLeapYear(year))
       std::cout << "Этот год високосный.\n";
   else
       std::cout << "Этот год не високосный.\n";
   return 0;
}