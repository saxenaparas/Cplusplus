/*
Rhombus Pattern :
=================
     * * * * *
    * * * * *
   * * * * *
  * * * * *
 * * * * *
=================

Here, as we can see before these stars their are spaces arranged 
in a inverse half pyramid pattern then stars are printed.
So,another loop to print space is required.

Another Approach to solve it (by me) :
1.]------------------------------------------------------
for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows-i+1; j++)
        {
            if(j == rows-i+1)
                for(int k = 0; k < rows; k++)
                    cout << "* ";
            else
                cout << " ";
        }
        cout << endl;
    }
2.]------------------------------------------------------
for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= 2 * (rows - 1) - i + 2; j++)
        {
            if (j < rows - i + 1)
                cout << " ";
            else
                cout << "* ";
        }
        cout << endl;
    }
---------------------------------------------------------
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

    for (int i = 0; i < rows; i++)
    {
        for (int k = 1; k < (rows - i); k++)
        {
            cout << " ";
        }
        for (int j = 0; j < cols; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}