#include <iostream>
#include <fstream>
#include <limits>
#include <string>


using namespace std;

void task_b(int length);

void read_temperatures(double temperatures[], int length);

int main() {
    const int length = 5;
    task_b(length);
}

void task_b(const int length) {
    cout << "Oppgave B" <<endl;
    //Task 1b

    double temperatures[length];

    int low = 0;
    int mid = 0;
    int high = 0;
    int temperature;

    read_temperatures(temperatures, length);

    for (int i = 0; i < length; ++i) {
        if (temperatures[i] >= 20)
            high++;
        else if (temperatures[i] <= 10)
            low++;
        else
            mid++;
    }
    cout << "------------------------------" << endl;
    cout << "Antall under 10 er " << low << endl;
    cout << "Antall mellom 10 og 20 er " << mid << endl;
    cout << "Antall over 20 er " << high << endl;
    cout << endl;
}

void read_temperatures(double temperatures[], int length) {
    const char filename[] = "temperatures";
    ifstream file;
    file.open(filename);
    if (!file) {
        cout << "Error opening file '" << filename << "'" << endl;
        exit(EXIT_FAILURE);
    }
    int temp;
    int i = 0;
    while (file >> temp && i < length) {
        temperatures[i] = temp;
        i++;
    }
    file.close();
}