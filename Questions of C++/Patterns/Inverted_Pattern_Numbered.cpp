/*
Inverted Pattern by Numbers :
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
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
        for (int j = 1; j <= (cols - i); j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}
