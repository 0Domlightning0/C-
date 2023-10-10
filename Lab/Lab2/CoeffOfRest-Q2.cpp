// Dominik Wrobel 400508446
// Lab3-Q2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

double calculateCR(double BHieght, double DHieght);

using namespace std;
int main()
{
    double Input1, Input2;
    cout << "Bounce Hieght: ";
    cin >> Input1;

    cout << endl;

    cout << "Drop Hieght: ";
    cin >> Input2;
    if (calculateCR(Input1, Input2) == -1) {
        
        cout << endl << "Error";
    }
    else {
        cout << setprecision(3) << "The Coeffcient of Restitution is: " << calculateCR(Input1, Input2);

    }
}

double calculateCR(double BHieght, double DHieght) {
    if (BHieght <= 0 or DHieght <= 0 or BHieght > DHieght) {

        return -1;
    }
    
    else {
        return sqrt(BHieght / DHieght);

    }



}

