#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
private:
    const Fixed x;
    const Fixed y;

public:
    Point(void);
    Point(const float, const float);
    Point(const Point &);
    Point &operator=(const Point &);
    ~Point(void);

    Fixed   getX( void ) const;
    Fixed   getY( void ) const;
};

bool bsp( Point const , Point const , Point const , Point const );

#endif