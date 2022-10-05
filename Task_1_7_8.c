// Задание 8 по теме 1.7
// 8. Необходимо создать двумерный массив 5 х 5. Далее написать функцию, которая заполнит его случайными числами от 30 до 60. Создать еще две функции, которые находят максимальный и минимальный элементы этого двумерного массива. 
// gcc версия 4.4.7 20120313 (Red Hat 4.4.7-23) (GCC)

#include <iostream>
#include <random>
#include <iomanip>


const int rows = 5;
const int cols = 5;
int i,j;
float array[rows][cols];

float init_array(float (*array)[cols])
{
    int i,j;
    for (i=1; i<rows; i++)
    {
        for (j=1; j<cols; j++)
        {
           array[i][j]=rand();
           array[i][j]=array[i][j]/100000-10000;
        }
    }
//    return array;
}
float min_a(float (*array)[cols])
{
    float min;
    min = array[1][1];
    for (i=1; i<rows; i++)
    {
        for (j=1; j<cols; j++)
        {
           if (array[i][j]<min)
           {
               min=array[i][j];
           }
        }
    }
    return min;
}

float max_a(float (*array)[cols])
{
    float max;
    max = array[1][1];
    for (i=1; i<rows; i++)
    {
        for (j=1; j<cols; j++)
        {
           if (array[i][j]>max)
           {
               max=array[i][j];
           }
        }
    }
    return max;
}



int main()
{
   std::random_device dev;
   std::mt19937 rng(dev());
   std::cout << std::fixed;
   init_array(array);
   float min,max;
    for (i=1; i<rows; i++)
    {
        for (j=1; j<cols; j++)
        {

           std::cout  <<array[i][j] << "	";
//           std::cout << i << ";" << j << "	";
        }
        std::cout << "\n";
    }
    min = min_a(array);
    max = max_a(array);
    std::cout << "Минимальное значение " << min <<"\n";
    std::cout << "Максимальное значение " << max <<"\n";    
   return 0;
}