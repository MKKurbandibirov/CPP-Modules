#include "Point.hpp"

int main(void) {
    Point a(0, 10);
    Point b(10, 0);
    Point c;
    std::cout << bsp(a, b, c, Point(2, 2)) << std::endl;
    std::cout << bsp(a, b, c, Point(10, 10)) << std::endl;
}