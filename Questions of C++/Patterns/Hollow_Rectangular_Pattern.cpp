#include <iostream>
using namespace std;

int main()
{
    int rows, cols;
    cout << "Enter the No. of Rows for the Pattern : ";
    cin >> rows;
    cout << "Enter the No. of Columns for the Pattern : ";
    cin >> cols;
    cout << "The Pattern Will Be : "<<endl;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= cols; j++)
        {
            if ( (i==1) || (i==rows) || (j==1) || (j==cols) )
            cout << "* ";
            else
            cout << "  ";
        }
        cout << endl;
    }

    return 0;
}