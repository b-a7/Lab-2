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

    public:
        House();
        
        virtual ~House();

        void draw() override;  // declaration only, implementation in cpp
};


#endif // __HOUSE_H__