#include <iostream>
#include <fstream>
#include <time.h>
#include <random>
#include <string>

using namespace std;

int main()
{
	string array[5] = {};


	ifstream outfile;
	string temp;
	int Upper = 0, Lower = 0, Num = 0, the = 0, e = 0;

	outfile.open("words.txt", ios_base::in);

	for (int i = 0; i < 5; i++) {
		outfile >> array[i];
		//cout << array[i] << " ";
	
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < array[i].length(); j++) {
			temp = array[i];
			if (isdigit(temp[j])) {
				Num += 1;
			}
			if (islower(temp[j])) {
				Lower += 1;
			}
			if (isupper(temp[j])) {
				Upper += 1;
			}
			if (temp[j] == 'e') {
				e += 1;
			}

		}
		
	}
	cout << Num << endl;
	cout << Lower << endl;
	cout << Upper << endl;
	cout << e << endl;

	return 0;
}
