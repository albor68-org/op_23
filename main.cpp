#include <iostream>

int max(int i1, int i2);     // Прототип функции

int main() {

    std::cout << "Наибольшее число:" << std::endl;
    std::cout << max(10, 11) << std::endl;

    return 0;
}

int max(int i1, int i2) {     // Функция поиска максимума из двух чисел

    if (i1 > i2) return i1;

    return i2;
}