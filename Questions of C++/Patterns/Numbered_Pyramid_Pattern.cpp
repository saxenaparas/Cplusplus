/*
Numbered Pyramid Pattern :
==========================
    1
   1 2
  1 2 3
 1 2 3 4
1 2 3 4 5
==========================

Here, Same as rombus pattern we use a spacing loop then, 
printing stars in numbered format by space afer each no.

My Code :
----------------------------------------
    for (int i = 0; i < rows; i++)
    {
        int k = 1;
        for (int j = 1; j <= rows; j++)
        {
            if (j < rows - i)
            {
                cout << " ";
            }
            else
            {
                cout << k << " ";
                k++;
            }
        }
        cout << endl;
    }
----------------------------------------
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
        for (int k = 1; k <= (rows - i); k++)
        {
            cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}