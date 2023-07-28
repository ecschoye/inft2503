//
// Created by Edvard Schøyen on 29/06/2023.
//

#ifndef INC_07_FRACTION_H
#define INC_07_FRACTION_H

#include <iostream>


class Fraction
{
public:
    int numerator;
    int denominator;

    Fraction();
    Fraction(int numerator, int denominator);
    void set(int numerator_, int denominator_ = 1);
    Fraction operator+(const Fraction &other) const;
    Fraction operator-(const Fraction &other) const;
    Fraction operator*(const Fraction &other) const;
    Fraction operator/(const Fraction &other) const;
    Fraction operator-() const;
    Fraction &operator++(); // Preinkrement
    Fraction &operator--(); // Predekrement
    Fraction &operator+=(const Fraction &other);
    Fraction &operator-=(const Fraction &other);
    Fraction &operator*=(const Fraction &other);
    Fraction &operator/=(const Fraction &other);
    Fraction &operator=(const Fraction &other);
    bool operator==(const Fraction &other) const;
    bool operator!=(const Fraction &other) const;
    bool operator<=(const Fraction &other) const;
    bool operator>=(const Fraction &other) const;
    bool operator<(const Fraction &other) const;
    bool operator>(const Fraction &other) const;

    Fraction operator-(int integer) const;

    friend std::ostream& operator<<(std::ostream& out, const Fraction& fraction);

private:
    void reduce();
    int compare(const Fraction &other) const;
};

Fraction operator-(int integer, const Fraction &other);


#endif //INC_07_FRACTION_H
