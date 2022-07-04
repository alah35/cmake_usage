#include "kbd.h"
#include <iostream>

extern void write(double *arr);

void input() {
    double arr[8];
    for (int i = 0; i < 8; i++) {
        std::cout << "Enter " << i + 1 << " elem: ";
        std::cin >> arr[i];
    }
    write(arr);
}

