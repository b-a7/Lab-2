#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"

class Circle : public Shape {
    
    public:
        Circle();

        virtual ~Circle();

        void draw() override;
};

#endif // CIRCLE_H