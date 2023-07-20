#include <bits/stdc++.h>
using namespace std;

class student
{
    string Name;
    int age;
    bool gender;

 public:
    void setName(string s)
    {
        Name = s;
    }

    void getName()
    {
        cout << Name << endl;
    }

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
    int n;
    cout << "Enter the Number Of Students : ";
    cin >> n;

    student arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter in the order of Name >> Age >> Gender for [" << i + 1 << "] student : " << endl;
        cin >> arr[i].Name >> arr[i].age >> arr[i].gender;
    }

    for (int i = 0; i < n; i++)
    {
        cout << "The Name of [" << i + 1 << "] is : " << arr[i].Name
             << endl
             << "The Age of [" << i + 1 << "] is : " << arr[i].age
             << endl
             << "The Gender of [" << i + 1 << "] is : " << gen(arr[i].gender)
             << endl;
    }
    return 0;
}