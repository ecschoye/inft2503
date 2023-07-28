#include <iostream>
#include <iostream>
#include <string>
#include "Fraction.h"
#include "Set.h"


void print(const std::string& text, const Fraction &fraction) {
    std::cout << text << fraction << std::endl;
}

void print(const std::string& text, const Set &set) {
    std::cout << text << set << std::endl;
}

int main() {
    Fraction a(10, 20);
    Fraction b(3, 4);
    Fraction c;
    c.set(5);
    Fraction d = a / b;

    print("a = ", a);
    print("b = ", b);
    print("c = ", c);
    print("d = ", d);
    std::cout << std::endl;

    b += a;
    ++c;
    d *= d;
    print("b += a  | ", b);
    print("++c     | ", c);
    print("d *= d  | ", d);


    std::cout << std::endl;

    print("b = ", b);
    print("c = ", c);
    print("d = ", d);

    c = a + b - d * a;
    print("c = a + b - d * a ", c);

    c = -c;

    print("c = -c ", c);

    print("c = ", c);

    std::cout << std::endl;


    if (a + b != c + d)
        std::cout << "a + b != c + d" << std::endl;
    else
        std::cout << " a + b == c + d" << std::endl;
    while (b > a) b -= a;
    print("b = ", b);

    std::cout << std::endl;

    Fraction fraction1(10, 20);
    print("fraction1 = ", fraction1);
    print("5 - fraction1 = ", 5 - fraction1);
    print("fraction1 - 5 = ", fraction1 - 5);

    Fraction fraction2(3, 4);
    //  Teori: Forklar hvordan 5 - 3 - fraction1 - 7 - fraction2 blir tolket. Hvilke versjoner av operatoren - blir brukt?
    //  Svar: 5 - 3 - fraction1 - 7 - fraction2 blir tolket som (5 - 3) - fraction1 - 7 - fraction2
    //  Her blir først 5 - 3 utført, og deretter blir resultatet brukt i neste operasjon, som er - fraction1.
    //  Det brukes Fraction operator-(int integer, const Fraction &fraction)
    //  deretter Fraction operator-(const Fraction &other) const for å utføre operasjonen med -7.
    print("5 - 3 - fraction1 - 7 - fraction2 = ", 5 - 3 - fraction1 - 7 - fraction2);

    std::cout << std::endl;

    std::cout << "Set" << std::endl;

    //Set set1({1, 2, 3});
    Set set1;
    set1.push_back(1);
    set1.push_back(2);
    set1.push_back(3);

    print("set1 = ", set1);

    Set set2({3, 2, 4, 5, 6});

    print("set2 = ", set2);

    Set set3 = set1 + set2;

    print("set3 = ", set3);

    set3 += 7;
    set3 += 7;

    print("set3 = ", set3);

    Set set4;
    set4 = set3;

    print("set4 = ", set4);

    return 0;
}
