// Dominik Wrobel - 400508446
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

double ClosestFifty(double[50][7], int*, int*, double*);


int main()
{
	// Array Assignment - 50 Rows, 6 Columns
	double array[50][7] = {};

	// Array Assignment 
	double Yr, Mon, Day, Hr, Min, WH, WL;

	double Tot2010 = 0, Tot2011 = 0, Tot2012 = 0, Num2010 = 0, Num2011 = 0, Num2012 = 0, Steepness2010, Temp = 0;
	int PosBig2010 , PosBig2011, PosBig2012 = 0;

	// Reading the file
	fstream outfile("wavedata.txt", ios::in);

	cout << "                                                  Year    " << "Month    " << "Day    " << "Hour    " << "Min    " << "WH(m)    " << "WL(m)    " << "   Average    " << endl;

	// Creates the Array using the file
	for (int i = 0; i < 50; i++) {

		outfile >> array[i][0] >> array[i][1] >> array[i][2] >> array[i][3] >> array[i][4] >> array[i][5] >> array[i][6];

		// Checking if it exeeds the threthhold 
		if (array[i][5] / array[i][6] >= (1.0 / 7.0)) {
			cout << "The data of a wave that exeeds the limit is:      ";
			cout << setw(5) << setfill(' ') << left; 
			cout << left << setw(8) << array[i][0] << setw(9) << left << array[i][1] << setw(7) << left << array[i][2] << setw(8) << left << array[i][3] << setw(8) << left << array[i][4] << setw(5) << left << array[i][5] << right << setw(7) << array[i][6] << endl;
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

			// 2011 Data
			if (array[i][0] == 2011) {
				Tot2011 += array[i][5] / array[i][6];
				Num2011 += 1;

				for (int i = 0; i < 50; i++) {

					if (array[i][5] / array[i][6] > Temp) {

						Temp = array[i][5] / array[i][6];

						PosBig2011 = i;
					}
				}

		}

			// 2012 Data
			if (array[i][0] == 2012) {
				Tot2012 += array[i][5] / array[i][6];
				Num2012 += 1;

				for (int i = 0; i < 50; i++) {

					if (array[i][5] / array[i][6] > Temp) {

						Temp = array[i][5] / array[i][6];

						PosBig2012 = i;
					}
				}

			}
	}
	cout << endl << endl;
	cout << "Year    " << "Month    " << "Day    " << "Hour    " << "Min    " << "WH(m)    " << "WL(m)    " << "   Average    " << endl;
	cout << setw(5) << setfill(' ') << left;
	cout << left << setw(8) << array[PosBig2010][0] << setw(9) << left << array[PosBig2010][1] << setw(7) << left << array[PosBig2010][2] << setw(8) << left << array[PosBig2010][3] << setw(8) << left << array[PosBig2010][4] << setw(9) << left << array[PosBig2010][5] << setw(6) << left << array[PosBig2010][6] << right << setw(13) << (Tot2010 / Num2010) << endl;
	cout << left << setw(8) << array[PosBig2011][0] << setw(9) << left << array[PosBig2011][1] << setw(7) << left << array[PosBig2011][2] << setw(8) << left << array[PosBig2011][3] << setw(8) << left << array[PosBig2011][4] << setw(9) << left << array[PosBig2011][5] << setw(6) << left << array[PosBig2011][6] << right << setw(13) << (Tot2011 / Num2011) << endl;
	cout << left << setw(8) << array[PosBig2012][0] << setw(9) << left << array[PosBig2012][1] << setw(7) << left << array[PosBig2012][2] << setw(8) << left << array[PosBig2012][3] << setw(8) << left << array[PosBig2012][4] << setw(9) << left << array[PosBig2012][5] << setw(6) << left << array[PosBig2012][6] << right << setw(13) << (Tot2012 / Num2012) << endl;



}
