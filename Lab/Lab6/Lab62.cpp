#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include <fstream>
using namespace std;

//prototypes
string DNAtoRNA(string, string);

string countDNAnt(string[20]);

int main()
{
	// Array Creation
	string array[20] = {};


	string RNA = "";

	string DNA;

	


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
	for (int i = 0; i < 20; i++) {
		cout << DNAtoRNA(array[i], RNA) << endl;
		file_enter << DNAtoRNA(array[i], RNA) << endl;
	}
}

// Takes one line from the DNA array and an empty string to insert the RNA string into
string DNAtoRNA(string array,string RNA) {
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



string countDNAnt(string[20]){
	return 0;
}
