//
// Created by Edvard Schøyen on 09/07/2023.
//

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <functional>
#include <iterator>

using namespace std;

template <typename T, typename F>
string map_f(const vector<T>& vec, function<F(T)> f) {
    stringstream result;
    result << "{ ";

    for (auto it = begin(vec); it != prev(end(vec)); ++it) {
        result << f(*it) << ", ";
    }
    if (!vec.empty()) {
        result << f(vec.back());
    }
    result << " }";
    return result.str();
}

int main() {
    cout << map_f<int, int>({1, 2, 3}, [](int a){return a * 2;}) << endl;
    cout << map_f<float, float>({1, 2.3, 3}, [](float a){return a /2;}) << endl;
    cout << map_f<string, string>({"hello", "world"}, [](string s){return s + ".";}) << endl;
    cout << map_f<string, int>({"hello", "world"}, [](string s){return s.size();}) << endl;

    return 0;
}