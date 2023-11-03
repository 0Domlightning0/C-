// dominik Wrobel - 400508446
// 
// Lab5-Q1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

using namespace std;

double Max(double array[]);

int main()
{
    int random, top, bot;

    double array[100] = {};

    double Total = 0;

    for (int i = 0; i < 99; i++) {

        bot = 100;
        top = 200;


        random = bot + rand() % (top + 1 - bot);

        array[i] = random;

        cout << array[i] << " ";

        Total += random;



    }
    cout << endl << endl << Total / 100;

    Max(array);
}

double Max(double array[100]) {
    double pos = 0, val, topval = 0;
    for (int i = 0; i < 99; i++) {
        val = array[i];
        if (val > topval) {
            topval = val;
            pos = i;
        }
    }
    cout << endl << topval << " " << pos;
    return 0;
}
