#include <iostream>
#include <string>
#include <cstring>
#include <limits>

using namespace std;

int main() {
    double number = 5; // Declare a double variable 'number' and initialize it with value 5
    double *pointer = &number; // Declare a double pointer 'pointer' and initialize it with the address of 'number'
    double &refNumber = number; // Declare a double reference 'refNumber' and bind it to 'number'

    cout << "Initial state:" << endl;
    cout << "number: value = " << number << endl;
    cout << "*pointer: points to address = " << pointer << ", value at address = " << *pointer << endl;
    cout << "&refNumber: value = " << refNumber << " (refers to 'number')" << endl;
    cout << "---------------------------------" << endl;

    // Manipulate 'number' directly
    cout << "After adding 5 to 'number':" << endl;
    number = number + 5;
    cout << "number: value = " << number << endl;
    cout << "---------------------------------" << endl;

    // Manipulate the value pointed to by 'pointer'
    cout << "After adding 5 to value pointed by 'pointer':" << endl;
    *pointer = *pointer + 5;
    cout << "*pointer: points to address = " << pointer << ", value at address = " << *pointer << endl;
    cout << "---------------------------------" << endl;

    // Manipulate the value referred to by 'refNumber'
    cout << "After adding 5 to 'refNumber':" << endl;
    refNumber = refNumber + 5;
    cout << "&refNumber: value = " << refNumber << " (refers to 'number')" << endl;
    cout << "---------------------------------" << endl;
}