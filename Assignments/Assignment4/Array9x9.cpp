// Dominik Wrobel - 400508446
// Assignment4-Q2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib> 
using namespace std;

// Creating a 9x9
int Array[9][9] = {};

bool Is4InARow(int[9][9], int num);

int main()
{
    // variable Assessmant
    // Min is the smallest number avalable to be generated
    int min = 0;
    // The amount of numbers that can be produced ex 0-9 is 10 numbers
    int range = 10;
    // The number that is being inputted and checked
    int num;
    

    // Creates a seed using the current time
    srand((unsigned)time(NULL));

    // For every Row (9 rows)
    for (int i = 0; i < 9; i++) {
        //For every Coloumn (9 columns)
        for (int j = 0; j < 9; j++) {


            // Creating the array
            int Random = min + (rand() % range);

            Array[i][j] = Random;


        }
    }

    cout << "What is your number? ";

    cin >> num;

    if (Is4InARow(Array, num) == true) {
        cout << "There are 4 Numbers in a line" << endl;

    }
    else {
        cout << "There are not 4 Numbers in a line" << endl;
    }




    for (int i = 0; i < 9; i++) {
        cout << endl;
        for (int j = 0; j < 9; j++) {


            cout << Array[i][j] << " ";

        }

    }


}

bool Is4InARow(int[9][9], int num) {
    // For every Row
    for (int i = 0; i < 9; i++) {
        //For every Coloumn 
        for (int j = 0; j < 6; j++) {
            // Checks if the current number and the three after are the same ansd equal to num
            if (Array[i][j] == num and Array[i][j] == Array[i][j + 1] and Array[i][j] == Array[i][j + 2] and Array[i][j] == Array[i][j + 3]) {
                return true;







            }

        }
    }
    //for every Row
    for (int i = 0; i < 9; i++) {
        //For every Coloumn 
        for (int j = 0; j < 5; j++) {
            // Checks if the current number and the three below
            if (Array[i][j] == num and Array[j][i + 1] == num and Array[j][i] == Array[j][i + 2] and Array[i][j] == Array[i][j + 3]) {
                return true;






            }

        }
    }
}
