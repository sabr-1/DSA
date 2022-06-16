#include <bits/stdc++.h>

using namespace std;

// Structure Definition

struct Student
{
    string name;
    int rollNo;
    int standard;
};

int main()
{
    // Declaration of variable of type structure
    // data_type variable_name;

    struct Student s1;

    // Declaration as well as Initialization

    struct Student s2 = {"tom", 24, 5};

    s1.name = "bob";
    s1.rollNo = 15;
    s1.standard = 3;

    cout << s2.name << " " << s2.rollNo << " " << s2.standard << endl;

    // Declaration of Array of structure variables
    // data_type Array_name[size];

    struct Student S[5];

    // Decalaration as well as Initialization
    struct Student S1[3] = {{"tom", 15, 3}, {"bob", 24, 5}, {"jerry", 25, 5}};

    S[0].name = "tom";

    int size;
    cin >> size;
    struct Student arr[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i].name >> arr[i].rollNo >> arr[i].standard;
    }
    for (int i = 0; i < size; i++)
    {
        cout << "Name--> " << arr[i].name << " Roll Number--> " << arr[i].rollNo << " Standard--> " << arr[i].standard << endl;
    }

    return 0;
}