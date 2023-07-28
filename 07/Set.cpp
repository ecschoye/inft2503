//
// Created by Edvard Schøyen on 03/07/2023.
//

#include "Set.h"
#include <algorithm>

Set::Set() {

}

Set::Set(std::vector<int> elements) {
    this->elements = elements;
}

Set Set::operator+(const Set &other) const {
    Set set = *this;
    for (int element : other.elements) {
        if (std::find(set.elements.begin(), set.elements.end(), element) == set.elements.end())
            set.elements.push_back(element);
    }
    return set;
}

Set &Set::operator+=(int integer) {
    if (std::find(elements.begin(), elements.end(), integer) == elements.end())
        elements.push_back(integer);
    return *this;
}

std::ostream& operator<<(std::ostream& out, const Set& set) {
    out << "{";
    for (size_t i = 0; i < set.elements.size(); i++) {
        out << set.elements[i];
        if (i < set.elements.size() - 1) {
            out << ", ";
        }
    }
    out << "}";
    return out;
}

Set &Set::operator=(const Set &other) {
    elements = other.elements;
    return *this;
}


