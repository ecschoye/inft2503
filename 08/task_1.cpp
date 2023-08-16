#include <iostream>
#include <iomanip>

template <typename T>
bool equal(T a, T b) {
    std::cout << "Function template to determine if " << a << " and " << b << " are equal." << std::endl;
    return a == b;
}

bool equal(double a, double b) {
    std::cout << "Function template to determine if " << a << " and " << b << " can be considered equal." << std::endl;
    return abs(a - b ) < 0.00001;
}

int main() {
    // Task 1
    std::cout << "Oppgave 1" << std::endl;

    std::cout << std::endl;

    char c = 'e';
    char d = 'd';
    char e = 'e';
    std::cout << equal(c, d) << std::endl;
    std::cout << equal(c, e) << std::endl;

    double x = 5.000001;
    double y = 5.000002;
    double z = 5.0002;
    std::cout << equal(x, y) << std::endl;
    std::cout << equal(x, z) << std::endl;

    return 0;
}