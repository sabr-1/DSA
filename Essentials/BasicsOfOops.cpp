#include <bits/stdc++.h>

using namespace std;

// Definition of class

class Student
{

public:
    string name;
    int rollNo;
    int standard;

    void introduce();

    // default non parameterized constructor
    Student()
    {
    }
    // user defined parameterized construtor (function overloading / constructor overloading)
    Student(string s, int r, int st)
    {
        name = s;
        rollNo = r;
        standard = st;
    }
};

void Student::introduce()
{

    cout << "Name: " << name << endl;
    cout << "Roll No: " << rollNo << endl;
    cout << "Standard: " << standard << endl;
    return;
}

int main()
{

    Student s; // Declaration of object of class student (instant of class).
    // Accessing individual class members that are public using object name and . operator
    s.name = "Tom";
    s.rollNo = 23;
    s.standard = 5;
    // invoking public class method
    s.introduce();

    Student s1 = Student("Bob", 24, 5); // constructing object using user defined parameterized constructor.
    Student s2("Jack", 26, 4);
    s1.introduce();
    s2.introduce();

    return 0;
}