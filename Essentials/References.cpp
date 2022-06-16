#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a = 8; // declaration and initialization of normal variable

    int &b = a; // declaration and initialization of special variable i.e refrence variable

    cout << a << " " << b << endl;
    b++;
    cout << a << endl;
    a--;
    cout << b << endl;
    return 0;
}