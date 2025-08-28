#ifndef __HOUSE_H__
#define __HOUSE_H__

#include "shape.h"
#include "square.h"
#include "triangle.h"

class House : public Shape {

    private:
        // Pointers to square (body) and triangle (roof) composition of house
        Square* body;
        Triangle* roof;

        double orientation;

    public:
        House();
        
        virtual ~House();

        void draw() override;  // declaration only, implementation in cpp

        void setLocation(int x, int y);
};


#endif // __HOUSE_H__