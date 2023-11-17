// Assignment4-Q2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int Point(int*, int*);

int main()
{
    int a = 0, b = 23;

    Point(&a, &b);

    cout << a << b;
}

int Point(int* yes, int* maybe) {
    *yes = 7;
    *maybe = 9;
    return 0;
}
