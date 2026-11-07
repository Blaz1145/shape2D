//
// Created by 42194 on 6. 11. 2026.
//

#include "../include/Rectalgle.h"

namespace shapeLib {

    void Rectalgle::setP1(const Point &p) {
        p1 = p;
        dimValid = false;
    }

    void Rectalgle::setP2(const Point &p) {
        p2 = p;
        dimValid = false;
    }

    void Rectalgle::recalculateDim() {
        width = Point::horizontalDistance(p1 , p2);
        height = Point::verticalDistance(p1,p2);
        dimValid = true;
    }

    int Rectalgle::getHeight() {
        if (!dimValid) {
            recalculateDim();
        }
        return height;
    }

    int Rectalgle::getWidth() {
        if (!dimValid) {
            recalculateDim();
        }
        return width;
    }


} // shapeLib