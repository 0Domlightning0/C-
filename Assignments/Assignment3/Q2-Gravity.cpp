// Assignment3_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>


using namespace std;

int main()
{
    //Variable Assignment
    
    double EAM, EAW, FM, FW, DNCS, DNCB, CW, CaW,CM, CaM, Cent;
    double Crew1 = 0, Crew2 = 0;
    int NumCrew;
    bool Check = false, Check1 = false;

    EAM = 2751405;
    EAW = 9021;
    FM = 1169167.3;
    FW = 3618;
    DNCS = 120;
    DNCB = 345;


    while (Check == false){
        cout << "One(1) or Two(2) Crewmembers: ";
        cin >> NumCrew;

        if (NumCrew == 1) {
            
            cout << "Crew1 ";
            cin >> Crew1;
            if (Crew1 >= 85 and Crew1 <= 400) {
                CW = Crew1;
                Check = true;

            }
            else {
                cout << "ERROR Crew1 Value invalid" << endl;
            }
        }

        if (NumCrew == 2) {
            cout << "Crew1 ";
            cin >> Crew1;
            cout << "Crew2 ";
            cin >> Crew2;

            if (Crew1 >= 85 and Crew1 <= 400 and Crew2 >= 85 and Crew2 <= 400) {

                CW = Crew1 + Crew2;
                Check = true;
            }
            else {
                cout << "ERROR Crew1 or Crew2 Value invalid" << endl;
            }
        }
        else {
            cout << "ERROR Menu option invalid" << endl;
        }
    }
    

    CM = DNCS * CW;
    CaW = 0;
    cout << setw(10) << left << "Weight of Cargo(lbs)" << "Centre of Gravity(in)" << endl;

    while (CaW <= 5000){
        CaM = DNCB * CaW;
        Cent = (CM + CaM + EAM + FM) / (CW + CaW + EAW + FW);

        if (Cent < 315) {
            cout << setw(20)<< left << CaW << Cent << endl;
        }
        else {
            cout << setw(20) << left << CaW << Cent << "*" << endl;
        }
        CaW += 500;
    }


    
    



}
