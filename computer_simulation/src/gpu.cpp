#include <iostream>
#include "gpu.h"

extern double *read();

void display() {
    for (auto i = read(); i < read() + 8; i++) {
        std::cout << *i << std::endl;
    }
}
