#ifndef __SQUARE_H__
#define __SQUARE_H__

// square.h - Square shape with orientation support

#include "shape.h"

class Square : public Shape {
    
    protected:
        double orientation;
    
    public:
        Square();

        virtual ~Square();

        void draw() override;
        
};

#endif // __SQUARE_H__