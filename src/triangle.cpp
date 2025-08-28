#include "triangle.h"

Triangle::Triangle() : orientation(0.0) {

    // Inherits 0,0 position from Shape
    std::cout << "Triangle constructor called" << std::endl;
}

Triangle::~Triangle() {

    std::cout << "Triangle destructor called" << std::endl;
}

void Triangle::draw() {

    std::cout << "Triangle is drawing at location <" << x_pos << ", " << y_pos << ">" << " with orientation "<< orientation << " degrees" << std::endl;
}

void Triangle::setLocation(int x, int y) {

    x_pos = x;
    y_pos = y;
}
