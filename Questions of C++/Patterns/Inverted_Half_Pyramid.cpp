#include <iostream>
using namespace std;

int main()
{
    int rows, cols;
    cout << "Enter the No. of Rows : ";
    cin >> rows;
    cout << "Enter the No. of Columns : ";
    cin >> cols;
    cout << "The Pattern Will Be : "<<endl;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < (cols - i); j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}

/*
Their is also a second way to do this : 
for (int i = rows; i >= 1; i--)
{
    for (int j = 1; j <= i; j++)
    {
        cout << "*";
    }
    cout << endl;
}
*/
