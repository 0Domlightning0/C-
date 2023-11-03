// Dominik Wrobel - 400508446
// 
// Lab4-Q1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include <tuple>

using namespace std;

void read2Values(double*, double*);


int main()
{
    bool Check = false;
    while (Check == false) {
        double v1, v2;

        read2Values(&v1, &v2);

        if (v1 > 0 and v2 > 0) {

            cout << v1 << " " << v2;
            Check = true;
        }
        else {
            cout << "Please try again" << endl<<endl<<endl;
        }


        

    }
    

}

void read2Values(double* v1, double* v2) {

    cout << "enter value greater than 0: ";
    cin >> *v1;
    cout << endl;

    cout << "enter value greater than 0: "; 
    cin >> *v2;
    cout << endl;

}

