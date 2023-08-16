#include <iostream>
#include <iostream>
#include <string>
#include "Set.h"

// A utility function to print the given set
void print(const std::string& text, const Set &set) {
    std::cout << text << set << std::endl;
}


int main() {
    std::cout << "Set" << std::endl;

    // Creating set1 with elements 1, 2, and 3.
    Set set1;
    set1.push_back(1);
    set1.push_back(2);
    set1.push_back(3);

    print("set1 = ", set1);

    // Creating set2 with elements 3, 2, 4, 5, and 6.
    Set set2({3, 2, 4, 5, 6});

    print("set2 = ", set2);

    // Creating set3 as the union of set1 and set2.
    Set set3 = set1 + set2;

    print("set3 = ", set3);

    // Adding elements 7 to set3.
    set3 += 7;
    set3 += 7; // Trying to add 7 again (will not change the set since 7 is already present).

    print("set3 = ", set3);

    // Assigning set3 to set4.
    Set set4;
    set4 = set3;

    print("set4 = ", set4);

    return 0;
}