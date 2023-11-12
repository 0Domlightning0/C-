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

    for (int i = 1; i < 101; i++) {

        for (int j = i; j < 101; j + i) {

            if (Lockers[j - 1] == 1) {

                Lockers[j - 1] = 0;
                j += i;


            }

            else if (Lockers[j - 1] == 0) {

                Lockers[j - 1] = 1;
                j += i;
            }
        }
    }

    cout << "The lockers that are still open are: ";

    for (int i = 0; i < 100; i++) {
        if (Lockers[i] == 1) {
            cout << i+1 << " ";
        }
    }
    cout << endl;
}
