#include "cpu.h"

double compute(double* arr) {
    double sum = 0;
    for (int i = 0; i < 8; i++) 
        sum += arr[i];
    return sum;
}

