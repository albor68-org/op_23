#include <iostream>

int max(int i1, int i2); //Прототип функции

int main() 
{
   // std::cin >> i1 >> std::endl;
    std::cout << "Наибольшее число: " << max(10,2) << std::endl;
    
    return 0;
}

int max(int i1, int i2)
{
    if (i1 > i2) return i1;
    return i2;

}