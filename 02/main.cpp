#include <iostream>
#include <string>
#include <cstring>
#include <limits>

void task_1();

void task_2();

void task_3();

void task_4();

void task_5();

void task_6();

int find_sum(const int *array, int length);

using namespace std;

int main() {
    int task_num;
    bool exitProgram = false;

    while (!exitProgram) {
        cout << "Enter task number (1-6) or 0 to exit" << endl;
        cin >> task_num;

        if (cin.fail()) {
            cin.clear(); // Clear error flags
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
            cout << "Invalid input. Please enter a number." << endl;
            continue; // Restart the loop
        }

        switch (task_num) {
            case 0:
                exitProgram = true;
                break;
            case 1:
                task_1();
                break;
            case 2:
                task_2();
                break;
            case 3:
                task_3();
                break;
            case 4:
                task_4();
                break;
            case 5:
                task_5();
                break;
            case 6:
                task_6();
                break;
            default:
                cout << "Invalid task number" << endl;
                break;
        }
    }
    return 0;
}


void task_1(){
    //a)
    int i = 3;
    int j = 5;
    int * p = &i;
    int * q = &j;

    cout << "Declared value of i" << endl;
    cout << i << endl;
    cout << "Location of i in memory" << endl;
    cout << &i << endl;

    cout << endl;

    cout << "Declared value of j" << endl;
    cout << j << endl;
    cout << "Location of j in memory" << endl;
    cout << &j << endl;

    cout << endl;

    cout << "Value pointer p points to in memory" << endl;
    cout << *p << endl;
    cout << "Value pointer q points to in memory" << endl;
    cout << *q << endl;

    cout << endl;

    //b

    *p = 7;
    *q += 4;
    *q = *p + 1;
    p = q;
    cout << *p << " " << *q << endl;
}

void task_2() {
    char * line = nullptr;

    /*
     * strcpy is trying to store the sentence in a nullpointer, which is leads to accessing an invalid memory location
     */
    strcpy (line, "Dette er en tekst");

    cout << endl;
}

void task_3() {
    char text[5];
    char *pointer = text;
    char search_for = 'e';
    cout << "Enter a word: ";
    cin >> text;

    while (*pointer != search_for) {
        *pointer = search_for;
        pointer++;
    }
    cout << text << endl;

    cout << endl;

    /*
     * The program will run until it finds the letter e in the word entered by the user.
     * It will then replace all the letters in the word with the letter e.
     * The program will then print the word with all the letters replaced with the letter e.
     * If the word entered by the user does not contain the letter e, the program will crash.
     *
     * Input can not be longer than five characters. If the input is longer than five characters, the program will crash.
     * If the input is five character the program will run, but it will crash the next time the user tries to start a task.
     * This will not happen if the user enters a word with less than five characters.
     */

}

void task_4() {
     int a = 5; // Declared value with initialization. Value is 5.
     //int &b; // Declared reference without initialization. This is not possible. References must be initialized.
     int b; // Declared value without initialization. Value is indeterminate. Holds a random value that can be anything.
     int * c; // Declared pointer without initialization. Value is also indeterminate. Holds a random memory address that can be anything.

     cout << "before" << endl;
     cout << "a " << a << endl;

     cout << "b " << b << endl;

     cout << "c " << c << endl;

     c = &b; // This is possible. You can change the value of a pointer. Holds memory address of b.

     // *a = *b + *c; // This is not possible. You can not change the value of a reference.

     // &b = 2; // This is not possible. You can not change the address of a reference.

     cout << "after" << endl;
     cout << "a " << a << endl;

     cout << "b " << b << endl;

     cout << "c " << c << endl;

    cout << endl;

}

void task_5() {
    double number = 5;
    double * pointer = &number;
    double & refNumber = number;

    cout << "number" << endl;

    cout << number << endl;

    number = number + 5;

    cout << number << endl;

    cout<< "pointer" << endl;

    cout << *pointer << endl;

    *pointer = *pointer + 5;

    cout << *pointer << endl;

    cout << "refNumber" << endl;

    cout << refNumber << endl;

    refNumber = refNumber + 5;

    cout << refNumber << endl;


    cout << endl;

}

void task_6() {
    int nums[20];
    int length = 20;

    for (int i = 0; i < length ; ++i) {
        nums[i] = i;
    }

    cout << "nums" << endl;
    // Calculate sum of first 10 elements
    cout << find_sum(nums, 10) << endl;

    cout << "nums + 10" << endl;
    // performs pointer arithmetic, advancing the pointer by 10 elements from the base address of the nums array.
    // it gives the pointer to the memory location of the 11th element in the array.
    cout << find_sum(nums + 10, 5) << endl;

    cout << "nums + 15" << endl;
    // performs pointer arithmetic, advancing the pointer by 15 elements from the base address of the nums array.
    // it gives the pointer to the memory location of the 16th element in the array.
    cout << find_sum(nums + 15, 5) << endl;


    cout << endl;


}

int find_sum(const int *array, int length) {
    int sum = 0;
    for (int i = 0; i < length; i++) {
        sum += array[i];
    }
    return sum;
}


