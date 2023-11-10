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


int Lockers[100] = {};
int students = 100;


int main() {
    //Variable Assessment
    // LowLim =  Lower Limit, UpLim = Upper Limit
    int LowLim = 0;
    int UpLim = 100;
    for (int i = 0; i < 101; i++) {
        Lockers[i] = false;
        cout << "done creating" << endl;
    }

    for (int i = 1; i < 101; i++) {
        cout << "did it" << endl;
        for (int j = i; j < 101; j+i){
            
            if (Lockers[j-1] == 1) {
                cout << "Now false  " << j << endl;
                Lockers[j-1] = 0;
                j += i;
              
                
            }

            else if (Lockers[j-1] == 0) {
                cout << "Now true  " << j << endl;
                Lockers[j-1] = 1;
                j += i;
            }
        }
    }

    for (int i = 0; i < 100; i++) {
        cout << i+1 << " " << Lockers[i] << "  ";
    }
}
