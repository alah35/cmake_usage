#include "../include/coordinates.h"

template <typename T>
void Coordinates::get_coordinates(T a, T b) {
    x = static_cast<double>(a);
    y = static_cast<double>(b);
}

Coordinates Coordinates::get_coordinates() {
    double x, y;
    std::cout << "X = " ;
    std::cin >> x;
    std::cout  << "Y = ";
    std::cin >> y;
    this->x = x;
    this->y = y;
    return *this;
}

std::string Coordinates::show_coordinates() {
    return "X: " + std::to_string(x) + " Y: " + std::to_string(y);
}

bool Coordinates::operator == (Coordinates &right) {
    return this->x == right.x && this->y == right.y;
}

