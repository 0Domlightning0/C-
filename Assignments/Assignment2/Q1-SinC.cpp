// Dominik Wrobel 400508446
//  Assignment2_Q1.cpp 
//

// Library assessment 
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void sinc(double Input) {

	// if you make the argument Input == 0, it doesnt work and gives 1.xxxx 10^-16
	if (Input < 0.00001 and Input > -0.00001) {

		// If the input is 0, the answer will just be one, no need to calculate 
		cout << 0 << setfill(' ') << left << setw(10) << 1 << left << setw(10) << endl;
	}

	// runs if the Input is anything but 0
	else {
		// Calculates Sinc
		double Ans = sin(Input) / Input;
		// Inital setting of permeters for the table to avoid row 1 being 10.39838948 with no spaces
		cout << setfill(' ') << left << setw(10);

		// Creates an alligned table with a 10 space gap
		cout << Input << setfill(' ') << left << setw(10) << Ans << left << setw(10) << endl;

	}
	
}

int main()
{
	//Variable Assignment 
	double LowLim, UpLim, Inc, Ans, Input;


	// User input section
	cout << "Please keep all values to 2 decimal places or less" << endl;

	cout << "What is the Lower limit: ";
	cin >> LowLim;


	cout << "What is the Upper limit: ";
	cin >> UpLim;


	cout << "What is the Incrament: ";
	cin >> Inc;

	cout << endl;


	// Checks if the incrament is positive and if the upper limit is bigger than the lower 
	// This is to make sure if you add to the lower limit the program will work
	if (Inc > 0 and UpLim > LowLim) {
		while (LowLim + Inc <= UpLim or LowLim == UpLim or LowLim < UpLim) {

			//Calls the function
			sinc(LowLim);

			// Adds the postive incrament to the lower limit
			LowLim += Inc;
		}

	}

	// If the incrament is negative the upper limit will be affected 
	// This leads to a different program
	if (Inc < 0 and UpLim > LowLim) {
		while (UpLim + Inc >= LowLim or UpLim == LowLim or UpLim > LowLim) {

			// Calls the function
			sinc(UpLim);

			// Adds the Negative incrament to decrease the Upper limit
			UpLim += Inc;
		}

	}
}
