//
// Created by Edvard Schøyen on 09/07/2023.
//

#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

template <typename T>
string concat(const T& str1, const T& str2) {
    stringstream stream;
    stream << str1 << str2;
    return stream.str();
}

template <typename T>
string concat(initializer_list<T> list) {
    stringstream stream;
    for (const T* it = begin(list); it != end(list); ++it) stream << *it;
    return stream.str();
}


int main() {
    cout << concat("hello", "world") << endl;
    cout << concat(1, 2) << endl;
    cout << concat({"a", "b", "c"});
    return 0;
}