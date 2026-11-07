//
// Created by 42194 on 6. 11. 2026.
//

#ifndef SHAPE2D_SHAPE_H
#define SHAPE2D_SHAPE_H

namespace shapeLib {
    class Shape {

    public:
        explicit Shape (int id):ID(id){ };

        virtual void printInfo() const = 0;

        int getID() const { return ID;}

    private:
        int ID;
    };
} // shapeLib

#endif //SHAPE2D_SHAPE_H