#include <iostream>
#include "../include/instruments.h"

int main() {
    bool is_finished = false;
    extern std::vector<Coordinates> started_time;     

    while (!is_finished) {
        std::cout << "Choose instrument (scalpel, hemostat, tweezers, suture):" << std::endl;
        std::string inst;
        std::cin >> inst;

        if (inst == "scalpel") {
            Coordinates x, y;
            if (started_time.empty())
                set_started_time(scalpel(x.get_coordinates(), y.get_coordinates()));
            else
                scalpel(x.get_coordinates(), y.get_coordinates());
        }
        if (inst == "hemostat") {
            Coordinates x;
            hemostat(x.get_coordinates());
        }
        if (inst == "tweezers") {
            Coordinates x;
            tweezers(x.get_coordinates());
        }
        if (inst == "suture") {
            Coordinates x, y;
            is_finished = suture(x.get_coordinates(), y. get_coordinates());
        }        
    }
    return 0;
}
