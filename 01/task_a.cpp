#include <iostream>
#include <fstream>
#include <limits>
#include <string>


using namespace std;

void task_a(const int length) {
    cout << "Task A" << endl;
    int low = 0;
    int mid = 0;
    int high = 0;
    int temperature;


    cout << "You need to enter " << length << " temperatures." << endl;
    for (int i = 0; i < length ; ++i) {
        cout << "Temperature #" << i + 1 << ": ";
        cin >> temperature;

        if (cin.fail()) {
            cin.clear(); // Clear error flags
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
            cout << "Invalid input. Please enter a new number." << endl;
            --i;
            continue; // Restart the loop
        }

        if (temperature > 20)
            high++;
        else if (temperature < 10)
            low++;
        else
            mid++;



    }
    cout << "------------------------------" << endl;
    cout << "Number of temperatures below 10: " << low << endl;
    cout << "Number of temperatures between 10 and 20: " << mid << endl;
    cout << "Number of temperatures above 20: " << high << endl;
    cout << endl;
}

int main () {
    const int length = 5;
    task_a(length);
}