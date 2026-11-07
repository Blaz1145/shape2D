//
// Created by 42194 on 6. 11. 2026.
//

#ifndef SHAPE2D_RECTALGLE_H
#define SHAPE2D_RECTALGLE_H
#include "Point.h"
#include "Shape.h"
#include <iostream>

namespace shapeLib {
    class Rectalgle: public Shape{ //dedenie ?

    public:
        Rectalgle(int id, int x1 , int y1 , int x2 , int y2):Rectalgle(id, Point(x1,y1), Point(x2,y2)){}; //toto vola konstruktor ale preco takto a co robi funkcia Point
        Rectalgle(int id, const Point &p1 , const Point &p2): Shape(id), p1(p1), p2(p2) {};
        const Point &getP1() const {return p1; }
        const Point &getP2() const {return p2; }//netreba kopirovt (objekt ako pri volani v C++ sa deje) vdaka referencii a vdaaka const nikto nic nezmeni

        void printInfo() const override{
            std::cout << "Info o cterecku" << std::endl;
        }
        void setP1(const Point &p);
        void setP2(const Point &p);

        int getWidth();
        int getHeight();

    protected:
        void recalculateDim();

    private:
        Point p1;
        Point p2;
        int width;
        int height;
        bool dimValid = false;
    };
} // shapeLib

#endif //SHAPE2D_RECTALGLE_H