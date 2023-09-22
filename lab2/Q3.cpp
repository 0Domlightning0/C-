// Dominik Wrobel - 400508446
// Lab2 - 3
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
    

    // Reads The text file
    ifstream txtFile("Random.txt"); 
    
    // While loop checks if a number is present in the line of the text file
        while (getline(txtFile, NumString))
        {
            // Convert_To_Nums the string of the text into a number
            istringstream Convert_To_Num(NumString);


            // Makes number equal to NumStringstream so it can be used
            while (Convert_To_Num >> number)
            {
                // B - Adding the number to the total to figure out the sum of the group of numbers
                answer += number;

                // A - Adding one for every number the 
                NumOfNum += 1;
            }
        }
        cout << "The total Value of the numbers is " << answer << endl;
        cout << "The Number of numbers is " << NumOfNum << endl;
        cout << "The Average Value of a number is " << answer/NumOfNum << endl;




        txtFile.close();

    return 0;
}
