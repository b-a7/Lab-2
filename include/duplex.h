#ifndef __DUPLEX_H__
#define __DUPLEX_H__

#include "shape.h"
#include "house.h"

class Duplex : public Shape {

    private:
        // Pointers to two house objects that make up the duplex
        House* left;
        House* right;

    public:
        
        Duplex();

        virtual ~Duplex();

        void draw() override;  

        void setLocation(int x, int y);
};


#endif // __DUPLEX_H__