#include <iostream>
#include <string>
#include <cstring>
#include <limits>

using namespace std;

int main() {
    // a)
    int i = 3; // Declare an integer variable 'i' and initialize it with value 3
    int j = 5; // Declare an integer variable 'j' and initialize it with value 5

    // Declare two integer pointers 'p' and 'q', and initialize them with the addresses of 'i' and 'j' respectively
    int * p = &i;
    int * q = &j;

    cout << "Initial state:" << endl;
    cout << "i: value = " << i << ", address = " << &i << endl;
    cout << "j: value = " << j << ", address = " << &j << endl;
    cout << "*p: points to address = " << p << ", value at address = " << *p << endl;
    cout << "*q: points to address = " << q << ", value at address = " << *q << endl;
    cout << "---------------------------------" << endl;

    // b)
    *p = 7; // Change the value in memory where 'p' is pointing to, i.e. change value of 'i' to 7
    *q += 4; // Increment the value in memory where 'q' is pointing to by 4, i.e. change value of 'j' to 9
    *q = *p + 1; // Change the value in memory where 'q' is pointing to the value that 'p' points to plus 1, i.e. change value of 'j' to 8
    p = q; // Make pointer 'p' point to the same memory location as pointer 'q', i.e. 'p' now points to 'j'

    cout << "Final state:" << endl;
    cout << "i: value = " << i << ", address = " << &i << endl;
    cout << "j: value = " << j << ", address = " << &j << endl;
    cout << "*p: points to address = " << p << ", value at address = " << *p << endl;
    cout << "*q: points to address = " << q << ", value at address = " << *q << endl;
    cout << "---------------------------------" << endl;
    cout << "Values at addresses p and q: " << *p << " " << *q << endl;

}
