// Dominik Wrobel - 400508446
//

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string> 
#include <sstream>

using namespace std;

int main()
{
	int seconds, minutes, hours, seconds_left;
	cout << "Please Input the seconds ";
	cin >> seconds;
	hours = seconds / 3600;
	minutes = (seconds % 3600)/60;
	seconds_left = (seconds % 3600) % 60;
	cout << setw(2) << setfill('0') << hours << " " << setw(2) << setfill('0') << minutes << " " << setw(2) << setfill('0') << seconds_left;
}

