#include <iostream>
#include <string>
#include <cstring>
#include <limits>

using namespace std;

// Function to calculate sum of 'length' elements starting from 'array'
int find_sum(const int *array, int length) {
    int sum = 0;
    for (int i = 0; i < length; i++) {
        sum += array[i];
    }
    return sum;
}

int main() {
    int nums[20];
    int length = 20;

    // Initialize array with values 0 through 19
    for (int i = 0; i < length; ++i) {
        nums[i] = i;
    }

    cout << "Calculating sums:" << endl;
    cout << "---------------------------------" << endl;

    // Calculate sum of first 10 elements (0 to 9)
    cout << "Sum of first 10 elements (nums): " << find_sum(nums, 10) << endl;

    // Calculate sum of next 5 elements (10 to 14)
    cout << "Sum of next 5 elements (nums + 10): " << find_sum(nums + 10, 5) << endl;

    // Calculate sum of last 5 elements (15 to 19)
    cout << "Sum of last 5 elements (nums + 15): " << find_sum(nums + 15, 5) << endl;

    cout << "---------------------------------" << endl;
}