// Dominik Wrobel - 400508446
// tutorial
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int main() {

    string NumString;
    double answer = 0.0;
    double number = 0.0;
    double NumOfNum = 0.0;

    ofstream file_enter;
    file_enter.open("Weather_Stats.txt");
   
    

    for (int i=0; i < 3; i++) {
        double hRain, lRain, hTemp, lTemp;
        cout << "Enter highest rainfall in cm ";
        cin >> hRain;

        cout << "Enter highest rainfall in cm ";
        cin >> lRain;

        cout << "Enter highest rainfall in deg C ";
        cin >> hTemp;

        cout << "Enter highest rainfall in deg C ";
        cin >> lTemp;

        file_enter << hRain << " " << lRain << " "<< hTemp << " " << lTemp << " " << endl;
    }

    ifstream file_output;

    // Reads The text file
    ifstream txtFile("Weather_Stats.txt");
    file_output.open("Weather_Stats.txt");



    for (int i = 0; i < 12; i++) {
        double hRain, lRain, hTemp, lTemp;
        cout << "Data for month" << i + 1 << endl;
        file_output >> hRain >> lRain >> hTemp >> lTemp;
        cout << hRain << endl;


    }




    txtFile.close();
    file_output.close();
}
