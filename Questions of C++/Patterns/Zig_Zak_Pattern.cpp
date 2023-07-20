/*
Zig Zak Pattern :
=================
    *       *
  *   *   *   *
*       *       *
=================
In, this if we check the indexing then we find out that sum of rows + cols
is divisible by 4 and for remaining stars at 2nd row we find that cols are 
divisible by 4 else where spaces are present.
Only Valid for rows = 3.
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

    // Only Valid for rows = 3.
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= (cols * 3); j++)
        {
            if (((i + j) % 4 == 0) || ((i == 2) && (j % 4 == 0)))
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    return 0;
}