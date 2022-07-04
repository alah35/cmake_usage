#include <iostream>
#include "gpu.h"
#include "kbd.h"
#include "cpu.h"
#include "hdd.h"

int main() {
    std::string command;
    while (command != "exit") {
        std::cout << "Enter a command:" << std::endl;
        std::cin >> command;
        if (command == "input")
            input();
        if (command == "display" || command == "disp")
            display();
        if (command == "sum")
            std::cout << sum() << std::endl;
        if (command == "load")
            load();
        if (command == "save")
            save();
    }
    return 0;
}
