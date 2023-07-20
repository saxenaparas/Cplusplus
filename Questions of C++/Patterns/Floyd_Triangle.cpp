/*
Floyd's Triangle :
==================
1
2  3
4  5  6
7  8  9  10
11 12 13 14 15
==================
*/

#include <iostream>
using namespace std;

int main()
{
    int rows, cols, a = 1;
    cout << "Enter the No. of Rows : ";
    cin >> rows;
    cout << "Enter the No. of Columns : ";
    cin >> cols;
    cout << "The Pattern Will Be : " << endl;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << a++ << "  ";
        }
        cout << endl;
    }
    return 0;
}