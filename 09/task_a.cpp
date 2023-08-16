#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

ostream &operator<<(ostream &out, const vector<int> &table) {
    for (auto &e : table)
        out << e << " ";
    return out;
}

void print(int i) {
    cout << (i == 1 ? "Approximately equal" : "Not equal") << endl;
}

bool greaterThan15(int i) {return i > 15;}

int main() {
    vector<int> v1 = {3, 3, 12, 14, 17, 25, 30};
    cout << "v1: " << v1 << endl;

    // a
    cout << endl;
    cout << "Task a " << endl;
    vector<int>::iterator it;

    it = find_if(v1.begin(), v1.end(), greaterThan15);

    cout << "First value greater than 15: " << *it << endl;
    cout << "Found at index: " << it - v1.begin() << endl;
}