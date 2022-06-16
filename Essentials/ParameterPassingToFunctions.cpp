#include <bits/stdc++.h>

using namespace std;

// Declaration and Definition of function using call by value.

int add(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    return a + b;
}

// Declaration and Definition of function using call by address

void swapp(int *a, int *b)
{
    int temp = *(a);
    *(a) = *(b);
    *(b) = temp;
    return;
}

// Declaration and Definition of function using call by reference

void newswapp(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    return;
}

int main()
{
    int x = 5, y = 4;
    cout << add(x, y) << endl; // calling function by value and hence no change in x and y.
    cout << x << endl;
    cout << y << endl;
    swapp(&x, &y); // calling function by address
    cout << x << endl;
    cout << y << endl;
    newswapp(x, y); // calling function by reference
    cout << x << endl;
    cout << y << endl;
    return 0;
}