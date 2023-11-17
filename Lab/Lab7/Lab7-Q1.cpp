#include <iostream>
#include <fstream>
using namespace std;

double ClosestFifty(double [50][6] , int*, int*, double*);


int main()
{
	// Array Assignment - 50 Rows, 6 Columns
	double array[50][6] = {};

	// Array Assignment 
	double PositonClose, Total_C = 0, PositionBiggest = 0, OTotal_C = 0, Total_R = 0, OTotal_R = 100000, PositionLowest, Num = 0.0;
	int ColumnClosest = 0, RowClosest = 0;

	// Reading the file
	fstream outfile("scores.txt", ios::in);

	
	
	// Creates the Array using the file
	for (int i = 0; i < 50; i++) {

		outfile >> array[i][0] >> array[i][1] >> array[i][2] >> array[i][3] >> array[i][4] >> array[i][5];

		
	}

	// Function Prototype
	ClosestFifty(array, &RowClosest, &ColumnClosest, &Num);

	// 
	cout << "The number closest to 50 is located at Row: " << RowClosest << ", Column: " << ColumnClosest << ", With a Value of: " << Num << endl;



	// Highest Column
	for (int i = 0; i < 6; i++) {
		Total_C = 0;
		for (int j = 0; j < 50; j++) {
			Total_C += array[j][i];
			
		}

		if (Total_C > OTotal_C) {

			OTotal_C = Total_C;

			PositionBiggest = i;
		}
	}
	cout << "The column with the largest total is: " << PositionBiggest << " With a Total of: " << OTotal_C << endl;


	// Lowest Row
	for (int i = 0; i < 50; i++) {
		Total_R = 0;
		for (int j = 0; j < 6; j++) {
			Total_R += array[i][j];
			
		}

		if (Total_R < OTotal_R) {

			OTotal_R = Total_R;

			PositionLowest = i;
		}
	}
	cout << "The position of the row with the smallest position is: " << PositionLowest << endl;


	
}


// Finding the value closest to 0
double ClosestFifty(double array[50][6] , int* ColumnClosest, int* RowClosest, double*Num) {
	double  NumU = 0, NumClosest = 0;
	for (int i = 0; i < 50; i++) {

		for (int j = 0; j < 6; j++) {
			NumU = fabs(array[i][j]); 

			if (fabs(50 - NumU) < fabs(50 - NumClosest)) {
				NumClosest = NumU;
				*ColumnClosest = i;
				*RowClosest = j;
				*Num = NumClosest;
			}
		}

	}
	return 0;
}
