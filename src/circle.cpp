#include "circle.h"

Circle::Circle() {

    std::cout << "Circle constructor called" << std::endl;
}

Circle::~Circle() {
    
    std::cout << "Circle destructor called " << std::endl;

}

void Circle::draw() {

    std::cout << "Circle is drawing at location <" << x_pos << ", " << y_pos << ">" << std::endl;
}