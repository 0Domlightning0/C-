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

    //Variable assignment,must be double to allow decimals, loop is = 1 so that the loop is active
    double Input, Loop = 1;

    cout << "Please input a number, It is allowed to have decimals \n\n";

    // This acts a True False statement, The program will end when the number is between 0 and 200
    while (Loop == 1)
    {
        cin >> Input;
        if (Input >= 0 and Input <= 200)
        {
            cout << "Your number is in between 0 and 200, please come again \n\n";

            // This ends the Program since Loop != 1
            Loop = 0;

        }

        else
        {
            // Doesnt change the Loop variable so the program runs again
            cout << "Your number is not in between 0 and 200, try a different number\n\n";

        }

    }

    return 0;
}
