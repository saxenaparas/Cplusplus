/*
If, you want to rotate a pattern by 180 degree or, to make a 
mirror image of the pattern horizontally then, we do this transformation 
of code to get an upsidedown pattern of from the existing one 
[it generally work works all the time but take care while using this 
Since, only works when the nested loop is dependent upon the main loop] :

From ;
[ for (int i = 1; i <= rows; i++) ] 
To ;
[ for (int i = rows; i >= 1; i--) ]

Ex : 

From ;
==========
*
* *
* * *
* * * *
* * * * *
==========

To ;
==========
* * * * *
* * * *
* * *
* *
*
==========
[As, we can see here we get the mirror image of the pattern about horizontal].
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
        for (int j = 0; j < cols; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}