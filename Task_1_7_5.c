// Задание 5 по теме 1.7
// 5. Написать программу, которая выводит таблицу квадратов десяти первых положительных чисел. 
// gcc версия 4.4.7 20120313 (Red Hat 4.4.7-23) (GCC)

#include <iostream>



int main()
{
   int x;
   for (x=1;x<=10;x++)
   {
       
       std::cout << "x = " << x << "	x^2 = " << x*x << "\n";
   }
   return 0;
}