#include "../include/instruments.h"

std::vector<Coordinates> started_time;

std::vector<Coordinates> scalpel(Coordinates a, Coordinates b) {
    std::vector<Coordinates> vec {a, b};    
    std::cout << "A cut have been made between " << a.show_coordinates() << " and " 
        << b.show_coordinates() << std::endl;
    return vec;
}

void set_started_time(std::vector<Coordinates> vec) {
    started_time = vec;
}

void hemostat(Coordinates a) {
    std::cout << "a clamp done at " << a.show_coordinates() << std::endl;
}

void tweezers(Coordinates a) {
    std::cout << "A tweezers at " << a.show_coordinates() << std::endl;
}

bool suture(Coordinates a, Coordinates b) {
    if ( (started_time[0] == a && started_time[1] == b) 
            || (started_time[0] == b && started_time[1] == a) ) {

            std::cout << "Operation has finished" << std::endl;
            return 1;
    }
    else {
        std::cout << "Coordinates do not match" << std::endl;
        return 0;
    }
}
