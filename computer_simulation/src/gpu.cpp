#include <iostream>
#include "../include/gpu.h"

void show(double *arr) {
    for (int i = 0; i < 8; i++) {
        std::cout << arr[i] << std::endl;
    }
}
