#include "square.h"

Square::Square() : orientation(0.0) {

    // Inherits 0,0 from Shape
    std::cout << "Square constructor called" << std::endl;
}

Square::~Square() {
   
   std::cout << "Square destructor called " << std::endl;
}

void Square::draw() {

    std::cout << "Square is drawing at location <" << x_pos << ", " << y_pos << ">" << " with orientation "<< orientation << " degrees" << std::endl;
}
