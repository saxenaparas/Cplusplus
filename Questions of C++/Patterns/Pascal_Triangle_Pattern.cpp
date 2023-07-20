/*
Pascal Triangle :
=================
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
=================
Here, firstly we can notice that this pattern can 
be easily formed using binomial coefficients like :
-------------------
0C0
1C0 1C1
2C0 2C1 2C2            
3C0 3C1 3C2 3C3            
4C0 4C1 4C2 4C3 4C4
-------------------
So, now, we first print this pattern :
1         | 
2 2       | then we replace the printing
3 3 3     | factor here in this case as
4 4 4 4   | we can see is row no. i.e. i.
5 5 5 5 5 |        
*/

#include <iostream>
using namespace std;

int facto(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    
    return (n * facto(n-1));
}

int Co(int n, int r)
{
    int C = facto(n)/(facto(n-r) * facto(r));
    return C;
}

int main()
{
    int rows;
    cout << "Enter the No. of Rows : ";
    cin >> rows;
     
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << Co(i,j) << " ";
        }
        cout << endl;
    }
    return 0;
}