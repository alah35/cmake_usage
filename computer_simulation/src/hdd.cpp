#include <fstream>
#include <string>
#include <iostream>
#include "hdd.h"

extern double *read();
extern double write(double *arr);

void save() {
    std::cout << "Input path to save:" << std::endl;
    std::string path; //= "your path";
    std::cin >> path; 

    std::ofstream save(path);
    if (save) {
        auto i = read();
        auto end = read() + 8;
        while(!save.eof() && i < end) {
            save << *i << std::endl;
            i++;
        }
        save.close();
    }
    else 
        std::cerr << "Wrong path to save" << std::endl;
}

void load() {
    std::cout << "Input path to load:" << std::endl;
    std::string path; //= "your path";
    std::cin >> path;
    std::ifstream load(path);
    if (load) {
        double arr[8];
        int i = 0;
        while (!load.eof() && i < 8) {
            load >> arr[i];
            i++;
        }
        load.close();
        write(arr);
    }
    else
        std::cerr << "Wrong path to load" << std::endl;
}
