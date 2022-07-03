#include "kbd.h"
#include <iostream>

void input(double *arr) {
    for (int i = 0; i < 8; i++) {
        std::cout << "Enter " << i + 1 << " elem: ";
        std::cin >> arr[i];
    }
}

