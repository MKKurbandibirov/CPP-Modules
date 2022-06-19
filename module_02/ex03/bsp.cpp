#include "Point.hpp"
/*  Alghorithm

    (x1 - x0) * (y2 - y1) - (x2 - x1) * (y1 - y0)
    (x2 - x0) * (y3 - y2) - (x3 - x2) * (y2 - y0)
    (x3 - x0) * (y1 - y3) - (x1 - x3) * (y3 - y0)

    If all of them have the same sign the point in triangle

*/

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    float   chk1, chk2, chk3;
    float   a_x = a.getX().toFloat();
    float   a_y = a.getY().toFloat();
    float   b_x = b.getX().toFloat();
    float   b_y = b.getY().toFloat();
    float   c_x = c.getX().toFloat();
    float   c_y = c.getY().toFloat();
    float   p_x = point.getX().toFloat();
    float   p_y = point.getY().toFloat();

    chk1 = (a_x - p_x) * (b_y - a_y) - (b_x - a_x) * (a_y - p_y);
    chk2 = (b_x - p_x) * (c_y - b_y) - (c_x - b_x) * (b_y - p_y);
    chk3 = (c_x - p_x) * (a_y - c_y) - (a_x - c_x) * (c_y - p_y);

    if ((chk1 > 0 && chk2 > 0 && chk3 > 0) || (chk1 < 0 && chk2 < 0 && chk3 < 0)) {
        return true;
    }
    return false;
}