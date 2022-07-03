#include "ram.h"

double buff[8];

void write(double *arr) {
    for (int i = 0; i < 8; i++)
        buff[i] = arr[i];
}

double *read() {
    return buff;
}
