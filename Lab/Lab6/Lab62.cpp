#include <iostream>
#include <string>
#include <fstream>
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

	// Runs the code to convert one line of DNA to RNA 20 times to complete the entire file

	cout << array[0];
	cout << 0;
	cout << DNAtoRNA(array[0], RNA) << endl;
	file_enter << DNAtoRNA(array[0], RNA) << endl;
	cout << countDNAnt(array[0], &NumA, &NumT, &NumC, &NumG);

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
	for (int j = 0; j < 100; j++) {
		if (DNA[j] == 'T') {
			*NumT += 1;
		}
		if (DNA[j] == 'A') {
			*NumA += 1;
		}
		if (DNA[j] == 'C') {
			*NumC += 1;
		}
		if (DNA[j] == 'G') {
			*NumG += 1;
		}
	}


	return 0;
}
