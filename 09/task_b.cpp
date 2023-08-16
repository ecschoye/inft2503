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

bool approximatelyEqual(int i, int j) {return abs(i - j ) <= 2;}

int main() {
    vector<int> v1 = {3, 3, 12, 14, 17, 25, 30};
    cout << "v1: " << v1 << endl;

    vector<int> v2 = {2, 3, 12, 14, 24};
    cout << "v2: " << v2 << endl;

    // b
    cout << endl;
    cout << "Task b " << endl;

    // Compare the first 5 elements of v1 and v2 using the "approximatelyEqual" function.
    // The "equal" function will check if the elements in the specified range of v1 are equal to the elements of v2.
    auto b = equal(v1.begin(), v1.begin() + 5, v2.begin(), approximatelyEqual);
    cout << b << endl;
    print(b);
    cout << endl;

    // Now compare the first 4 elements of v1 and v2 using the "approximatelyEqual" function.
    b = equal(v1.begin(), v1.begin() + 4, v2.begin(), approximatelyEqual);
    cout << b << endl;
    print(b);

}