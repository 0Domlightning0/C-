#include <iostream>
#include <fstream>
#include <time.h>
#include <random>

using namespace std;

int main()
{
	ofstream outfile;

	outfile.open("Hehehe.txt");

	int array[10][10] = {};

	srand(time(NULL));


	int posBiggest = 0;

	int arraytot = 0 , temp = 0;
	


		for (int i = 0; i < 10; i++) {

			for (int j = 0; j < 10; j++) {
				array[i][j] = 5 + (rand() % 61);
				cout << array[i][j] << " ";
				outfile << array[i][j];
				outfile << " ";
			}
			cout << endl;
			outfile << endl;
		}

		for (int j = 0; j < 10; j++) {
			arraytot = 0;
			for (int i = 0; i < 10; i++) {

				arraytot += array[i][j];
				//cout << arraytot <<endl;
				if (arraytot > temp) {
					temp = arraytot;
					posBiggest = j;
				}
			}
		}

		cout << posBiggest+1;
	
	return 0;
}
