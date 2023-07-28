#include <iostream>
#include <fstream>
#include <limits>
#include <string>

using namespace std;

void task_a(int length);

void task_b(int length);

void read_temperatures(double temperatures[], int length);

enum Task {
    TASK_A = 1,
    TASK_B = 2,
    EXIT_PROGRAM = 3
};

int main() {

    int task;
    const int length = 5;
    bool exitProgram = false;

    while (!exitProgram) {
        cout << "Oppgave a - "<< TASK_A << " \nOppgave b - " << TASK_B << "\nExit - " << EXIT_PROGRAM << "" << endl;
        cin >> task;

        if (cin.fail()) {
            cin.clear(); // Clear error flags
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
            cout << "Ugyldig input. Skriv inn et nytt nummer." << endl;
            continue; // Restart the loop
        }

        switch (task) {
            case 1:
                task_a(length);
                break;
            case 2:
                task_b(length);
                break;
            case 3:
                std::cout << "Exiting..." << std::endl;
                exitProgram = true;
                break;
            default:
                std::cout << "Skriv inn et nummer mellom " << TASK_A << " - " << EXIT_PROGRAM << std::endl;
                break;
        }
    }


    return 0;
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

//acutal task
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

void task_b(const int length) {
    cout << "Oppgave B" <<endl;
    //Task 1b

    int temperatureCounts[3] = {0};
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
