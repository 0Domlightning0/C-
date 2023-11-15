#include <iostream>
#include <fstream>
using namespace std;



int main()
{

	fstream outfile("output.txt", ios::out);
	double array[101][2] = {};



	for (int i = 0; i < 101; i++) {
		int num;
		array[i][0] = (double)i;
		array[i][1] = (double)i * ((double)i);
		num = array[i][1];
		outfile << i<< "  " << num << "\n";
	}

	
}
