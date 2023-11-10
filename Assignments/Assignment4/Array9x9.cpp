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
    int max = 9;

    // Creates a seed using the current time
    srand((unsigned)time(NULL));

    // For every Row
    for (int i = 0; i < 9; i++) {
        //For every Coloumn 
        for (int j = 0; j < 9; j++) {

            

            int Random = min + (rand() % 8);

            Array[i][j] = Random;
            

        }
    }
    
    // For every Row
    for (int i = 0; i < 9; i++) {
        //For every Coloumn 
        for (int j = 0; j < 5; j++) {

            if (Array[i][j] == Array[i][j + 1] and Array[i][j] == Array[i][j + 2] and Array[i][j] == Array[i][j + 3]) {
                cout << "yes";

                {




                }
            }




        for (int i = 0; i < 9; i++) {
            cout << endl;
            for (int j = 0; j < 9; j++) {


               cout << Array[i][j] << " ";

             }

        }


        }
