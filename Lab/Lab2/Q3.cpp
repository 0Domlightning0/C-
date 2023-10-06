// Lab3_Q3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <stdlib.h>

using namespace std;

void FindClosest(int In1, int In2, int In3) {
    if (In1 == 0 and In2 == 0 and In3 == 0) {
        cout << "Code finished";
        exit(0);

    }
    if (abs(In1) <= abs(In2) and abs(In1) <= abs(In3)) {
        cout << "the lowest number is " << In1 << endl << endl;

    }
    else if (abs(In2) <= abs(In3) and abs(In2) <= abs(In1)) {
        cout << "the lowest number is " << In2 << endl << endl;
    }
    else if (abs(In3) <= abs(In1) and abs(In3) <= abs(In2)) {
        cout << "the lowest number is " << In3 << endl << endl;
    }
    
}

int main() {
    int Yes = 1, In1, In2, In3;
    while (Yes == 1) {
        cout << " Please give the fist number" << endl;
        cin >> In1;
        cout << " Please give the second number" << endl;
        cin >> In2;
        cout << " Please give the third number" << endl;
        cin >> In3;
        FindClosest(In1, In2, In3);
        



    }
    
    

}












/*#include <iostream>

using namespace std;

void displaymessage();

int main()
{
    
    displaymessage();
}

void displaymessage(){

    cout << "Hello from Display Function";


}
*/
