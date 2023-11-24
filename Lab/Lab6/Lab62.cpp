#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string DNAtoRNA(string DNA);

int main()
{
	string DNA;

	// Array Assignment 
	

	// Reading the file
	fstream outfile("DNAdata.txt", ios::in);



	// Creates the Array using the file
	for (int i = 0; i < 20; i++) {

		outfile >> DNA;
		cout << DNA << endl << endl;
	}

	


}

string DNAtoRNA(string DNA) {
	for (int i = 0; i < 20; i++) {
		if (DNA[i] == 'T') {
			DNA[i] = 'U';
		}
		cout << DNA;
	}
	return 0;
}


