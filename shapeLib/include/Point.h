//
// Created by 42194 on 6. 11. 2026.
//

#ifndef SHAPE2D_POINT_H
#define SHAPE2D_POINT_H
#include <iostream>

namespace shapeLib{
    enum class PointCoordinate {
        x,
        y
    };

    class Point {
    public:
        Point(int px, int py):x(px){ //takyto styl definicie x je zrychlenie
            y = py;
        };

        int &operator[](const PointCoordinate c);

        static int horizontalDistance(const Point &p1, const Point &p2);
        static int verticalDistance(const Point &p1, const Point &p2);

        int x;
        int y;
    };

    std::ostream &operator<<(std::ostream &os, const Point &p); //TODO: toto iste aj nad Rectangle!
}


#endif //SHAPE2D_POINT_H