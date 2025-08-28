#include "duplex.h"
#include "house.h"

Duplex::Duplex() {

    std::cout << "Duplex constructor" << std::endl;

    left = new House();
    right = new House();
}

Duplex::~Duplex() {

    delete left;
    delete right;
    
    std::cout << "Duplex destructor called " << std::endl;
}

void Duplex::draw() {

    std::cout << "Duplex is drawing at location <" << x_pos << ", " << y_pos << ">" << std::endl;

    // Calling draw for the 2 houses that compose Duplex
    left->setLocation(x_pos, y_pos);
    left->draw();
    
    // Second house offset ot the right by 10 units to logically prevent overlap
    right->setLocation(x_pos + 10, y_pos);
    right->draw();
}

void Duplex::setLocation(int x, int y) {

    x_pos = x;
    y_pos = y;
}