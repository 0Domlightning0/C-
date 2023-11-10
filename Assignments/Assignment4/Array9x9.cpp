// Assignment4-Q2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib> 
using namespace std;

// Creating a 9x9
int Array[9][9] = {};

int main()
{
    // variable Assessmant
    int min = 0;
    int max = 2;
    int num;

    // Creates a seed using the current time
    srand((unsigned)time(NULL));

    // For every Row
    for (int i = 0; i < 9; i++) {
        //For every Coloumn 
        for (int j = 0; j < 9; j++) {

            

            int Random = min + (rand() % max);

            Array[i][j] = Random;
            

        }
    }

    cout << "What is your number?";

    cin >> num;
    
    // For every Row
    for (int i = 0; i < 9; i++) {
        //For every Coloumn 
        for (int j = 0; j < 6; j++) {
            if (Array[i][j] == num and Array[i][j] == Array[i][j + 1] and Array[i][j] == Array[i][j + 2] and Array[i][j] == Array[i][j + 3]) {
                cout << "yes there are 4 numbers horizonatlly" << endl;







            }

        }
    }

    for (int i = 0; i < 9; i++) {
        //For every Coloumn 
        for (int j = 0; j < 5; j++) {
            if (Array[i][j] == num and Array[j][i + 1] == num and Array[j][i] == Array[j][i + 2] and Array[i][j] == Array[i][j + 3] ) {
                cout << "yes there are 4 numbers Vertically" << endl;







            }

        }
    }


        for (int i = 0; i < 9; i++) {
            cout << endl;
            for (int j = 0; j < 9; j++) {


            cout << Array[i][j] << " ";

            }

        }


}
   
