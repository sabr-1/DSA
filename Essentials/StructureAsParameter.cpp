#include <bits/stdc++.h>

using namespace std;

struct student
{
    string name;
    int rollNo;
    int standard;
};

// Defining structure containing array as data member

struct nameofstudents
{
    string names[5];
    int standard;
};

// Declaration and Initialization of function taking structure type variable as input by value.

void display(struct student s)
{
    cout << s.name << " " << s.rollNo << " " << s.standard << endl;
    s.name = "fake";
    return;
}

// Declaration and Initialization of function taking structure type variable as input by address.

void changeName(struct student *s, string newname)
{

    s->name = newname;
    return;
}

// Declaration and Initialization of function taking structure type variable as input by reference.

void changeRollNo(struct student &s, int newRollNo)
{
    s.rollNo = newRollNo;
    return;
}

// passing structure containg array as data member to function by value

void displays(struct nameofstudents s)
{
    for (int i = 0; i < 5; i++)
    {
        cout << s.names[i] << " ";
    }
    cout << endl;
    cout << s.standard << endl;
    return;
}

int main()
{
    struct student s = {"org", 23, 5};
    display(s); // call by value.
    cout << s.name << endl;
    changeName(&s, "new");
    cout << s.name << endl;
    changeRollNo(s, 24);
    cout << s.rollNo << endl;

    struct nameofstudents cc = {{"john", "tom", "harry", "bob", "cat"}, 5};

    displays(cc); // call by value --> passing structure containing array as data member to function by value.
    // Note --> we cannot pass array to function by value but can pass structure containing array as data member to function by value.
    // Structures + Functions associated with it == Object Oriented Programming in C.

    return 0;
}