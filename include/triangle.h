#ifndef __TRIANGLE_H__
#define __TRIANGLE_H__

#include "shape.h"

class Triangle : public Shape {
    
    protected:
        double orientation;
    
    public:
        Triangle();
        
        virtual ~Triangle();

        void draw() override;

        // Additional function needed to slightly offset triangle location for house structures
        void setLocation(int x, int y);
};

#endif // __TRIANGLE_H__