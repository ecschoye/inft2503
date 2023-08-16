#include <iostream>
#include <iomanip>

template <typename A, typename B>
class Pair {
public:
    A first;
    B second;
    Pair(A first_, B second_) : first(first_), second(second_)  {}

    Pair operator+(const Pair &other) {
        return Pair(first + other.first, second + other.second);
    }

    bool operator>(const Pair &other) {
        return (first + second) > (other.first + other.second);
    }
};


int main() {
    //Oppgave 2
    std::cout << std::endl;
    std::cout << "Oppgave 2" << std::endl;
    std::cout << std::endl;

    Pair<double, int> p1(3.5, 14);
    Pair<double, int> p2(2.1, 7);
    std::cout << "p1: " << p1.first << ", " << p1.second << std::endl;
    std::cout << "p2: " << p2.first << ", " << p2.second << std::endl;

    if (p1 > p2)
        std::cout << "p1 er størst" << std::endl;
    else
        std::cout << "p2 er størst" << std::endl;

    auto sum = p1 + p2;
    std::cout << "Sum: " << sum.first << ", " << sum.second << std::endl;

    /* Utskrift:
    p1: 3.5, 14
    p2: 2.1, 7
    p1 er størst
    Sum: 5.6, 21
    */

    return 0;
}