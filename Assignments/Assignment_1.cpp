// Dominik Wrobel - 400508446 

// 



#include <iostream> 

#include <cmath> 

#include <iomanip> 



using namespace std;



int main()

{

    float Item1 = 15.95, Item2 = 24.95, Item3 = 6.95, Item4 = 12.95, Item5 = 3.95, Subtotal, Tax, Total;





    // Variable Assignment 



    cout << " Item1: " << Item1 << "$ \n\n";

    cout << " Item2: " << Item2 << "$ \n\n";

    cout << " Item3: " << Item3 << "$ \n\n";

    cout << " Item4: " << Item4 << "$ \n\n";

    cout << " Item5: " << Item5 << "$ \n\n";







    // The total is the cost of all the items multiplied by the tax rate 

    Total = (Item1 + Item2 + Item3 + Item4 + Item5) * 1.07;



    // The Subtotal is the cost of all the items 

    Subtotal = (Item1 + Item2 + Item3 + Item4 + Item5);



    // The Tax is the difference of The Total and Subtotal 

    Tax = Total - Subtotal;









    cout << "Your Total is " << setprecision(4) << Total << "$\n\n";



    cout << "Your Subtotal is " << Subtotal << "$\n\n";



    cout << "The amount of Tax is " << setprecision(3) << Tax << "$\n\n";



}
