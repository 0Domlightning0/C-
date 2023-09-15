//Dominik Wrobel - 400508446 



// Lab1 - Dominik Wrobel.cpp : This file contains the 'main' function. Program execution begins and ends there. 



// Question 3



#include <iostream> 



using namespace std;



int main()

{

	// ans = answer, num = number 

	int num, ans;

	// Prompt 

	cout << "Please input an integer number ";

	cin >> num;



	//Space 
	cout << "\n";

	cout << " Please choose from one of the two options by inputting 1 or 2 \n";

	cout << "1. Number divisible by 3? \n \n" << "2. Number between 10 and 100? \n \n ";

	cin >> ans;

	//Space 
	cout << "\n";

	if (ans == 1) {
		if (num % 3 == 0) {
			cout << "Number is divisible by 3";
		}
		else {
			cout << "Number is not divisible by 3";
		}
		}


	if (ans == 2) {
		if (num > 100) {
			cout << "Number is bigger than 100";
		}
		else if (100 >= num and num >= 10) {
			cout << "Number is between 10 and 100";
		}
		else {
			cout << "Number is less than 10";
		}

	}

	if (ans != 1 and ans != 2){
		cout << "That is not a proper menu selection";
	}
}
