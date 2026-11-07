//
// Created by 42194 on 6. 11. 2026.
//

#include "../include/Point.h"
#include  <cmath>
namespace shapeLib {
    int Point::horizontalDistance(Point const &p1, const Point &p2) {
        return std::abs(p1.x - p2.x);
    }

    int Point::verticalDistance(const Point &p1, const Point &p2) {
        return std::abs(p1.y - p2.y);
    }

    int &Point::operator[](const PointCoordinate c) {
        if ( c == PointCoordinate::x) {
            return x;
        }
        else if (c== PointCoordinate::y) {
            return y;
        }

        throw std::invalid_argument("Invalid coordinate ");
    }


    std::ostream &operator<<(std::ostream &os, const Point &p) { //musim vraciat os kvoli tomu ze void nema navratovu hodnotu (preco referencia)
        os << "("<< p.x << ", " << p.y << ")";
        return os;
    }
}

