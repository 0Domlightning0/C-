// Dominik Wrobel - 400508446
// Lab2 - Q2 (Alot of Comments)

// Library Assignment
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cmath>
#include <tuple>
using namespace std;




// Function to Calculate the HalfLife using C0 Ct and Time
double HalfLife(double C_InitIn, double C_FinIn, double TIn) {
    double HalfLife = 0;

    // rearranged C0 equasion to solve for the K
    // The Natural Log (Ln) of 2 is divided by K to find the HalfLife in Hours
    HalfLife = log(2) / ((-1 * log(C_FinIn / C_InitIn)) / 2);




    return HalfLife;
}


// tuple<double,double> sets the type and number of varibles this function will return
tuple<double,double> analyzeData(int PatNumIn) {
    // Variable Assessment
    /*
    NumData = Number of Data sets a patient has recoreded eg. 6 datasets for patient 2
    PatNum = The Patient Number, First Coloumn of the Data
    C_Init = The Inital Concentration in ug/L, Second Column of the Data
    C_Fin = The concentration at time t or the final concentration,  Third column of the Data
    T = Time in hours, Fourth Column of Data

    Both Tot and NumData must be initalized to 0 as += functions dont work otherwise
    
    */
    string NumString;
    double NumData = 0;
    double PatNum, C_Init, C_Fin, T, Tot=0;

    // Opens the File for input
    ofstream file_enter;
    file_enter.open("Med_Stats.txt");

    // Inputs the data into the File
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


    // Preperation for output of the contents of the file
    ifstream file_output;

    // Opens and Reads The text file
    ifstream txtFile("Med_Stats.txt");
    file_output.open("Med_Stats.txt");



    
    //PatNumIn stands for Patient Number Input. This varible is what was put into the function
    // Repeats 16 times, once for every Row
     for (int i = 0; i < 16; i++) {

         // Formats the File output into seperate variables based on thier positon in the Row
        file_output >> PatNum >> C_Init >> C_Fin >> T;

        // This if statement checks to see if the PatNumIn is equal to the First number in the row
        if (PatNumIn == PatNum) {

            // If they are equal, NumData is increased by one to keep track of the amount of data this patient has
            NumData += 1;

            // The Total is increased by the half life of this specific data row
            Tot += HalfLife(C_Init, C_Fin, T);

        }

    }

   

    txtFile.close();
    file_output.close();

    // make_tuple allows for multiple variables to be returned easily
    return make_tuple( Tot / NumData, NumData );
}


tuple<double, double, double, double> HighestTwo() {

    double Biggest = 0, SBiggest = 0, PlaceH = 0, BiggestPos = 0, SBiggestPos = 0;

    using namespace std;

    double Avg = 0, NumData2= 0, Avg2 = 0;

    for (int i = 1; i < 6; i++) {
          
        double Avg, NumData2, Avg2;

        tie(Avg, NumData2) = analyzeData(i);

        if (Avg > SBiggest) {
            SBiggest = Avg;
            SBiggestPos = i;

        }
        
        if (SBiggest > Biggest) {
            PlaceH = Biggest;
            Biggest = SBiggest;
            SBiggest = PlaceH;


            PlaceH = BiggestPos;
            BiggestPos = SBiggestPos;
            SBiggestPos = PlaceH;

        }
        


    }
    
    return make_tuple(Biggest, BiggestPos, SBiggest, SBiggestPos);
}





int main() {
    using namespace std; 

    double Avg, NumData2, yes = 0; 

    string MenuOpt;

    double Biggest, BiggestPos, SBiggest, SBiggestPos;

    while (yes == 0){
    cout << "---------------------------------------------------------------------------------------------------" << endl << endl;
    cout << "[S] -- Patient Summary" << endl;
    cout << "[H] -- Highest Two Averages" << endl;
    cout << "[E] -- Exit Program" << endl;
    cout << "Enter menu option: ";
    cin >> MenuOpt;
    cout << endl;

    if (MenuOpt == "S") {
        double MenuOpt2;
        cout << "Which patient would you like to analyize(1-5): ";
        cin >> MenuOpt2;
        cout << endl;
        tie(Avg, NumData2) = analyzeData(MenuOpt2);

        cout << "The average HalfLife of patient #" << MenuOpt2 << " is " << Avg << " collected from " << NumData2 << " Data points"<<endl;


    }
    
    if (MenuOpt == "H"){

        tie(Biggest, BiggestPos, SBiggest, SBiggestPos) = HighestTwo();

        cout << "Highest Average HalfLife is " << Biggest << " hours belonging to patient #" << BiggestPos << endl;
        cout << "Second Highest Average HalfLife is " << SBiggest << " hours belonging to patient #" << SBiggestPos << endl << endl;

    }
    
    if (MenuOpt == "E") {
        yes = 1;

    }

    
 
}
}
