//Dominik Wrobel - 400508446

#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include <fstream>
#include <iomanip>
using namespace std;

//prototypes
string DNAtoRNA(string, string);

string countDNAnt(string, int*, int*, int*, int*);

int main()
{
	// Array Creation
	string array[20] = {};

	string RNA = "";

	string DNA;

	int NumA = 0, NumT = 0, NumC = 0, NumG = 0;




	// Reading the file
	fstream outfile("DNAdata.txt", ios::in);

	// Opens the File for input
	ofstream file_enter;
	file_enter.open("RNAdata");

	// Creates the Array using the file
	for (int i = 0; i < 20; i++) {
		outfile >> array[i];
		//cout << array[i] << endl;


	}


	cout << "Total DNA for each strand:" << endl;

	cout << "#  " << "A   " << "C   " << "G   " << "T   " << endl;
	// Runs the code to convert one line of DNA to RNA 20 times to complete the entire file
	for (int i = 1; i < 21; i++) {


		//cout << DNAtoRNA(array[i], RNA) << endl;
		file_enter << DNAtoRNA(array[i - 1], RNA) << endl;
		countDNAnt(array[i - 1], &NumA, &NumT, &NumC, &NumG);

		cout << left << setw(3);
		cout << left << setw(3) << i << setw(4) << left << NumA << setw(4) << left << NumC << setw(3) << left << NumG << right << setw(3) << NumT << endl;

	}
	return 0;
}

// Takes one line from the DNA array and an empty string to insert the RNA string into
string DNAtoRNA(string array, string RNA) {
	string DNA = "";
	DNA = array;
	for (int j = 0; j < 100; j++) {
		// If the letter it found is equal to T
		if (DNA[j] == 'T') {
			// The program will convert it into a U
			DNA[j] = 'U';
		}

	}
	RNA = DNA;
	return RNA;
}



string countDNAnt(string DNA, int* NumA, int* NumT, int* NumC, int* NumG) {
	int NumofA = 0, NumofT = 0, NumofC = 0, NumofG = 0;
	for (int j = 0; j < 100; j++) {
		if (DNA[j] == 'T') {
			NumofT += 1;
		}
		if (DNA[j] == 'A') {
			NumofA += 1;
		}
		if (DNA[j] == 'C') {
			NumofC += 1;
		}
		if (DNA[j] == 'G') {
			NumofG += 1;
		}
	}

	*NumA = NumofA;
	*NumT = NumofT;
	*NumC = NumofC;
	*NumG = NumofG;


	return "yes";
}

