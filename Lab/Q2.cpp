// Lab1 - Dominik Wrobel.cpp : This file contains the 'main' function. Program execution begins and ends there.

// Question 2

#include <iostream>

using namespace std;

int main()
{   // Variable Assignment
    double angle, s, rad;
    cout << "Please input your angle in degrees ";
    cin >> angle;

    // Space for clairty
    cout << "\n \n";

    //Defining Radius
    const int r = 5;

    // Defining PI
    const double PI = 3.1415926535;

    // I muiltiply the angle by pi/180 to get the radians
    rad = angle * (PI / 180);

    // Equasion For the legenth of the Arc
    s = r * (rad);

    // Printing out to Console
    cout << "The arc legnth of a circle with an angle of " << angle << " degrees and radius of 5 is " << s << "cm" << "\n \n";

    cout << "The sine of your angle is " << sin(rad) << "\n \n";

    cout << "The cosine of your angle is " << cos(rad) << "\n \n";

    cout << "The tangent of your angle is " << tan(rad) << "\n \n";

}
