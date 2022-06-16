#include <bits/stdc++.h>

using namespace std;

int main()
{

    // Declaration of variable
    // data_type name;
    int age;
    // Initialization of variable
    age = 5;
    cout << age << endl;

    // Declaration of Array
    // data_type array_name[size];
    int ageOfStudents[5];
    cout << sizeof(ageOfStudents) << endl;

    // Accessing individual variables of Array using square brackets and indexing
    // Array indexing in c/c++ is zero based

    cout << ageOfStudents[0] << endl; // garbage value since we have not initialized our array

    // hard code initialization
    ageOfStudents[0] = 15;
    ageOfStudents[1] = 22;
    ageOfStudents[2] = 12;
    ageOfStudents[3] = 45;
    ageOfStudents[4] = 34;

    // Printing/Reading elements of array

    for (int i = 0; i < 5; i++)
    {
        cout << ageOfStudents[i] << " ";
    }
    cout << endl;

    // Declaration as well as initialization at the same time
    int num[6] = {1, 2, 3, 6, 5, 4};

    for (int i = 0; i < 6; i++)
    {
        cout << num[i] << " ";
    }
    cout << endl;

    int size;       // Declared a variable to store size of array
    cin >> size;    // taking size of array as input
    int num1[size]; // Declared an array of that size
    for (int i = 0; i < size; i++)
    {
        cin >> num1[i]; // initializing array by taking input from user
    }
    for (int i = 0; i < size; i++)
    {
        cout << num1[i] << " "; // Printing elements
    }
    return 0;
}