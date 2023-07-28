//
// Created by Edvard Schøyen on 24/06/2023.
//

#ifndef INC_03_CIRCLE_H
#define INC_03_CIRCLE_H


class Circle {
private:
    // Private member variables
    double radius;
    const double pi = 3.141592;
public:
    Circle();
    Circle(double radius_);
    ~Circle();

    int getArea() const;

    int getCircumference() const;

    double getRadius() const;

    void setRadius(double radius);

};






#endif //INC_03_CIRCLE_H
