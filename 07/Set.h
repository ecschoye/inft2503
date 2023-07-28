//
// Created by Edvard Schøyen on 03/07/2023.
//

#ifndef INC_07_SET_H
#define INC_07_SET_H

#include <vector>
#include <iostream>

class Set
{
public:
    std::vector<int> elements;

    Set();

    Set(std::vector<int> elements);

    void push_back(int integer) {
        elements.push_back(integer);
    }

    Set operator+(const Set &other) const;
    Set &operator+=(int integer);
    Set &operator=(const Set &other);
    friend std::ostream& operator<<(std::ostream& out, const Set& set);


};


#endif //INC_07_SET_H
