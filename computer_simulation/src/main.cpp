#include <iostream>
#include "gpu.h"
#include "ram.h"
#include "kbd.h"
#include "cpu.h"

int main() {
    double _buff[8];
    input(_buff);
    write(_buff);
    show(read());
    std::cout << compute(read()) << std::endl;
    return 0;
}
