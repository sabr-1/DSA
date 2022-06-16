#include <bits/stdc++.h>

using namespace std;

// Declaration and definition of function taking array as parameter.

void display(int a[], int size)
{ // Array can be passed to function by address only.
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    // a[0] = 33;
    return;
}

// Declaration and definition of function which returns integer type array.

int *createArray(int size)
{
    int *arr = new int[size];
    return arr;
}

int main()
{
    int ar[5] = {1, 2, 3, 4, 5}; // Declaration and Initialization of Integer array of size 5.

    display(ar, 5); // calling function display which takes arr as input by address and size of array as input by value.
    // cout << ar[0] << endl;
    int size;
    cin >> size;
    int *arr = createArray(size);
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    display(arr, size);
    return 0;
}