#include <bits/stdc++.h>
using namespace std;

class student
{
    string Name;
    int age;
    bool gender;

 public:
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
    
    return 0;
}