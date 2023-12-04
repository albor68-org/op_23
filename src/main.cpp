#include <iostream>
#include "functions.h"

int main (){
   double R = 3;                                     //Задаём значение радиуса

   std::cout << "The largest number: "
             << max(5.8 , 3.1)<< std::endl;         //Вывод максимального числа
   std::cout << "The sum of two numbers: "
             << sum(2.2 , 3.5) << std::endl;        //Вывод суммы чисел

   if ( square(R) == 0){
       std::cout << "The area is missing"           //Если площадь окр. будет равна нулю или
                 << std::endl;                      //будет отрицательной, то выводится сообщение
   }
   else {
      std::cout << "The area of the circle: "
                << square(R) << std::endl;          //Если площадь больше нуля,
   }                                                //то выводим результат

    return 0;
}


// Если я буду оставлять активным сеанс работы с компьютером, то с моими файлами могут начаться интересные приключения
