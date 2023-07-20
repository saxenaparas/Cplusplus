#include <bits/stdc++.h>
using namespace std;

class student
{
    string Name;
    int age;
    bool gender;

public:
    student()
    {
        cout << "Default Constructor" << endl;
    }
    /*
        Default Constructor = (Shallow Copy : [Data Members
        are pointing to some dynamically allocated memory.
        So, here the pointers get copy but the locations where
        they are pointing willn't get copied]).
    */

    student(string s, int a, bool g)
    {
        cout << "Parameterised Constructor" << endl;
        Name = s;
        age = a;
        gender = g;
    } // Parameterised Constructor.

    student(student &a)
    {
        cout << "Copy Constructor" << endl;
        Name = a.Name;
        age = a.age;
        gender = a.gender;
    }
    /*
        Copy Constructor = (Deep Copy : [Data Members
        are pointing to some dynamically allocated memory.
        So, here the pointers with the locations where they
        are pointing will also get copied]).
    */

    ~student()
    {
        cout << "Destructor called" << endl;
    }
    /*
        Destructor = (Automatically gets called when an object
        gets destroyed [we use the {~} sign to initialize it]).
    */

    bool operator==(student &a)
    {
        if (Name == a.Name && age == a.age && gender == a.gender)
        {
            return true;
        }
        return false;
    } // Operator Overloading.

    char gen(bool gender)
    {
        if (gender == 1)
            return 'F';
        if (gender == 0)
            return 'M';
    }

    void printInfo()
    {
        cout << "Name = ";
        cout << Name << endl;
        cout << "Age = ";
        cout << age << endl;
        cout << "Gender = ";
        cout << gender << endl;
    }
};

int main()
{
    student a("Urvi", 20, 1);
    a.printInfo();

    student b;    // Default Constructor.
    student c(a); // Copy Constructor.
                  // student c = a; 
    c.printInfo();
    student d("Rahul", 21, 0);

    if (d == a) // Operator Overloading.
    {
        cout << "Same" << endl;
    }
    else
    {
        cout << "Not Same" << endl;
    }

    return 0;
}