// Dominik Wrobel - 400508446
// Assignment4 - Q1 (Alot of Comments)

// Library Assignment
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cmath>
#include <tuple>
using namespace std;


bool Lockers[100] = {};



int main() {
    int LowLim = 0;
    int UpLim = 100;
    for (int i = 0; i < 99; i++) {
        Lockers[i] = false;
    } 
    
    for (int i = 0; i < 99; i++) {
        for (int j = i; j < 99; j + i) {
            if (Lockers[j] == true) {
                Lockers[j] = false;
            }
            else {
                Lockers[j] = true;
            }
        }
        cout << "hello?";
    }

    for (int i = 0; i < 99; i++) {
        cout << i << Lockers[i] << " ";
    }
}
