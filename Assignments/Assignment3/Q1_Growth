// Assignment3_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>


using namespace std;

int main()
{
    //Variable Assignment
    // MaxGrowthRate = MGR, SaturationConstant = SC, InitalConcentration = IC, Dilution Rate = DR

    int IC, SC, bot, top;
    double MGR, DR;

    bot = 2;
    top = 7;


    SC = bot + rand() % (top + 1 - bot);

    cout << "PLease input Inital Concentration at is divisible by 5 (Between 25 and 75): ";
    cin >> IC;
    cout << endl;

    cout << "Please input Max Growth Rate(Between 0.2 and 0.7): ";
    cin >> MGR;
    cout << endl;

    if (25 <= IC and IC <= 75 and IC % 5 == 0) {

        DR = MGR * (1.0 - (sqrt(((double)SC / ((double)SC + (double)IC)))));

        float f = DR;

        cout << setprecision(3) << DR << endl;

        if (DR >= 0.35 and DR <= 0.45) {
            cout << "Kinetic parameters are acceptable" << endl <<  "With Inital Concentration: " << IC << " and Max Growth Rate of: " << MGR;
        }
        else {
            cout << "Kinetic parameters are not acceptable" << endl << "With Inital Concentration: " << IC << " and Max Growth Rate of: " << MGR;

        }

    }



}
