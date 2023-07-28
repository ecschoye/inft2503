//
// Created by Edvard Schøyen on 25/06/2023.
//

#include "algorithm"
#include <iostream>
#include <vector>




int main() {
    std::vector<double> vector{1, 2, 3, 4, 5};
    std::cout << vector[0] << std::endl;
    std::cout << vector.front() << std::endl;
    std::cout << vector.back() << std::endl;

    vector.emplace(vector.begin() + 2, 6);

    std::cout << vector[2] << std::endl;
    auto it = std::find(vector.begin(), vector.end(), 6);
    if (it != vector.end()) {
        std::cout << "Found 6 at index " << it - vector.begin() << std::endl;
    }
    return 0;
}