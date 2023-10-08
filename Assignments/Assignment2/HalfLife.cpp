// Dominik Wrobel - 400508446
// tutorial
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cmath>
using namespace std;

double HalfLife(double C_InitIn, double C_FinIn, double TIn) {
    double HalfLife = 0;

    HalfLife = (-1 * log(C_FinIn / C_InitIn))/2




}




double analyzeData(int PatNumIn) {
    //
    string NumString;
    double NumData = 0;
    double PatNum, C_Init, C_Fin, T, Tot, Avg;

    //
    ofstream file_enter;
    file_enter.open("Med_Stats.txt");

    //
    file_enter << 1 << " " << 325 << " " << 160 << " " << 2.0 << endl;
    file_enter << 1 << " " << 600 << " " << 100 << " " << 6.2 << endl;
    file_enter << 2 << " " << 325 << " " << 220 << " " << 1.0 << endl;
    file_enter << 3 << " " << 600 << " " << 200 << " " << 4.4 << endl;
    file_enter << 4 << " " << 325 << " " << 100 << " " << 3.0 << endl;
    file_enter << 4 << " " << 325 << " " << 88 << " "  << 3.2 << endl;
    file_enter << 2 << " " << 600 << " " << 200 << " " << 3.3 << endl;
    file_enter << 2 << " " << 325 << " " << 100 << " " << 3.3 << endl;
    file_enter << 4 << " " << 600 << " " << 210 << " " << 3.4 << endl;
    file_enter << 5 << " " << 325 << " " << 105 << " " << 3.5 << endl;
    file_enter << 1 << " " << 600 << " " << 110 << " " << 6.0 << endl;
    file_enter << 3 << " " << 325 << " " << 100 << " " << 3.1 << endl;
    file_enter << 2 << " " << 600 << " " << 120 << " " << 5.5 << endl;
    file_enter << 2 << " " << 600 << " " << 125 << " " << 5.5 << endl;
    file_enter << 5 << " " << 120 << " " << 60 << " " << 2.2 << endl;
    file_enter << 2 << " " << 325 << " " << 100 << " " << 3.4 << endl;


    //
    ifstream file_output;

    // Reads The text file
    ifstream txtFile("Med_Stats.txt");
    file_output.open("Med_Stats.txt");

    ////////////////////////////////////////////////////////////////////////////









    for (int i = 0; i < 16; i++) {
        file_output >> PatNum >> C_Init >> C_Fin >> T;
        if (PatNumIn == PatNum) {
            NumData += 1;
            HalfLife(C_Init, C_Fin, T)

        }

    }


    cout << NumData;

   





















    txtFile.close();
    file_output.close();



return NumData;
}




int main() {

    analyzeData(3);
}
