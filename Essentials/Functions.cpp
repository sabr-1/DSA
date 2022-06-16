#include <bits/stdc++.h>

using namespace std;

// Function Declaration

// return_type function_name(declare parameters if function takes input); --> This is function prototype as well.

int fun();

// Function Declaration as well as Definition

void fun1(int a)
{
    cout << a << endl;
    return;
}

int main()
{
    // int a = fun(); // --> function call
    // cout << a << endl;

    fun1(5);

    return 0;
}

// Function Definition

int fun()
{
    cout << "fun is executed." << endl;
    return 1;
}