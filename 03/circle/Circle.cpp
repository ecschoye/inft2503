//
// Created by Edvard Schøyen on 24/06/2023.
//

#include "Circle.h"


Circle::Circle() {

}

Circle::Circle(double radius_) {
    radius = radius_;
}

Circle::~Circle() {

}

int Circle::getArea() const {
    return pi * radius * radius;
}

int Circle::getCircumference() const {
    return 2.0 * pi * radius;
}

double Circle::getRadius() const {
    return radius;
}

void Circle::setRadius(double radius) {
    Circle::radius = radius;
}


