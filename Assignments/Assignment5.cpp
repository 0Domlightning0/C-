// Dominik Wrobel - 400508446
#include <iostream>
#include <fstream>
using namespace std;

double ClosestFifty(double[50][7], int*, int*, double*);


int main()
{
	// Array Assignment - 50 Rows, 6 Columns
	double array[50][6] = {};

	// Array Assignment 
	double Yr, Mon, Day, Hr, Min, WH, WL;

	double Tot2010 = 0, Tot2011, Tot2012, Num2010 = 0, Num2011 = 0, Num2012 = 0, Steepness2010, Temp = 0, PosBig2010;

	// Reading the file
	fstream outfile("wavedata.txt", ios::in);



	// Creates the Array using the file
	for (int i = 0; i < 50; i++) {

		outfile >> array[i][0] >> array[i][1] >> array[i][2] >> array[i][3] >> array[i][4] >> array[i][5] >> array[i][6];

		// Checking if it exeeds the threthhold 
		if (array[i][5] / array[i][6] >= (1.0/7.0)) {
			cout << "The data of the wave that exeeds the limit is: ";
			cout << array[i][0] << " " << array[i][1] << " " << array[i][2] << " " << array[i][3] << " " << array[i][4] << " " << array[i][5] << " " << array[i][6] << endl;
		}

		// 2010 Data
		if (array[i][0] == 2010) {
			Tot2010 += array[i][5] / array[i][6];
			Num2010 += 1;

			for (int i = 0; i < 50; i++) {

				if (array[i][5] / array[i][6] > Temp) {

					Temp = array[i][5] / array[i][6];

					PosBig2010 = i;
				}
			}
			

		}
	}
	cout << "The average is " << Tot2010 / Num2010 << endl;
	cout << "The Wave with the highet steepness is: " << PosBig2010 << endl;
}
