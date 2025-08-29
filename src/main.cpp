#include <iostream>
#include <string>
#include <vector>
#include "shape.h"
#include "circle.h"
#include "square.h"
#include "triangle.h"
#include "house.h"
#include "duplex.h"

Shape* createShape(int choice) {

    switch(choice) {
        case 0: return new Circle();
        case 1: return new Square();
        case 2: return new Triangle();
        case 3: return new House();
        case 4: return new Duplex();
        default:
            std::cout << "Invalid choice... \n" << std::endl;
    }
}

int main()  {

    std::vector<Shape*> shapes;

    std::cout << "\n*****Hello Shapes Program*****\n" << std::endl;

    std::cout << "Please Enter 6 Shapes from below: (space separated)\n" << std::endl;

    std::cout << "0: circle" << std::endl;
    std::cout << "1: square" << std::endl;
    std::cout << "2: triangle" << std::endl;
    std::cout << "3: house" << std::endl;
    std::cout << "4: duplex\n" << std::endl;

    for (int i = 0; i < 6; i++) {
        int choice;
        std::cin >> choice;

        shapes.push_back(createShape(choice));
    }

    for (Shape* s : shapes) {
        s->draw();
    }

    for (Shape* s : shapes) {
        delete s;
    }

    std::cout << std::endl;

    return 0;
}