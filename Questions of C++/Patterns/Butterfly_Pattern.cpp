/*
==============================================
>> My Optimized Complexity Code : 
----------------------------------------------
for (int i = 1; i <= 2*rows; i++)
    {
        for (int j = 1; j <= 2*rows; j++)
        {
            if(j > i && j < 2*rows - i+1)
                cout << "  ";
            else if(j > 2*rows - i+1 && j < i)
                cout << "  ";
            else
                cout << "* ";
        }
        cout << endl;
    }
==============================================
*/

#include <iostream>
using namespace std;

int main()
{
    int rows, cols;
    cout << "Enter the No. of Rows : ";
    cin >> rows;
    cout << "Enter the No. of Columns : ";
    cin >> cols;
    cout << "The Butterfly Pattern Will Be : " << endl;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= (2 * cols); j++)
        {
            if ((j > i) && (j <= ((2 * cols) - i)))
                cout << "  ";
            else
                cout << "* ";
        }
        cout << endl;
    }

    for (int i = rows; i >= 1; i--)
    {
        for (int j = 1; j <= (2 * cols); j++)
        {
            if ((j > i) && (j <= ((2 * cols) - i)))
                cout << "  ";
            else
                cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
