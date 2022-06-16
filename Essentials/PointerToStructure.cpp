#include <bits/stdc++.h>

using namespace std;

struct Student
{
    string name;
    int rollNo;
    int standard;
};

int main()
{

    struct Student s = {"tom", 24, 5}; // declaration and initialization of variable of type struct student

    struct Student *ptr = &s; // declaration and initialization of pointer to a variable of type struct student

    // Accessing data members of struct Student type variable using variable name
    cout << s.name << endl;

    // Accessing data members of struct Student type varibale using pointer to that variable
    cout << ptr->rollNo << endl;
    cout << ptr->standard << endl;

    // Dynamic Memory Allocation (DMA)

    // Declaring variable of type struct student in heap

    struct Student *s1 = (struct Student *)malloc(sizeof(struct Student)); // in c
    struct Student *s2 = new struct Student;                               // in c++

    // accesing data members of structure variable in heap using pointer and arrow operator and initializing them.

    s1->name = "john";
    s1->rollNo = 23;
    s1->standard = 5;
    cout << s1->name << " " << s1->rollNo << " " << s1->standard << endl;

    free(s1);  // deallocating memory allocated in heap in c
    delete s2; // deallocating memory allocated in heap in c++

    return 0;
}