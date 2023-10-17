// Dominik Wrobel - 400508446
// Lab3-Q1.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>
#include <iomanip>
#include <string>


using namespace std;

string Underline(string Input);

int main()
{
    string Title;
    cout << "Please Input your Title: ";
    getline(cin,Title);
    Underline(Title);
    cout << endl;
    exit(0);
}

string Underline(string Input) {
    double len;
    string line = "";
    len = Input.length();

    for (int i = 0; i < len; i++) {
        line += "=";

    }
    cout << Input << endl << line;
    return 0;

}
