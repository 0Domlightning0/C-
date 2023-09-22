// Dominik Wrobel - 400508446
// Lab2 - 3

// Library Assignment
#include <iostream>
#include <fstream>
#include <cmath>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

int main() {

    double Init, Inc, Final, Volume;

    cout << "Input your Inital Radius, Incrament, and Final Radius seperated by one space " << endl;

    cin >> Init >> Inc >> Final;

    // Checks if the Radius is or will be equal to or less than the max Radius
    while (Init + Inc <= Final or Init == Final or Init < Final)
    {
        // Calculated the Volume of a Circle
        Volume = (M_PI * 4 * pow(Init, 3)) / 3;

        cout << "Radius in M: " << Init << "    Volume in M^3: " << Volume << endl;

        Init += Inc;


    }



    return 0;
}
