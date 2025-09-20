#include <iostream>
#include "chocolate.h"

int main() {
    int n, m;
    std::cout << "Введите размеры шоколадки (n m): ";
    std::cin >> n >> m;
    int result = minBreaks(n, m);
    std::cout << "Минимальное количество разбиений: " << result << std::endl;
    return 0;
}