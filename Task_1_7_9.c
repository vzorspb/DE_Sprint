// Задание 9 по теме 1.7
// Создайте структуру с именем student, содержащую поля: фамилия и инициалы, номер группы, успеваемость (массив из пяти элементов). 
// Создать массив из десяти элементов такого типа, упорядочить записи по возрастанию среднего балла. 
// Добавить возможность вывода фамилий и номеров групп студентов, имеющих оценки, равные только 4 или 5.
// gcc версия 4.4.7 20120313 (Red Hat 4.4.7-23) (GCC)

#include <iostream>
#include <string.h>

int arr1[] = {2,2,3,4,5};
int arr2[] = {2,2,3,4,5};
int arr3[] = {4,2,3,4,5};
int arr4[] = {2,4,3,4,5};
int arr5[] = {3,4,3,4,5};
int arr6[] = {5,2,3,4,5};
int arr7[] = {1,1,1,1,1};
int arr8[] = {2,2,2,2,2};
int arr9[] = {3,3,3,3,3};
int arr10[] = {4,4,4,4,4};   


class Student
{
public:
   char *name;			// Фамилия, инициалы
   int group;			// Номер группы
   int* grades;			// Оценки
   float Mid_grades ()		// Вычисление среднего балла
   {
       int i;
       float summ = 0;
       for (i=0;i<5;i++)
       {
          summ = summ + grades[i];      
       }
       return summ/5;
   }
   Student()
   {
   }
   bool good()
   {
	bool good = true;
	int i;
	for (i=0;i<5;i++)
        {
          if (grades[i]<4)
          {
              good=false;
          }      
        }
        return good;
   }
   void Print()
   {
      std::cout << "-------------------------------------------\n";
      std::cout << "Ф.И.О.: " << name << "\n";
      std::cout << "Группа: " << group << "\n";      
      std::cout << "Средний бал: " << Mid_grades () << "\n";      
   }
   Student(char *nm, int gr, int grd[5])
   {
	int i;
	name = new char[strlen(nm+1)];
	strcpy(name, nm);
	group = gr;
	grades = new int[5];
	for (i=0; i<5; i++)
	{
	    grades[i]=grd[i];
	}
   }

};


int main()
{
   int i;
   bool next = true;
   Student students [11];
   Student student();
   students[1] = Student((char *)"Иванов И.И.", 1, arr1);
   students[2] = Student((char *)"Петров И.И.", 2, arr2);
   students[3] = Student((char *)"Ситоров И.И.", 3, arr3);
   students[4] = Student((char *)"Новиков И.И.", 4, arr4);
   students[5] = Student((char *)"Алексеев И.И.", 5, arr5);
   students[6] = Student((char *)"Васильев И.И.", 6, arr6);
   students[7] = Student((char *)"Коровкин И.И.", 7, arr7);
   students[8] = Student((char *)"Нефедов И.И.", 8, arr8);
   students[9] = Student((char *)"Бармин И.И.", 9, arr9);
   students[10] = Student((char *)"Козлов И.И.", 10, arr10);
   std::cout << "До сортировки: \n";
   for (i=1; i<11; i++)
   {
      students[i].Print();
   }
   while (next)
   {
      next = false;
      for (i=1; i<10; i++)
      {
          if ((students[i].Mid_grades()-students[i+1].Mid_grades())>0.0001)
          {
             next = true;
             students[11] = students[i];
             students[i]=students[i+1];
             students[i+1]=students[11];
          }
      }
   }
   std::cout << "\nПосле сортировки: \n";
   for (i=1; i<11; i++)
   {
      students[i].Print();
   }
  
     std::cout << "\nСтуденты, имеющие только 4 и 5: \n";
   for (i=1; i<11; i++)
   {
      if (students[i].good())
      {
          students[i].Print();
      }
   }
   
   return 0;
}