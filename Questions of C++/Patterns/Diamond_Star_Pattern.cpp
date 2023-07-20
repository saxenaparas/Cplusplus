/*
Diamond Star Pattern : 
======================
          * 
        * * * 
      * * * * * 
    * * * * * * * 
    * * * * * * * 
      * * * * * 
        * * *
          *
======================
Here, we simply create the upper part then we have created a 
reverse loop to get the down pattern.
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

    for (int i = 1; i <= rows; i++)
    {
        for (int k = 1; k <= (cols - i); k++)
        {
            cout << "  ";
        }

        for (int j = 0; j < ((2 * i) - 1); j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    for (int i = rows; i >= 1; i--)
    {
        for (int k = 1; k <= (cols - i); k++)
        {
            cout << "  ";
        }

        for (int j = 0; j < ((2 * i) - 1); j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}