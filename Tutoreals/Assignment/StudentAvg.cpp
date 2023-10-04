// Tutorial_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void tab(double NumTestSc) {
    double Total = 0, TestSc, Avg = 0;
    string StudNam;
    cout << "Student Name?";
    cin >> StudNam;
    for (int i = 0; i < NumTestSc; i++) {
        cout << "test score" << i+1<< ": ";
        cin >> TestSc;
        Total += TestSc;

    }
    Avg = Total / NumTestSc;
    cout << StudNam<< "'s " << "Average: " << Avg << endl << endl;

}


void ans(double Input) {
    for (int i = 0; i < Input; i++) {
        double  NumTestSc;
        cout << "num of test scores: ";
        cin >> NumTestSc;
        tab(NumTestSc);

    }
    
    


}

int main()
{
    double StudNum, Mark, StudNam, TestSco, NumTestSco;

    cout << "Please give the number of students: ";
    cin >> NumTestSco;
    cout << endl;
    ans(NumTestSco);

    
}


