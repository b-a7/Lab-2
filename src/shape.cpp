#include "shape.h"

// Using member initialisation list format
Shape::Shape() : x_pos(0), y_pos(0) {
    std::cout << "Shape constructor called" << std::endl;
}

Shape::~Shape() {
    //std::cout << "Shape destructor called" << std::endl;
}

