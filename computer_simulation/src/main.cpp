#include <iostream>
#include "../include/gpu.h"
#include "../include/ram.h"
#include "../include/kbd.h"
#include "../include/cpu.h"

int main() {
    double _buff[8];
    input(_buff);
    write(_buff);
    show(read());
    std::cout << compute(read()) << std::endl;
    return 0;
}
