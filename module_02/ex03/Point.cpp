#include "Point.hpp"

Point::Point(void): x(0), y(0) {}

Point::Point(const float new_x, const float new_y): x(new_x), y(new_y) {}

Point::Point(const Point &new_p): x(new_p.x), y(new_p.y) {}

Point&  Point::operator=(const Point &obj) {
    (void)obj;
    return *this;
}

Point::~Point(void) {}

Fixed   Point::getX(void) const { return this->x; }

Fixed   Point::getY(void) const { return this->y; }
