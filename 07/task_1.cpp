#include <iostream>
#include <iostream>
#include <string>
#include "Fraction.h"


// A utility function to print the given fraction
void print(const std::string& text, const Fraction &fraction) {
    std::cout << text << fraction << std::endl;
}

int main() {
    Fraction a(10, 20); // Fraction a = 10/20
    Fraction b(3, 4);   // Fraction b = 3/4
    Fraction c;
    c.set(5);           // Fraction c = 5
    Fraction d = a / b; // Fraction d = a/b

    // Print fractions
    print("a = ", a);
    print("b = ", b);
    print("c = ", c);
    print("d = ", d);
    std::cout << std::endl;

    // Perform operations
    b += a; // Add a to b
    ++c;    // Increment c
    d *= d; // Multiply d by itself

    // Print results
    print("b += a  | ", b);
    print("++c     | ", c);
    print("d *= d  | ", d);
    std::cout << std::endl;

    // More operations
    c = a + b - d * a; // c = a + b - d*a
    print("c = a + b - d * a ", c);

    c = -c; // Negate c
    print("c = -c ", c);

    print("c = ", c);
    std::cout << std::endl;

    // Check equality
    if (a + b != c + d)
        std::cout << "a + b != c + d" << std::endl;
    else
        std::cout << "a + b == c + d" << std::endl;

    // Subtract a from b until b <= a
    while (b > a) b -= a;
    print("b = ", b);
    std::cout << std::endl;

    Fraction fraction1(10, 20);
    print("fraction1 = ", fraction1);
    print("5 - fraction1 = ", 5 - fraction1);
    print("fraction1 - 5 = ", fraction1 - 5);

    Fraction fraction2(3, 4);

    // Theory: Explain how 5 - 3 - fraction1 - 7 - fraction2 is interpreted.
    // Answer: The expression is evaluated from left to right as follows: ((5 - 3) - fraction1 - 7) - fraction2
    // The subtraction operators between integers and fractions are executed using the corresponding operator overloads.
    print("5 - 3 - fraction1 - 7 - fraction2 = ", 5 - 3 - fraction1 - 7 - fraction2);

    return 0;
}