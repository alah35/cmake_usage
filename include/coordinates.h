#pragma once
#include <iostream>
#include <string>

struct Coordinates {
    double x = 0;
    double y = 0;

    template <typename T>
    void get_coordinates(T a, T b);

    Coordinates get_coordinates();

    std::string show_coordinates();

    bool operator == (Coordinates &right);
};
