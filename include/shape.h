#ifndef __SHAPE_H__
#define __SHAPE_H__

#include <iostream>

class Shape {
    protected:
        int x_pos;
        int y_pos;

    public:
        Shape();

        virtual ~Shape();

        virtual void draw() = 0;
};


#endif // __SHAPE_H__