#include "cpu.h"

extern double *read();

double sum() {
    double sum = 0;
    for (auto i = read(); i < read() + 8; i++)
        sum += *i;
    return sum;
}

