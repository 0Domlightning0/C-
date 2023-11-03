// Dominik Wrobel - 400508446
// 
// Lab5-Q1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

double Max(double array[]);

int main()
{
    double A, InitL, DeltaL, F;

    string materials[6] = { "Aluminium", "Brass", "Copper", "Nylon", "Steel", "Teflon" };
    double materialsY[6] = { 6.9, 9.0, 11.0 , 0.37 ,21.0 ,0.037 };
    bool Check = false;

    while (Check == false){
        cout << "Input Area(m^2): ";
        cin >> A;
        cout << endl;

        cout << "Input Inital Length(in m): ";
        cin >> InitL;
        cout << endl;


        cout << "Input Delta Length(in m): ";
        cin >> DeltaL;
        cout << endl;


        if (0.01 <= A and A <= 0.2 and InitL >= 10 and InitL <= 20 and DeltaL >= 0 and DeltaL <= 0.0015) {
            cout << "Material             " << setw(30) << left << "Y(N/m2)" << setw(30) << left << "F(N)" << setw(30) << left << endl;

            for (int i = 0; i < 6; i++) {
                F = (materialsY[i] * pow(10, 10)) * (DeltaL / InitL) * (A);
                cout << setw(30) << left << setprecision(4) << materials[i] << setw(30) << left  << materialsY[i] * pow(10, 10) << setw(30) << left << F << endl;

            }
            Check = true;

        }
        else {
            cout << "Error please try again" << endl << endl;
        }
    }
    }
    
    
