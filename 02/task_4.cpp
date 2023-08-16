#include <iostream>
#include <string>
#include <cstring>
#include <limits>

using namespace std;

int main() {
    int a = 5; // Declare an integer variable 'a' and initialize it with value 5
    int b; // Declare an integer variable 'b' without initialization. Its value is indeterminate.
    int *c; // Declare an integer pointer 'c' without initialization. Its value is indeterminate.

    cout << "Initial state:" << endl;
    cout << "a: value = " << a << endl;
    cout << "b: value = " << b << " (indeterminate)" << endl;
    cout << "*c: address = " << c << " (indeterminate)" << endl;
    cout << "---------------------------------" << endl;

    c = &b; // Assign the address of 'b' to pointer 'c'

    // *a = *b + *c; // Not possible. 'a' is not a pointer, so it can't be dereferenced
    // &b = 2; // Not possible. You cannot change the address of a variable

    cout << "Final state:" << endl;
    cout << "a: value = " << a << endl;
    cout << "b: value = " << b << " (indeterminate)" << endl;
    cout << "*c: address = " << c << " (points to address of b)" << endl;
    cout << "---------------------------------" << endl;
}