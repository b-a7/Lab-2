#include "house.h"

House::House() {

    std::cout << "House constructor" << std::endl;
    
    // calling square and triangle constructors
    body = new Square();
    roof = new Triangle();

}

House::~House() {
    std::cout << "house destructor\n";
    delete body;
    delete roof;
}

void House::draw() {
    std::cout << "House is drawing at location <" << x_pos << ", " << y_pos << ">" << std::endl;
}

