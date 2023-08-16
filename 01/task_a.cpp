#include <iostream>
#include <fstream>
#include <limits>
#include <string>


using namespace std;

void task_a(const int length) {
    cout << "Oppgave A" <<endl;
    //Task 1a
    int low = 0;
    int mid = 0;
    int high = 0;
    int temperature;


    cout << "Du skal skrive inn " << length << " temperaturer" << endl;
    for (int i = 0; i < length ; ++i) {
        cout << "Temperatur nr " << i + 1 << ": ";
        cin >> temperature;

        if (cin.fail()) {
            cin.clear(); // Clear error flags
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
            cout << "Ugyldig input. Skriv inn et nytt nummer." << endl;
            --i;
            continue; // Restart the loop
        }

        if (temperature >= 20)
            high++;
        else if (temperature <= 10)
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

int main () {
    const int length = 5;
    task_a(length);
}