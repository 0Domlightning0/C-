// Dominik Wrobel - 400508446
// Assignment4 - Q1 

// Library Assignment
#include <iostream>

using namespace std;

int Lockers[100] = {};
int students = 100;


int main() {
    //Variable Assessment
    // LowLim =  Lower Limit, UpLim = Upper Limit
    int LowLim = 0;
    int UpLim = 100;

    // Creates an array of 100 closed lockers
    for (int i = 0; i < 101; i++) {
        Lockers[i] = false;

    }

    // Runs for each student
    for (int i = 1; i < 101; i++) {

        // Starts at the students number, and increases by the students number each time
        for (int j = i; j < 101; j + i) {

            // If the locker is open, close it
            if (Lockers[j - 1] == 1) {

                Lockers[j - 1] = 0;
                j += i;


            }
            // If the locker is closed, open it
            else if (Lockers[j - 1] == 0) {

                Lockers[j - 1] = 1;
                j += i;
            }
        }
    }

    cout << "The lockers that are open are: ";

    // Goes through the lockers after the closing/opening
    for (int i = 0; i < 100; i++) {
        // Checks if the lockers are open
        if (Lockers[i] == 1) {
            // Arrays start at 0 but the lockers start at 1, so I have to add 1 to i
            cout << i+1 << " ";
        }
    }
    cout << endl;
}
