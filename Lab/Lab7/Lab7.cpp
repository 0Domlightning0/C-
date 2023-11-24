// Dominik Wrobel = 400508446
// Lab7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <string.h>

using namespace std;

int main()
{
	string password;

	bool NumCheck = false, CapCheck = false, LowCheck = false, LenCheck = false;
	

	while (NumCheck != true or LenCheck != true or CapCheck != true or LowCheck != true) {
		cout << "provide a password: " << endl;;

		cin >> password;

		if (strlen(password.c_str()) >= 6) {
			LenCheck = true;
			for (int i = 0; i < strlen(password.c_str()); i++) {
				if (isupper(password[i])) {
					CapCheck = true;
				}
				if (islower(password[i])) {
					LowCheck = true;
				}
				if (isdigit(password[i])) {
					NumCheck = true;
				}


			}
			if (NumCheck != true or CapCheck != true or LowCheck != true) {
				cout << "Password is invalid" << endl;
				CapCheck = false;
				LowCheck = false;
				NumCheck = false;
			}
		}
		else {
			cout << "Password is too short, please try again";
		}

	}
	cout << "password is correct";
		
}
