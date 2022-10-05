// Задание 4 по теме 1.7
// 4. Проверить на чётность введённое с клавиатуры число
// gcc версия 4.4.7 20120313 (Red Hat 4.4.7-23) (GCC)

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