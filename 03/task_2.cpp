#include <iostream>
#include "circle/Circle.h"


int main() {
    std::cout << "Task 1 and 2" << std::endl;

    // Create a circle object with a radius of 5
    Circle circle(5);

    // Display the area and circumference of the circle
    std::cout << "Circle " << std::endl;
    std::cout << "Area: " << circle.getArea() << std::endl;

    std::cout << "Circumference: " << circle.getCircumference() << std::endl;

    return 0;
}