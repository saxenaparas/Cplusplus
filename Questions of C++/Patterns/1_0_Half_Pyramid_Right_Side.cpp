/*
1-0 Half Pyramid Right Side :
=============================
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
=============================

Here, We can Notice that at addition of index no. of each row and column [x,y] :
(like, example :indexing start from [0,0]) is even for zeros and odd for one.
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
        for (int j = 0; j <= i; j++)
        {
            if ((i + j)%2 != 0)
            cout << 0 << " ";
            else
            cout << 1 << " ";
        }
        cout << endl;
    }
    return 0;
}