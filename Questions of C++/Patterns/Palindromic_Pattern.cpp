/*
Palindromic Pattern :
=====================
        1
      2 1 2
    3 2 1 2 3
  4 3 2 1 2 3 4
5 4 3 2 1 2 3 4 5
=====================

Here, in this firstly we print :
    1 |
   21 | 
  321 |  
 4321 |  
54321 |  
this, pattern. Then, we declare a 
new loop inside the last one which 
will print this pattern after each 
row print : 
     2   |
     23  | this pattern. 
     234 | & finally we got 
     2345| our pattern.
*/

#include <iostream>
using namespace std;

int main()
{
  int rows, cols, k;
  cout << "Enter the No. of Rows : ";
  cin >> rows;
  cout << "Enter the No. of Columns : ";
  cin >> cols;

  for (int i = 1; i <= rows; i++)
  {
    for (int k = 1; k <= (cols - i); k++)
    {
      cout << " ";
    }
    k = i;
    for (int j = 0; j < i; j++)
    {
      cout << k;
      k--;

      if (k == 0)
      {
        ++k;
        for (int l = 0; l < (i - 1); l++)
        {
          cout << ++k;
        }
      }
    }
    cout << endl;
  }
  return 0;
}