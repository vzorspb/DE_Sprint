// Задание 1 по теме 1.7
// 2. Написать программу, которая проверяет является ли год високосным.

#include <iostream>

bool IsEven(int number)
{
    bool res;
    if (number%2==0)
        res=true;
    else
        res=false;
    return res;
}

int main()
{
   int a;
   std::cout << "Введите число: ";
   std::cin >> a;
   if (IsEven(a))
       std::cout << "Этот четное число.\n";
   else
       std::cout << "Этот нечетное число.\n";
   return 0;
}