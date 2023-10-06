// Lab3 - Q3

// Library Assignment
#include <iostream>
#include <cstdlib>
#include <stdlib.h>

using namespace std;

void FindClosest(int In1, int In2, int In3);

int main() {
    int Yes = 1, In1, In2, In3;
    while (Yes == 1) {
        cout << " Please give the first number" << endl;
        cin >> In1;
        cout << " Please give the second number" << endl;
        cin >> In2;
        cout << " Please give the third number" << endl;
        cin >> In3;
        FindClosest(In1, In2, In3);




    }



}


// Function to Find the number closest to 0, it will prioritize the number that comes first
void FindClosest(int In1, int In2, int In3) {

    // If all the numbers are == 0, the entire code closes
    if (In1 == 0 and In2 == 0 and In3 == 0) {
        cout << "Code finished";
        exit(0);

    }


    // If the first input is less than or equal to the 2nd and 3rd, it will print out the answer
    if (abs(In1) <= abs(In2) and abs(In1) <= abs(In3)) {
        cout << "the lowest number is " << In1 << endl << endl;

    }

    /*If the second input is less than or equal to the 1st and 3rd, it will print out the answer
    This will only run if the first argument isnt true
    */
    else if (abs(In2) <= abs(In3) and abs(In2) <= abs(In1)) {
        cout << "the lowest number is " << In2 << endl << endl;
    }



    /*If the third input is less than or equal to the 1st and 2nd, it will print out the answer
    This will only run if the first and second arguments arent true
    */
    else if (abs(In3) <= abs(In1) and abs(In3) <= abs(In2)) {
        cout << "the lowest number is " << In3 << endl << endl;
    }

}











