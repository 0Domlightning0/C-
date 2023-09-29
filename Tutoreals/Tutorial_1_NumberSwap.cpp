// Dominik Wrobel - 400508446
//

#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    cout << "Please input your first number \n";
    cin >> a;
    cout << "Please input your second number \n";
    cin >> b;

    c = a;
    a = b;
    b = c;

    cout << "your first number is now " << a << " and your second number is " << b;
}

