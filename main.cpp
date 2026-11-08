#include <iostream>

#include "Shape.h"
#include "shapeLib/include/Point.h"
#include  "Rectalgle.h"

int main() { //test gitu
    shapeLib::Point p1(10,11);
    shapeLib::Point p2( 20,20);

    std::cout << "Original p1" << p1 <<std::endl;
    p1[shapeLib::PointCoordinate::x] = 15;
    std::cout << "X: " << p1[shapeLib::PointCoordinate::x] << std::endl;
    std::cout << "New P1: " << p1 << std::endl;


    //shapeLib::Shape p3 = 10; pojde zkompilovat bez klucove slova explicit (v shape.h), ale nebude to fungovat
    shapeLib::Rectalgle rect(101,0,5,10,10);

    std::cout << "Rectangle ID: " << rect.getID() << std::endl;
    std::cout << "Width " << rect.getWidth() << std::endl;
    std::cout << "Height " << rect.getHeight() << std::endl;
    std::cout << "Point " << rect.getP1() << std::endl;


    std::cout << "Horizontal distance " << shapeLib::Point::horizontalDistance(p1,p2) << std::endl;
    std::cout << p1.x << std::endl;

    return 0;
}