#include "house.h"
#include "shape.h"

const int ROOFHEIGHT = 5;

House::House() : orientation(0.0) {

    std::cout << "House constructor called" << std::endl;
    
    body = new Square();
    roof = new Triangle();
}

House::~House() {
    
    std::cout << "House destructor called " << std::endl;
    delete body;
    delete roof;
}

void House::draw() {

    // Offset added of y position + 5 units to triangle pos to logically make the roof higher than base square of house
    roof->setLocation(x_pos, y_pos + ROOFHEIGHT);

    std::cout << "House is drawing at location <" << x_pos << ", " << y_pos << "> with orientation "<< orientation << " degrees" << std::endl;

    // Draw components of house (calling draw methods of component shapes)
    body->draw();
    roof->draw();
}

void House::setLocation(int x, int y) {

    x_pos = x;
    y_pos = y;
}

