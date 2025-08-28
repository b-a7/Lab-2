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
}

void Duplex::draw() {

    std::cout << "Duplex is drawing at location <" << x_pos << ", " << y_pos << ">" << std::endl;
}