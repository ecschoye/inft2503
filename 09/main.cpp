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
    cout << (i == 1 ? "Omtrent lik" : "Ikke lik") << endl;
}

bool greaterThan15(int i) {return i > 15;}

bool approximatelyEqual(int i, int j) {return abs(i - j ) <= 2;}

bool isOdd (int i) {return i % 2 == 1;}

int main() {
    vector<int> v1 = {3, 3, 12, 14, 17, 25, 30};
    cout << "v1: " << v1 << endl;

    vector<int> v2 = {2, 3, 12, 14, 24};
    cout << "v2: " << v2 << endl;

    // a
    cout << endl;
    cout << "Oppgave a " << endl;
    vector<int>::iterator it;

    it = find_if(v1.begin(), v1.end(), greaterThan15);


    cout << "Første verdi større enn 15: " << *it << endl;
    cout << "Finnes i indeks: " << it - v1.begin() << endl;

    // b
    cout << endl;
    cout << "Oppgave b " << endl;
    auto b = equal(v1.begin(), v1.begin() + 5, v2.begin(), approximatelyEqual);
    cout << b << endl;
    print(b);
    cout << endl;

    b = equal(v1.begin(), v1.begin() + 4, v2.begin(), approximatelyEqual);
    cout << b << endl;
    print(b);

    // c
    cout << endl;
    cout << "Oppgave c " << endl;
    cout << v1 << endl;
    replace_copy_if(v1.begin(), v1.end(), v1.begin(), isOdd, 100);
    cout << v1 << endl;

}