#include <bits/stdc++.h>

using namespace std;

int main()
{

    // Declaration of normal scalar variable
    // data_type name;

    int a;

    // Declaration of special variable i.e. Pointers
    // data_type * name;
    int *ptr;

    // Initialization of normal variable
    a = 8;

    // Initialization of pointer
    ptr = &a;

    // Declaration as well as Intialization

    int b = 5;      // normal variable
    int *ptr1 = &b; // pointer to b

    // Derefrencing pointer
    cout << *(ptr); // prints 8

    int *pointerToArray; // Declaration of pointer

    pointerToArray = (int *)malloc(5 * sizeof(int)); // Allocating memory in heap to an array of size 5 of type int and initializing pointer with base address of that array
    // malloc function in c and new function in c++
    int *pointerToArray2 = new int[5];
    // self explanatory code -->
    int size;
    cin >> size;              // taking size of array as input
    int *arr = new int[size]; // declared array of that size in heap and stored base address in arr

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i]; // taking input from user and initializing dynamic array
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " "; // printing elements of dynamic array
    }

    free(pointerToArray); // deallocating memory allocated in heap in c
    delete[] arr;         // deallocating memory allocated in heap in c++
    return 0;
}